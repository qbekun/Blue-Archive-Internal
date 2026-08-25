#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class FontAsset; }

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int FontWeightPair_TypeDefinitionIndex = 35562;

	class FontWeightPair : public Il2CppObject
	{
	public:
		::UnityEngine::TextCore::Text::FontAsset* regularTypeface; // 0x10
		::UnityEngine::TextCore::Text::FontAsset* italicTypeface; // 0x18

	};
}

