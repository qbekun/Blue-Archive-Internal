#pragma once
#include "../../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGTargetCategoryRule; }
namespace MX::MinigameCCG { class CCGProcedureContext; }
namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYISSPECIFICCATEGORY_CHECK_OFFSET UNITYSDK_OFFSET(0x1E2B030)
#define MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYISSPECIFICCATEGORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B2E0)

namespace MX::MinigameCCG::Condition::EntityCondition
{
	inline static constexpr unsigned int EntityIsSpecificCategory_TypeDefinitionIndex = 20949;

	class EntityIsSpecificCategory : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGTargetCategoryRule* categoryRule; // 0x10

		::System::Boolean Check(::MX::MinigameCCG::CCGProcedureContext* arg, ::MX::MinigameCCG::CCGEntity* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGProcedureContext*, ::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYISSPECIFICCATEGORY_CHECK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYISSPECIFICCATEGORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

