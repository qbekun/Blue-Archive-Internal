#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UICharacterCard;
class UILabel;
class CharacterObject;

#define SUPPORTSLOT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x254D340)
#define SUPPORTSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x254D560)
#define SUPPORTSLOT_DISABLE_OFFSET UNITYSDK_OFFSET(0x254D490)

	inline static constexpr unsigned int SupportSlot_TypeDefinitionIndex = 6086;

	class SupportSlot : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* EmptySlot; // 0x10
		UICharacterCard* CharacterCard; // 0x18
		UILabel* NameLabel; // 0x20
		UILabel* SquadText; // 0x28

		::System::Void Initialize(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTSLOT_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTSLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Disable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTSLOT_DISABLE_OFFSET))(nullptr);
		}

	};

