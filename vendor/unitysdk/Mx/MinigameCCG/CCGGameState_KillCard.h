#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGCard; }

#define MX_MINIGAMECCG_CCGGAMESTATE_KILLCARD_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1DD3200)
#define MX_MINIGAMECCG_CCGGAMESTATE_KILLCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DD32B0)
#define MX_MINIGAMECCG_CCGGAMESTATE_KILLCARD_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1DD3300)
#define MX_MINIGAMECCG_CCGGAMESTATE_KILLCARD_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1DD3400)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_KillCard_TypeDefinitionIndex = 20613;

	class CCGGameState_KillCard : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGCard* _card; // 0x18

		Il2CppObject* OnStateEnter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_KILLCARD_ONSTATEENTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGCard* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_KILLCARD_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_KILLCARD_ONSTATE_OFFSET))(nullptr);
		}

		Il2CppObject* OnStateExit()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_KILLCARD_ONSTATEEXIT_OFFSET))(nullptr);
		}

	};
}

