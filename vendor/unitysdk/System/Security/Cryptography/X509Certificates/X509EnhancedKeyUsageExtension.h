#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B0CCA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B19FC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B1A320)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_GET_ENHANCEDKEYUSAGES_OFFSET UNITYSDK_OFFSET(0x9B1A580)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x9B1A680)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x9B1A090)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_ENCODE_OFFSET UNITYSDK_OFFSET(0x9B1A4C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B1A860)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509EnhancedKeyUsageExtension_TypeDefinitionIndex = 29307;

	class X509EnhancedKeyUsageExtension : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::OidCollection* _enhKeyUsage; // 0x28
		::System::Security::Cryptography::AsnDecodeStatus* _status; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::AsnEncodedData* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::AsnEncodedData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::OidCollection* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::OidCollection*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::OidCollection* get_EnhancedKeyUsages()
		{
			return (return (::System::Security::Cryptography::OidCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_GET_ENHANCEDKEYUSAGES_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(::System::Security::Cryptography::AsnEncodedData* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::AsnEncodedData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::AsnDecodeStatus* Decode(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::AsnDecodeStatus*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_DECODE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Encode()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_ENCODE_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509ENHANCEDKEYUSAGEEXTENSION_TOSTRING_OFFSET))(arg, nullptr);
		}

	};
}

