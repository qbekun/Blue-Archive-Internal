#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_CCGEVENT_WAITFORPLAYERSETFRONTSTRIKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCE4C0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_WaitForPlayerSetFrontStriker_TypeDefinitionIndex = 20568;

	class CCGEvent_WaitForPlayerSetFrontStriker : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_WAITFORPLAYERSETFRONTSTRIKER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

