#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandSetTimeScale; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDSETTIMESCALEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B9750)
#define GROUNDCOMMANDSETTIMESCALEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B9760)
#define GROUNDCOMMANDSETTIMESCALEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B9820)

	inline static constexpr unsigned int GroundCommandSetTimeScaleVisual_TypeDefinitionIndex = 1196;

	class GroundCommandSetTimeScaleVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandSetTimeScale* SetTimeScale; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETTIMESCALEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETTIMESCALEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETTIMESCALEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

	};

