#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class RaidBossCharacter; }
namespace MX::Logic::Data { class RootMotionFrame; }
class MoveToWorldPositionCommand;
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_ACTIONS_MOVETOWORLDPOSITIONACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x10F0A10)
#define MX_LOGIC_ACTIONS_MOVETOWORLDPOSITIONACTION_LEAVE_OFFSET UNITYSDK_OFFSET(0x10F0AE0)
#define MX_LOGIC_ACTIONS_MOVETOWORLDPOSITIONACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x10F0B30)
#define MX_LOGIC_ACTIONS_MOVETOWORLDPOSITIONACTION_ENTER_OFFSET UNITYSDK_OFFSET(0x10F12B0)
#define MX_LOGIC_ACTIONS_MOVETOWORLDPOSITIONACTION_UPDATEROOTMOTION_OFFSET UNITYSDK_OFFSET(0x10F0BB0)

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int MoveToWorldPositionAction_TypeDefinitionIndex = 13020;

	class MoveToWorldPositionAction : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::RaidBossCharacter* raidBoss; // 0x50
		::MX::Logic::Data::RootMotionFrame* rootMotionFrame; // 0x58
		::System::Int32 frameDuration; // 0x60
		::System::Single moveRatio; // 0x64
		MoveToWorldPositionCommand* moveToWorldPositionCommand; // 0x68

		::System::Void .ctor(::MX::Logic::BattleEntities::RaidBossCharacter* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::RaidBossCharacter*, ::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOWORLDPOSITIONACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Leave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOWORLDPOSITIONACTION_LEAVE_OFFSET))(nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOWORLDPOSITIONACTION_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Enter(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOWORLDPOSITIONACTION_ENTER_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateRootMotion(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_MOVETOWORLDPOSITIONACTION_UPDATEROOTMOTION_OFFSET))(arg, nullptr);
		}

	};
}

