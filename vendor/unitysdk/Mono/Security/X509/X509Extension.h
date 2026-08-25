#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security { class ASN1; }
namespace Mono::Security::X509 { class X509Extension; }

#define MONO_SECURITY_X509_X509EXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9104D50)
#define MONO_SECURITY_X509_X509EXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9105190)
#define MONO_SECURITY_X509_X509EXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x9105350)
#define MONO_SECURITY_X509_X509EXTENSION_ENCODE_OFFSET UNITYSDK_OFFSET(0x9105360)
#define MONO_SECURITY_X509_X509EXTENSION_GET_OID_OFFSET UNITYSDK_OFFSET(0x9105370)
#define MONO_SECURITY_X509_X509EXTENSION_GET_CRITICAL_OFFSET UNITYSDK_OFFSET(0x9105380)
#define MONO_SECURITY_X509_X509EXTENSION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9105310)
#define MONO_SECURITY_X509_X509EXTENSION_EQUALS_OFFSET UNITYSDK_OFFSET(0x9105390)
#define MONO_SECURITY_X509_X509EXTENSION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x91054D0)
#define MONO_SECURITY_X509_X509EXTENSION_WRITELINE_OFFSET UNITYSDK_OFFSET(0x9105500)
#define MONO_SECURITY_X509_X509EXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9105B70)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509Extension_TypeDefinitionIndex = 35754;

	class X509Extension : public Il2CppObject
	{
	public:
		::System::String* extnOid; // 0x10
		::System::Boolean extnCritical; // 0x18
		::Mono::Security::ASN1* extnValue; // 0x20

		::System::Void .ctor(::Mono::Security::ASN1* arg)
		{
			((::System::Void(*)(::Mono::Security::ASN1*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Mono::Security::X509::X509Extension* arg)
		{
			((::System::Void(*)(::Mono::Security::X509::X509Extension*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Decode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_DECODE_OFFSET))(nullptr);
		}

		::System::Void Encode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_ENCODE_OFFSET))(nullptr);
		}

		::System::String* get_Oid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_GET_OID_OFFSET))(nullptr);
		}

		::System::Boolean get_Critical()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_GET_CRITICAL_OFFSET))(nullptr);
		}

		::Mono::Security::ASN1* get_Value()
		{
			return (return (::Mono::Security::ASN1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void WriteLine(::System::Text::StringBuilder* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_WRITELINE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

