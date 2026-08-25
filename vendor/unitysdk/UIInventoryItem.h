#pragma once
#include "unitysdk.h"

class UIEquipmentCard;
class UINonEquipmentCard;
class UIExpendables;
class UITrophyCollectionItem;
class InventoryScrollItemInfo;
class UIEquipmentInventory;
class UINonEquipmentInventory;
class UITrophyCollection;

#define UIINVENTORYITEM_ONCLICK_OFFSET UNITYSDK_OFFSET(0x22067A0)
#define UIINVENTORYITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0x2206A30)
#define UIINVENTORYITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x2206E90)
#define UIINVENTORYITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x2206F60)

	inline static constexpr unsigned int UIInventoryItem_TypeDefinitionIndex = 4333;

	class UIInventoryItem : public Il2CppObject
	{
	public:
		UIEquipmentCard* equipmentCard; // 0x18
		UINonEquipmentCard* noneEquipmentCard; // 0x20
		UIExpendables* expendables; // 0x28
		UITrophyCollectionItem* trophyCollectionItem; // 0x30
		InventoryScrollItemInfo* equipmentInfo; // 0x38
		UIEquipmentInventory* uiEquipment; // 0x40
		UINonEquipmentInventory* uiNonEquipment; // 0x48
		UITrophyCollection* uiTrophyCollection; // 0x50

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINVENTORYITEM_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void SetData(InventoryScrollItemInfo* arg)
		{
			((::System::Void(*)(InventoryScrollItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIINVENTORYITEM_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINVENTORYITEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINVENTORYITEM_.CTOR_OFFSET))(nullptr);
		}

	};

