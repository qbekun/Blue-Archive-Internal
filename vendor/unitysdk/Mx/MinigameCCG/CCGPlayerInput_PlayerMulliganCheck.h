#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_CCGPLAYERINPUT_PLAYERMULLIGANCHECK_GET_DOMULLIGAN_OFFSET UNITYSDK_OFFSET(0x1DCF310)
#define MX_MINIGAMECCG_CCGPLAYERINPUT_PLAYERMULLIGANCHECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCF320)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGPlayerInput_PlayerMulliganCheck_TypeDefinitionIndex = 20584;

	class CCGPlayerInput_PlayerMulliganCheck : public Il2CppObject
	{
	public:
		::System::Boolean _DoMulligan_k__BackingField; // 0x18

		::System::Boolean get_DoMulligan()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERINPUT_PLAYERMULLIGANCHECK_GET_DOMULLIGAN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERINPUT_PLAYERMULLIGANCHECK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

