#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security { class ASN1; }

#define MONO_SECURITY_X509_SAFEBAG_.CTOR_OFFSET UNITYSDK_OFFSET(0x90F13B0)
#define MONO_SECURITY_X509_SAFEBAG_GET_BAGOID_OFFSET UNITYSDK_OFFSET(0x90F1400)
#define MONO_SECURITY_X509_SAFEBAG_GET_ASN1_OFFSET UNITYSDK_OFFSET(0x90F1410)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int SafeBag_TypeDefinitionIndex = 35743;

	class SafeBag : public Il2CppObject
	{
	public:
		::System::String* _bagOID; // 0x10
		::Mono::Security::ASN1* _asn1; // 0x18

		::System::Void .ctor(::System::String* str, ::Mono::Security::ASN1* arg)
		{
			((::System::Void(*)(::System::String*, ::Mono::Security::ASN1*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_SAFEBAG_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_BagOID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_SAFEBAG_GET_BAGOID_OFFSET))(nullptr);
		}

		::Mono::Security::ASN1* get_ASN1()
		{
			return (return (::Mono::Security::ASN1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_SAFEBAG_GET_ASN1_OFFSET))(nullptr);
		}

	};
}

