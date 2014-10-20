/*
 * WallMountedThermostat.h
 *
 *  Created on: 20.10.2014
 *      Author: JoH
 */

#ifndef WALLMOUNTEDTHERMOSTAT_H_
#define WALLMOUNTEDTHERMOSTAT_H_

#include "IMAXDevice.h"

namespace MAXCPP {

class WallMountedThermostat: public MAXCPP::IMAXDevice {
public:
	WallMountedThermostat();
	virtual ~WallMountedThermostat();
};

} /* namespace MAXCPP */
#endif /* WALLMOUNTEDTHERMOSTAT_H_ */
