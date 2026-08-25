#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandForceMoveToFormationBeacon; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDFORCEMOVETOFORMATIONBEACONVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B0A90)
#define GROUNDCOMMANDFORCEMOVETOFORMATIONBEACONVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B0AA0)
#define GROUNDCOMMANDFORCEMOVETOFORMATIONBEACONVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B0B60)

	inline static constexpr unsigned int GroundCommandForceMoveToFormationBeaconVisual_TypeDefinitionIndex = 1147;

	class GroundCommandForceMoveToFormationBeaconVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandForceMoveToFormationBeacon* ForceMoveToFormationBeacon; // 0x18

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEMOVETOFORMATIONBEACONVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEMOVETOFORMATIONBEACONVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEMOVETOFORMATIONBEACONVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

