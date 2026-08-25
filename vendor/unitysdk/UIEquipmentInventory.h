#pragma once
#include "unitysdk.h"

class UIEquipmentSort;
class InventoryScrollViewController;
class UIEquipmentInfo;
namespace UnityEngine { class GameObject; }
class TooltipButton;
class UIEquipmentNameSearch;
class InventoryScrollItemInfo;
class SortingRule;
class NameSearchResult;
class EquipmentObject;

#define UIEQUIPMENTINVENTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x241A1C0)
#define UIEQUIPMENTINVENTORY_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x241A1D0)
#define UIEQUIPMENTINVENTORY_ONSORT_OFFSET UNITYSDK_OFFSET(0x241A3C0)
#define UIEQUIPMENTINVENTORY_ONSEARCHRESULTUPDATED_OFFSET UNITYSDK_OFFSET(0x241AD10)
#define UIEQUIPMENTINVENTORY_ONOPENED_OFFSET UNITYSDK_OFFSET(0x241AD40)
#define UIEQUIPMENTINVENTORY_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x241AD80)
#define UIEQUIPMENTINVENTORY_REFRESHSHORTCUTBUTTON_OFFSET UNITYSDK_OFFSET(0x241A2E0)
#define UIEQUIPMENTINVENTORY_AWAKE_OFFSET UNITYSDK_OFFSET(0x241B130)
#define UIEQUIPMENTINVENTORY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x241B1C0)

	inline static constexpr unsigned int UIEquipmentInventory_TypeDefinitionIndex = 5484;

	class UIEquipmentInventory : public Il2CppObject
	{
	public:
		UIEquipmentSort* UIEquipmentSort; // 0xD8
		InventoryScrollViewController* ScrollView; // 0xE0
		UIEquipmentInfo* ItemInfo; // 0xE8
		::UnityEngine::GameObject* ItemEmptyIndicator; // 0xF0
		::UnityEngine::GameObject* NotEmptyIndicator; // 0xF8
		::UnityEngine::GameObject* StatDisplay; // 0x100
		TooltipButton* shortcutButton; // 0x108
		::UnityEngine::GameObject* inventoryEmptyLabel; // 0x110
		UIEquipmentNameSearch* nameSearch; // 0x118
		::System::Int32 columnCount; // 0x0
		InventoryScrollItemInfo* curSelected; // 0x120

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTINVENTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickItem(InventoryScrollItemInfo* arg)
		{
			((::System::Void(*)(InventoryScrollItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTINVENTORY_ONCLICKITEM_OFFSET))(arg, nullptr);
		}

		::System::Void OnSort(Il2CppObject* arg, SortingRule* arg2)
		{
			((::System::Void(*)(Il2CppObject*, SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTINVENTORY_ONSORT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnSearchResultUpdated(NameSearchResult* arg)
		{
			((::System::Void(*)(NameSearchResult*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTINVENTORY_ONSEARCHRESULTUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTINVENTORY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTINVENTORY_REFRESHUI_OFFSET))(nullptr);
		}

		::System::Void RefreshShortcutButton(EquipmentObject* arg)
		{
			((::System::Void(*)(EquipmentObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTINVENTORY_REFRESHSHORTCUTBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTINVENTORY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTINVENTORY_ONDESTROY_OFFSET))(nullptr);
		}

	};

