/*
 * HeatingThermostatPlus.h
 *
 *  Created on: 20.10.2014
 *      Author: JoH
 */

#ifndef HEATINGTHERMOSTATPLUS_H_
#define HEATINGTHERMOSTATPLUS_H_

#include "IMAXDevice.h"

namespace MAXCPP {

class HeatingThermostatPlus: public MAXCPP::IMAXDevice {
public:
	HeatingThermostatPlus();
	virtual ~HeatingThermostatPlus();
};

} /* namespace MAXCPP */
#endif /* HEATINGTHERMOSTATPLUS_H_ */
