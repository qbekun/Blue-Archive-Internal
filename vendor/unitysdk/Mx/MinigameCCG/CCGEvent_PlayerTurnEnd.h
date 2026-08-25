#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_CCGEVENT_PLAYERTURNEND_GET_PLAYERID_OFFSET UNITYSDK_OFFSET(0x1DCECC0)
#define MX_MINIGAMECCG_CCGEVENT_PLAYERTURNEND_GET_TURN_OFFSET UNITYSDK_OFFSET(0x1DCECD0)
#define MX_MINIGAMECCG_CCGEVENT_PLAYERTURNEND_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCECE0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_PlayerTurnEnd_TypeDefinitionIndex = 20580;

	class CCGEvent_PlayerTurnEnd : public Il2CppObject
	{
	public:
		::System::Int32 _PlayerId_k__BackingField; // 0x10
		::System::Int32 _Turn_k__BackingField; // 0x14

		::System::Int32 get_PlayerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_PLAYERTURNEND_GET_PLAYERID_OFFSET))(nullptr);
		}

		::System::Int32 get_Turn()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_PLAYERTURNEND_GET_TURN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_PLAYERTURNEND_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

