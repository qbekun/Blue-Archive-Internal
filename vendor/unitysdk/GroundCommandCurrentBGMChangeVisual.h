#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandCurrentBGMChange; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDCURRENTBGMCHANGEVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15AF510)
#define GROUNDCOMMANDCURRENTBGMCHANGEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15AF720)
#define GROUNDCOMMANDCURRENTBGMCHANGEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AF730)
#define GROUNDCOMMANDCURRENTBGMCHANGEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AF740)

	inline static constexpr unsigned int GroundCommandCurrentBGMChangeVisual_TypeDefinitionIndex = 1136;

	class GroundCommandCurrentBGMChangeVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandCurrentBGMChange* CurrentBGMChange; // 0x18

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCURRENTBGMCHANGEVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCURRENTBGMCHANGEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCURRENTBGMCHANGEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCURRENTBGMCHANGEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

