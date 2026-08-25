#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_CCGEVENT_GAMEEND_GET_WINNERPLAYERID_OFFSET UNITYSDK_OFFSET(0x1DCBB30)
#define MX_MINIGAMECCG_CCGEVENT_GAMEEND_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCBB40)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_GameEnd_TypeDefinitionIndex = 20520;

	class CCGEvent_GameEnd : public Il2CppObject
	{
	public:
		::System::Int32 _WinnerPlayerId_k__BackingField; // 0x10

		::System::Int32 get_WinnerPlayerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_GAMEEND_GET_WINNERPLAYERID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_GAMEEND_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

