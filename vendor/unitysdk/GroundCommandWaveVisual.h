#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandWave; }
class UIBattle;
namespace MX::Logic::Battles { class WaveProcess; }
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDWAVEVISUAL_CLEARWAVEACTION_OFFSET UNITYSDK_OFFSET(0x1812C60)
#define GROUNDCOMMANDWAVEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1812DB0)
#define GROUNDCOMMANDWAVEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1812E70)
#define GROUNDCOMMANDWAVEVISUAL_STARTWAVEACTION_OFFSET UNITYSDK_OFFSET(0x1812E80)
#define GROUNDCOMMANDWAVEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1813010)
#define GROUNDCOMMANDWAVEVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x1813020)
#define GROUNDCOMMANDWAVEVISUAL_ALLCLEARACTION_OFFSET UNITYSDK_OFFSET(0x18133A0)
#define GROUNDCOMMANDWAVEVISUAL_COUNTCHANGEDACTION_OFFSET UNITYSDK_OFFSET(0x18133E0)

	inline static constexpr unsigned int GroundCommandWaveVisual_TypeDefinitionIndex = 1217;

	class GroundCommandWaveVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandWave* Wave; // 0x18
		UIBattle* uiBattle; // 0x20

		::System::Void ClearWaveAction(::MX::Logic::Battles::WaveProcess* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::WaveProcess*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDWAVEVISUAL_CLEARWAVEACTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDWAVEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDWAVEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void StartWaveAction(::MX::Logic::Battles::WaveProcess* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::WaveProcess*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDWAVEVISUAL_STARTWAVEACTION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDWAVEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDWAVEVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void AllClearAction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDWAVEVISUAL_ALLCLEARACTION_OFFSET))(nullptr);
		}

		::System::Void CountChangedAction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDWAVEVISUAL_COUNTCHANGEDACTION_OFFSET))(nullptr);
		}

	};

