/*
 * CMessage.cpp
 *
 *  Created on: 26.10.2014
 *      Author: JoH
 */

#include "CMessage.h"
#include "MAXException.h"
#include "Helpers/Helpers.h"
#include "Base64.h"

namespace MAXCPP {

// The C response contains information about the configuration of a device.
CMessage::CMessage(std::string rawMessage_p) : MAXMessage(MESSAGE_C)
{
	if (rawMessage_p.length() < 2)
	{
		throw new MAXException("Unable to process RAW Message - Too short");
	}
	if (rawMessage_p.substr(0,2) != "C:")
	{
		throw new MAXException("Unable to process RAW Message. Not a C Message");
	}
	std::vector<std::string> elems = split(rawMessage_p.substr(2 , std::string::npos), ',');
	if (elems.size() < 2)
	{
		throw new MAXException("Unable to process RAW Message Type C. Not enough Content");
	}
	RFAdress = elems[0];
	RawMessageDecoded = base64Decode(elems[1]);
}

CMessage::~CMessage() {

}

std::string const CMessage::getRFAdress() {return RFAdress;}
std::vector<unsigned char> const CMessage::getRawMessageDecoded() {return RawMessageDecoded;}

} /* namespace MAXCPP */
