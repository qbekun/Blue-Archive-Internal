#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class IntegerOutputRef; }
namespace MX::MinigameCCG { class CCGProcedureContext; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_EXECUTEEXPRESSION_ONPREPARE_OFFSET UNITYSDK_OFFSET(0x1E2B3F0)
#define MX_MINIGAMECCG_PROCEDURES_EXECUTEEXPRESSION_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E2B500)
#define MX_MINIGAMECCG_PROCEDURES_EXECUTEEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B5C0)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int ExecuteExpression_TypeDefinitionIndex = 20958;

	class ExecuteExpression : public Il2CppObject
	{
	public:
		::System::String* expression; // 0x10
		::MX::MinigameCCG::ParameterRef::IntegerOutputRef* evaluatedVar; // 0x18
		::System::Boolean allowNullDefaultValue; // 0x20
		::System::Int32 nullDefaultValue; // 0x24

		::System::Void OnPrepare(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_EXECUTEEXPRESSION_ONPREPARE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_EXECUTEEXPRESSION_ONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_EXECUTEEXPRESSION_.CTOR_OFFSET))(nullptr);
		}

	};
}

