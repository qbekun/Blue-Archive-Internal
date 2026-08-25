#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_CCGPLAYERINPUT_PLAYERENDTURN_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCF3C0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGPlayerInput_PlayerEndTurn_TypeDefinitionIndex = 20586;

	class CCGPlayerInput_PlayerEndTurn : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERINPUT_PLAYERENDTURN_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

