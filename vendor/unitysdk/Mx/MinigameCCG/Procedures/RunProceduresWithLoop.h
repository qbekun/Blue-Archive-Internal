#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class IntegerInputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_RUNPROCEDURESWITHLOOP_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E35E80)
#define MX_MINIGAMECCG_PROCEDURES_RUNPROCEDURESWITHLOOP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E35F40)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int RunProceduresWithLoop_TypeDefinitionIndex = 21036;

	class RunProceduresWithLoop : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::IntegerInputRef* loopCountVar; // 0x10
		Il2CppObject* procedures; // 0x20

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_RUNPROCEDURESWITHLOOP_ONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_RUNPROCEDURESWITHLOOP_.CTOR_OFFSET))(nullptr);
		}

	};
}

