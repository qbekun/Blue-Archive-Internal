#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class BooleanInputRef; }
namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_CONDITION_BOOLEAN_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E29E30)
#define MX_MINIGAMECCG_CONDITION_BOOLEAN_CHECK_OFFSET UNITYSDK_OFFSET(0x1E29E40)

namespace MX::MinigameCCG::Condition
{
	inline static constexpr unsigned int Boolean_TypeDefinitionIndex = 20928;

	class Boolean : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::BooleanInputRef* var; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_BOOLEAN_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Check(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_BOOLEAN_CHECK_OFFSET))(arg, nullptr);
		}

	};
}

