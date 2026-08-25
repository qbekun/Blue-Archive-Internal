#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleKeyword; }

#define UNITYENGINE_UIELEMENTS_ISTYLEVALUE`1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISTYLEVALUE`1_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IStyleValue`1_TypeDefinitionIndex = 30623;

	class IStyleValue`1 : public Il2CppObject
	{
	public:
		Il2CppObject* get_value()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEVALUE`1_GET_VALUE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleKeyword* get_keyword()
		{
			return (return (::UnityEngine::UIElements::StyleKeyword*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEVALUE`1_GET_KEYWORD_OFFSET))(nullptr);
		}

	};
}

