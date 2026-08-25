#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class EntityCollectionInputRef; }
namespace MX::MinigameCCG::ParameterRef { class IntegerInputRef; }
namespace MX::MinigameCCG::ParameterRef { class EntityCollectionOutputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_FILTERTARGETENTITIESBYRANDOM_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E322D0)
#define MX_MINIGAMECCG_PROCEDURES_FILTERTARGETENTITIESBYRANDOM_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E32390)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int FilterTargetEntitiesByRandom_TypeDefinitionIndex = 21017;

	class FilterTargetEntitiesByRandom : public Il2CppObject
	{
	public:
		::System::Boolean allowDuplicate; // 0x10
		::MX::MinigameCCG::ParameterRef::EntityCollectionInputRef* entityCandidatesVar; // 0x18
		::MX::MinigameCCG::ParameterRef::IntegerInputRef* countVar; // 0x20
		::MX::MinigameCCG::ParameterRef::EntityCollectionOutputRef* entitySelectedVar; // 0x30

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_FILTERTARGETENTITIESBYRANDOM_ONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_FILTERTARGETENTITIESBYRANDOM_.CTOR_OFFSET))(nullptr);
		}

	};
}

