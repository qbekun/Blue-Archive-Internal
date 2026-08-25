#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleSheet; }
namespace UnityEngine::UIElements { class StyleValueHandle; }

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int StylePropertyValue_TypeDefinitionIndex = 30802;

	class StylePropertyValue : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::StyleSheet* sheet; // 0x10
		::UnityEngine::UIElements::StyleValueHandle* handle; // 0x18

	};
}

