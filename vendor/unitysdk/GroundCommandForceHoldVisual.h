#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandForceHold; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDFORCEHOLDVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B08D0)
#define GROUNDCOMMANDFORCEHOLDVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B08E0)
#define GROUNDCOMMANDFORCEHOLDVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B08F0)

	inline static constexpr unsigned int GroundCommandForceHoldVisual_TypeDefinitionIndex = 1145;

	class GroundCommandForceHoldVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandForceHold* ForceHold; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEHOLDVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEHOLDVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEHOLDVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

