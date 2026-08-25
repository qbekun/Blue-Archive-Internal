#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_CCGEVENT_WAITFORPLAYERINPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCD820)
#define MX_MINIGAMECCG_CCGEVENT_WAITFORPLAYERINPUT_GET_PLAYERID_OFFSET UNITYSDK_OFFSET(0x1DCD850)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_WaitForPlayerInput_TypeDefinitionIndex = 20556;

	class CCGEvent_WaitForPlayerInput : public Il2CppObject
	{
	public:
		::System::Int32 _PlayerId_k__BackingField; // 0x10

		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_WAITFORPLAYERINPUT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PlayerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_WAITFORPLAYERINPUT_GET_PLAYERID_OFFSET))(nullptr);
		}

	};
}

