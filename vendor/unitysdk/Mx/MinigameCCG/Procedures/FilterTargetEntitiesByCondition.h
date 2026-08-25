#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class ICCGEntityCondition; }
namespace MX::MinigameCCG::ParameterRef { class EntityCollectionInputRef; }
namespace MX::MinigameCCG::ParameterRef { class EntityCollectionOutputRef; }
namespace MX::MinigameCCG { class CCGProcedureContext; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_FILTERTARGETENTITIESBYCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B750)
#define MX_MINIGAMECCG_PROCEDURES_FILTERTARGETENTITIESBYCONDITION_ONPREPARE_OFFSET UNITYSDK_OFFSET(0x1E2B760)
#define MX_MINIGAMECCG_PROCEDURES_FILTERTARGETENTITIESBYCONDITION_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E2B8B0)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int FilterTargetEntitiesByCondition_TypeDefinitionIndex = 20961;

	class FilterTargetEntitiesByCondition : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ICCGEntityCondition* entityCondition; // 0x10
		::MX::MinigameCCG::ParameterRef::EntityCollectionInputRef* entityCollectionVar; // 0x18
		::MX::MinigameCCG::ParameterRef::EntityCollectionOutputRef* filteredEntityCollectionVar; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_FILTERTARGETENTITIESBYCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnPrepare(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_FILTERTARGETENTITIESBYCONDITION_ONPREPARE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_FILTERTARGETENTITIESBYCONDITION_ONSTATE_OFFSET))(arg, nullptr);
		}

	};
}

