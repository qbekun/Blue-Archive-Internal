#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class SelectionContainer; }
namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_CCGEVENT_WAITFORPLAYERCONFIRMACTIVESKILL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCDB40)
#define MX_MINIGAMECCG_CCGEVENT_WAITFORPLAYERCONFIRMACTIVESKILL_GET_SELECTION_OFFSET UNITYSDK_OFFSET(0x1DCDD90)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_WaitForPlayerConfirmActiveSkill_TypeDefinitionIndex = 20561;

	class CCGEvent_WaitForPlayerConfirmActiveSkill : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::SelectionContainer* _Selection_k__BackingField; // 0x18

		::System::Void .ctor(::MX::MinigameCCG::CCGEntity* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_WAITFORPLAYERCONFIRMACTIVESKILL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::MX::MinigameCCG::SelectionContainer* get_Selection()
		{
			return (return (::MX::MinigameCCG::SelectionContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_WAITFORPLAYERCONFIRMACTIVESKILL_GET_SELECTION_OFFSET))(nullptr);
		}

	};
}

