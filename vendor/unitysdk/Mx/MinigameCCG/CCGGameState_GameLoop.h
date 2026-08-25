#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGGame; }

#define MX_MINIGAMECCG_CCGGAMESTATE_GAMELOOP_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0x1DDDB90)
#define MX_MINIGAMECCG_CCGGAMESTATE_GAMELOOP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DDDA40)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_GameLoop_TypeDefinitionIndex = 20647;

	class CCGGameState_GameLoop : public Il2CppObject
	{
	public:
		::System::Int32 _turn; // 0x18

		Il2CppObject* get_Graph()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_GAMELOOP_GET_GRAPH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_GAMELOOP_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

