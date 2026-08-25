#pragma once
#include "../../unitysdk.h"

namespace NPA::Service { class NXPDeviceNotificationStatus; }

namespace NPA::Service
{
	inline static constexpr unsigned int NXPDeviceNotificationStatus_TypeDefinitionIndex = 27290;

	class NXPDeviceNotificationStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Service::NXPDeviceNotificationStatus* Unknown; // 0x0
		::NPA::Service::NXPDeviceNotificationStatus* NotDetermined; // 0x0
		::NPA::Service::NXPDeviceNotificationStatus* Denied; // 0x0
		::NPA::Service::NXPDeviceNotificationStatus* Authorized; // 0x0
		::NPA::Service::NXPDeviceNotificationStatus* Provisional; // 0x0

	};
}

