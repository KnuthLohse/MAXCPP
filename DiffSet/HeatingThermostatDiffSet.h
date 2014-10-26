/*
 * HeatingThermostatDiffSet.h
 *
 *  Created on: 25.10.2014
 *      Author: JoH
 */

#ifndef HEATINGTHERMOSTATDIFFSET_H_
#define HEATINGTHERMOSTATDIFFSET_H_

#include "Diffset/DeviceDiffSet.h"
#include "Messages/Devices/HeatingThermostat.h"

namespace MAXCPP {



class HeatingThermostatDiffSet : DeviceDiffSet {
protected:
	ThermostatModes mode;
	double temperature;
	BatteryStatus lowBattery;

public:

	HeatingThermostatDiffSet(std::string name_p, uint32_t RoomID_p, std::string RoomName_p);
	virtual ~HeatingThermostatDiffSet();

	ThermostatModes const getMode();
	double const getTemperature();
	BatteryStatus const getLowBattery();

	void setMode(const ThermostatModes mode_p);
	void setTemperature(const double temperature_p);
	void setBatteryStatus(const BatteryStatus lowBattery_p);

	std::string const toString();
};

} /* namespace MAXCPP */
#endif /* HEATINGTHERMOSTATDIFFSET_H_ */
