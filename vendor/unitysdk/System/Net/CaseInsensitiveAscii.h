#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_CASEINSENSITIVEASCII_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9A4AE90)
#define SYSTEM_NET_CASEINSENSITIVEASCII_COMPARE_OFFSET UNITYSDK_OFFSET(0x9A4AFA0)
#define SYSTEM_NET_CASEINSENSITIVEASCII_FASTGETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9A4B140)
#define SYSTEM_NET_CASEINSENSITIVEASCII_EQUALS_OFFSET UNITYSDK_OFFSET(0x9A4B230)
#define SYSTEM_NET_CASEINSENSITIVEASCII_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A4B3B0)
#define SYSTEM_NET_CASEINSENSITIVEASCII_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A4B3C0)

namespace System::Net
{
	inline static constexpr unsigned int CaseInsensitiveAscii_TypeDefinitionIndex = 29702;

	class CaseInsensitiveAscii : public Il2CppObject
	{
	public:
		::System::Net::CaseInsensitiveAscii* StaticInstance; // 0x0
		::Il2CppArray<::System::Object*>* AsciiToLower; // 0x8

		::System::Int32 GetHashCode(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CASEINSENSITIVEASCII_GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CASEINSENSITIVEASCII_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 FastGetHashCode(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CASEINSENSITIVEASCII_FASTGETHASHCODE_OFFSET))(str, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CASEINSENSITIVEASCII_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CASEINSENSITIVEASCII_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CASEINSENSITIVEASCII_.CCTOR_OFFSET))(nullptr);
		}

	};
}

