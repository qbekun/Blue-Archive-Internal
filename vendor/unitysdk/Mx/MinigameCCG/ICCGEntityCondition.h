#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }
namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_ICCGENTITYCONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int ICCGEntityCondition_TypeDefinitionIndex = 20488;

	class ICCGEntityCondition : public Il2CppObject
	{
	public:
		::System::Boolean Check(::MX::MinigameCCG::CCGProcedureContext* arg, ::MX::MinigameCCG::CCGEntity* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGProcedureContext*, ::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGENTITYCONDITION_CHECK_OFFSET))(arg, arg, nullptr);
		}

	};
}

