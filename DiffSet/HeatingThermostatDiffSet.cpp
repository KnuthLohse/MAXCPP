/*
 * HeatingThermostatDiffSet.cpp
 *
 *  Created on: 25.10.2014
 *      Author: JoH
 */

#include "HeatingThermostatDiffSet.h"
#include <sstream>

namespace MAXCPP {

HeatingThermostatDiffSet::HeatingThermostatDiffSet(std::string name_p, uint32_t RoomID_p, std::string RoomName_p)
	:DeviceDiffSet(HeatingThermostatType, name_p, RoomID_p, RoomName_p),
	mode(THERMO_unchanged),
	temperature(0),
	lowBattery(Bat_unchanged)
{
	// TODO Auto-generated constructor stub

}

HeatingThermostatDiffSet::~HeatingThermostatDiffSet() {
	// TODO Auto-generated destructor stub
}

const ThermostatModes HeatingThermostatDiffSet::getMode() {return mode;}
const double HeatingThermostatDiffSet::getTemperature() {return temperature;}
const BatteryStatus HeatingThermostatDiffSet::getLowBattery() {return lowBattery;}

void HeatingThermostatDiffSet::setMode(const ThermostatModes mode_p) {mode = mode_p;}
void HeatingThermostatDiffSet::setTemperature(const double temperature_p) {temperature = temperature_p;}
void HeatingThermostatDiffSet::setBatteryStatus(const BatteryStatus lowBattery_p) {lowBattery = lowBattery_p;}


const std::string HeatingThermostatDiffSet::toString()
{
	std::ostringstream retVal;
	retVal << DeviceDiffSet::toString() << " - ";
	retVal << lowBattery << " - ";
	retVal << temperature;

	return retVal.str();
}

} /* namespace MAXCPP */
