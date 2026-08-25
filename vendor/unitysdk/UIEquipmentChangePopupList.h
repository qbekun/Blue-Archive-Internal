#pragma once
#include "unitysdk.h"

class UIBatchModeConsumeItem;
class UIGrid;
class EquipmentInventoryObject;

#define UIEQUIPMENTCHANGEPOPUPLIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x22D34F0)
#define UIEQUIPMENTCHANGEPOPUPLIST_SETUI_OFFSET UNITYSDK_OFFSET(0x22D3550)
#define UIEQUIPMENTCHANGEPOPUPLIST_CREATEITEMUI_OFFSET UNITYSDK_OFFSET(0x22D39E0)
#define UIEQUIPMENTCHANGEPOPUPLIST_GET_INVENTORY_OFFSET UNITYSDK_OFFSET(0x22D3B20)
#define UIEQUIPMENTCHANGEPOPUPLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x22D3BE0)

	inline static constexpr unsigned int UIEquipmentChangePopupList_TypeDefinitionIndex = 4832;

	class UIEquipmentChangePopupList : public Il2CppObject
	{
	public:
		UIBatchModeConsumeItem* prefab; // 0x18
		UIGrid* grid; // 0x20
		Il2CppObject* items; // 0x28
		EquipmentInventoryObject* _inventory; // 0x30

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCHANGEPOPUPLIST_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetUI(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCHANGEPOPUPLIST_SETUI_OFFSET))(arg, nullptr);
		}

		::System::Void CreateItemUI(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCHANGEPOPUPLIST_CREATEITEMUI_OFFSET))(arg, arg2, nullptr);
		}

		EquipmentInventoryObject* get_Inventory()
		{
			return ((EquipmentInventoryObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCHANGEPOPUPLIST_GET_INVENTORY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCHANGEPOPUPLIST_.CTOR_OFFSET))(nullptr);
		}

	};

