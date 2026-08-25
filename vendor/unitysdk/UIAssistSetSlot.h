#pragma once
#include "unitysdk.h"

class UICharacterCard;
namespace UnityEngine { class GameObject; }
class UILabel;
class UISprite;
class ClanAssistCharacter;
class CharacterObject;
class SortingRule;

#define UIASSISTSETSLOT_GET_ISSELECT_OFFSET UNITYSDK_OFFSET(0x220BED0)
#define UIASSISTSETSLOT_SETSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x220BEF0)
#define UIASSISTSETSLOT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x220C840)
#define UIASSISTSETSLOT_GET_CHARACTERCARD_OFFSET UNITYSDK_OFFSET(0x220C880)
#define UIASSISTSETSLOT_SETSELECT_OFFSET UNITYSDK_OFFSET(0x220C890)
#define UIASSISTSETSLOT_ONCLICK_OFFSET UNITYSDK_OFFSET(0x220C8E0)
#define UIASSISTSETSLOT_ONLONGPRESSBUTTON_OFFSET UNITYSDK_OFFSET(0x220C900)
#define UIASSISTSETSLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x220C950)
#define UIASSISTSETSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x220CA90)
#define UIASSISTSETSLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0x220CAA0)

	inline static constexpr unsigned int UIAssistSetSlot_TypeDefinitionIndex = 4355;

	class UIAssistSetSlot : public Il2CppObject
	{
	public:
		UICharacterCard* characterCard; // 0x18
		::UnityEngine::GameObject* selectObject; // 0x20
		::UnityEngine::GameObject* selectObjectForOneEchelon; // 0x28
		UILabel* sortLabel; // 0x30
		::UnityEngine::GameObject* star; // 0x38
		::UnityEngine::GameObject* rarity; // 0x40
		::UnityEngine::GameObject* heart; // 0x48
		UILabel* heartLabel; // 0x50
		::UnityEngine::GameObject* skill; // 0x58
		::UnityEngine::GameObject* tier; // 0x60
		UILabel* tierLabel; // 0x68
		::UnityEngine::GameObject* favorite; // 0x70
		::UnityEngine::GameObject* favoriteOn; // 0x78
		::UnityEngine::GameObject* favoriteOff; // 0x80
		::Il2CppArray<::System::Object*>* skillLabel; // 0x88
		::UnityEngine::GameObject* role; // 0x90
		UISprite* roleIcon; // 0x98
		UILabel* roleLabel; // 0xA0
		::UnityEngine::GameObject* dim; // 0xA8
		::System::Boolean isSmallSlot; // 0xB0
		ClanAssistCharacter* slotInfo; // 0xB8
		Il2CppObject* clickEventDelegate; // 0xC0
		Il2CppObject* longPressEventDelegate; // 0xC8

		::System::Boolean get_IsSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSETSLOT_GET_ISSELECT_OFFSET))(nullptr);
		}

		::System::Void SetSortingRule(CharacterObject* arg, SortingRule* arg2)
		{
			((::System::Void(*)(CharacterObject*, SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSETSLOT_SETSORTINGRULE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSETSLOT_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		UICharacterCard* get_CharacterCard()
		{
			return ((UICharacterCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSETSLOT_GET_CHARACTERCARD_OFFSET))(nullptr);
		}

		::System::Void SetSelect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSETSLOT_SETSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSETSLOT_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnLongPressButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSETSLOT_ONLONGPRESSBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSETSLOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSETSLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(ClanAssistCharacter* arg, SortingRule* arg2)
		{
			((::System::Void(*)(ClanAssistCharacter*, SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSETSLOT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

	};

