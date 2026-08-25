#pragma once
#include "unitysdk.h"

class UIBattleAdditionalLimitBreak_Base;
namespace MX::Logic::Battles { class GroundCommandSetLimitBreakGauge; }
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDSETLIMITBREAKGAUGEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B8740)
#define GROUNDCOMMANDSETLIMITBREAKGAUGEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B8750)
#define GROUNDCOMMANDSETLIMITBREAKGAUGEVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15B8810)
#define GROUNDCOMMANDSETLIMITBREAKGAUGEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B8A50)
#define GROUNDCOMMANDSETLIMITBREAKGAUGEVISUAL__VISUALIZE_G__WAITUIBATTLEANDSET|4_0_OFFSET UNITYSDK_OFFSET(0x15B89E0)

	inline static constexpr unsigned int GroundCommandSetLimitBreakGaugeVisual_TypeDefinitionIndex = 1187;

	class GroundCommandSetLimitBreakGaugeVisual : public Il2CppObject
	{
	public:
		UIBattleAdditionalLimitBreak_Base* prefab; // 0x18
		::MX::Logic::Battles::GroundCommandSetLimitBreakGauge* setLimitBreakGauge; // 0x20

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETLIMITBREAKGAUGEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETLIMITBREAKGAUGEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETLIMITBREAKGAUGEVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETLIMITBREAKGAUGEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _Visualize_g__WaitUIBattleAndSet|4_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETLIMITBREAKGAUGEVISUAL__VISUALIZE_G__WAITUIBATTLEANDSET|4_0_OFFSET))(nullptr);
		}

	};

