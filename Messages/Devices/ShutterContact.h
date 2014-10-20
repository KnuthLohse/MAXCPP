/*
 * SutterContact.h
 *
 *  Created on: 20.10.2014
 *      Author: JoH
 */

#ifndef SUTTERCONTACT_H_
#define SUTTERCONTACT_H_

#include "Messages/Devices/IMAXDevice.h"

namespace MAXCPP {

enum ShutterContactModes
{
	closed,
	open,
	unchanged
};


class ShutterContact : IMAXDevice {
protected:
	bool lowBattery;
	bool panelLock;
	bool gatewayOK;
	bool error;
	bool valid;
	bool isAnswer;
	bool linkError;
	ShutterContactModes shutterState;

public:
	ShutterContact();
	virtual ~ShutterContact();
	virtual std::string toString();

	static std::string shutterModeToString(ShutterContactModes mode);

	bool getLowBattery();
	bool getPanelLock();
	bool getGatewayOK();
	bool getError();
	bool getValid();
	bool getIsAnswer();
	bool getLinkError();
	ShutterContactModes getShutterState();

	void setLowBattery(bool p);
	void setPanelLock(bool p);
	void setGatewayOK(bool p);
	void setError(bool p);
	void setValid(bool p);
	void setIsAnswer(bool p);
	void setLinkError(bool p);
	void setShutterState(ShutterContactModes p);
};

} /* namespace MAXCPP */
#endif /* SUTTERCONTACT_H_ */
