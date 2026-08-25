#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_ACTIONS_DYINGACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x10EB320)
#define MX_LOGIC_ACTIONS_DYINGACTION_LEAVE_OFFSET UNITYSDK_OFFSET(0x10EB390)
#define MX_LOGIC_ACTIONS_DYINGACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x10EB470)
#define MX_LOGIC_ACTIONS_DYINGACTION_SET_ATTACKER_OFFSET UNITYSDK_OFFSET(0x10EB4F0)
#define MX_LOGIC_ACTIONS_DYINGACTION_GET_ATTACKER_OFFSET UNITYSDK_OFFSET(0x10EB500)

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int DyingAction_TypeDefinitionIndex = 13008;

	class DyingAction : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::BattleEntity* _Attacker_k__BackingField; // 0x50
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* character; // 0x58

		::System::Void .ctor(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_DYINGACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Leave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_DYINGACTION_LEAVE_OFFSET))(nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_DYINGACTION_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Attacker(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_DYINGACTION_SET_ATTACKER_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Attacker()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_DYINGACTION_GET_ATTACKER_OFFSET))(nullptr);
		}

	};
}

