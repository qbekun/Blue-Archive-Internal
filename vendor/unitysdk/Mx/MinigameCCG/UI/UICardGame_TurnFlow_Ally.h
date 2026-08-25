#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_UI_UICARDGAME_TURNFLOW_ALLY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DF7DA0)
#define MX_MINIGAMECCG_UI_UICARDGAME_TURNFLOW_ALLY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1DF7DB0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_TurnFlow_Ally_TypeDefinitionIndex = 20725;

	class UICardGame_TurnFlow_Ally : public Il2CppObject
	{
	public:
		UILabel* turnLabel; // 0xD8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_TURNFLOW_ALLY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_TURNFLOW_ALLY_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};
}

