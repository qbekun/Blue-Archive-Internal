#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandWaitSeconds; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDWAITSECONDSVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x18128C0)
#define GROUNDCOMMANDWAITSECONDSVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x18128D0)
#define GROUNDCOMMANDWAITSECONDSVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x18128E0)

	inline static constexpr unsigned int GroundCommandWaitSecondsVisual_TypeDefinitionIndex = 1211;

	class GroundCommandWaitSecondsVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandWaitSeconds* WaitSeconds; // 0x18

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDWAITSECONDSVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDWAITSECONDSVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDWAITSECONDSVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

