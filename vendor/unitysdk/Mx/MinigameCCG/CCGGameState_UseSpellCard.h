#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGSpellCard; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_CCGGAMESTATE_USESPELLCARD_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1DD43E0)
#define MX_MINIGAMECCG_CCGGAMESTATE_USESPELLCARD_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1DD4490)
#define MX_MINIGAMECCG_CCGGAMESTATE_USESPELLCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DD4540)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_UseSpellCard_TypeDefinitionIndex = 20618;

	class CCGGameState_UseSpellCard : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGSpellCard* _card; // 0x18
		::System::Boolean _checkCost; // 0x20
		::System::Boolean _canAbort; // 0x21
		::MX::MinigameCCG::CCGSkillContext* _skillContext; // 0x28

		Il2CppObject* OnStateEnter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_USESPELLCARD_ONSTATEENTER_OFFSET))(nullptr);
		}

		Il2CppObject* OnStateExit()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_USESPELLCARD_ONSTATEEXIT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGSpellCard* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGSpellCard*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_USESPELLCARD_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

