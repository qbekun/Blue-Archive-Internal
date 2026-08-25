#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UICharacterCard;
class UILabel;
class CharacterObject;

#define UIFAVORRANKSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x24F8A80)
#define UIFAVORRANKSLOT_SETCHARACTER_OFFSET UNITYSDK_OFFSET(0x24F8A90)
#define UIFAVORRANKSLOT_CLEARCHARACTER_OFFSET UNITYSDK_OFFSET(0x24F8C70)

	inline static constexpr unsigned int UIFavorRankSlot_TypeDefinitionIndex = 6055;

	class UIFavorRankSlot : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* EmptySlot; // 0x18
		UICharacterCard* CharacterCard; // 0x20
		UILabel* FavorRankLabel; // 0x28
		UILabel* BuffValueText; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFAVORRANKSLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCharacter(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFAVORRANKSLOT_SETCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void ClearCharacter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFAVORRANKSLOT_CLEARCHARACTER_OFFSET))(nullptr);
		}

	};

