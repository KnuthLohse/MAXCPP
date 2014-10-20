/*
 * IMAXDevice.h
 *
 *  Created on: 20.10.2014
 *      Author: JoH
 */

#ifndef __MAXCPP_IMAXDEVICE_H_
#define __MAXCPP_IMAXDEVICE_H_

#include "Messages/Types/DeviceTypes.h"

#include <string>
#include <ctime>

namespace MAXCPP {

class Room;

class IMAXDevice {
protected:
	DeviceTypes Type;
	std::string RFAddress;
	std::string SerialNumber;
	std::string Name;
	Room* pAssociatedRoom;
	time_t LastUpdate;

public:
	virtual DeviceTypes getType();
	virtual std::string getRFAddress();
	virtual void setRFAddress(std::string RFAddress_p);
	virtual std::string getSerialNumber();
	virtual void setSerialNumber(std::string SerialNumber_p);
	virtual std::string getName();
	virtual void setName(std::string Name_p);
	virtual Room* getPAssociatedRoom();
	virtual void setPAssociatedRoom(Room* pAssociatedRoom_p);
	virtual time_t getLastUpdate();
	virtual std::string toString();
	IMAXDevice();
	IMAXDevice(DeviceTypes Type_p);
	virtual ~IMAXDevice();
};

} /* namespace MAXCPP */
#endif /* __MAXCPP_IMAXDEVICE_H_ */
