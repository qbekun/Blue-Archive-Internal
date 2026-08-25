#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Editor::Security::Device { class TrustedDeviceStatusType; }

#define NPA_EDITOR_SECURITY_DEVICE_TRUSTEDDEVICESTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C04860)
#define NPA_EDITOR_SECURITY_DEVICE_TRUSTEDDEVICESTATUS_ISTRUSTEDDEVICESTATUSTYPE_OFFSET UNITYSDK_OFFSET(0x9C048A0)

namespace NPA::Editor::Security::Device
{
	inline static constexpr unsigned int TrustedDeviceStatus_TypeDefinitionIndex = 26542;

	class TrustedDeviceStatus : public Il2CppObject
	{
	public:
		::NPA::Editor::Security::Device::TrustedDeviceStatusType* type; // 0x10
		::System::String* token; // 0x18

		::System::Void .ctor(::NPA::Editor::Security::Device::TrustedDeviceStatusType* arg, ::System::String* str)
		{
			((::System::Void(*)(::NPA::Editor::Security::Device::TrustedDeviceStatusType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_TRUSTEDDEVICESTATUS_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean IsTrustedDeviceStatusType(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_TRUSTEDDEVICESTATUS_ISTRUSTEDDEVICESTATUSTYPE_OFFSET))(arg, nullptr);
		}

	};
}

