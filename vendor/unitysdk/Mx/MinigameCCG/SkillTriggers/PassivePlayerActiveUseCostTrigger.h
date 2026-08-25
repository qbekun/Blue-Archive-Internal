#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class EntityOutputRef; }
namespace MX::MinigameCCG::ParameterRef { class PlayerOutputRef; }
namespace MX::MinigameCCG::ParameterRef { class IntegerOutputRef; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG { class CCGSkillData; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class ICCGSkillTriggerable; }
namespace MX::MinigameCCG { class CCGSkillContext&; }

#define MX_MINIGAMECCG_SKILLTRIGGERS_PASSIVEPLAYERACTIVEUSECOSTTRIGGER_TRYTRIGGER_OFFSET UNITYSDK_OFFSET(0x1E27E60)
#define MX_MINIGAMECCG_SKILLTRIGGERS_PASSIVEPLAYERACTIVEUSECOSTTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E28030)

namespace MX::MinigameCCG::SkillTriggers
{
	inline static constexpr unsigned int PassivePlayerActiveUseCostTrigger_TypeDefinitionIndex = 20888;

	class PassivePlayerActiveUseCostTrigger : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::EntityOutputRef* invokedEntityVar; // 0x48
		::MX::MinigameCCG::ParameterRef::PlayerOutputRef* invokedPlayerVar; // 0x50
		::MX::MinigameCCG::ParameterRef::IntegerOutputRef* beforeCostVar; // 0x58
		::MX::MinigameCCG::ParameterRef::IntegerOutputRef* afterCostVar; // 0x60
		::MX::MinigameCCG::ParameterRef::IntegerOutputRef* costDiffVar; // 0x68

		::System::Boolean TryTrigger(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGSkillData* arg, ::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::ICCGSkillTriggerable* arg, Il2CppObject* arg, ::System::Object* arg, ::MX::MinigameCCG::CCGSkillContext&* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGSkillData*, ::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::ICCGSkillTriggerable*, Il2CppObject*, ::System::Object*, ::MX::MinigameCCG::CCGSkillContext&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_PASSIVEPLAYERACTIVEUSECOSTTRIGGER_TRYTRIGGER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_PASSIVEPLAYERACTIVEUSECOSTTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

