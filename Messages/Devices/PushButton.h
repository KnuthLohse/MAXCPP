/*
 * PushButton.h
 *
 *  Created on: 20.10.2014
 *      Author: JoH
 */

#ifndef PUSHBUTTON_H_
#define PUSHBUTTON_H_

#include "IMAXDevice.h"


namespace MAXCPP {

class PushButton: protected MAXCPP::IMAXDevice {
public:
	PushButton();
	virtual ~PushButton();
};

} /* namespace MAXCPP */
#endif /* PUSHBUTTON_H_ */
