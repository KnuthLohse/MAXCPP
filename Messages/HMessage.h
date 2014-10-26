/*
 * HMessage.h
 *
 *  Created on: 26.10.2014
 *      Author: JoH
 */

#ifndef HMESSAGE_H_
#define HMESSAGE_H_

#include "MAXMessage.h"
#include <string>
#include <ctime>
#include <stdint.h>




namespace MAXCPP {

class House;
// The H response contains information about the Cube.
class HMessage: public MAXCPP::MAXMessage {
protected:
	std::string MAXSerialNumber;
	std::string RFAdress;
	int32_t FirmwareVersion;
	std::string HTTPConnId;
	time_t CubeDateTime;
public:
	HMessage(const std::string &rawMessage_p, House* house_p);
	virtual ~HMessage();

	static time_t decodeDateTime(const std::string &CubeDate, const std::string &CubeTime);

	virtual std::string const toString();

	virtual std::string const getMAXSerialNumber();
	virtual std::string const getRFAddress();
	virtual int32_t const getFirmwareVersion();
	virtual std::string const getHTTPConnId();
	virtual time_t const getCubeDateTime();
};

} /* namespace MAXCPP */
#endif /* HMESSAGE_H_ */
