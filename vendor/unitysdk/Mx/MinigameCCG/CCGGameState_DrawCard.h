#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGCard; }
namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_CCGGAMESTATE_DRAWCARD_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1DE34D0)
#define MX_MINIGAMECCG_CCGGAMESTATE_DRAWCARD_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1DE3580)
#define MX_MINIGAMECCG_CCGGAMESTATE_DRAWCARD_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1DE3630)
#define MX_MINIGAMECCG_CCGGAMESTATE_DRAWCARD_SET_DRAWNCARD_OFFSET UNITYSDK_OFFSET(0x1DE3820)
#define MX_MINIGAMECCG_CCGGAMESTATE_DRAWCARD_GET_DRAWNCARD_OFFSET UNITYSDK_OFFSET(0x1DE3830)
#define MX_MINIGAMECCG_CCGGAMESTATE_DRAWCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF300)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_DrawCard_TypeDefinitionIndex = 20670;

	class CCGGameState_DrawCard : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGCard* _DrawnCard_k__BackingField; // 0x18
		::MX::MinigameCCG::CCGPlayer* _player; // 0x20
		::MX::MinigameCCG::CCGCard* _card; // 0x28
		::System::Boolean _isPreview; // 0x30
		Il2CppObject* _passiveSkillTriggerables; // 0x38

		Il2CppObject* OnStateExit()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_DRAWCARD_ONSTATEEXIT_OFFSET))(nullptr);
		}

		Il2CppObject* OnStateEnter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_DRAWCARD_ONSTATEENTER_OFFSET))(nullptr);
		}

		::System::Void OnState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_DRAWCARD_ONSTATE_OFFSET))(nullptr);
		}

		::System::Void set_DrawnCard(::MX::MinigameCCG::CCGCard* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_DRAWCARD_SET_DRAWNCARD_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGCard* get_DrawnCard()
		{
			return (return (::MX::MinigameCCG::CCGCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_DRAWCARD_GET_DRAWNCARD_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg, ::MX::MinigameCCG::CCGCard* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::MX::MinigameCCG::CCGCard*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_DRAWCARD_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

