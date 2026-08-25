#pragma once
#include "unitysdk.h"

class MXButton;
class UICharacterCard;
namespace UnityEngine { class GameObject; }
class UILabel;
class CharacterObject;

#define UIGACHAINFO_LEGACYPICKUP_AWAKE_OFFSET UNITYSDK_OFFSET(0xA78B70)
#define UIGACHAINFO_LEGACYPICKUP_SETSELECTEDCHARACTER_OFFSET UNITYSDK_OFFSET(0xA78D00)
#define UIGACHAINFO_LEGACYPICKUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA79180)
#define UIGACHAINFO_LEGACYPICKUP_ONCLICKCHARACTERSELECTPOPUP_OFFSET UNITYSDK_OFFSET(0xA79190)
#define UIGACHAINFO_LEGACYPICKUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA793B0)

	inline static constexpr unsigned int UIGachaInfo_LegacyPickup_TypeDefinitionIndex = 7869;

	class UIGachaInfo_LegacyPickup : public Il2CppObject
	{
	public:
		MXButton* characterSelectButton; // 0x70
		UICharacterCard* selectedCharacterCard; // 0x78
		::UnityEngine::GameObject* emptySet; // 0x80
		::UnityEngine::GameObject* selectSet; // 0x88
		UILabel* selectedCharacterName; // 0x90
		::Il2CppArray<::System::Object*>* starObjects; // 0x98
		UILabel* clubLabel; // 0xA0
		UILabel* CVLabel; // 0xA8
		UILabel* CVLabelGL; // 0xB0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAINFO_LEGACYPICKUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetSelectedCharacter(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHAINFO_LEGACYPICKUP_SETSELECTEDCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAINFO_LEGACYPICKUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickCharacterSelectPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAINFO_LEGACYPICKUP_ONCLICKCHARACTERSELECTPOPUP_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAINFO_LEGACYPICKUP_ONENABLE_OFFSET))(nullptr);
		}

	};

