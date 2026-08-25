#pragma once
#include "unitysdk.h"

class GroundCommandPlayScenario;
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDPLAYSCENARIOVISUAL_COSTARTSCENARIO_OFFSET UNITYSDK_OFFSET(0x15B40D0)
#define GROUNDCOMMANDPLAYSCENARIOVISUAL_ONPLAYSCENARIOFINISH_OFFSET UNITYSDK_OFFSET(0x15B4160)
#define GROUNDCOMMANDPLAYSCENARIOVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B42A0)
#define GROUNDCOMMANDPLAYSCENARIOVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B42B0)
#define GROUNDCOMMANDPLAYSCENARIOVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B42C0)
#define GROUNDCOMMANDPLAYSCENARIOVISUAL__ONPLAYSCENARIOFINISH_G__WAITFORENDOFFRAME|7_0_OFFSET UNITYSDK_OFFSET(0x15B4230)
#define GROUNDCOMMANDPLAYSCENARIOVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15B43A0)

	inline static constexpr unsigned int GroundCommandPlayScenarioVisual_TypeDefinitionIndex = 1168;

	class GroundCommandPlayScenarioVisual : public Il2CppObject
	{
	public:
		GroundCommandPlayScenario* Command; // 0x18
		::System::Boolean isUIBattleOpened; // 0x20
		::System::Boolean isUIDamageFloaterOpened; // 0x21

		::System::Collections::IEnumerator* CoStartScenario()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYSCENARIOVISUAL_COSTARTSCENARIO_OFFSET))(nullptr);
		}

		::System::Void OnPlayScenarioFinish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYSCENARIOVISUAL_ONPLAYSCENARIOFINISH_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYSCENARIOVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYSCENARIOVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYSCENARIOVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _OnPlayScenarioFinish_g__WaitForEndOfFrame|7_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYSCENARIOVISUAL__ONPLAYSCENARIOFINISH_G__WAITFORENDOFFRAME|7_0_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYSCENARIOVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

	};

