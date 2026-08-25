#pragma once
#include "unitysdk.h"

class UICharacterCard;
namespace UnityEngine { class GameObject; }
class SortingRule;
class FormationCharacter;
class UILabel;
class UISprite;
class UIPopupFormationCharAssistInfo;
class FormationModel;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class CharacterObject;

#define UIPOPUPFORMATIONCHARSLOT_HANDLECOMBATSTYLECHANGED_OFFSET UNITYSDK_OFFSET(0x254D660)
#define UIPOPUPFORMATIONCHARSLOT_GET_CHARSLOTSPRITE_OFFSET UNITYSDK_OFFSET(0x254D760)
#define UIPOPUPFORMATIONCHARSLOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x254D7F0)
#define UIPOPUPFORMATIONCHARSLOT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x254D8C0)
#define UIPOPUPFORMATIONCHARSLOT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x254DA00)
#define UIPOPUPFORMATIONCHARSLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0x25411D0)
#define UIPOPUPFORMATIONCHARSLOT_SETDATAONBLACKLISTDISPLAY_OFFSET UNITYSDK_OFFSET(0x2540A20)
#define UIPOPUPFORMATIONCHARSLOT_GET_SLOTINFO_OFFSET UNITYSDK_OFFSET(0x254EC30)
#define UIPOPUPFORMATIONCHARSLOT_SETSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x254DB10)
#define UIPOPUPFORMATIONCHARSLOT_GET_ISSELECT_OFFSET UNITYSDK_OFFSET(0x254EE10)
#define UIPOPUPFORMATIONCHARSLOT_SETBANBYPERSONALITY_OFFSET UNITYSDK_OFFSET(0x254EB50)
#define UIPOPUPFORMATIONCHARSLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x254EE30)
#define UIPOPUPFORMATIONCHARSLOT_ONCLICK_OFFSET UNITYSDK_OFFSET(0x254F060)
#define UIPOPUPFORMATIONCHARSLOT_REFRESHFAVORITE_OFFSET UNITYSDK_OFFSET(0x254F1A0)
#define UIPOPUPFORMATIONCHARSLOT_ONLONGPRESSBUTTON_OFFSET UNITYSDK_OFFSET(0x254F310)
#define UIPOPUPFORMATIONCHARSLOT_SETSELECT_OFFSET UNITYSDK_OFFSET(0x254DAD0)
#define UIPOPUPFORMATIONCHARSLOT_SET_SLOTINFO_OFFSET UNITYSDK_OFFSET(0x254F4C0)
#define UIPOPUPFORMATIONCHARSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x254F4D0)
#define UIPOPUPFORMATIONCHARSLOT_GET_SELECT_OFFSET UNITYSDK_OFFSET(0x254F4B0)
#define UIPOPUPFORMATIONCHARSLOT__SETSORTINGRULE_G__GETEVENTSORTINGRULEVALUETEXT|54_0_OFFSET UNITYSDK_OFFSET(0x254EC40)
#define UIPOPUPFORMATIONCHARSLOT_REFRESHECHELONMARK_OFFSET UNITYSDK_OFFSET(0x254E610)

	inline static constexpr unsigned int UIPopupFormationCharSlot_TypeDefinitionIndex = 6090;

	class UIPopupFormationCharSlot : public Il2CppObject
	{
	public:
		UICharacterCard* CharacterCard; // 0x18
		::UnityEngine::GameObject* SelectObject; // 0x20
		::UnityEngine::GameObject* SelectObjectForOneEchelon; // 0x28
		::UnityEngine::GameObject* FormationMark; // 0x30
		Il2CppObject* Mark_On; // 0x38
		Il2CppObject* Mark_Off; // 0x40
		Il2CppObject* Mark_On_Label; // 0x48
		Il2CppObject* Mark_Off_Label; // 0x50
		::System::Boolean IsBlacklistDisplay; // 0x58
		::System::Boolean oneEchelon; // 0x59
		SortingRule* showRule; // 0x5C
		FormationCharacter* _SlotInfo_k__BackingField; // 0x60
		UILabel* sortLabel; // 0x68
		::UnityEngine::GameObject* star; // 0x70
		::UnityEngine::GameObject* rarity; // 0x78
		::UnityEngine::GameObject* heart; // 0x80
		UILabel* heartLabel; // 0x88
		::UnityEngine::GameObject* skill; // 0x90
		::UnityEngine::GameObject* tier; // 0x98
		UILabel* tierLabel; // 0xA0
		::UnityEngine::GameObject* favorite; // 0xA8
		::UnityEngine::GameObject* favoriteOn; // 0xB0
		::UnityEngine::GameObject* favoriteOff; // 0xB8
		::Il2CppArray<::System::Object*>* skillLabel; // 0xC0
		::UnityEngine::GameObject* role; // 0xC8
		UISprite* roleIcon; // 0xD0
		UILabel* roleLabel; // 0xD8
		UILabel* assistUserLabel; // 0xE0
		UIPopupFormationCharAssistInfo* assistInfo; // 0xE8
		::UnityEngine::GameObject* banSamePersonality; // 0xF0
		::UnityEngine::GameObject* selectDim; // 0xF8
		UILabel* selectDimLibel; // 0x100
		::System::Int32 charSlotSpriteSizeHiget; // 0x108
		::System::Int32 charAssistSlotSpriteSizeHiget; // 0x10C
		::System::Boolean isSmallSlot; // 0x110
		UISprite* _charSlotSprite; // 0x118
		FormationModel* formationModel; // 0x120
		::System::Boolean isInit; // 0x128

		::System::Boolean HandleCombatStyleChanged(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPFORMATIONCHARSLOT_HANDLECOMBATSTYLECHANGED_OFFSET))(arg, nullptr);
		}

		UISprite* get_charSlotSprite()
		{
			return ((UISprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPFORMATIONCHARSLOT_GET_CHARSLOTSPRITE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPFORMATIONCHARSLOT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPFORMATIONCHARSLOT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPFORMATIONCHARSLOT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void SetData(FormationCharacter* arg, SortingRule* arg2)
		{
			((::System::Void(*)(FormationCharacter*, SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPFORMATIONCHARSLOT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetDataOnBlacklistDisplay(FormationCharacter* arg, SortingRule* arg2)
		{
			((::System::Void(*)(FormationCharacter*, SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPFORMATIONCHARSLOT_SETDATAONBLACKLISTDISPLAY_OFFSET))(arg, arg2, nullptr);
		}

		FormationCharacter* get_SlotInfo()
		{
			return ((FormationCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPFORMATIONCHARSLOT_GET_SLOTINFO_OFFSET))(nullptr);
		}

		::System::Void SetSortingRule(CharacterObject* arg, SortingRule* arg2)
		{
			((::System::Void(*)(CharacterObject*, SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPFORMATIONCHARSLOT_SETSORTINGRULE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPFORMATIONCHARSLOT_GET_ISSELECT_OFFSET))(nullptr);
		}

		::System::Void SetBanByPersonality()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPFORMATIONCHARSLOT_SETBANBYPERSONALITY_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPFORMATIONCHARSLOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPFORMATIONCHARSLOT_ONCLICK_OFFSET))(nullptr);
		}

		::System::Boolean RefreshFavorite(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPFORMATIONCHARSLOT_REFRESHFAVORITE_OFFSET))(arg, nullptr);
		}

		::System::Void OnLongPressButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPFORMATIONCHARSLOT_ONLONGPRESSBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetSelect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPFORMATIONCHARSLOT_SETSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void set_SlotInfo(FormationCharacter* arg)
		{
			((::System::Void(*)(FormationCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPFORMATIONCHARSLOT_SET_SLOTINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPFORMATIONCHARSLOT_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_Select()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPFORMATIONCHARSLOT_GET_SELECT_OFFSET))(nullptr);
		}

		::System::String* _SetSortingRule_g__GetEventSortingRuleValueText|54_0(<>c__DisplayClass54_0&* arg)
		{
			return ((::System::String*(*)(<>c__DisplayClass54_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPFORMATIONCHARSLOT__SETSORTINGRULE_G__GETEVENTSORTINGRULEVALUETEXT|54_0_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshEchelonMark()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPFORMATIONCHARSLOT_REFRESHECHELONMARK_OFFSET))(nullptr);
		}

	};

