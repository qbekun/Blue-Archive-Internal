#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class EntityCollectionInputRef; }
namespace MX::MinigameCCG::ParameterRef { class IntegerOutputRef; }
namespace MX::MinigameCCG { class CCGProcedureContext; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_GETENTITYCOLLECTIONCOUNT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C260)
#define MX_MINIGAMECCG_PROCEDURES_GETENTITYCOLLECTIONCOUNT_ONPREPARE_OFFSET UNITYSDK_OFFSET(0x1E2C270)
#define MX_MINIGAMECCG_PROCEDURES_GETENTITYCOLLECTIONCOUNT_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E2C370)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int GetEntityCollectionCount_TypeDefinitionIndex = 20967;

	class GetEntityCollectionCount : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::EntityCollectionInputRef* collectionVar; // 0x10
		::MX::MinigameCCG::ParameterRef::IntegerOutputRef* countVar; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_GETENTITYCOLLECTIONCOUNT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnPrepare(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_GETENTITYCOLLECTIONCOUNT_ONPREPARE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_GETENTITYCOLLECTIONCOUNT_ONSTATE_OFFSET))(arg, nullptr);
		}

	};
}

