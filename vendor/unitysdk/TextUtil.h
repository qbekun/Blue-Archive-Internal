#pragma once
#include "unitysdk.h"

#define TEXTUTIL_HASJONGEXCEPTRIEUL_OFFSET UNITYSDK_OFFSET(0x1FDDDC0)
#define TEXTUTIL_REPLACEKRPOSTPOSITION_OFFSET UNITYSDK_OFFSET(0x1FDDE30)
#define TEXTUTIL_REPLACEPOSTPOSITION_OFFSET UNITYSDK_OFFSET(0x1FDE4F0)
#define TEXTUTIL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDE590)
#define TEXTUTIL_HASJONG_OFFSET UNITYSDK_OFFSET(0x1FDE490)

	inline static constexpr unsigned int TextUtil_TypeDefinitionIndex = 3055;

	class TextUtil : public Il2CppObject
	{
	public:
		::System::Text::RegularExpressions::Regex* postpositionRegex; // 0x0
		Il2CppObject* postpositionPatternPaird; // 0x8

		::System::Boolean HasJongExceptRieul(::System::Char arg)
		{
			return ((::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + TEXTUTIL_HASJONGEXCEPTRIEUL_OFFSET))(arg, nullptr);
		}

		::System::String* ReplaceKrPostposition(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTUTIL_REPLACEKRPOSTPOSITION_OFFSET))(str, nullptr);
		}

		::System::String* ReplacePostposition(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTUTIL_REPLACEPOSTPOSITION_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTUTIL_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean HasJong(::System::Char arg)
		{
			return ((::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + TEXTUTIL_HASJONG_OFFSET))(arg, nullptr);
		}

	};

