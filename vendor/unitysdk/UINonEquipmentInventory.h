#pragma once
#include "unitysdk.h"

class UIItemSort;
class UINonEquipmentUse;
namespace UnityEngine { class GameObject; }
class UILabel;
class InventoryScrollViewController;
class UINonEquipmentInfo;
class TooltipButton;
class UINonEquipmentNameSearch;
class InventoryScrollItemInfo;
class ItemObject;
class NameSearchResult;
class SortingRule;
class ItemConsumeResponseMessage;
class ItemFilter;
class ItemSelectTicketResponseMessage;

#define UINONEQUIPMENTINVENTORY_AWAKE_OFFSET UNITYSDK_OFFSET(0x26B6450)
#define UINONEQUIPMENTINVENTORY_ONSEARCHRESULTUPDATED_OFFSET UNITYSDK_OFFSET(0x26B6570)
#define UINONEQUIPMENTINVENTORY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x26B65E0)
#define UINONEQUIPMENTINVENTORY_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x26B6730)
#define UINONEQUIPMENTINVENTORY_SETCURSELECTEDITEM_OFFSET UNITYSDK_OFFSET(0x26B6AD0)
#define UINONEQUIPMENTINVENTORY_ONOPENED_OFFSET UNITYSDK_OFFSET(0x26B74E0)
#define UINONEQUIPMENTINVENTORY_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x26B7560)
#define UINONEQUIPMENTINVENTORY_ONSORT_OFFSET UNITYSDK_OFFSET(0x26B7580)
#define UINONEQUIPMENTINVENTORY_MOVETO_OFFSET UNITYSDK_OFFSET(0x26B7F20)
#define UINONEQUIPMENTINVENTORY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x26B8490)
#define UINONEQUIPMENTINVENTORY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x26B85B0)
#define UINONEQUIPMENTINVENTORY__ONSORT_B__23_1_OFFSET UNITYSDK_OFFSET(0x26B8760)
#define UINONEQUIPMENTINVENTORY_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x26B8790)
#define UINONEQUIPMENTINVENTORY_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x26B8880)
#define UINONEQUIPMENTINVENTORY_HANDLETASKRESPONSE_OFFSET UNITYSDK_OFFSET(0x26B88A0)
#define UINONEQUIPMENTINVENTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x26B8900)
#define UINONEQUIPMENTINVENTORY_SELECTITEM_OFFSET UNITYSDK_OFFSET(0x26B6B70)
#define UINONEQUIPMENTINVENTORY_GETOFFENUMFLAG_OFFSET UNITYSDK_OFFSET(0x26B8920)
#define UINONEQUIPMENTINVENTORY_HANDLEITEMSELECTTICKETRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x26B8C80)

	inline static constexpr unsigned int UINonEquipmentInventory_TypeDefinitionIndex = 6909;

	class UINonEquipmentInventory : public Il2CppObject
	{
	public:
		UIItemSort* UIItemSort; // 0xD8
		UINonEquipmentUse* UIUse; // 0xE0
		::UnityEngine::GameObject* UINonUse; // 0xE8
		UILabel* nonUseDescriptionLabel; // 0xF0
		InventoryScrollViewController* ScrollView; // 0xF8
		UINonEquipmentInfo* ItemInfo; // 0x100
		::UnityEngine::GameObject* ItemEmptyIndicator; // 0x108
		::UnityEngine::GameObject* NotEmptyIndicator; // 0x110
		TooltipButton* shortcutButton; // 0x118
		::UnityEngine::GameObject* inventoryEmptyLabel; // 0x120
		UINonEquipmentNameSearch* nameSearch; // 0x128
		::System::Int32 columnCount; // 0x0
		InventoryScrollItemInfo* curSelected; // 0x130
		::System::Boolean onlyShowCanUseItem; // 0x138
		ItemObject* selectedItem; // 0x140
		::System::Boolean isResetScroll; // 0x148

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTINVENTORY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnSearchResultUpdated(NameSearchResult* arg)
		{
			((::System::Void(*)(NameSearchResult*, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTINVENTORY_ONSEARCHRESULTUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTINVENTORY_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void RefreshUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTINVENTORY_REFRESHUI_OFFSET))(nullptr);
		}

		::System::Void SetCurSelectedItem(InventoryScrollItemInfo* arg)
		{
			((::System::Void(*)(InventoryScrollItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTINVENTORY_SETCURSELECTEDITEM_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTINVENTORY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTINVENTORY_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnSort(Il2CppObject* arg, SortingRule* arg2)
		{
			((::System::Void(*)(Il2CppObject*, SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTINVENTORY_ONSORT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void MoveTo(ItemObject* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(ItemObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTINVENTORY_MOVETO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTINVENTORY_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTINVENTORY_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean _OnSort_b__23_1(ItemObject* arg)
		{
			return ((::System::Boolean(*)(ItemObject*, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTINVENTORY__ONSORT_B__23_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickItem(InventoryScrollItemInfo* arg)
		{
			((::System::Void(*)(InventoryScrollItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTINVENTORY_ONCLICKITEM_OFFSET))(arg, nullptr);
		}

		::System::Void Initialized(ItemObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(ItemObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTINVENTORY_INITIALIZED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandleTaskResponse(ItemConsumeResponseMessage* arg)
		{
			return ((::System::Boolean(*)(ItemConsumeResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTINVENTORY_HANDLETASKRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTINVENTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SelectItem(ItemObject* arg)
		{
			((::System::Void(*)(ItemObject*, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTINVENTORY_SELECTITEM_OFFSET))(arg, nullptr);
		}

		ItemFilter* GetOffEnumFlag(ItemFilter* arg)
		{
			return ((ItemFilter*(*)(ItemFilter*, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTINVENTORY_GETOFFENUMFLAG_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleItemSelectTicketResponseMessage(ItemSelectTicketResponseMessage* arg)
		{
			return ((::System::Boolean(*)(ItemSelectTicketResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTINVENTORY_HANDLEITEMSELECTTICKETRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

	};

