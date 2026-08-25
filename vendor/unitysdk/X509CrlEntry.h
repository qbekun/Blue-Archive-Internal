#pragma once
#include "unitysdk.h"

namespace Mono::Security::X509 { class X509ExtensionCollection; }
namespace Mono::Security { class ASN1; }

#define X509CRLENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91001F0)
#define X509CRLENTRY_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x91009B0)
#define X509CRLENTRY_GET_REVOCATIONDATE_OFFSET UNITYSDK_OFFSET(0x9101050)
#define X509CRLENTRY_GET_EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x9101060)

	inline static constexpr unsigned int X509CrlEntry_TypeDefinitionIndex = 35747;

	class X509CrlEntry : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* sn; // 0x10
		::System::DateTime* revocationDate; // 0x18
		::Mono::Security::X509::X509ExtensionCollection* extensions; // 0x20

		::System::Void .ctor(::Mono::Security::ASN1* arg)
		{
			((::System::Void(*)(::Mono::Security::ASN1*, ::PVOID))((::PBYTE)hIl2Cpp + X509CRLENTRY_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_SerialNumber()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + X509CRLENTRY_GET_SERIALNUMBER_OFFSET))(nullptr);
		}

		::System::DateTime* get_RevocationDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + X509CRLENTRY_GET_REVOCATIONDATE_OFFSET))(nullptr);
		}

		::Mono::Security::X509::X509ExtensionCollection* get_Extensions()
		{
			return (return (::Mono::Security::X509::X509ExtensionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + X509CRLENTRY_GET_EXTENSIONS_OFFSET))(nullptr);
		}

	};

