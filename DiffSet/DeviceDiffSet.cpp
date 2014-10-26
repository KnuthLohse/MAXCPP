/*
 * DeviceDiffSet.cpp
 *
 *  Created on: 25.10.2014
 *      Author: JoH
 */

#include "Diffset/DeviceDiffSet.h"
#include <sstream>

namespace MAXCPP {

DeviceDiffSet::DeviceDiffSet(const DeviceTypes type_p,
		const std::string name_p,
		const uint32_t RoomID_p,
		const std::string RoomName_p) :
  DeviceType(type_p),
  DeviceName(name_p),
  RoomID(RoomID_p),
  RoomName(RoomName_p)
{
}

DeviceDiffSet::~DeviceDiffSet() {
}


DeviceTypes const DeviceDiffSet::getDeviceType() {return DeviceType;}
std::string const DeviceDiffSet::getDeviceName() {return DeviceName;}
uint32_t const DeviceDiffSet::getRoomID() {return RoomID;}
std::string const DeviceDiffSet::getRoomName() {return RoomName;}

std::string const DeviceDiffSet::toString()
{
	std::ostringstream retVal;
	retVal << RoomID << " - ";
	retVal << DeviceTypeStrings[DeviceType] << " - ";
	retVal << RoomName << " - ";
	retVal << DeviceName;

	return retVal.str();
}

} /* namespace MAXCPP */
