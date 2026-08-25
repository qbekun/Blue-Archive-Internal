#pragma once
#include "../unitysdk.h"

namespace FlatData { class ItemCategory; }

namespace FlatData
{
	inline static constexpr unsigned int ItemCategory_TypeDefinitionIndex = 9537;

	class ItemCategory : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ItemCategory* Coin; // 0x0
		::FlatData::ItemCategory* CharacterExpGrowth; // 0x0
		::FlatData::ItemCategory* SecretStone; // 0x0
		::FlatData::ItemCategory* Material; // 0x0
		::FlatData::ItemCategory* Consumable; // 0x0
		::FlatData::ItemCategory* Collectible; // 0x0
		::FlatData::ItemCategory* Favor; // 0x0
		::FlatData::ItemCategory* RecruitCoin; // 0x0
		::FlatData::ItemCategory* MonthlyBonus; // 0x0
		::FlatData::ItemCategory* InvisibleToken; // 0x0
		::FlatData::ItemCategory* BattlePass; // 0x0
		::FlatData::ItemCategory* ProductSelect; // 0x0
		::FlatData::ItemCategory* ProductDailyRecord; // 0x0

	};
}

