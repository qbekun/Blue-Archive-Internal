#pragma once
#include "../../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class IntegerInputRef; }
namespace MX::MinigameCCG { class CCGProcedureContext; }
namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYHASLOGICEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AC60)
#define MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYHASLOGICEFFECT_CHECK_OFFSET UNITYSDK_OFFSET(0x1E2AC70)

namespace MX::MinigameCCG::Condition::EntityCondition
{
	inline static constexpr unsigned int EntityHasLogicEffect_TypeDefinitionIndex = 20943;

	class EntityHasLogicEffect : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::IntegerInputRef* logicEffectIdVar; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYHASLOGICEFFECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Check(::MX::MinigameCCG::CCGProcedureContext* arg, ::MX::MinigameCCG::CCGEntity* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGProcedureContext*, ::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYHASLOGICEFFECT_CHECK_OFFSET))(arg, arg, nullptr);
		}

	};
}

