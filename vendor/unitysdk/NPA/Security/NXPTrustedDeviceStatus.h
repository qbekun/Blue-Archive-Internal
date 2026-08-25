#pragma once
#include "../../unitysdk.h"

namespace NPA::Security { class NXPTrustedDeviceStatus; }

namespace NPA::Security
{
	inline static constexpr unsigned int NXPTrustedDeviceStatus_TypeDefinitionIndex = 27328;

	class NXPTrustedDeviceStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Security::NXPTrustedDeviceStatus* Unknown; // 0x0
		::NPA::Security::NXPTrustedDeviceStatus* Registered; // 0x0
		::NPA::Security::NXPTrustedDeviceStatus* NotRegisteredAnyDevice; // 0x0
		::NPA::Security::NXPTrustedDeviceStatus* NotRegisteredDevice; // 0x0
		::NPA::Security::NXPTrustedDeviceStatus* CanNotRegisterAnymore; // 0x0

	};
}

