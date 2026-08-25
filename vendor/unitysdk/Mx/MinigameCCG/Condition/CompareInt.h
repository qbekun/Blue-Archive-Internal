#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::Condition { class CCGCompareOperator; }
namespace MX::MinigameCCG::ParameterRef { class IntegerInputRef; }
namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_CONDITION_COMPAREINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E29F30)
#define MX_MINIGAMECCG_CONDITION_COMPAREINT_CHECK_OFFSET UNITYSDK_OFFSET(0x1E29F40)

namespace MX::MinigameCCG::Condition
{
	inline static constexpr unsigned int CompareInt_TypeDefinitionIndex = 20931;

	class CompareInt : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::Condition::CCGCompareOperator* oper; // 0x10
		::MX::MinigameCCG::ParameterRef::IntegerInputRef* var1; // 0x18
		::MX::MinigameCCG::ParameterRef::IntegerInputRef* var2; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_COMPAREINT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Check(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_COMPAREINT_CHECK_OFFSET))(arg, nullptr);
		}

	};
}

