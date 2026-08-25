#pragma once
#include "unitysdk.h"

class ItemSlotType;

	inline static constexpr unsigned int ItemSlotType_TypeDefinitionIndex = 8392;

	class ItemSlotType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		ItemSlotType* InventoryItem; // 0x0
		ItemSlotType* RewardItem; // 0x0
		ItemSlotType* Gold; // 0x0
		ItemSlotType* RandomReward; // 0x0

	};

