#pragma once
#include "../unitysdk.h"

namespace FlatData { class BubbleType; }

namespace FlatData
{
	inline static constexpr unsigned int BubbleType_TypeDefinitionIndex = 9352;

	class BubbleType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::BubbleType* Idle; // 0x0
		::FlatData::BubbleType* Monologue; // 0x0
		::FlatData::BubbleType* EmoticonNormal; // 0x0
		::FlatData::BubbleType* EmoticonFavorite; // 0x0
		::FlatData::BubbleType* EmoticonReward; // 0x0
		::FlatData::BubbleType* EmoticonGiveGift; // 0x0

	};
}

