#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleValueKeyword; }

#define UNITYENGINE_UIELEMENTS_STYLEVALUEKEYWORDEXTENSION_TOUSSSTRING_OFFSET UNITYSDK_OFFSET(0xA41DEC0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleValueKeywordExtension_TypeDefinitionIndex = 30655;

	class StyleValueKeywordExtension : public Il2CppObject
	{
	public:
		::System::String* ToUssString(::UnityEngine::UIElements::StyleValueKeyword* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::UIElements::StyleValueKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUEKEYWORDEXTENSION_TOUSSSTRING_OFFSET))(arg, nullptr);
		}

	};
}

