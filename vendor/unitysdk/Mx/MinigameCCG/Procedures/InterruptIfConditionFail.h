#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class ICCGCondition; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_INTERRUPTIFCONDITIONFAIL_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E33A50)
#define MX_MINIGAMECCG_PROCEDURES_INTERRUPTIFCONDITIONFAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E33B10)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int InterruptIfConditionFail_TypeDefinitionIndex = 21027;

	class InterruptIfConditionFail : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ICCGCondition* condition; // 0x10

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_INTERRUPTIFCONDITIONFAIL_ONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_INTERRUPTIFCONDITIONFAIL_.CTOR_OFFSET))(nullptr);
		}

	};
}

