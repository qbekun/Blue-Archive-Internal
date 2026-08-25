#pragma once
#include "../../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class IntegerInputRef; }
namespace MX::MinigameCCG { class CCGProcedureContext; }
namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYISSPECIFICCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AF70)
#define MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYISSPECIFICCARD_CHECK_OFFSET UNITYSDK_OFFSET(0x1E2AF80)

namespace MX::MinigameCCG::Condition::EntityCondition
{
	inline static constexpr unsigned int EntityIsSpecificCard_TypeDefinitionIndex = 20948;

	class EntityIsSpecificCard : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::IntegerInputRef* cardIdVar; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYISSPECIFICCARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Check(::MX::MinigameCCG::CCGProcedureContext* arg, ::MX::MinigameCCG::CCGEntity* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGProcedureContext*, ::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYISSPECIFICCARD_CHECK_OFFSET))(arg, arg, nullptr);
		}

	};
}

