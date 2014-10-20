/*
 * UnknownDevice.h
 *
 *  Created on: 20.10.2014
 *      Author: JoH
 */

#ifndef UNKNOWNDEVICE_H_
#define UNKNOWNDEVICE_H_

#include "IMAXDevice.h"

namespace MAXCPP {

class UnknownDevice: public MAXCPP::IMAXDevice {
public:
	UnknownDevice();
	virtual ~UnknownDevice();
};

} /* namespace MAXCPP */
#endif /* UNKNOWNDEVICE_H_ */
