#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class AnyInputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }
namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_PROCEDURES_PRINTDEBUGLOG_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E2DD60)
#define MX_MINIGAMECCG_PROCEDURES_PRINTDEBUGLOG_ONPREPARE_OFFSET UNITYSDK_OFFSET(0x1E2DE20)
#define MX_MINIGAMECCG_PROCEDURES_PRINTDEBUGLOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2DE30)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int PrintDebugLog_TypeDefinitionIndex = 20979;

	class PrintDebugLog : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::AnyInputRef* var; // 0x10

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_PRINTDEBUGLOG_ONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPrepare(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_PRINTDEBUGLOG_ONPREPARE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_PRINTDEBUGLOG_.CTOR_OFFSET))(nullptr);
		}

	};
}

