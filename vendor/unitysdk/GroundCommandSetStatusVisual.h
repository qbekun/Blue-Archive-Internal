#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandSetStatus; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDSETSTATUSVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B9590)
#define GROUNDCOMMANDSETSTATUSVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B95A0)
#define GROUNDCOMMANDSETSTATUSVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B95B0)

	inline static constexpr unsigned int GroundCommandSetStatusVisual_TypeDefinitionIndex = 1194;

	class GroundCommandSetStatusVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandSetStatus* SetStatus; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSTATUSVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSTATUSVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSTATUSVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

