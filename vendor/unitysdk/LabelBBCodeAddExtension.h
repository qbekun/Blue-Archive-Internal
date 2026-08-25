#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }

#define LABELBBCODEADDEXTENSION_REPLACE_OFFSET UNITYSDK_OFFSET(0x27DD320)
#define LABELBBCODEADDEXTENSION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x27DD460)

	inline static constexpr unsigned int LabelBBCodeAddExtension_TypeDefinitionIndex = 7647;

	class LabelBBCodeAddExtension : public Il2CppObject
	{
	public:
		::System::Text::RegularExpressions::Regex* customTagRegex; // 0x0

		::System::String* Replace(::System::String* str, ::UnityEngine::Color* arg)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + LABELBBCODEADDEXTENSION_REPLACE_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABELBBCODEADDEXTENSION_.CCTOR_OFFSET))(nullptr);
		}

	};

