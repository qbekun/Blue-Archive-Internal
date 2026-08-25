#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_ICCGPROCEDURE_ONPREPARE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int ICCGProcedure_TypeDefinitionIndex = 20492;

	class ICCGProcedure : public Il2CppObject
	{
	public:
		::System::Void OnPrepare(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGPROCEDURE_ONPREPARE_OFFSET))(arg, nullptr);
		}

	};
}

