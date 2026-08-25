#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGSkillContext; }
namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_CCGEVENT_DOSKILLSTART_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCBBB0)
#define MX_MINIGAMECCG_CCGEVENT_DOSKILLSTART_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1DCBBE0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_DoSkillStart_TypeDefinitionIndex = 20522;

	class CCGEvent_DoSkillStart : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGSkillContext* _Context_k__BackingField; // 0x10

		::System::Void .ctor(::MX::MinigameCCG::CCGSkillContext* arg, ::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGSkillContext*, ::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_DOSKILLSTART_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::MX::MinigameCCG::CCGSkillContext* get_Context()
		{
			return (return (::MX::MinigameCCG::CCGSkillContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_DOSKILLSTART_GET_CONTEXT_OFFSET))(nullptr);
		}

	};
}

