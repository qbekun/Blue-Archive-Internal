#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINSTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B163D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINSTATUS_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x9B19F90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINSTATUS_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x9B19FA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINSTATUS_SET_STATUSINFORMATION_OFFSET UNITYSDK_OFFSET(0x9B19FB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINSTATUS_GETINFORMATION_OFFSET UNITYSDK_OFFSET(0x9B13BD0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509ChainStatus_TypeDefinitionIndex = 29306;

	class X509ChainStatus : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* status; // 0x10
		::System::String* info; // 0x18

		::System::Void .ctor(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINSTATUS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* get_Status()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINSTATUS_GET_STATUS_OFFSET))(nullptr);
		}

		::System::Void set_Status(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINSTATUS_SET_STATUS_OFFSET))(arg, nullptr);
		}

		::System::Void set_StatusInformation(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINSTATUS_SET_STATUSINFORMATION_OFFSET))(str, nullptr);
		}

		::System::String* GetInformation(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* arg)
		{
			return (return (::System::String*(*)(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINSTATUS_GETINFORMATION_OFFSET))(arg, nullptr);
		}

	};
}

