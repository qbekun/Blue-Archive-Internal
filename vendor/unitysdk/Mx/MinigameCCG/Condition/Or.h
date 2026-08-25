#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_CONDITION_OR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A2A0)
#define MX_MINIGAMECCG_CONDITION_OR_CHECK_OFFSET UNITYSDK_OFFSET(0x1E2A2B0)

namespace MX::MinigameCCG::Condition
{
	inline static constexpr unsigned int Or_TypeDefinitionIndex = 20936;

	class Or : public Il2CppObject
	{
	public:
		Il2CppObject* conditions; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_OR_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Check(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_OR_CHECK_OFFSET))(arg, nullptr);
		}

	};
}

