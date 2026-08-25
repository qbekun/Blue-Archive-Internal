#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandFormationChange; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDFORMATIONCHANGEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B1020)
#define GROUNDCOMMANDFORMATIONCHANGEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B1030)
#define GROUNDCOMMANDFORMATIONCHANGEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B1040)

	inline static constexpr unsigned int GroundCommandFormationChangeVisual_TypeDefinitionIndex = 1150;

	class GroundCommandFormationChangeVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandFormationChange* FormationChange; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORMATIONCHANGEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORMATIONCHANGEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORMATIONCHANGEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

