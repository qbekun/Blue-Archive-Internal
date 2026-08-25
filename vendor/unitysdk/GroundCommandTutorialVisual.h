#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandTutorial; }
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDTUTORIALVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x18125A0)
#define GROUNDCOMMANDTUTORIALVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1812660)
#define GROUNDCOMMANDTUTORIALVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x1812670)
#define GROUNDCOMMANDTUTORIALVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1812730)

	inline static constexpr unsigned int GroundCommandTutorialVisual_TypeDefinitionIndex = 1208;

	class GroundCommandTutorialVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandTutorial* Tutorial; // 0x18

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTUTORIALVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTUTORIALVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTUTORIALVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTUTORIALVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

	};

