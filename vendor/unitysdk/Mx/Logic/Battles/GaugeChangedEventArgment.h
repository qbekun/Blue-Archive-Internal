#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }

#define MX_LOGIC_BATTLES_GAUGECHANGEDEVENTARGMENT_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12A84B0)
#define MX_LOGIC_BATTLES_GAUGECHANGEDEVENTARGMENT_GET_MAX_OFFSET UNITYSDK_OFFSET(0x12A84C0)
#define MX_LOGIC_BATTLES_GAUGECHANGEDEVENTARGMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x12A84D0)
#define MX_LOGIC_BATTLES_GAUGECHANGEDEVENTARGMENT_GET_TARGETCHARACTER_OFFSET UNITYSDK_OFFSET(0x12A8510)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GaugeChangedEventArgment_TypeDefinitionIndex = 14112;

	class GaugeChangedEventArgment : public Il2CppObject
	{
	public:
		::System::Int64 _Current_k__BackingField; // 0x10
		::System::Int64 _Max_k__BackingField; // 0x18
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* _TargetCharacter_k__BackingField; // 0x20

		::System::Int64 get_Current()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GAUGECHANGEDEVENTARGMENT_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Int64 get_Max()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GAUGECHANGEDEVENTARGMENT_GET_MAX_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GAUGECHANGEDEVENTARGMENT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* get_TargetCharacter()
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GAUGECHANGEDEVENTARGMENT_GET_TARGETCHARACTER_OFFSET))(nullptr);
		}

	};
}

