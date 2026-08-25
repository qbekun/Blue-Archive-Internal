#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B089B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B08BB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B08BC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9B09000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_DECODE_OFFSET UNITYSDK_OFFSET(0x9B08E60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_FORMAT_OFFSET UNITYSDK_OFFSET(0x9B09080)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_GETSEPARATOR_OFFSET UNITYSDK_OFFSET(0x9B09010)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_DECODERAWDATA_OFFSET UNITYSDK_OFFSET(0x9B08AD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_CANONIZE_OFFSET UNITYSDK_OFFSET(0x9B090E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_AREEQUAL_OFFSET UNITYSDK_OFFSET(0x9B092A0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X500DistinguishedName_TypeDefinitionIndex = 29288;

	class X500DistinguishedName : public ::Unity::Collections::FixedList32Bytes`1
	{
	public:
		::System::String* name; // 0x20
		::Il2CppArray<::System::Object*>* canonEncoding; // 0x28

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* Decode(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags* arg)
		{
			return (return (::System::String*(*)(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_DECODE_OFFSET))(arg, nullptr);
		}

		::System::String* Format(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_FORMAT_OFFSET))(arg, nullptr);
		}

		::System::String* GetSeparator(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags* arg)
		{
			return (return (::System::String*(*)(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_GETSEPARATOR_OFFSET))(arg, nullptr);
		}

		::System::Void DecodeRawData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_DECODERAWDATA_OFFSET))(nullptr);
		}

		::System::String* Canonize(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_CANONIZE_OFFSET))(str, nullptr);
		}

		::System::Boolean AreEqual(::System::Security::Cryptography::X509Certificates::X500DistinguishedName* arg, ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*, ::System::Security::Cryptography::X509Certificates::X500DistinguishedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X500DISTINGUISHEDNAME_AREEQUAL_OFFSET))(arg, arg, nullptr);
		}

	};
}

