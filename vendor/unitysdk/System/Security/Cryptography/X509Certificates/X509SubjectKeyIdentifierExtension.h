#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B0CD40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B1BD80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B1C000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B1C2C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B1C620)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B0D8E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_GET_SUBJECTKEYIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9B0DD60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x9B1C640)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_FROMHEXCHAR_OFFSET UNITYSDK_OFFSET(0x9B1C820)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_FROMHEXCHARS_OFFSET UNITYSDK_OFFSET(0x9B1C870)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_FROMHEX_OFFSET UNITYSDK_OFFSET(0x9B1C480)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x9B1BE50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_ENCODE_OFFSET UNITYSDK_OFFSET(0x9B1C250)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B1C930)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509SubjectKeyIdentifierExtension_TypeDefinitionIndex = 29314;

	class X509SubjectKeyIdentifierExtension : public Il2CppObject
	{
	public:
		::System::String* oid; // 0x0
		::System::String* friendlyName; // 0x0
		::Il2CppArray<::System::Object*>* _subjectKeyIdentifier; // 0x28
		::System::String* _ski; // 0x30
		::System::Security::Cryptography::AsnDecodeStatus* _status; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::AsnEncodedData* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::AsnEncodedData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::X509Certificates::PublicKey* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::PublicKey*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::X509Certificates::PublicKey* arg, ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::PublicKey*, ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* get_SubjectKeyIdentifier()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_GET_SUBJECTKEYIDENTIFIER_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(::System::Security::Cryptography::AsnEncodedData* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::AsnEncodedData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Byte FromHexChar(::System::Char arg)
		{
			return (return (::System::Byte(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_FROMHEXCHAR_OFFSET))(arg, nullptr);
		}

		::System::Byte FromHexChars(::System::Char arg, ::System::Char arg)
		{
			return (return (::System::Byte(*)(::System::Char, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_FROMHEXCHARS_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FromHex(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_FROMHEX_OFFSET))(str, nullptr);
		}

		::System::Security::Cryptography::AsnDecodeStatus* Decode(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::AsnDecodeStatus*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_DECODE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Encode()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_ENCODE_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509SUBJECTKEYIDENTIFIEREXTENSION_TOSTRING_OFFSET))(arg, nullptr);
		}

	};
}

