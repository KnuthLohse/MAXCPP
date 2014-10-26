/*
 * MAXException.h
 *
 *  Created on: 26.10.2014
 *      Author: JoH
 */

#ifndef MAXEXCEPTION_H_
#define MAXEXCEPTION_H_

#include <exception>
#include <string>

namespace MAXCPP {

class MAXException: public std::exception {
protected:
	std::string exceptionMessage;
public:
	MAXException(const std::string exceptionMessage_p);
	virtual ~MAXException() throw ();

	std::string const getExceptionMessage_p();
};

} /* namespace MAXCPP */
#endif /* MAXEXCEPTION_H_ */
