#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B0CDE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B0CE00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9B0CEC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x9B0CFF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x9B0CE30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9B0D080)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_GETKEYIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9B0D420)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_FIND_OFFSET UNITYSDK_OFFSET(0x9B0DDF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9B0F040)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B0F160)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Certificate2Collection_TypeDefinitionIndex = 29291;

	class X509Certificate2Collection : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* newline_split; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2* get_Item(::System::Int32 arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 Add(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg)
		{
			return (return (::System::Int32(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void AddRange(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_ADDRANGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::String* GetKeyIdentifier(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg)
		{
			return (return (::System::String*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_GETKEYIDENTIFIER_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* Find(::System::Security::Cryptography::X509Certificates::X509FindType* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*(*)(::System::Security::Cryptography::X509Certificates::X509FindType*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_FIND_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator* GetEnumerator()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2COLLECTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

