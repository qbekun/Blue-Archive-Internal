#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class ICCGCondition; }
namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_CONDITION_NOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A1E0)
#define MX_MINIGAMECCG_CONDITION_NOT_CHECK_OFFSET UNITYSDK_OFFSET(0x1E2A1F0)

namespace MX::MinigameCCG::Condition
{
	inline static constexpr unsigned int Not_TypeDefinitionIndex = 20935;

	class Not : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ICCGCondition* condition; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_NOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Check(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_NOT_CHECK_OFFSET))(arg, nullptr);
		}

	};
}

