#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class ICCGEntityCondition; }
namespace MX::MinigameCCG::ParameterRef { class EntityInputRef; }
namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_CONDITION_CHECKENTITYCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E29E50)
#define MX_MINIGAMECCG_CONDITION_CHECKENTITYCONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x1E29E60)

namespace MX::MinigameCCG::Condition
{
	inline static constexpr unsigned int CheckEntityCondition_TypeDefinitionIndex = 20929;

	class CheckEntityCondition : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ICCGEntityCondition* entityCondition; // 0x10
		::MX::MinigameCCG::ParameterRef::EntityInputRef* entityVar; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_CHECKENTITYCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Check(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_CHECKENTITYCONDITION_CHECK_OFFSET))(arg, nullptr);
		}

	};
}

