#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_CCGGAMESTATE_REFILLDECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DE3A50)
#define MX_MINIGAMECCG_CCGGAMESTATE_REFILLDECK_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1DE89D0)
#define MX_MINIGAMECCG_CCGGAMESTATE_REFILLDECK_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1DE8A80)
#define MX_MINIGAMECCG_CCGGAMESTATE_REFILLDECK_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1DE8C50)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_RefillDeck_TypeDefinitionIndex = 20680;

	class CCGGameState_RefillDeck : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGPlayer* _player; // 0x18

		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_REFILLDECK_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnStateEnter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_REFILLDECK_ONSTATEENTER_OFFSET))(nullptr);
		}

		::System::Void OnState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_REFILLDECK_ONSTATE_OFFSET))(nullptr);
		}

		Il2CppObject* OnStateExit()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_REFILLDECK_ONSTATEEXIT_OFFSET))(nullptr);
		}

	};
}

