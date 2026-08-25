#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class IntegerOutputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }
namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_PROCEDURES_SETINTEGERPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2EA30)
#define MX_MINIGAMECCG_PROCEDURES_SETINTEGERPARAMETER_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E2EA40)
#define MX_MINIGAMECCG_PROCEDURES_SETINTEGERPARAMETER_ONPREPARE_OFFSET UNITYSDK_OFFSET(0x1E2EB00)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int SetIntegerParameter_TypeDefinitionIndex = 20988;

	class SetIntegerParameter : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::IntegerOutputRef* var; // 0x10
		::System::Int32 integer; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_SETINTEGERPARAMETER_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_SETINTEGERPARAMETER_ONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPrepare(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_SETINTEGERPARAMETER_ONPREPARE_OFFSET))(arg, nullptr);
		}

	};
}

