#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEPERIODICEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x14028C0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEPERIODICEXECUTION_SET_REMAINEDFRAME_OFFSET UNITYSDK_OFFSET(0x1402960)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEPERIODICEXECUTION_GET_REMAINEDFRAME_OFFSET UNITYSDK_OFFSET(0x1402970)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEPERIODICEXECUTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1402980)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattlePeriodicExecution_TypeDefinitionIndex = 14663;

	class BattlePeriodicExecution : public Il2CppObject
	{
	public:
		::System::Int32 period; // 0x50
		::System::Int32 _remainedFrame_k__BackingField; // 0x54

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Skills::Passive::PassiveSkill* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEPERIODICEXECUTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_remainedFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEPERIODICEXECUTION_SET_REMAINEDFRAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_remainedFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEPERIODICEXECUTION_GET_REMAINEDFRAME_OFFSET))(nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEPERIODICEXECUTION_UPDATE_OFFSET))(arg, nullptr);
		}

	};
}

