/*
 * ShutterContactDiffSet.h
 *
 *  Created on: 25.10.2014
 *      Author: JoH
 */

#ifndef SHUTTERCONTACTDIFFSET_H_
#define SHUTTERCONTACTDIFFSET_H_

#include "DiffSet/DeviceDiffSet.h"
#include "Messages/Devices/ShutterContact.h"

namespace MAXCPP {

class ShutterContactDiffSet: public MAXCPP::DeviceDiffSet {
protected:
	ShutterContactModes state;
	BatteryStatus lowBattery;

public:
	ShutterContactDiffSet(std::string name_p, uint32_t RoomID_p, std::string RoomName_p);
	virtual ~ShutterContactDiffSet();

	ShutterContactModes const getState();
	BatteryStatus const getLowBattery();

	void setShutterContactMode(const ShutterContactModes state_p);
	void setBatteryStatus(const BatteryStatus lowBattery_p);

	std::string const toString();
};

} /* namespace MAXCPP */
#endif /* SHUTTERCONTACTDIFFSET_H_ */
