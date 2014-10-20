/*
 * Room.cpp
 *
 *  Created on: 20.10.2014
 *      Author: JoH
 */

#include "Room.h"
#include <string>
#include <sstream>
#include "Messages/Metadata/House.h"

namespace MAXCPP {


Room::~Room()
{
}

std::string Room::toString()
{
	std::ostringstream retVal;
	retVal << "RoomName: " << RoomName << std::endl;
	retVal << "RoomID: " << RoomID << std::endl;
	retVal << "RFAddress: " << RFAddress << std::endl;
	retVal << "Devices: " << std::endl;
	for (std::map<std::string, IMAXDevice>::iterator it = Devices.begin();
		it != Devices.end();
		++it)
	{
		it->second.toString();
	}

	return retVal.str();
}

Room::Room(House* pAssociatedHouse_p)
{
	pAssociatedHouse = pAssociatedHouse_p;
	RoomID = 0;
	Devices = std::map<std::string, IMAXDevice>();
}


} /* namespace MAXCPP */
