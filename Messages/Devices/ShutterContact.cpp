/*
 * SutterContact.cpp
 *
 *  Created on: 20.10.2014
 *      Author: JoH
 */

#include "ShutterContact.h"
#include <sstream>
#include <string>
#include "IMAXDevice.h"

namespace MAXCPP {

std::string ShutterContact::shutterModeToString(ShutterContactModes mode)
{
	switch (mode)
	{
	  case (SHUTTER_open):
			  return "Open";
	  case (SHUTTER_closed):
			  return "Closed";
	  case (SHUTTER_unchanged):
			  return "Unchanged";
	  default:
		  	  return "Undefined";
	}
}

ShutterContact::ShutterContact() : IMAXDevice(ShutterContactType),
		lowBattery(false),
		panelLock(false),
		gatewayOK(false),
		error(false),
		valid(false),
		isAnswer(false),
		linkError(false),
		shutterState(SHUTTER_unchanged)
{
}

ShutterContact::~ShutterContact() {
}

std::string ShutterContact::toString()
{
	std::ostringstream retVal;
	retVal << IMAXDevice::toString();
	retVal << "\tLow Battery: " << (lowBattery? "1":"0") << std::endl;
	retVal << "\tPanel Lock: " << (panelLock? "1":"0") << std::endl;
	retVal << "\tGateway OK: " << (gatewayOK? "1":"0") << std::endl;
	retVal << "\tError: " << (error? "1":"0") << std::endl;
	retVal << "\tValid: " << (valid? "1":"0") << std::endl;
	retVal << "\tIs Answer: " << (isAnswer? "1":"0") << std::endl;
	retVal << "\tLink Error: " << (linkError? "1":"0") << std::endl;
	retVal << "\tShutter State: " << ShutterContact::shutterModeToString(shutterState) << std::endl;
	return retVal.str();
}

bool ShutterContact::getLowBattery() {return lowBattery;}
bool ShutterContact::getPanelLock() {return panelLock;}
bool ShutterContact::getGatewayOK() {return gatewayOK;}
bool ShutterContact::getError() {return error;}
bool ShutterContact::getValid() {return valid;}
bool ShutterContact::getIsAnswer() {return isAnswer;}
bool ShutterContact::getLinkError() {return linkError;}
ShutterContactModes ShutterContact::getShutterState() {return shutterState;}

void ShutterContact::setLowBattery(bool p)
{
	lowBattery = p;
	LastUpdate = time(0);
}
void ShutterContact::setPanelLock(bool p)
{
	panelLock = p;
	LastUpdate = time(0);
}
void ShutterContact::setGatewayOK(bool p)
{
	gatewayOK = p;
	LastUpdate = time(0);
}
void ShutterContact::setError(bool p)
{
	error = p;
	LastUpdate = time(0);
}
void ShutterContact::setValid(bool p)
{
	valid = p;
	LastUpdate = time(0);
}
void ShutterContact::setIsAnswer(bool p)
{
	isAnswer = p;
	LastUpdate = time(0);
}
void ShutterContact::setLinkError(bool p)
{
	linkError = p;
	LastUpdate = time(0);
}
void ShutterContact::setShutterState(ShutterContactModes p)
{
	shutterState = p;
	LastUpdate = time(0);
}

} /* namespace MAXCPP */
