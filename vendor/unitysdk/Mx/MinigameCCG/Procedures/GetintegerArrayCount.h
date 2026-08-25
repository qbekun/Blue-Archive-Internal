#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class IntegerArrayInputRef; }
namespace MX::MinigameCCG::ParameterRef { class IntegerOutputRef; }
namespace MX::MinigameCCG { class CCGProcedureContext; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_GETINTEGERARRAYCOUNT_ONPREPARE_OFFSET UNITYSDK_OFFSET(0x1E2CBE0)
#define MX_MINIGAMECCG_PROCEDURES_GETINTEGERARRAYCOUNT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2CCD0)
#define MX_MINIGAMECCG_PROCEDURES_GETINTEGERARRAYCOUNT_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E2CCE0)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int GetintegerArrayCount_TypeDefinitionIndex = 20972;

	class GetintegerArrayCount : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::IntegerArrayInputRef* integerArrayVar; // 0x10
		::MX::MinigameCCG::ParameterRef::IntegerOutputRef* countVar; // 0x28

		::System::Void OnPrepare(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_GETINTEGERARRAYCOUNT_ONPREPARE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_GETINTEGERARRAYCOUNT_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_GETINTEGERARRAYCOUNT_ONSTATE_OFFSET))(arg, nullptr);
		}

	};
}

