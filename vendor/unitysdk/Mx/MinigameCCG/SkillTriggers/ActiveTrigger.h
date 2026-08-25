#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGSkillTargetSelector; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG { class CCGSkillData; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class ICCGSkillTriggerable; }
namespace MX::MinigameCCG { class CCGSkillContext&; }

#define MX_MINIGAMECCG_SKILLTRIGGERS_ACTIVETRIGGER_TRYTRIGGER_OFFSET UNITYSDK_OFFSET(0x1E27690)
#define MX_MINIGAMECCG_SKILLTRIGGERS_ACTIVETRIGGER_GETSKILLPOWER_OFFSET UNITYSDK_OFFSET(0x1E276F0)
#define MX_MINIGAMECCG_SKILLTRIGGERS_ACTIVETRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E27730)

namespace MX::MinigameCCG::SkillTriggers
{
	inline static constexpr unsigned int ActiveTrigger_TypeDefinitionIndex = 20881;

	class ActiveTrigger : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGSkillTargetSelector* targetSelector; // 0x38

		::System::Boolean TryTrigger(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGSkillData* arg, ::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::ICCGSkillTriggerable* arg, ::System::Object* arg, ::MX::MinigameCCG::CCGSkillContext&* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGSkillData*, ::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::ICCGSkillTriggerable*, ::System::Object*, ::MX::MinigameCCG::CCGSkillContext&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_ACTIVETRIGGER_TRYTRIGGER_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetSkillPower(::MX::MinigameCCG::CCGSkillData* arg, ::MX::MinigameCCG::CCGEntity* arg)
		{
			return (return (::System::Int32(*)(::MX::MinigameCCG::CCGSkillData*, ::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_ACTIVETRIGGER_GETSKILLPOWER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_ACTIVETRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

