#pragma once
#include "unitysdk.h"

class MXButton;
class UICharacterCard;
namespace UnityEngine { class GameObject; }
class UILabel;
class SortingRule;
class EventBonusChar;

#define UIPOPUPEVENTBONUSCHARSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2479BD0)
#define UIPOPUPEVENTBONUSCHARSLOT_ADD_LONGPRESSED_OFFSET UNITYSDK_OFFSET(0x2479A30)
#define UIPOPUPEVENTBONUSCHARSLOT_GET_EVENTBONUSCHAR_OFFSET UNITYSDK_OFFSET(0x2479BE0)
#define UIPOPUPEVENTBONUSCHARSLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2479BF0)
#define UIPOPUPEVENTBONUSCHARSLOT_REFRESHECHELONMARK_OFFSET UNITYSDK_OFFSET(0x2479E00)
#define UIPOPUPEVENTBONUSCHARSLOT_ADD_CLICKED_OFFSET UNITYSDK_OFFSET(0x2479990)
#define UIPOPUPEVENTBONUSCHARSLOT_SET_EVENTBONUSCHAR_OFFSET UNITYSDK_OFFSET(0x247A040)
#define UIPOPUPEVENTBONUSCHARSLOT_REMOVE_LONGPRESSED_OFFSET UNITYSDK_OFFSET(0x247A050)
#define UIPOPUPEVENTBONUSCHARSLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0x24794A0)
#define UIPOPUPEVENTBONUSCHARSLOT_REMOVE_CLICKED_OFFSET UNITYSDK_OFFSET(0x247A2D0)
#define UIPOPUPEVENTBONUSCHARSLOT_ONCLICKSLOTBUTTON_OFFSET UNITYSDK_OFFSET(0x247A370)
#define UIPOPUPEVENTBONUSCHARSLOT_ONLONGPRESSSLOTBUTTON_OFFSET UNITYSDK_OFFSET(0x247A390)
#define UIPOPUPEVENTBONUSCHARSLOT_SETSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x247A0F0)

	inline static constexpr unsigned int UIPopupEventBonusCharSlot_TypeDefinitionIndex = 5663;

	class UIPopupEventBonusCharSlot : public Il2CppObject
	{
	public:
		MXButton* slotButton; // 0x18
		UICharacterCard* characterCard; // 0x20
		::UnityEngine::GameObject* selectObject; // 0x28
		::UnityEngine::GameObject* formationMarkRoot; // 0x30
		::UnityEngine::GameObject* formationMarkOnRoot; // 0x38
		UILabel* formationMarkOnLabel; // 0x40
		UILabel* sortLabel; // 0x48
		::UnityEngine::GameObject* dimmedroot; // 0x50
		SortingRule* sortingRule; // 0x58
		EventBonusChar* _EventBonusChar_k__BackingField; // 0x60
		Il2CppObject* Clicked; // 0x68
		Il2CppObject* LongPressed; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPEVENTBONUSCHARSLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void add_LongPressed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPEVENTBONUSCHARSLOT_ADD_LONGPRESSED_OFFSET))(arg, nullptr);
		}

		EventBonusChar* get_EventBonusChar()
		{
			return ((EventBonusChar*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPEVENTBONUSCHARSLOT_GET_EVENTBONUSCHAR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPEVENTBONUSCHARSLOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void RefreshEchelonMark()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPEVENTBONUSCHARSLOT_REFRESHECHELONMARK_OFFSET))(nullptr);
		}

		::System::Void add_Clicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPEVENTBONUSCHARSLOT_ADD_CLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventBonusChar(EventBonusChar* arg)
		{
			((::System::Void(*)(EventBonusChar*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPEVENTBONUSCHARSLOT_SET_EVENTBONUSCHAR_OFFSET))(arg, nullptr);
		}

		::System::Void remove_LongPressed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPEVENTBONUSCHARSLOT_REMOVE_LONGPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(EventBonusChar* arg, SortingRule* arg2)
		{
			((::System::Void(*)(EventBonusChar*, SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPEVENTBONUSCHARSLOT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void remove_Clicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPEVENTBONUSCHARSLOT_REMOVE_CLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSlotButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPEVENTBONUSCHARSLOT_ONCLICKSLOTBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnLongPressSlotButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPEVENTBONUSCHARSLOT_ONLONGPRESSSLOTBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetSortingRule()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPEVENTBONUSCHARSLOT_SETSORTINGRULE_OFFSET))(nullptr);
		}

	};

