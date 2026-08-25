#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B137D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_GET_CERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9B13840)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_GET_CHAINELEMENTSTATUS_OFFSET UNITYSDK_OFFSET(0x9B13850)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_GET_STATUSFLAGS_OFFSET UNITYSDK_OFFSET(0x9B13860)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_SET_STATUSFLAGS_OFFSET UNITYSDK_OFFSET(0x9B13870)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_COUNT_OFFSET UNITYSDK_OFFSET(0x9B13880)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_SET_OFFSET UNITYSDK_OFFSET(0x9B13B60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_UNCOMPRESSFLAGS_OFFSET UNITYSDK_OFFSET(0x9B13D40)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509ChainElement_TypeDefinitionIndex = 29300;

	class X509ChainElement : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate; // 0x10
		::Il2CppArray<::System::Object*>* status; // 0x18
		::System::String* info; // 0x20
		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* compressed_status_flags; // 0x28

		::System::Void .ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2* get_Certificate()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_GET_CERTIFICATE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ChainElementStatus()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_GET_CHAINELEMENTSTATUS_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* get_StatusFlags()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_GET_STATUSFLAGS_OFFSET))(nullptr);
		}

		::System::Void set_StatusFlags(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_SET_STATUSFLAGS_OFFSET))(arg, nullptr);
		}

		::System::Int32 Count(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* arg)
		{
			return (return (::System::Int32(*)(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* arg, ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags*, ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_SET_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void UncompressFlags()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINELEMENT_UNCOMPRESSFLAGS_OFFSET))(nullptr);
		}

	};
}

