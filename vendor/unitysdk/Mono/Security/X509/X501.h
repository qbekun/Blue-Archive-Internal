#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security { class ASN1; }

#define MONO_SECURITY_X509_X501_TOSTRING_OFFSET UNITYSDK_OFFSET(0x90F1100)
#define MONO_SECURITY_X509_X501_TOSTRING_OFFSET UNITYSDK_OFFSET(0x90FD570)
#define MONO_SECURITY_X509_X501_APPENDENTRY_OFFSET UNITYSDK_OFFSET(0x90FC990)
#define MONO_SECURITY_X509_X501_GETATTRIBUTEFROMOID_OFFSET UNITYSDK_OFFSET(0x90FD730)
#define MONO_SECURITY_X509_X501_ISOID_OFFSET UNITYSDK_OFFSET(0x90FE6C0)
#define MONO_SECURITY_X509_X501_READATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x90FE780)
#define MONO_SECURITY_X509_X501_ISHEX_OFFSET UNITYSDK_OFFSET(0x90FE8A0)
#define MONO_SECURITY_X509_X501_READHEX_OFFSET UNITYSDK_OFFSET(0x90FE970)
#define MONO_SECURITY_X509_X501_READESCAPED_OFFSET UNITYSDK_OFFSET(0x90FEAF0)
#define MONO_SECURITY_X509_X501_READQUOTED_OFFSET UNITYSDK_OFFSET(0x90FEC60)
#define MONO_SECURITY_X509_X501_READVALUE_OFFSET UNITYSDK_OFFSET(0x90FEDF0)
#define MONO_SECURITY_X509_X501_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x90FF060)
#define MONO_SECURITY_X509_X501_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90FF2E0)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X501_TypeDefinitionIndex = 35746;

	class X501 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* countryName; // 0x0
		::Il2CppArray<::System::Object*>* organizationName; // 0x8
		::Il2CppArray<::System::Object*>* organizationalUnitName; // 0x10
		::Il2CppArray<::System::Object*>* commonName; // 0x18
		::Il2CppArray<::System::Object*>* localityName; // 0x20
		::Il2CppArray<::System::Object*>* stateOrProvinceName; // 0x28
		::Il2CppArray<::System::Object*>* streetAddress; // 0x30
		::Il2CppArray<::System::Object*>* serialNumber; // 0x38
		::Il2CppArray<::System::Object*>* domainComponent; // 0x40
		::Il2CppArray<::System::Object*>* userid; // 0x48
		::Il2CppArray<::System::Object*>* email; // 0x50
		::Il2CppArray<::System::Object*>* dnQualifier; // 0x58
		::Il2CppArray<::System::Object*>* title; // 0x60
		::Il2CppArray<::System::Object*>* surname; // 0x68
		::Il2CppArray<::System::Object*>* givenName; // 0x70
		::Il2CppArray<::System::Object*>* initial; // 0x78

		::System::String* ToString(::Mono::Security::ASN1* arg)
		{
			return (return (::System::String*(*)(::Mono::Security::ASN1*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::Mono::Security::ASN1* arg, ::System::Boolean arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::Mono::Security::ASN1*, ::System::Boolean, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_TOSTRING_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void AppendEntry(::System::Text::StringBuilder* arg, ::Mono::Security::ASN1* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::Mono::Security::ASN1*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_APPENDENTRY_OFFSET))(arg, arg, arg, nullptr);
		}

		AttributeTypeAndValue* GetAttributeFromOid(::System::String* str)
		{
			return (return (AttributeTypeAndValue*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_GETATTRIBUTEFROMOID_OFFSET))(str, nullptr);
		}

		::System::Boolean IsOid(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_ISOID_OFFSET))(str, nullptr);
		}

		AttributeTypeAndValue* ReadAttribute(::System::String* str, int32_t&* arg)
		{
			return (return (AttributeTypeAndValue*(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_READATTRIBUTE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsHex(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_ISHEX_OFFSET))(arg, nullptr);
		}

		::System::String* ReadHex(::System::String* str, int32_t&* arg)
		{
			return (return (::System::String*(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_READHEX_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 ReadEscaped(::System::Text::StringBuilder* arg, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Text::StringBuilder*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_READESCAPED_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Int32 ReadQuoted(::System::Text::StringBuilder* arg, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Text::StringBuilder*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_READQUOTED_OFFSET))(arg, str, arg, nullptr);
		}

		::System::String* ReadValue(::System::String* str, int32_t&* arg)
		{
			return (return (::System::String*(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_READVALUE_OFFSET))(str, arg, nullptr);
		}

		::Mono::Security::ASN1* FromString(::System::String* str)
		{
			return (return (::Mono::Security::ASN1*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_FROMSTRING_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_.CCTOR_OFFSET))(nullptr);
		}

	};
}

