/*
 * ShutterContactDiffSet.cpp
 *
 *  Created on: 25.10.2014
 *      Author: JoH
 */

#include "ShutterContactDiffSet.h"
#include <sstream>

namespace MAXCPP {

ShutterContactDiffSet::ShutterContactDiffSet(std::string name_p, uint32_t RoomID_p, std::string RoomName_p)
	: DeviceDiffSet(ShutterContactType, name_p, RoomID_p, RoomName_p),
	state(SHUTTER_unchanged),
	lowBattery(Bat_unchanged)
{
}

ShutterContactDiffSet::~ShutterContactDiffSet() {
}

ShutterContactModes const ShutterContactDiffSet::getState() {return state;}
BatteryStatus const ShutterContactDiffSet::getLowBattery() {return lowBattery;}

void ShutterContactDiffSet::setShutterContactMode(const ShutterContactModes state_p)
{state = state_p;}
void ShutterContactDiffSet::setBatteryStatus(const BatteryStatus lowBattery_p)
{lowBattery = lowBattery_p;}

std::string const ShutterContactDiffSet::toString()
{
	std::ostringstream retVal;
	retVal << DeviceDiffSet::toString() << " - ";
	retVal << lowBattery << " - ";
	retVal << ShutterContact::shutterModeToString(state);

	return retVal.str();
}

} /* namespace MAXCPP */
