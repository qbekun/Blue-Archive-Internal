#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B09540)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B1ABB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION_GET_CRITICAL_OFFSET UNITYSDK_OFFSET(0x9B1ABD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION_SET_CRITICAL_OFFSET UNITYSDK_OFFSET(0x9B1ABE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x9B1ABF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION_FORMATUNKOWNDATA_OFFSET UNITYSDK_OFFSET(0x9B0A010)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Extension_TypeDefinitionIndex = 29308;

	class X509Extension : public ::Unity::Collections::FixedList32Bytes`1
	{
	public:
		::System::Boolean _critical; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean get_Critical()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION_GET_CRITICAL_OFFSET))(nullptr);
		}

		::System::Void set_Critical(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION_SET_CRITICAL_OFFSET))(arg, nullptr);
		}

		::System::Void CopyFrom(::System::Security::Cryptography::AsnEncodedData* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::AsnEncodedData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::String* FormatUnkownData(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509EXTENSION_FORMATUNKOWNDATA_OFFSET))(arg, nullptr);
		}

	};
}

