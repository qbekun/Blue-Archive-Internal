#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandOverrideRaidBossBuffIcon; }
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDOVERRIDERAIDBOSSBUFFICONVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B32A0)
#define GROUNDCOMMANDOVERRIDERAIDBOSSBUFFICONVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B32B0)
#define GROUNDCOMMANDOVERRIDERAIDBOSSBUFFICONVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15B3370)
#define GROUNDCOMMANDOVERRIDERAIDBOSSBUFFICONVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B36A0)

	inline static constexpr unsigned int GroundCommandOverrideRaidBossBuffIconVisual_TypeDefinitionIndex = 1163;

	class GroundCommandOverrideRaidBossBuffIconVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandOverrideRaidBossBuffIcon* OverrideRaidBossBuffIcon; // 0x18

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDOVERRIDERAIDBOSSBUFFICONVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDOVERRIDERAIDBOSSBUFFICONVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDOVERRIDERAIDBOSSBUFFICONVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDOVERRIDERAIDBOSSBUFFICONVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

