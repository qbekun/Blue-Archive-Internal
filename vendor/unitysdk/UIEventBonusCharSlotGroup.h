#pragma once
#include "unitysdk.h"

class UIPopupEventBonusCharSlot;
class EventBonusCharGroup;

#define UIEVENTBONUSCHARSLOTGROUP_ONSLOTLONGPRESSED_OFFSET UNITYSDK_OFFSET(0x2479340)
#define UIEVENTBONUSCHARSLOTGROUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x2479360)
#define UIEVENTBONUSCHARSLOTGROUP_REMOVE_SLOTCLICKED_OFFSET UNITYSDK_OFFSET(0x24796B0)
#define UIEVENTBONUSCHARSLOTGROUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2479750)
#define UIEVENTBONUSCHARSLOTGROUP_ONSLOTCLICKED_OFFSET UNITYSDK_OFFSET(0x2479AD0)
#define UIEVENTBONUSCHARSLOTGROUP_ADD_SLOTCLICKED_OFFSET UNITYSDK_OFFSET(0x2474750)
#define UIEVENTBONUSCHARSLOTGROUP_ADD_SLOTLONGPRESSED_OFFSET UNITYSDK_OFFSET(0x24747F0)
#define UIEVENTBONUSCHARSLOTGROUP_REMOVE_SLOTLONGPRESSED_OFFSET UNITYSDK_OFFSET(0x2479AF0)
#define UIEVENTBONUSCHARSLOTGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2479B90)

	inline static constexpr unsigned int UIEventBonusCharSlotGroup_TypeDefinitionIndex = 5662;

	class UIEventBonusCharSlotGroup : public ::System::Xml::XmlNamespaceScope
	{
	public:
		::Il2CppArray<::System::Object*>* slots; // 0x28
		Il2CppObject* SlotClicked; // 0x30
		Il2CppObject* SlotLongPressed; // 0x38

		::System::Void OnSlotLongPressed(UIPopupEventBonusCharSlot* arg)
		{
			((::System::Void(*)(UIPopupEventBonusCharSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHARSLOTGROUP_ONSLOTLONGPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(EventBonusCharGroup* arg)
		{
			((::System::Void(*)(EventBonusCharGroup*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHARSLOTGROUP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void remove_SlotClicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHARSLOTGROUP_REMOVE_SLOTCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHARSLOTGROUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnSlotClicked(UIPopupEventBonusCharSlot* arg)
		{
			((::System::Void(*)(UIPopupEventBonusCharSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHARSLOTGROUP_ONSLOTCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void add_SlotClicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHARSLOTGROUP_ADD_SLOTCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void add_SlotLongPressed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHARSLOTGROUP_ADD_SLOTLONGPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_SlotLongPressed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHARSLOTGROUP_REMOVE_SLOTLONGPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHARSLOTGROUP_.CTOR_OFFSET))(nullptr);
		}

	};

