#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_ICCGCONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int ICCGCondition_TypeDefinitionIndex = 20487;

	class ICCGCondition : public Il2CppObject
	{
	public:
		::System::Boolean Check(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGCONDITION_CHECK_OFFSET))(arg, nullptr);
		}

	};
}

