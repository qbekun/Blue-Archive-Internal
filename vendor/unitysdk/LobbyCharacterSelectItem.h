#pragma once
#include "unitysdk.h"

class CharacterObject;
namespace MX::SaveData { class CharacterSortingSaveData; }

#define LOBBYCHARACTERSELECTITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x263CB90)

	inline static constexpr unsigned int LobbyCharacterSelectItem_TypeDefinitionIndex = 6588;

	class LobbyCharacterSelectItem : public Il2CppObject
	{
	public:
		CharacterObject* Character; // 0x10
		::MX::SaveData::CharacterSortingSaveData* SortData; // 0x18
		Il2CppObject* SelectedCharacterIds; // 0x20
		::System::Boolean UseMemorialUI; // 0x28
		::System::Boolean UseSelectNumberMark; // 0x29

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBBYCHARACTERSELECTITEM_.CTOR_OFFSET))(nullptr);
		}

	};

