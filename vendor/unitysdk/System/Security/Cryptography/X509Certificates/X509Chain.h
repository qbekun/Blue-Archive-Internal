#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_GET_IMPL_OFFSET UNITYSDK_OFFSET(0x9B131C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B13260)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B132D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B133A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B13410)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_GET_CHAINELEMENTS_OFFSET UNITYSDK_OFFSET(0x9B13460)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_GET_CHAINPOLICY_OFFSET UNITYSDK_OFFSET(0x9B134D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_BUILD_OFFSET UNITYSDK_OFFSET(0x9B10E00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_RESET_OFFSET UNITYSDK_OFFSET(0x9B13540)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_CREATE_OFFSET UNITYSDK_OFFSET(0x9B10D60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B135B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B13610)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9B13700)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Chain_TypeDefinitionIndex = 29299;

	class X509Chain : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::X509Certificates::X509ChainImpl* impl; // 0x10

		::System::Security::Cryptography::X509Certificates::X509ChainImpl* get_Impl()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509ChainImpl*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_GET_IMPL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::X509Certificates::X509ChainImpl* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509ChainImpl*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* get_ChainElements()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_GET_CHAINELEMENTS_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainPolicy* get_ChainPolicy()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509ChainPolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_GET_CHAINPOLICY_OFFSET))(nullptr);
		}

		::System::Boolean Build(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_BUILD_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_RESET_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Chain* Create()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Chain*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_CREATE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAIN_FINALIZE_OFFSET))(nullptr);
		}

	};
}

