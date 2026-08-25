#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_CCGGAMESTATE_MULLIGAN_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0x1DE4510)
#define MX_MINIGAMECCG_CCGGAMESTATE_MULLIGAN_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF8E0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_Mulligan_TypeDefinitionIndex = 20672;

	class CCGGameState_Mulligan : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGPlayer* _player; // 0x18

		Il2CppObject* get_Graph()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_MULLIGAN_GET_GRAPH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_MULLIGAN_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

