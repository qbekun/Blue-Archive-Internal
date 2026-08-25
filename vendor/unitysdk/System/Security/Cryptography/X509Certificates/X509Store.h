#pragma once
#include "../../../../unitysdk.h"

namespace Mono::Security::X509 { class X509Store; }
namespace Mono::Security::X509 { class X509Stores; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B16CC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_GET_CERTIFICATES_OFFSET UNITYSDK_OFFSET(0x9B16940)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x9B1BD10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_GET_STORE_OFFSET UNITYSDK_OFFSET(0x9B1BD30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_CLOSE_OFFSET UNITYSDK_OFFSET(0x9B16600)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B1BD40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_OPEN_OFFSET UNITYSDK_OFFSET(0x9B16DF0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Store_TypeDefinitionIndex = 29313;

	class X509Store : public Il2CppObject
	{
	public:
		::System::String* _name; // 0x10
		::System::Security::Cryptography::X509Certificates::StoreLocation* _location; // 0x18
		::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* list; // 0x20
		::System::Security::Cryptography::X509Certificates::OpenFlags* _flags; // 0x28
		::Mono::Security::X509::X509Store* store; // 0x30

		::System::Void .ctor(::System::Security::Cryptography::X509Certificates::StoreName* arg, ::System::Security::Cryptography::X509Certificates::StoreLocation* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::StoreName*, ::System::Security::Cryptography::X509Certificates::StoreLocation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* get_Certificates()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_GET_CERTIFICATES_OFFSET))(nullptr);
		}

		::Mono::Security::X509::X509Stores* get_Factory()
		{
			return (return (::Mono::Security::X509::X509Stores*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_GET_FACTORY_OFFSET))(nullptr);
		}

		::Mono::Security::X509::X509Store* get_Store()
		{
			return (return (::Mono::Security::X509::X509Store*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_GET_STORE_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Open(::System::Security::Cryptography::X509Certificates::OpenFlags* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::OpenFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509STORE_OPEN_OFFSET))(arg, nullptr);
		}

	};
}

