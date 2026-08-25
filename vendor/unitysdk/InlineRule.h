#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class StyleSheet; }
namespace UnityEngine::UIElements { class StyleRule; }

	inline static constexpr unsigned int InlineRule_TypeDefinitionIndex = 30603;

	class InlineRule : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::StyleSheet* sheet; // 0x10
		::UnityEngine::UIElements::StyleRule* rule; // 0x18
		::Il2CppArray<::System::Object*>* propertyIds; // 0x20

	};

