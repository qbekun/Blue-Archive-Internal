#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGZoneCard; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_CCGGAMESTATE_ATTACHZONECARD_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1DD1340)
#define MX_MINIGAMECCG_CCGGAMESTATE_ATTACHZONECARD_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1DD1420)
#define MX_MINIGAMECCG_CCGGAMESTATE_ATTACHZONECARD_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1DD14D0)
#define MX_MINIGAMECCG_CCGGAMESTATE_ATTACHZONECARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DD1580)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_AttachZoneCard_TypeDefinitionIndex = 20603;

	class CCGGameState_AttachZoneCard : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGZoneCard* _card; // 0x18
		::System::Boolean _checkCost; // 0x20
		::System::Boolean _canAbort; // 0x21
		::MX::MinigameCCG::CCGSkillContext* _skillContext; // 0x28

		::System::Void OnState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_ATTACHZONECARD_ONSTATE_OFFSET))(nullptr);
		}

		Il2CppObject* OnStateExit()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_ATTACHZONECARD_ONSTATEEXIT_OFFSET))(nullptr);
		}

		Il2CppObject* OnStateEnter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_ATTACHZONECARD_ONSTATEENTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGZoneCard* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGZoneCard*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_ATTACHZONECARD_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

