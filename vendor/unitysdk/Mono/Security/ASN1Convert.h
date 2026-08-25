#pragma once
#include "../../unitysdk.h"

namespace Mono::Security { class ASN1; }

#define MONO_SECURITY_ASN1CONVERT_FROMINT32_OFFSET UNITYSDK_OFFSET(0x90EE280)
#define MONO_SECURITY_ASN1CONVERT_FROMOID_OFFSET UNITYSDK_OFFSET(0x90EE3F0)
#define MONO_SECURITY_ASN1CONVERT_FROMUNSIGNEDBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x90EE4D0)
#define MONO_SECURITY_ASN1CONVERT_TOINT32_OFFSET UNITYSDK_OFFSET(0x90EE600)
#define MONO_SECURITY_ASN1CONVERT_TOOID_OFFSET UNITYSDK_OFFSET(0x90EE7F0)
#define MONO_SECURITY_ASN1CONVERT_TODATETIME_OFFSET UNITYSDK_OFFSET(0x90EEAE0)

namespace Mono::Security
{
	inline static constexpr unsigned int ASN1Convert_TypeDefinitionIndex = 35736;

	class ASN1Convert : public Il2CppObject
	{
	public:
		::Mono::Security::ASN1* FromInt32(::System::Int32 arg)
		{
			return (return (::Mono::Security::ASN1*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_FROMINT32_OFFSET))(arg, nullptr);
		}

		::Mono::Security::ASN1* FromOid(::System::String* str)
		{
			return (return (::Mono::Security::ASN1*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_FROMOID_OFFSET))(str, nullptr);
		}

		::Mono::Security::ASN1* FromUnsignedBigInteger(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Mono::Security::ASN1*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_FROMUNSIGNEDBIGINTEGER_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToInt32(::Mono::Security::ASN1* arg)
		{
			return (return (::System::Int32(*)(::Mono::Security::ASN1*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_TOINT32_OFFSET))(arg, nullptr);
		}

		::System::String* ToOid(::Mono::Security::ASN1* arg)
		{
			return (return (::System::String*(*)(::Mono::Security::ASN1*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_TOOID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* ToDateTime(::Mono::Security::ASN1* arg)
		{
			return (return (::System::DateTime*(*)(::Mono::Security::ASN1*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1CONVERT_TODATETIME_OFFSET))(arg, nullptr);
		}

	};
}

