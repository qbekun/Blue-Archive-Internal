#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_ACTIONS_FEAREDACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x10EBEE0)
#define MX_LOGIC_ACTIONS_FEAREDACTION_GETMOVEVECTOR_OFFSET UNITYSDK_OFFSET(0x10EBEF0)

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int FearedAction_TypeDefinitionIndex = 13010;

	class FearedAction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_FEAREDACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* GetMoveVector(::MX::Logic::Battles::Battle* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_FEAREDACTION_GETMOVEVECTOR_OFFSET))(arg, nullptr);
		}

	};
}

