#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandCreateRandomNumber; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDCREATERANDOMNUMBERVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AF350)
#define GROUNDCOMMANDCREATERANDOMNUMBERVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AF360)
#define GROUNDCOMMANDCREATERANDOMNUMBERVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15AF420)

	inline static constexpr unsigned int GroundCommandCreateRandomNumberVisual_TypeDefinitionIndex = 1134;

	class GroundCommandCreateRandomNumberVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandCreateRandomNumber* CreateRandomNumber; // 0x18

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCREATERANDOMNUMBERVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCREATERANDOMNUMBERVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCREATERANDOMNUMBERVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

