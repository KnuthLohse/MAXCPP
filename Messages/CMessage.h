/*
 * CMessage.h
 *
 *  Created on: 26.10.2014
 *      Author: JoH
 */

#ifndef CMESSAGE_H_
#define CMESSAGE_H_

#include "MAXMessage.h"
#include <string>
#include <vector>

namespace MAXCPP {

class CMessage: public MAXCPP::MAXMessage {
protected:
	std::string RFAdress;
	std::vector<unsigned char> RawMessageDecoded;


public:
	CMessage(std::string rawMessage_p);
	virtual ~CMessage();

	std::string const getRFAdress();
	std::vector<unsigned char> const getRawMessageDecoded();

};

} /* namespace MAXCPP */
#endif /* CMESSAGE_H_ */
