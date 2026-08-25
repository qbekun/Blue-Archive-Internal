#pragma once
#include "../../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class EntityCollectionInputRef; }
namespace MX::MinigameCCG { class CCGProcedureContext; }
namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYISINCOLLECTION_CHECK_OFFSET UNITYSDK_OFFSET(0x1E2AE70)
#define MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYISINCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AF10)

namespace MX::MinigameCCG::Condition::EntityCondition
{
	inline static constexpr unsigned int EntityIsInCollection_TypeDefinitionIndex = 20946;

	class EntityIsInCollection : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::EntityCollectionInputRef* entityCollectionVar; // 0x10

		::System::Boolean Check(::MX::MinigameCCG::CCGProcedureContext* arg, ::MX::MinigameCCG::CCGEntity* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGProcedureContext*, ::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYISINCOLLECTION_CHECK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYISINCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

