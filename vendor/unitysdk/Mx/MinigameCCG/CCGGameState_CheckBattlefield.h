#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGGame; }

#define MX_MINIGAMECCG_CCGGAMESTATE_CHECKBATTLEFIELD_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1DDC3D0)
#define MX_MINIGAMECCG_CCGGAMESTATE_CHECKBATTLEFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DD9490)
#define MX_MINIGAMECCG_CCGGAMESTATE_CHECKBATTLEFIELD_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1DDC480)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_CheckBattlefield_TypeDefinitionIndex = 20643;

	class CCGGameState_CheckBattlefield : public Il2CppObject
	{
	public:
		::System::Boolean _playerAEliminated; // 0x18
		::System::Boolean _playerBEliminated; // 0x19

		Il2CppObject* OnStateExit()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_CHECKBATTLEFIELD_ONSTATEEXIT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_CHECKBATTLEFIELD_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnStateEnter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_CHECKBATTLEFIELD_ONSTATEENTER_OFFSET))(nullptr);
		}

	};
}

