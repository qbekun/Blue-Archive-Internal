#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandResetForceMoveToFormationBeaconCommand; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDRESETFORCEMOVETOFORMATIONBEACONCOMMANDVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B7FE0)
#define GROUNDCOMMANDRESETFORCEMOVETOFORMATIONBEACONCOMMANDVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B7FF0)
#define GROUNDCOMMANDRESETFORCEMOVETOFORMATIONBEACONCOMMANDVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B80B0)

	inline static constexpr unsigned int GroundCommandResetForceMoveToFormationBeaconCommandVisual_TypeDefinitionIndex = 1181;

	class GroundCommandResetForceMoveToFormationBeaconCommandVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandResetForceMoveToFormationBeaconCommand* ResetForceMoveCommand; // 0x18

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDRESETFORCEMOVETOFORMATIONBEACONCOMMANDVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDRESETFORCEMOVETOFORMATIONBEACONCOMMANDVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDRESETFORCEMOVETOFORMATIONBEACONCOMMANDVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

