#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class ICCGCondition; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_RUNPROCEDURESBYCONDITION_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E35450)
#define MX_MINIGAMECCG_PROCEDURES_RUNPROCEDURESBYCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E35510)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int RunProceduresByCondition_TypeDefinitionIndex = 21034;

	class RunProceduresByCondition : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ICCGCondition* condition; // 0x10
		Il2CppObject* procedures; // 0x18

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_RUNPROCEDURESBYCONDITION_ONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_RUNPROCEDURESBYCONDITION_.CTOR_OFFSET))(nullptr);
		}

	};
}

