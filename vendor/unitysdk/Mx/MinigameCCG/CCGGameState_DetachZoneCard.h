#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class CCGZoneCard; }

#define MX_MINIGAMECCG_CCGGAMESTATE_DETACHZONECARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DD2EA0)
#define MX_MINIGAMECCG_CCGGAMESTATE_DETACHZONECARD_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1DD2EF0)
#define MX_MINIGAMECCG_CCGGAMESTATE_DETACHZONECARD_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1DD2FA0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_DetachZoneCard_TypeDefinitionIndex = 20609;

	class CCGGameState_DetachZoneCard : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGPlayer* _player; // 0x18
		::MX::MinigameCCG::CCGZoneCard* _zone; // 0x20

		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_DETACHZONECARD_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnStateEnter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_DETACHZONECARD_ONSTATEENTER_OFFSET))(nullptr);
		}

		::System::Void OnState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_DETACHZONECARD_ONSTATE_OFFSET))(nullptr);
		}

	};
}

