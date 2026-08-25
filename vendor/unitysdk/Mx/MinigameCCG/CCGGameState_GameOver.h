#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class CCGGame; }

#define MX_MINIGAMECCG_CCGGAMESTATE_GAMEOVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DDCEF0)
#define MX_MINIGAMECCG_CCGGAMESTATE_GAMEOVER_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0x1DDE000)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_GameOver_TypeDefinitionIndex = 20649;

	class CCGGameState_GameOver : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGPlayer* _winner; // 0x18

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_GAMEOVER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_Graph()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_GAMEOVER_GET_GRAPH_OFFSET))(nullptr);
		}

	};
}

