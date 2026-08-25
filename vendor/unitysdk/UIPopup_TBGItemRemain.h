#pragma once
#include "unitysdk.h"

class UILabel;
class UIScrollView;
class UIGrid;
class UITBGRemainItemSlot;
class MXButton;

#define UIPOPUP_TBGITEMREMAIN_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0xB3DE90)
#define UIPOPUP_TBGITEMREMAIN_SETDATA_OFFSET UNITYSDK_OFFSET(0xB3E300)
#define UIPOPUP_TBGITEMREMAIN_.CTOR_OFFSET UNITYSDK_OFFSET(0xB3E9A0)
#define UIPOPUP_TBGITEMREMAIN_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0xB3EA20)
#define UIPOPUP_TBGITEMREMAIN_START_OFFSET UNITYSDK_OFFSET(0xB3EAB0)
#define UIPOPUP_TBGITEMREMAIN_GET_ITEMSLOTS_OFFSET UNITYSDK_OFFSET(0xB3E210)
#define UIPOPUP_TBGITEMREMAIN_ONTOGGLEITEMSLOT_OFFSET UNITYSDK_OFFSET(0xB3EE50)
#define UIPOPUP_TBGITEMREMAIN_REFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0xB3E850)

	inline static constexpr unsigned int UIPopup_TBGItemRemain_TypeDefinitionIndex = 8324;

	class UIPopup_TBGItemRemain : public Il2CppObject
	{
	public:
		UILabel* DescLabel; // 0xD8
		UILabel* SelectCountLabel; // 0xE0
		UIScrollView* ItemSlotsScroll; // 0xE8
		UIGrid* ItemSlotGrid; // 0xF0
		UITBGRemainItemSlot* remainItemSlotPref; // 0xF8
		Il2CppObject* itemSlots; // 0x100
		MXButton* OkButton; // 0x108
		MXButton* CancelButton; // 0x110
		MXButton* CloseButton; // 0x118
		Il2CppObject* selectedSlots; // 0x120
		::System::Int32 maxSelect; // 0x128
		::System::Boolean isSweep; // 0x12C

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGITEMREMAIN_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGITEMREMAIN_SETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGITEMREMAIN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGITEMREMAIN_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGITEMREMAIN_START_OFFSET))(nullptr);
		}

		Il2CppObject* get_ItemSlots()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGITEMREMAIN_GET_ITEMSLOTS_OFFSET))(nullptr);
		}

		::System::Void OnToggleItemSlot(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGITEMREMAIN_ONTOGGLEITEMSLOT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGITEMREMAIN_REFRESHCOUNT_OFFSET))(nullptr);
		}

	};

