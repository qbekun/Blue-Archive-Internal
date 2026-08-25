#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleValueFunction; }

#define UNITYENGINE_UIELEMENTS_STYLEVALUEFUNCTIONEXTENSION_TOUSSSTRING_OFFSET UNITYSDK_OFFSET(0xA41DCC0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleValueFunctionExtension_TypeDefinitionIndex = 30652;

	class StyleValueFunctionExtension : public Il2CppObject
	{
	public:
		::System::String* ToUssString(::UnityEngine::UIElements::StyleValueFunction* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::UIElements::StyleValueFunction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUEFUNCTIONEXTENSION_TOUSSSTRING_OFFSET))(arg, nullptr);
		}

	};
}

