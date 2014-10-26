/*
 * MAXMessage.h
 *
 *  Created on: 25.10.2014
 *      Author: JoH
 */

#ifndef MAXMESSAGE_H_
#define MAXMESSAGE_H_

namespace MAXCPP {

typedef enum _MAXMessageType
{
	MESSAGE_H,
	MESSAGE_M,
	MESSAGE_C,
	MESSAGE_L,
	MESSAGE_S
} MAXMessageType;

class MAXMessage {
protected:
	MAXMessageType MessageType;

public:
	MAXMessage(const MAXMessageType type_p);
	virtual ~MAXMessage();

	virtual MAXMessageType const getMessageType();
};

} /* namespace MAXCPP */
#endif /* MAXMESSAGE_H_ */
