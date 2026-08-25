#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::Procedures { class CCGCollectionSelectRule; }
namespace MX::MinigameCCG::ParameterRef { class IntegerArrayInputRef; }
namespace MX::MinigameCCG::ParameterRef { class IntegerOutputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }
namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_PROCEDURES_SELECTINTEGERFROMARRAY_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E2E2E0)
#define MX_MINIGAMECCG_PROCEDURES_SELECTINTEGERFROMARRAY_ONPREPARE_OFFSET UNITYSDK_OFFSET(0x1E2E3A0)
#define MX_MINIGAMECCG_PROCEDURES_SELECTINTEGERFROMARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E550)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int SelectIntegerFromArray_TypeDefinitionIndex = 20983;

	class SelectIntegerFromArray : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::Procedures::CCGCollectionSelectRule* rule; // 0x10
		::MX::MinigameCCG::ParameterRef::IntegerArrayInputRef* integerArrayVar; // 0x18
		::MX::MinigameCCG::ParameterRef::IntegerOutputRef* selectedIntegerVar; // 0x30

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_SELECTINTEGERFROMARRAY_ONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPrepare(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_SELECTINTEGERFROMARRAY_ONPREPARE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_SELECTINTEGERFROMARRAY_.CTOR_OFFSET))(nullptr);
		}

	};
}

