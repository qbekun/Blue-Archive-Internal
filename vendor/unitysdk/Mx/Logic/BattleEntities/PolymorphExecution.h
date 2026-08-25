#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class StatusParams; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }

#define MX_LOGIC_BATTLEENTITIES_POLYMORPHEXECUTION_ENTER_OFFSET UNITYSDK_OFFSET(0x1174380)
#define MX_LOGIC_BATTLEENTITIES_POLYMORPHEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1174400)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int PolymorphExecution_TypeDefinitionIndex = 13220;

	class PolymorphExecution : public Il2CppObject
	{
	public:
		::System::Void Enter(::MX::Logic::BattleEntities::StatusParams* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::StatusParams*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_POLYMORPHEXECUTION_ENTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_POLYMORPHEXECUTION_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

