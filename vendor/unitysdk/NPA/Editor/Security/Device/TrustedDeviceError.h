#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Editor::Security::Device { class TrustedDeviceError; }

#define NPA_EDITOR_SECURITY_DEVICE_TRUSTEDDEVICEERROR_EQUALS_OFFSET UNITYSDK_OFFSET(0x9C04590)
#define NPA_EDITOR_SECURITY_DEVICE_TRUSTEDDEVICEERROR_EQUALS_OFFSET UNITYSDK_OFFSET(0x9C045B0)
#define NPA_EDITOR_SECURITY_DEVICE_TRUSTEDDEVICEERROR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9C04690)
#define NPA_EDITOR_SECURITY_DEVICE_TRUSTEDDEVICEERROR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C046A0)
#define NPA_EDITOR_SECURITY_DEVICE_TRUSTEDDEVICEERROR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9C046C0)
#define NPA_EDITOR_SECURITY_DEVICE_TRUSTEDDEVICEERROR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9C046F0)
#define NPA_EDITOR_SECURITY_DEVICE_TRUSTEDDEVICEERROR_GETCODE_OFFSET UNITYSDK_OFFSET(0x9C04720)
#define NPA_EDITOR_SECURITY_DEVICE_TRUSTEDDEVICEERROR_GETMESSAGE_OFFSET UNITYSDK_OFFSET(0x9C04730)

namespace NPA::Editor::Security::Device
{
	inline static constexpr unsigned int TrustedDeviceError_TypeDefinitionIndex = 26541;

	class TrustedDeviceError : public Il2CppObject
	{
	public:
		ErrorCode* code; // 0x10

		::System::Boolean Equals(::NPA::Editor::Security::Device::TrustedDeviceError* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Editor::Security::Device::TrustedDeviceError*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_TRUSTEDDEVICEERROR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_TRUSTEDDEVICEERROR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_TRUSTEDDEVICEERROR_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor(ErrorCode* arg)
		{
			((::System::Void(*)(ErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_TRUSTEDDEVICEERROR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::NPA::Editor::Security::Device::TrustedDeviceError* arg, ::NPA::Editor::Security::Device::TrustedDeviceError* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Editor::Security::Device::TrustedDeviceError*, ::NPA::Editor::Security::Device::TrustedDeviceError*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_TRUSTEDDEVICEERROR_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::NPA::Editor::Security::Device::TrustedDeviceError* arg, ::NPA::Editor::Security::Device::TrustedDeviceError* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Editor::Security::Device::TrustedDeviceError*, ::NPA::Editor::Security::Device::TrustedDeviceError*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_TRUSTEDDEVICEERROR_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_TRUSTEDDEVICEERROR_GETCODE_OFFSET))(nullptr);
		}

		::System::String* GetMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_TRUSTEDDEVICEERROR_GETMESSAGE_OFFSET))(nullptr);
		}

	};
}

