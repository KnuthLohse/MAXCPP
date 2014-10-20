/*
 * PushButton.cpp
 *
 *  Created on: 20.10.2014
 *      Author: JoH
 */

#include "PushButton.h"
#include "Messages/Types/DeviceTypes.h"
#include "Messages/Devices/IMAXDevice.h"

namespace MAXCPP {

PushButton::PushButton() : MAXCPP::IMAXDevice(PushButtonType)
{
	LastUpdate = time(0);
}

PushButton::~PushButton()
{
}

} /* namespace MAXCPP */
