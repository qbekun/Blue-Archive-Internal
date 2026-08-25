#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_CCGGAMESTATE_PLAYERTURN_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0x1DE4ED0)
#define MX_MINIGAMECCG_CCGGAMESTATE_PLAYERTURN_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DDDE80)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_PlayerTurn_TypeDefinitionIndex = 20675;

	class CCGGameState_PlayerTurn : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGPlayer* _player; // 0x18
		::System::Int32 _turn; // 0x20

		Il2CppObject* get_Graph()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_PLAYERTURN_GET_GRAPH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_PLAYERTURN_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

