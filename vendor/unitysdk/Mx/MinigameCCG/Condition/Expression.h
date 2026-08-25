#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_CONDITION_EXPRESSION_CHECK_OFFSET UNITYSDK_OFFSET(0x1E2A0C0)
#define MX_MINIGAMECCG_CONDITION_EXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A160)

namespace MX::MinigameCCG::Condition
{
	inline static constexpr unsigned int Expression_TypeDefinitionIndex = 20933;

	class Expression : public Il2CppObject
	{
	public:
		::System::String* expression; // 0x10

		::System::Boolean Check(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_EXPRESSION_CHECK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_EXPRESSION_.CTOR_OFFSET))(nullptr);
		}

	};
}

