#pragma once
#include "../../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }
namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYCONDITIONOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A7D0)
#define MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYCONDITIONOR_CHECK_OFFSET UNITYSDK_OFFSET(0x1E2A7E0)

namespace MX::MinigameCCG::Condition::EntityCondition
{
	inline static constexpr unsigned int EntityConditionOr_TypeDefinitionIndex = 20939;

	class EntityConditionOr : public Il2CppObject
	{
	public:
		Il2CppObject* conditions; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYCONDITIONOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Check(::MX::MinigameCCG::CCGProcedureContext* arg, ::MX::MinigameCCG::CCGEntity* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGProcedureContext*, ::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYCONDITIONOR_CHECK_OFFSET))(arg, arg, nullptr);
		}

	};
}

