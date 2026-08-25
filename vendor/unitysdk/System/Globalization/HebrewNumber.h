#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_HEBREWNUMBER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9265160)
#define SYSTEM_GLOBALIZATION_HEBREWNUMBER_PARSEBYCHAR_OFFSET UNITYSDK_OFFSET(0x9263240)
#define SYSTEM_GLOBALIZATION_HEBREWNUMBER_ISDIGIT_OFFSET UNITYSDK_OFFSET(0x9263160)
#define SYSTEM_GLOBALIZATION_HEBREWNUMBER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9265350)

namespace System::Globalization
{
	inline static constexpr unsigned int HebrewNumber_TypeDefinitionIndex = 24970;

	class HebrewNumber : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_hebrewValues; // 0x0
		::System::Char s_maxHebrewNumberCh; // 0x8
		::Il2CppArray<::System::Object*>* s_numberPasingState; // 0x10

		::System::String* ToString(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWNUMBER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Globalization::HebrewNumberParsingState* ParseByChar(::System::Char arg, ::System::Globalization::HebrewNumberParsingContext&* arg)
		{
			return (return (::System::Globalization::HebrewNumberParsingState*(*)(::System::Char, ::System::Globalization::HebrewNumberParsingContext&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWNUMBER_PARSEBYCHAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsDigit(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWNUMBER_ISDIGIT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_HEBREWNUMBER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

