#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class NonEquipmentItemList_NotScrollable;
class NonEquipmentItemList_Scrollable;

#define UIPOPUP_NONEQUIPMENTITEM_GET_NONEQUIPMENTITEMLIST_NOTSCROLLABLE_OFFSET UNITYSDK_OFFSET(0x2716BB0)
#define UIPOPUP_NONEQUIPMENTITEM_GET_NONEQUIPMENTITEMLIST_SCROLLABLE_OFFSET UNITYSDK_OFFSET(0x2716C20)
#define UIPOPUP_NONEQUIPMENTITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x2716C90)
#define UIPOPUP_NONEQUIPMENTITEM_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x2716DC0)
#define UIPOPUP_NONEQUIPMENTITEM_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2716E10)
#define UIPOPUP_NONEQUIPMENTITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2717030)
#define UIPOPUP_NONEQUIPMENTITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2717530)
#define UIPOPUP_NONEQUIPMENTITEM_SETLIST_OFFSET UNITYSDK_OFFSET(0x27171B0)
#define UIPOPUP_NONEQUIPMENTITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x27176B0)

	inline static constexpr unsigned int UIPopup_NonEquipmentItem_TypeDefinitionIndex = 7141;

	class UIPopup_NonEquipmentItem : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UILabel* descriptionLabel; // 0xE0
		NonEquipmentItemList_NotScrollable* _nonEquipmentItemList_NotScrollable; // 0xE8
		NonEquipmentItemList_Scrollable* _nonEquipmentItemList_Scrollable; // 0xF0
		::System::Action* onClosedAction; // 0xF8

		NonEquipmentItemList_NotScrollable* get_nonEquipmentItemList_NotScrollable()
		{
			return ((NonEquipmentItemList_NotScrollable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NONEQUIPMENTITEM_GET_NONEQUIPMENTITEMLIST_NOTSCROLLABLE_OFFSET))(nullptr);
		}

		NonEquipmentItemList_Scrollable* get_nonEquipmentItemList_Scrollable()
		{
			return ((NonEquipmentItemList_Scrollable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NONEQUIPMENTITEM_GET_NONEQUIPMENTITEMLIST_SCROLLABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NONEQUIPMENTITEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NONEQUIPMENTITEM_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NONEQUIPMENTITEM_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, ::System::Action* arg2, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Action*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NONEQUIPMENTITEM_INITIALIZE_OFFSET))(arg, arg2, str, nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, ::System::Action* arg2, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Action*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NONEQUIPMENTITEM_INITIALIZE_OFFSET))(arg, arg2, str, nullptr);
		}

		::System::Void SetList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NONEQUIPMENTITEM_SETLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NONEQUIPMENTITEM_.CTOR_OFFSET))(nullptr);
		}

	};

