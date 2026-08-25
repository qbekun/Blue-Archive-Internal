#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_ACTIONS_SEEKPOSITIONACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x10EB1D0)
#define MX_LOGIC_ACTIONS_SEEKPOSITIONACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x10EB230)
#define MX_LOGIC_ACTIONS_SEEKPOSITIONACTION_LEAVE_OFFSET UNITYSDK_OFFSET(0x10EB240)

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int SeekPositionAction_TypeDefinitionIndex = 13006;

	class SeekPositionAction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_SEEKPOSITIONACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_SEEKPOSITIONACTION_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Leave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_SEEKPOSITIONACTION_LEAVE_OFFSET))(nullptr);
		}

	};
}

