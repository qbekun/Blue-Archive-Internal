#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_CONDITION_AND_CHECK_OFFSET UNITYSDK_OFFSET(0x1E29C30)
#define MX_MINIGAMECCG_CONDITION_AND_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E29E20)

namespace MX::MinigameCCG::Condition
{
	inline static constexpr unsigned int And_TypeDefinitionIndex = 20927;

	class And : public Il2CppObject
	{
	public:
		Il2CppObject* conditions; // 0x10

		::System::Boolean Check(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_AND_CHECK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_AND_.CTOR_OFFSET))(nullptr);
		}

	};
}

