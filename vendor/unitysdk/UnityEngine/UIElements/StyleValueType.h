#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleValueType; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleValueType_TypeDefinitionIndex = 30656;

	class StyleValueType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::StyleValueType* Invalid; // 0x0
		::UnityEngine::UIElements::StyleValueType* Keyword; // 0x0
		::UnityEngine::UIElements::StyleValueType* Float; // 0x0
		::UnityEngine::UIElements::StyleValueType* Dimension; // 0x0
		::UnityEngine::UIElements::StyleValueType* Color; // 0x0
		::UnityEngine::UIElements::StyleValueType* ResourcePath; // 0x0
		::UnityEngine::UIElements::StyleValueType* AssetReference; // 0x0
		::UnityEngine::UIElements::StyleValueType* Enum; // 0x0
		::UnityEngine::UIElements::StyleValueType* Variable; // 0x0
		::UnityEngine::UIElements::StyleValueType* String; // 0x0
		::UnityEngine::UIElements::StyleValueType* Function; // 0x0
		::UnityEngine::UIElements::StyleValueType* CommaSeparator; // 0x0
		::UnityEngine::UIElements::StyleValueType* ScalableImage; // 0x0
		::UnityEngine::UIElements::StyleValueType* MissingAssetReference; // 0x0

	};
}

