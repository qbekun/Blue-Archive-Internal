#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class PlayerInputRef; }
namespace MX::MinigameCCG::ParameterRef { class EntityCollectionInputRef; }
namespace MX::MinigameCCG::ParameterRef { class IntegerInputRef; }
namespace MX::MinigameCCG::ParameterRef { class EntityCollectionOutputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_FILTERTARGETENTITIESBYPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E31D60)
#define MX_MINIGAMECCG_PROCEDURES_FILTERTARGETENTITIESBYPLAYER_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E31D70)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int FilterTargetEntitiesByPlayer_TypeDefinitionIndex = 21014;

	class FilterTargetEntitiesByPlayer : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::PlayerInputRef* playerVar; // 0x10
		::MX::MinigameCCG::ParameterRef::EntityCollectionInputRef* entityCandidatesVar; // 0x18
		::MX::MinigameCCG::ParameterRef::IntegerInputRef* countVar; // 0x20
		::MX::MinigameCCG::ParameterRef::EntityCollectionOutputRef* entitySelectedVar; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_FILTERTARGETENTITIESBYPLAYER_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_FILTERTARGETENTITIESBYPLAYER_ONSTATE_OFFSET))(arg, nullptr);
		}

	};
}

