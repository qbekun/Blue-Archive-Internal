#pragma once
#include "../../../../unitysdk.h"

namespace MX::MinigameCCG { class ICCGEntityCondition; }
namespace MX::MinigameCCG { class CCGProcedureContext; }
namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYCONDITIONNOT_CHECK_OFFSET UNITYSDK_OFFSET(0x1E2A710)
#define MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYCONDITIONNOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A7C0)

namespace MX::MinigameCCG::Condition::EntityCondition
{
	inline static constexpr unsigned int EntityConditionNot_TypeDefinitionIndex = 20938;

	class EntityConditionNot : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ICCGEntityCondition* condition; // 0x10

		::System::Boolean Check(::MX::MinigameCCG::CCGProcedureContext* arg, ::MX::MinigameCCG::CCGEntity* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGProcedureContext*, ::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYCONDITIONNOT_CHECK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYCONDITIONNOT_.CTOR_OFFSET))(nullptr);
		}

	};
}

