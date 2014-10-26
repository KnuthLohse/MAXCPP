/*
 * HMessage.cpp
 *
 *  Created on: 26.10.2014
 *      Author: JoH
 */

#include "HMessage.h"
#include <time.h>
#include <ctime>
#include "Helpers/Helpers.h"
#include "Messages/Metadata/House.h"
#include <sstream>
#include "Messages/MAXException.h"


namespace MAXCPP {

HMessage::HMessage(const std::string &rawMessage_p, House* house_p) : MAXMessage(MESSAGE_H){
	// initializes this class and processdes the given Input Message and fills the Message Fields
	if (rawMessage_p.length() < 2)
	{
		throw new MAXException("Unable to process RAW Message - Too short");
	}
	if (rawMessage_p.substr(0,2) != "H:")
	{
		throw new MAXException("Unable to process RAW Message. Not a H Message");
	}
	std::vector<std::string> elems = split(rawMessage_p.substr(2 , std::string::npos), ',');
	if (elems.size() < 9) //TODO: check if this is correct - 3 has been the value in the c-sharp project
	{
		throw new MAXException("Unable to process RAW Message Type H. Not enough Content");
	}
	MAXSerialNumber = elems[0];
	RFAdress = elems[1];
	FirmwareVersion = hexstringToInt32(elems[2]);
	HTTPConnId = elems[4];
	CubeDateTime = decodeDateTime(elems[7], elems[8]);
	house_p->setCubeInformation(*this);
}

HMessage::~HMessage() {
	// TODO Auto-generated destructor stub
}

std::string const HMessage::getMAXSerialNumber() {return MAXSerialNumber;}
std::string const HMessage::getRFAddress() {return RFAdress;}
int32_t const HMessage::getFirmwareVersion() {return FirmwareVersion;}
std::string const HMessage::getHTTPConnId() {return HTTPConnId;}
time_t const HMessage::getCubeDateTime() {return CubeDateTime;}

std::string const HMessage::toString()
{
	std::ostringstream retVal;
	retVal << "H-Message: " << std::endl;
	retVal << "Serial Number: " << MAXSerialNumber << std::endl;
	retVal << "RF Adress: " << RFAdress << std::endl;
	retVal << "Firmware Version: " << FirmwareVersion << std::endl;
	retVal << "HTTPConnId " << HTTPConnId << std::endl;
	retVal << "CubeDateTime: " << ctime(&CubeDateTime) << std::endl;

	return retVal.str();
}

time_t HMessage::decodeDateTime(const std::string &CubeDate, const std::string &CubeTime)
{
	/// Example:
	/// CubeDate: 0c0812
	/// CubeTime: 1505

	struct tm timeinfo;
	timeinfo.tm_mday = hexstringToInt32(CubeDate.substr(4,2));
	timeinfo.tm_mon = hexstringToInt32(CubeDate.substr(2,2));
	timeinfo.tm_year = hexstringToInt32(CubeDate.substr(0,2)) + 2000;

	timeinfo.tm_hour = hexstringToInt32(CubeTime.substr(0,2));
	timeinfo.tm_min = hexstringToInt32(CubeTime.substr(2,2));
	timeinfo.tm_isdst = -1; //Daylightsaving unknown
	timeinfo.tm_sec = 0;

	return mktime(&timeinfo);
}

} /* namespace MAXCPP */
