#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class EntityOutputRef; }
namespace MX::MinigameCCG::SkillTriggers { class CCGPassiveTriggerLocationFlag; }
namespace MX::MinigameCCG { class CCGSkillData; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG { class ICCGSkillTriggerable; }
namespace MX::MinigameCCG { class CCGSkillContext&; }

#define MX_MINIGAMECCG_SKILLTRIGGERS_PASSIVETRIGGER_GETSKILLPOWER_OFFSET UNITYSDK_OFFSET(0x1E282C0)
#define MX_MINIGAMECCG_SKILLTRIGGERS_PASSIVETRIGGER_TRYTRIGGER_OFFSET UNITYSDK_OFFSET(0x1E28300)
#define MX_MINIGAMECCG_SKILLTRIGGERS_PASSIVETRIGGER_TRYTRIGGER_OFFSET UNITYSDK_OFFSET(0x1E27A70)
#define MX_MINIGAMECCG_SKILLTRIGGERS_PASSIVETRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E27BA0)

namespace MX::MinigameCCG::SkillTriggers
{
	inline static constexpr unsigned int PassiveTrigger_TypeDefinitionIndex = 20892;

	class PassiveTrigger : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::EntityOutputRef* attachEntityVar; // 0x38
		::MX::MinigameCCG::SkillTriggers::CCGPassiveTriggerLocationFlag* locationFlag; // 0x40
		::System::Boolean decayEquipmentOnTriggered; // 0x44

		::System::Int32 GetSkillPower(::MX::MinigameCCG::CCGSkillData* arg, ::MX::MinigameCCG::CCGEntity* arg)
		{
			return (return (::System::Int32(*)(::MX::MinigameCCG::CCGSkillData*, ::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_PASSIVETRIGGER_GETSKILLPOWER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryTrigger(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGSkillData* arg, ::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::ICCGSkillTriggerable* arg, ::System::Object* arg, ::MX::MinigameCCG::CCGSkillContext&* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGSkillData*, ::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::ICCGSkillTriggerable*, ::System::Object*, ::MX::MinigameCCG::CCGSkillContext&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_PASSIVETRIGGER_TRYTRIGGER_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryTrigger(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGSkillData* arg, ::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::ICCGSkillTriggerable* arg, Il2CppObject* arg, ::System::Object* arg, ::MX::MinigameCCG::CCGSkillContext&* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGSkillData*, ::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::ICCGSkillTriggerable*, Il2CppObject*, ::System::Object*, ::MX::MinigameCCG::CCGSkillContext&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_PASSIVETRIGGER_TRYTRIGGER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_PASSIVETRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

