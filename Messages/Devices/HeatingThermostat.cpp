/*
 * HeatingThermostat.cpp
 *
 *  Created on: 20.10.2014
 *      Author: JoH
 */

#include "HeatingThermostat.h"
#include <sstream>

namespace MAXCPP {

std::string HeatingThermostat::modeToString(ThermostatModes mode)
{
	switch (mode)
	{
	case automatic:
		return "Automatic";
	case manual:
		return "Manual";
	case vacation:
		return "Vacation";
	case boost:
		return "Boost";
	case unchanged:
		return "Unchanged";
	default:
		return "Undefined";
	}
}

HeatingThermostat::HeatingThermostat() :IMAXDevice(HeatingThermostatType),
		lowBattery(false),
		panelLock(false),
		gatewayOK(false),
		error(false),
		valid(false),
		isAnswer(false),
		linkError(false),
		mode(unchanged),
		validUntil(0),
		temperature(0)
{
}

HeatingThermostat::~HeatingThermostat()
{
}

std::string HeatingThermostat::toString()
{
	std::ostringstream retVal;
	retVal << IMAXDevice::toString();
	retVal << "\tTemperature: " << temperature << std::endl;
	retVal << "\tLow Battery: " << (lowBattery? "1":"0") << std::endl;
	retVal << "\tPanel Lock: " << (panelLock? "1":"0") << std::endl;
	retVal << "\tGateway OK: " << (gatewayOK? "1":"0") << std::endl;
	retVal << "\tError: " << (error? "1":"0") << std::endl;
	retVal << "\tValid: " << (valid? "1":"0") << std::endl;
	retVal << "\tIs Answer: " << (isAnswer? "1":"0") << std::endl;
	retVal << "\tLink Error: " << (linkError? "1":"0") << std::endl;
	retVal << "\tMode: " << HeatingThermostat::modeToString(mode) << std::endl;
	//TODO add string for ValidUntil
	return retVal.str();
}

bool HeatingThermostat::getLowBattery() {return lowBattery;}
bool HeatingThermostat::getPanelLock() {return panelLock;}
bool HeatingThermostat::getGatewayOK() {return gatewayOK;}
bool HeatingThermostat::getError() {return error;}
bool HeatingThermostat::getValid() {return valid;}
bool HeatingThermostat::getIsAnswer() {return isAnswer;}
bool HeatingThermostat::getLinkError() {return linkError;}
ThermostatModes HeatingThermostat::getMode() {return mode;}
double HeatingThermostat::getTemperature() {return temperature;}
time_t HeatingThermostat::getValidUntil() {return validUntil;}

void HeatingThermostat::setLowBattery(bool p)
{
	lowBattery = p;
	LastUpdate = time(0);
}
void HeatingThermostat::setPanelLock(bool p)
{
	panelLock = p;
	LastUpdate = time(0);
}
void HeatingThermostat::setGatewayOK(bool p)
{
	gatewayOK = p;
	LastUpdate = time(0);
}
void HeatingThermostat::setError(bool p)
{
	error = p;
	LastUpdate = time(0);
}
void HeatingThermostat::setValid(bool p)
{
	valid = p;
	LastUpdate = time(0);
}
void HeatingThermostat::setIsAnswer(bool p)
{
	isAnswer = p;
	LastUpdate = time(0);
}
void HeatingThermostat::setLinkError(bool p)
{
	linkError = p;
	LastUpdate = time(0);
}
void HeatingThermostat::setMode(ThermostatModes p)
{
	mode = p;
	LastUpdate = time(0);
}
void HeatingThermostat::setTemperature(double p)
{
	temperature = p;
	LastUpdate = time(0);
}
void HeatingThermostat::setValidUntil(time_t p)
{
	validUntil = p;
	LastUpdate = time(0);
}


} /* namespace MAXCPP */
