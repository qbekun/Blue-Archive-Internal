#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_CCGGAMESTATE_DOSKILL_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0x1DD6770)
#define MX_MINIGAMECCG_CCGGAMESTATE_DOSKILL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DD5430)
#define MX_MINIGAMECCG_CCGGAMESTATE_DOSKILL_TODEBUGSTRING_OFFSET UNITYSDK_OFFSET(0x1DD6820)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_DoSkill_TypeDefinitionIndex = 20625;

	class CCGGameState_DoSkill : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGSkillContext* _context; // 0x18

		Il2CppObject* get_Graph()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_DOSKILL_GET_GRAPH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_DOSKILL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToDebugString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_DOSKILL_TODEBUGSTRING_OFFSET))(nullptr);
		}

	};
}

