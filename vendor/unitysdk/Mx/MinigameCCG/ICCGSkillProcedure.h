#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_ICCGSKILLPROCEDURE_ONSTATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int ICCGSkillProcedure_TypeDefinitionIndex = 20493;

	class ICCGSkillProcedure : public Il2CppObject
	{
	public:
		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGSKILLPROCEDURE_ONSTATE_OFFSET))(arg, nullptr);
		}

	};
}

