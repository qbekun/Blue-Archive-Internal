#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_CCGEVENT_PLAYERSHUFFLEDECK_GET_PLAYERID_OFFSET UNITYSDK_OFFSET(0x1DCEB30)
#define MX_MINIGAMECCG_CCGEVENT_PLAYERSHUFFLEDECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCEB40)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_PlayerShuffleDeck_TypeDefinitionIndex = 20576;

	class CCGEvent_PlayerShuffleDeck : public Il2CppObject
	{
	public:
		::System::Int32 _PlayerId_k__BackingField; // 0x10

		::System::Int32 get_PlayerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_PLAYERSHUFFLEDECK_GET_PLAYERID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_PLAYERSHUFFLEDECK_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

