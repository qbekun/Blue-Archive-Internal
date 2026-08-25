#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_CCGGAMESTATE_SHUFFLEDECK_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1DE9940)
#define MX_MINIGAMECCG_CCGGAMESTATE_SHUFFLEDECK_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1DE99F0)
#define MX_MINIGAMECCG_CCGGAMESTATE_SHUFFLEDECK_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1DE9A80)
#define MX_MINIGAMECCG_CCGGAMESTATE_SHUFFLEDECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DE4D60)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_ShuffleDeck_TypeDefinitionIndex = 20687;

	class CCGGameState_ShuffleDeck : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGPlayer* _player; // 0x18

		Il2CppObject* OnStateEnter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_SHUFFLEDECK_ONSTATEENTER_OFFSET))(nullptr);
		}

		Il2CppObject* OnStateExit()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_SHUFFLEDECK_ONSTATEEXIT_OFFSET))(nullptr);
		}

		::System::Void OnState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_SHUFFLEDECK_ONSTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_SHUFFLEDECK_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

