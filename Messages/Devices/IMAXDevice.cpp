/*
 * IMAXDevice.cpp
 *
 *  Created on: 20.10.2014
 *      Author: JoH
 */

#include "IMAXDevice.h"
#include <sstream>

namespace MAXCPP {

IMAXDevice::~IMAXDevice() {

}

DeviceTypes IMAXDevice::getType() {return Type;}
std::string IMAXDevice::getRFAddress() {return RFAddress;}
std::string IMAXDevice::getSerialNumber() {return SerialNumber;}
std::string IMAXDevice::getName() {return Name;}
Room* IMAXDevice::getPAssociatedRoom() {return pAssociatedRoom;}
time_t IMAXDevice::getLastUpdate() {return LastUpdate;}

void IMAXDevice::setRFAddress(std::string RFAddress_p)
{
	RFAddress = RFAddress_p;
	LastUpdate = time(0);
}

void IMAXDevice::setSerialNumber(std::string SerialNumber_p)
{
	SerialNumber = SerialNumber_p;
	LastUpdate = time(0);
}

void IMAXDevice::setName(std::string Name_p)
{
	Name = Name_p;
	LastUpdate = time(0);
}

void IMAXDevice::setPAssociatedRoom(Room* pAssociatedRoom_p)
{
	pAssociatedRoom = pAssociatedRoom_p;
	LastUpdate = time(0);
}



std::string IMAXDevice::toString()
{
	std::ostringstream retVal;
	retVal << "\tDeviceType: " << DeviceTypeStrings[Type] << std::endl;
	retVal << "\tDeviceName: " << Name << std::endl;
	retVal << "\tSerialNumber: " << SerialNumber << std::endl;
	retVal << "\tRFAddress: " << RFAddress << std::endl;

	return retVal.str();
}

IMAXDevice::IMAXDevice() :Type(InvalidType), pAssociatedRoom(NULL), LastUpdate(time(0))
{
};

IMAXDevice::IMAXDevice(DeviceTypes Type_p) : Type(Type_p), pAssociatedRoom(NULL), LastUpdate(time(0))
{

}

} /* namespace MAXCPP */
