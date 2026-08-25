#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_CCGPLAYERINPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCF2D0)
#define MX_MINIGAMECCG_CCGPLAYERINPUT_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1DCF300)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGPlayerInput_TypeDefinitionIndex = 20583;

	class CCGPlayerInput : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGPlayer* _Player_k__BackingField; // 0x10

		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERINPUT_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGPlayer* get_Player()
		{
			return (return (::MX::MinigameCCG::CCGPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERINPUT_GET_PLAYER_OFFSET))(nullptr);
		}

	};
}

