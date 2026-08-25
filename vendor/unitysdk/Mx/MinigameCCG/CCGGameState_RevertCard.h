#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGCard; }

#define MX_MINIGAMECCG_CCGGAMESTATE_REVERTCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DE4D10)
#define MX_MINIGAMECCG_CCGGAMESTATE_REVERTCARD_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1DE90B0)
#define MX_MINIGAMECCG_CCGGAMESTATE_REVERTCARD_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1DE9160)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_RevertCard_TypeDefinitionIndex = 20682;

	class CCGGameState_RevertCard : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGCard* _card; // 0x18

		::System::Void .ctor(::MX::MinigameCCG::CCGCard* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_REVERTCARD_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnStateEnter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_REVERTCARD_ONSTATEENTER_OFFSET))(nullptr);
		}

		::System::Void OnState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_REVERTCARD_ONSTATE_OFFSET))(nullptr);
		}

	};
}

