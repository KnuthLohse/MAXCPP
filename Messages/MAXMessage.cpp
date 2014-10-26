/*
 * MAXMessage.cpp
 *
 *  Created on: 25.10.2014
 *      Author: JoH
 */

#include "MAXMessage.h"

namespace MAXCPP {

MAXMessage::MAXMessage(const MAXMessageType type_p)
	: MessageType(type_p)
{
}

MAXMessage::~MAXMessage() {
}

MAXMessageType const MAXMessage::getMessageType() {return MessageType;}

} /* namespace MAXCPP */
