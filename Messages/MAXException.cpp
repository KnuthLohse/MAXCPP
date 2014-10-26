/*
 * MAXException.cpp
 *
 *  Created on: 26.10.2014
 *      Author: JoH
 */

#include "MAXException.h"

namespace MAXCPP {

MAXException::MAXException(const std::string exceptionMessage_p)
  : exceptionMessage(exceptionMessage_p)
{

}

MAXException::~MAXException() throw(){

}

std::string const MAXException::getExceptionMessage_p() {return exceptionMessage;}

} /* namespace MAXCPP */
