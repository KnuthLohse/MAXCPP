/*
 * Room.h
 *
 *  Created on: 20.10.2014
 *      Author: JoH
 */

#ifndef ROOM_H_
#define ROOM_H_

#include "Messages/Devices/IMAXDevice.h"
#include <map>

namespace MAXCPP {
class House;

class Room {
protected:
	std::map<std::string, IMAXDevice> Devices;
	std::string RoomName;
	char RoomID;
	std::string RFAddress;
	House* pAssociatedHouse;


public:

	virtual ~Room();
	Room(House* pAssociatedHouse_p);

	std::string toString();
};

} /* namespace MAXCPP */
#endif /* ROOM_H_ */
