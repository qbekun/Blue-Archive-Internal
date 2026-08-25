#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::LowLevel { class FontFeatureLookupFlags; }

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int FontFeatureLookupFlags_TypeDefinitionIndex = 37525;

	class FontFeatureLookupFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags* None; // 0x0
		::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags* IgnoreLigatures; // 0x0
		::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags* IgnoreSpacingAdjustments; // 0x0

	};
}

