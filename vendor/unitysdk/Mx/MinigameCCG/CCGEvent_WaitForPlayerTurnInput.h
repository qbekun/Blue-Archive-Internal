#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_CCGEVENT_WAITFORPLAYERTURNINPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCE490)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_WaitForPlayerTurnInput_TypeDefinitionIndex = 20567;

	class CCGEvent_WaitForPlayerTurnInput : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_WAITFORPLAYERTURNINPUT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

