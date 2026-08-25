#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class AnyInputRef; }
namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_CONDITION_EQUAL_CHECK_OFFSET UNITYSDK_OFFSET(0x1E29FD0)
#define MX_MINIGAMECCG_CONDITION_EQUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A0B0)

namespace MX::MinigameCCG::Condition
{
	inline static constexpr unsigned int Equal_TypeDefinitionIndex = 20932;

	class Equal : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::AnyInputRef* var1; // 0x10
		::MX::MinigameCCG::ParameterRef::AnyInputRef* var2; // 0x18

		::System::Boolean Check(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_EQUAL_CHECK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_EQUAL_.CTOR_OFFSET))(nullptr);
		}

	};
}

