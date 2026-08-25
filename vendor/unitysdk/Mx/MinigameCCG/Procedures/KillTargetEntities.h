#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class EntityCollectionInputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_KILLTARGETENTITIES_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E33D60)
#define MX_MINIGAMECCG_PROCEDURES_KILLTARGETENTITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E33E20)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int KillTargetEntities_TypeDefinitionIndex = 21030;

	class KillTargetEntities : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::EntityCollectionInputRef* targetEntitiesVar; // 0x10

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_KILLTARGETENTITIES_ONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_KILLTARGETENTITIES_.CTOR_OFFSET))(nullptr);
		}

	};
}

