#pragma once
#include "../unitysdk.h"

namespace TMPro { class TMP_FontAsset; }

namespace TMPro
{
	inline static constexpr unsigned int TMP_FontWeightPair_TypeDefinitionIndex = 33662;

	class TMP_FontWeightPair : public Il2CppObject
	{
	public:
		::TMPro::TMP_FontAsset* regularTypeface; // 0x10
		::TMPro::TMP_FontAsset* italicTypeface; // 0x18

	};
}

