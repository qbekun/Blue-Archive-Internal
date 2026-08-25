#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class PassiveSkillSpawner; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEONOFFEXECUTION_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13FFCD0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEONOFFEXECUTION_SET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x14000F0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEONOFFEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x1400100)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEONOFFEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x1400140)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEONOFFEXECUTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1400160)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEONOFFEXECUTION_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x1400270)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEONOFFEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1400280)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityStateOnOffExecution_TypeDefinitionIndex = 14658;

	class BattleEntityStateOnOffExecution : public Il2CppObject
	{
	public:
		::System::Boolean _isRunning_k__BackingField; // 0x50
		::MX::Logic::BattleEntities::PassiveSkillSpawner* currentSpawner; // 0x58

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEONOFFEXECUTION_EVALUATE_OFFSET))(nullptr);
		}

		::System::Void set_isRunning(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEONOFFEXECUTION_SET_ISRUNNING_OFFSET))(arg, nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEONOFFEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEONOFFEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEONOFFEXECUTION_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEONOFFEXECUTION_GET_ISRUNNING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYSTATEONOFFEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

