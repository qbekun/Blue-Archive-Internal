#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B0CC00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B1B130)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B1B3D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_GET_KEYUSAGES_OFFSET UNITYSDK_OFFSET(0x9B0EFD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x9B1B640)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_GETVALIDFLAGS_OFFSET UNITYSDK_OFFSET(0x9B1B4A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x9B1B200)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_ENCODE_OFFSET UNITYSDK_OFFSET(0x9B1B4B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B1B820)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509KeyUsageExtension_TypeDefinitionIndex = 29312;

	class X509KeyUsageExtension : public Il2CppObject
	{
	public:
		::System::String* oid; // 0x0
		::System::String* friendlyName; // 0x0
		::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags* all; // 0x0
		::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags* _keyUsages; // 0x28
		::System::Security::Cryptography::AsnDecodeStatus* _status; // 0x2C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::AsnEncodedData* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::AsnEncodedData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags* get_KeyUsages()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_GET_KEYUSAGES_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(::System::Security::Cryptography::AsnEncodedData* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::AsnEncodedData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags* GetValidFlags(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags*(*)(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_GETVALIDFLAGS_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::AsnDecodeStatus* Decode(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::AsnDecodeStatus*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_DECODE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Encode()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_ENCODE_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509KEYUSAGEEXTENSION_TOSTRING_OFFSET))(arg, nullptr);
		}

	};
}

