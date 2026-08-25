#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_ICCGPARAMETERDECL_INITCONTEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_ICCGPARAMETERDECL_GET_KEY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int ICCGParameterDecl_TypeDefinitionIndex = 20489;

	class ICCGParameterDecl : public Il2CppObject
	{
	public:
		::System::Void InitContext(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGPARAMETERDECL_INITCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::String* get_Key()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGPARAMETERDECL_GET_KEY_OFFSET))(nullptr);
		}

	};
}

