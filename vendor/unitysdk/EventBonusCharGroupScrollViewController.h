#pragma once
#include "unitysdk.h"

class UIPopupEventBonusCharSlot;

#define EVENTBONUSCHARGROUPSCROLLVIEWCONTROLLER_ADD_SLOTLONGPRESSED_OFFSET UNITYSDK_OFFSET(0x2474260)
#define EVENTBONUSCHARGROUPSCROLLVIEWCONTROLLER_REMOVE_SLOTCLICKED_OFFSET UNITYSDK_OFFSET(0x2474300)
#define EVENTBONUSCHARGROUPSCROLLVIEWCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x24743A0)
#define EVENTBONUSCHARGROUPSCROLLVIEWCONTROLLER_REMOVE_SLOTLONGPRESSED_OFFSET UNITYSDK_OFFSET(0x2474890)
#define EVENTBONUSCHARGROUPSCROLLVIEWCONTROLLER_ONSLOTCLICKED_OFFSET UNITYSDK_OFFSET(0x2474930)
#define EVENTBONUSCHARGROUPSCROLLVIEWCONTROLLER_ONSLOTLONGPRESSED_OFFSET UNITYSDK_OFFSET(0x2474950)
#define EVENTBONUSCHARGROUPSCROLLVIEWCONTROLLER_ADD_SLOTCLICKED_OFFSET UNITYSDK_OFFSET(0x2474970)
#define EVENTBONUSCHARGROUPSCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2474A10)

	inline static constexpr unsigned int EventBonusCharGroupScrollViewController_TypeDefinitionIndex = 5652;

	class EventBonusCharGroupScrollViewController : public ::System::Xml::DocumentXPathNodeIterator_AllElemChildren
	{
	public:
		Il2CppObject* SlotClicked; // 0x90
		Il2CppObject* SlotLongPressed; // 0x98

		::System::Void add_SlotLongPressed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTBONUSCHARGROUPSCROLLVIEWCONTROLLER_ADD_SLOTLONGPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_SlotClicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTBONUSCHARGROUPSCROLLVIEWCONTROLLER_REMOVE_SLOTCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTBONUSCHARGROUPSCROLLVIEWCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void remove_SlotLongPressed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTBONUSCHARGROUPSCROLLVIEWCONTROLLER_REMOVE_SLOTLONGPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Void OnSlotClicked(UIPopupEventBonusCharSlot* arg)
		{
			((::System::Void(*)(UIPopupEventBonusCharSlot*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTBONUSCHARGROUPSCROLLVIEWCONTROLLER_ONSLOTCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void OnSlotLongPressed(UIPopupEventBonusCharSlot* arg)
		{
			((::System::Void(*)(UIPopupEventBonusCharSlot*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTBONUSCHARGROUPSCROLLVIEWCONTROLLER_ONSLOTLONGPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Void add_SlotClicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTBONUSCHARGROUPSCROLLVIEWCONTROLLER_ADD_SLOTCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTBONUSCHARGROUPSCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

