/*
 * DeviceDiffSet.h
 *
 *  Created on: 25.10.2014
 *      Author: JoH
 */

#ifndef DEVICEDIFFSET_H_
#define DEVICEDIFFSET_H_

#include "Messages/Types/DeviceTypes.h"
#include <string>
#include <stdint.h>

namespace MAXCPP {



typedef enum _BatteryStatus
{
	Bat_unchanged,
	Bat_ok,
	Bat_lowbattery
} BatteryStatus;


class DeviceDiffSet {
protected:
	DeviceTypes DeviceType;
	std::string DeviceName;
	uint32_t RoomID;
	std::string RoomName;

public:
	DeviceDiffSet(const DeviceTypes type_p, const std::string name_p, const uint32_t RoomID_p, const std::string RoomName_p);
	virtual ~DeviceDiffSet();

	virtual DeviceTypes const getDeviceType();
	virtual std::string const getDeviceName();
	virtual uint32_t const getRoomID();
	virtual std::string const getRoomName();

	virtual std::string const toString();
};

} /* namespace MAXCPP */
#endif /* DEVICEDIFFSET_H_ */
