#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class ICCGCharacterData; }

#define MX_MINIGAMECCG_UI_UICARDGAME_CHARACTERCARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DFBF00)
#define MX_MINIGAMECCG_UI_UICARDGAME_CHARACTERCARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DFB660)
#define MX_MINIGAMECCG_UI_UICARDGAME_CHARACTERCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC240)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_CharacterCard_TypeDefinitionIndex = 20737;

	class UICardGame_CharacterCard : public Il2CppObject
	{
	public:
		UILabel* healthLabel; // 0x20
		UILabel* coolTimeLabel; // 0x28
		::System::Boolean showHealthDisplay; // 0x30

		::System::Void SetData(::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CHARACTERCARD_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::MinigameCCG::ICCGCharacterData* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::ICCGCharacterData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CHARACTERCARD_SETDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CHARACTERCARD_.CTOR_OFFSET))(nullptr);
		}

	};
}

