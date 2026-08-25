#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_ICCGPARAMETERINPUTREF`1_GET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int ICCGParameterInputRef`1_TypeDefinitionIndex = 20490;

	class ICCGParameterInputRef`1 : public Il2CppObject
	{
	public:
		Il2CppObject* Get(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGPARAMETERINPUTREF`1_GET_OFFSET))(arg, nullptr);
		}

	};
}

