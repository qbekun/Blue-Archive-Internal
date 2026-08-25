#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int AppTrackingPermissionStatus_TypeDefinitionIndex = 25523;

	class AppTrackingPermissionStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		AppTrackingPermissionStatus* NotSupported; // 0x0
		AppTrackingPermissionStatus* NotDetermined; // 0x0
		AppTrackingPermissionStatus* Restricted; // 0x0
		AppTrackingPermissionStatus* Denied; // 0x0
		AppTrackingPermissionStatus* Authorized; // 0x0

	};

