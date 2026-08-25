#pragma once
#include "../../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }
namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYCONDITIONAND_CHECK_OFFSET UNITYSDK_OFFSET(0x1E2A4C0)
#define MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYCONDITIONAND_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A700)

namespace MX::MinigameCCG::Condition::EntityCondition
{
	inline static constexpr unsigned int EntityConditionAnd_TypeDefinitionIndex = 20937;

	class EntityConditionAnd : public Il2CppObject
	{
	public:
		Il2CppObject* conditions; // 0x10

		::System::Boolean Check(::MX::MinigameCCG::CCGProcedureContext* arg, ::MX::MinigameCCG::CCGEntity* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGProcedureContext*, ::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYCONDITIONAND_CHECK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYCONDITIONAND_.CTOR_OFFSET))(nullptr);
		}

	};
}

