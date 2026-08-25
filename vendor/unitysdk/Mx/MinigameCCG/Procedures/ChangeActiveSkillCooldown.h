#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class EntityInputRef; }
namespace MX::MinigameCCG::ParameterRef { class IntegerInputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_CHANGEACTIVESKILLCOOLDOWN_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E2F3F0)
#define MX_MINIGAMECCG_PROCEDURES_CHANGEACTIVESKILLCOOLDOWN_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F4B0)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int ChangeActiveSkillCooldown_TypeDefinitionIndex = 20994;

	class ChangeActiveSkillCooldown : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::EntityInputRef* targetCharacterVar; // 0x10
		::MX::MinigameCCG::ParameterRef::IntegerInputRef* cooldownOffsetVar; // 0x18

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_CHANGEACTIVESKILLCOOLDOWN_ONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_CHANGEACTIVESKILLCOOLDOWN_.CTOR_OFFSET))(nullptr);
		}

	};
}

