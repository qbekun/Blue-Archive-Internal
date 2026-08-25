#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandActivateConfrontationGauge; }
class IConfrontationGauge;
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Battles { class GaugeChangedEventArgment; }

#define GROUNDCOMMANDACTIVATECONFRONTATIONGAUGEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15ABC30)
#define GROUNDCOMMANDACTIVATECONFRONTATIONGAUGEVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15ABC40)
#define GROUNDCOMMANDACTIVATECONFRONTATIONGAUGEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15ABE50)
#define GROUNDCOMMANDACTIVATECONFRONTATIONGAUGEVISUAL_REFRESHGAUGE_OFFSET UNITYSDK_OFFSET(0x15ABF10)
#define GROUNDCOMMANDACTIVATECONFRONTATIONGAUGEVISUAL_GAUGE_GAUGECHANGED_OFFSET UNITYSDK_OFFSET(0x15AC180)
#define GROUNDCOMMANDACTIVATECONFRONTATIONGAUGEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AC1B0)

	inline static constexpr unsigned int GroundCommandActivateConfrontationGaugeVisual_TypeDefinitionIndex = 1115;

	class GroundCommandActivateConfrontationGaugeVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandActivateConfrontationGauge* Gauge; // 0x18
		IConfrontationGauge* confrontationBar; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDACTIVATECONFRONTATIONGAUGEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDACTIVATECONFRONTATIONGAUGEVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDACTIVATECONFRONTATIONGAUGEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshGauge(::System::Int64 arg, ::System::Int64 arg2, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDACTIVATECONFRONTATIONGAUGEVISUAL_REFRESHGAUGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Gauge_GaugeChanged(::System::Object* arg, ::MX::Logic::Battles::GaugeChangedEventArgment* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::GaugeChangedEventArgment*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDACTIVATECONFRONTATIONGAUGEVISUAL_GAUGE_GAUGECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDACTIVATECONFRONTATIONGAUGEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

	};

