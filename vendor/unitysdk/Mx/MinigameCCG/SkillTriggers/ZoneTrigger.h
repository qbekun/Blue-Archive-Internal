#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG { class CCGSkillData; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class ICCGSkillTriggerable; }
namespace MX::MinigameCCG { class CCGSkillContext&; }

#define MX_MINIGAMECCG_SKILLTRIGGERS_ZONETRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E28A90)
#define MX_MINIGAMECCG_SKILLTRIGGERS_ZONETRIGGER_TRYTRIGGER_OFFSET UNITYSDK_OFFSET(0x1E28AA0)
#define MX_MINIGAMECCG_SKILLTRIGGERS_ZONETRIGGER_GETSKILLPOWER_OFFSET UNITYSDK_OFFSET(0x1E28B00)

namespace MX::MinigameCCG::SkillTriggers
{
	inline static constexpr unsigned int ZoneTrigger_TypeDefinitionIndex = 20901;

	class ZoneTrigger : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_ZONETRIGGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryTrigger(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGSkillData* arg, ::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::ICCGSkillTriggerable* arg, ::System::Object* arg, ::MX::MinigameCCG::CCGSkillContext&* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGSkillData*, ::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::ICCGSkillTriggerable*, ::System::Object*, ::MX::MinigameCCG::CCGSkillContext&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_ZONETRIGGER_TRYTRIGGER_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetSkillPower(::MX::MinigameCCG::CCGSkillData* arg, ::MX::MinigameCCG::CCGEntity* arg)
		{
			return (return (::System::Int32(*)(::MX::MinigameCCG::CCGSkillData*, ::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_ZONETRIGGER_GETSKILLPOWER_OFFSET))(arg, arg, nullptr);
		}

	};
}

