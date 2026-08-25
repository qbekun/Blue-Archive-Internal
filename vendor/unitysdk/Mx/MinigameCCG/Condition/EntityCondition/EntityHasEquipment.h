#pragma once
#include "../../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }
namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYHASEQUIPMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AA20)
#define MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYHASEQUIPMENT_CHECK_OFFSET UNITYSDK_OFFSET(0x1E2AA30)

namespace MX::MinigameCCG::Condition::EntityCondition
{
	inline static constexpr unsigned int EntityHasEquipment_TypeDefinitionIndex = 20941;

	class EntityHasEquipment : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYHASEQUIPMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Check(::MX::MinigameCCG::CCGProcedureContext* arg, ::MX::MinigameCCG::CCGEntity* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGProcedureContext*, ::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYHASEQUIPMENT_CHECK_OFFSET))(arg, arg, nullptr);
		}

	};
}

