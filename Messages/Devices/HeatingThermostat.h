/*
 * HeatingThermostat.h
 *
 *  Created on: 20.10.2014
 *      Author: JoH
 */

#ifndef HEATINGTHERMOSTAT_H_
#define HEATINGTHERMOSTAT_H_

#include "IMAXDevice.h"
#include <ctime>

namespace MAXCPP {
enum ThermostatModes
{
	automatic,
	manual,
	vacation,
	boost,
	unchanged
};

class HeatingThermostat: public MAXCPP::IMAXDevice {

protected:
	bool lowBattery;
	bool panelLock;
	bool gatewayOK;
	bool error;
	bool valid;
	bool isAnswer;
	bool linkError;
	ThermostatModes mode;
	time_t validUntil;
	double temperature;



public:
	HeatingThermostat();
	virtual ~HeatingThermostat();

	static std::string modeToString(ThermostatModes mode);
	virtual std::string toString();
	time_t getValidUntil();
	double getTemperature();
	bool getLowBattery();
	bool getPanelLock();
	bool getGatewayOK();
	bool getError();
	bool getValid();
	bool getIsAnswer();
	bool getLinkError();
	ThermostatModes getMode();

	void setValidUntil(time_t p);
	void setTemperature(double p);
	void setLowBattery(bool p);
	void setPanelLock(bool p);
	void setGatewayOK(bool p);
	void setError(bool p);
	void setValid(bool p);
	void setIsAnswer(bool p);
	void setLinkError(bool p);
	void setMode(ThermostatModes p);
};

} /* namespace MAXCPP */
#endif /* HEATINGTHERMOSTAT_H_ */
