#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGTargetCategoryRule; }
namespace MX::MinigameCCG::ParameterRef { class PlayerInputRef; }
namespace MX::MinigameCCG::ParameterRef { class EntityCollectionOutputRef; }
namespace MX::MinigameCCG { class CCGProcedureContext; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_SEARCHTARGETS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2DFD0)
#define MX_MINIGAMECCG_PROCEDURES_SEARCHTARGETS_ONPREPARE_OFFSET UNITYSDK_OFFSET(0x1E2DFE0)
#define MX_MINIGAMECCG_PROCEDURES_SEARCHTARGETS_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E2E050)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int SearchTargets_TypeDefinitionIndex = 20981;

	class SearchTargets : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGTargetCategoryRule* category; // 0x10
		::MX::MinigameCCG::ParameterRef::PlayerInputRef* playerVar; // 0x18
		::MX::MinigameCCG::ParameterRef::EntityCollectionOutputRef* foundEntitiesVar; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_SEARCHTARGETS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnPrepare(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_SEARCHTARGETS_ONPREPARE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_SEARCHTARGETS_ONSTATE_OFFSET))(arg, nullptr);
		}

	};
}

