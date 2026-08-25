#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_VALIDATIONHELPER_MAKESTRINGNULL_OFFSET UNITYSDK_OFFSET(0x9BA6750)
#define SYSTEM_NET_VALIDATIONHELPER_ISBLANKSTRING_OFFSET UNITYSDK_OFFSET(0x9BA7300)
#define SYSTEM_NET_VALIDATIONHELPER_VALIDATETCPPORT_OFFSET UNITYSDK_OFFSET(0x9BA7310)
#define SYSTEM_NET_VALIDATIONHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9BA7330)

namespace System::Net
{
	inline static constexpr unsigned int ValidationHelper_TypeDefinitionIndex = 29685;

	class ValidationHelper : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* EmptyArray; // 0x0
		::Il2CppArray<::System::Object*>* InvalidMethodChars; // 0x8
		::Il2CppArray<::System::Object*>* InvalidParamChars; // 0x10

		::System::String* MakeStringNull(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_VALIDATIONHELPER_MAKESTRINGNULL_OFFSET))(str, nullptr);
		}

		::System::Boolean IsBlankString(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_VALIDATIONHELPER_ISBLANKSTRING_OFFSET))(str, nullptr);
		}

		::System::Boolean ValidateTcpPort(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_VALIDATIONHELPER_VALIDATETCPPORT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_VALIDATIONHELPER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

