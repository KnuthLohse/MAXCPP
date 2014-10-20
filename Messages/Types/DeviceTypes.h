#ifndef __MAXCPP_DEVICETYPES_H__
#define __MAXCPP_DEVICETYPES_H__

#include <string>

namespace MAXCPP
{
	enum DeviceTypes
	{
		InvalidType = 0,
		HeatingThermostatType = 1,
		HeatingThermostatPlusType = 2,
		WallMountedThermostatType = 3,
		ShutterContactType = 4,
		PushButtonType = 5
	};

	extern const std::string DeviceTypeStrings[];
}

#endif //__MAXCPP_DEVICETYPES_H__
