#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Editor::Security::Device { class TrustedDeviceStatusType; }

namespace NPA::Editor::Security::Device
{
	inline static constexpr unsigned int TrustedDeviceStatusType_TypeDefinitionIndex = 26539;

	class TrustedDeviceStatusType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Editor::Security::Device::TrustedDeviceStatusType* Registered; // 0x0
		::NPA::Editor::Security::Device::TrustedDeviceStatusType* NotRegisteredAnyDevice; // 0x0
		::NPA::Editor::Security::Device::TrustedDeviceStatusType* NotRegisteredDevice; // 0x0
		::NPA::Editor::Security::Device::TrustedDeviceStatusType* CanNotRegisterAnymore; // 0x0

	};
}

