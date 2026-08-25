#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_ICCGPARAMETEROUTPUTREF`1_SET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int ICCGParameterOutputRef`1_TypeDefinitionIndex = 20491;

	class ICCGParameterOutputRef`1 : public Il2CppObject
	{
	public:
		::System::Void Set(::MX::MinigameCCG::CCGProcedureContext* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGPARAMETEROUTPUTREF`1_SET_OFFSET))(arg, arg, nullptr);
		}

	};
}

