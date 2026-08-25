#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class IntegerInputRef; }
namespace MX::MinigameCCG::ParameterRef { class IntegerOutputRef; }
namespace MX::MinigameCCG { class CCGProcedureContext; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_GENERATERANDOMINTEGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2BEC0)
#define MX_MINIGAMECCG_PROCEDURES_GENERATERANDOMINTEGER_ONPREPARE_OFFSET UNITYSDK_OFFSET(0x1E2BED0)
#define MX_MINIGAMECCG_PROCEDURES_GENERATERANDOMINTEGER_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E2C020)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int GenerateRandomInteger_TypeDefinitionIndex = 20965;

	class GenerateRandomInteger : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::IntegerInputRef* integerLowerBoundVar; // 0x10
		::MX::MinigameCCG::ParameterRef::IntegerInputRef* integerUpperBoundVar; // 0x20
		::MX::MinigameCCG::ParameterRef::IntegerOutputRef* generatedIntegerVar; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_GENERATERANDOMINTEGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnPrepare(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_GENERATERANDOMINTEGER_ONPREPARE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_GENERATERANDOMINTEGER_ONSTATE_OFFSET))(arg, nullptr);
		}

	};
}

