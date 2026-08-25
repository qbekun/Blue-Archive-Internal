#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class EntityOutputRef; }
namespace MX::MinigameCCG::ParameterRef { class IntegerOutputRef; }
namespace MX::MinigameCCG::ParameterRef { class BooleanOutputRef; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG { class CCGSkillData; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class ICCGSkillTriggerable; }
namespace MX::MinigameCCG { class CCGSkillContext&; }

#define MX_MINIGAMECCG_SKILLTRIGGERS_PASSIVESTRIKERDAMAGEDTRIGGER_TRYTRIGGER_OFFSET UNITYSDK_OFFSET(0x1E27890)
#define MX_MINIGAMECCG_SKILLTRIGGERS_PASSIVESTRIKERDAMAGEDTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E27B90)

namespace MX::MinigameCCG::SkillTriggers
{
	inline static constexpr unsigned int PassiveStrikerDamagedTrigger_TypeDefinitionIndex = 20884;

	class PassiveStrikerDamagedTrigger : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::EntityOutputRef* damagedStrikerVar; // 0x48
		::MX::MinigameCCG::ParameterRef::IntegerOutputRef* damageVar; // 0x50
		::MX::MinigameCCG::ParameterRef::EntityOutputRef* attackerEntityVar; // 0x58
		::MX::MinigameCCG::ParameterRef::BooleanOutputRef* strikerKilledVar; // 0x60

		::System::Boolean TryTrigger(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGSkillData* arg, ::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::ICCGSkillTriggerable* arg, Il2CppObject* arg, ::System::Object* arg, ::MX::MinigameCCG::CCGSkillContext&* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGSkillData*, ::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::ICCGSkillTriggerable*, Il2CppObject*, ::System::Object*, ::MX::MinigameCCG::CCGSkillContext&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_PASSIVESTRIKERDAMAGEDTRIGGER_TRYTRIGGER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_PASSIVESTRIKERDAMAGEDTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

