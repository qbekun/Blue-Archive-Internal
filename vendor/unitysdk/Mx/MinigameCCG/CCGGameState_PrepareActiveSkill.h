#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_CCGGAMESTATE_PREPAREACTIVESKILL_GET_SKILLCONTEXT_OFFSET UNITYSDK_OFFSET(0x1DE8050)
#define MX_MINIGAMECCG_CCGGAMESTATE_PREPAREACTIVESKILL_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0x1DE8060)
#define MX_MINIGAMECCG_CCGGAMESTATE_PREPAREACTIVESKILL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DD4870)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_PrepareActiveSkill_TypeDefinitionIndex = 20677;

	class CCGGameState_PrepareActiveSkill : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGPlayer* _player; // 0x18
		::MX::MinigameCCG::CCGEntity* _source; // 0x20
		::System::Boolean _canAbort; // 0x28
		::MX::MinigameCCG::CCGSkillContext* _skillContext; // 0x30

		::MX::MinigameCCG::CCGSkillContext* get_SkillContext()
		{
			return (return (::MX::MinigameCCG::CCGSkillContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_PREPAREACTIVESKILL_GET_SKILLCONTEXT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Graph()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_PREPAREACTIVESKILL_GET_GRAPH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg, ::MX::MinigameCCG::CCGEntity* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::MX::MinigameCCG::CCGEntity*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_PREPAREACTIVESKILL_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

