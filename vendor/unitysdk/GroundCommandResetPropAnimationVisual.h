#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandResetPropAnimation; }
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDRESETPROPANIMATIONVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B80C0)
#define GROUNDCOMMANDRESETPROPANIMATIONVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15B80D0)
#define GROUNDCOMMANDRESETPROPANIMATIONVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B81E0)
#define GROUNDCOMMANDRESETPROPANIMATIONVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B81F0)

	inline static constexpr unsigned int GroundCommandResetPropAnimationVisual_TypeDefinitionIndex = 1182;

	class GroundCommandResetPropAnimationVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandResetPropAnimation* PlayPropAnimation; // 0x18

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDRESETPROPANIMATIONVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDRESETPROPANIMATIONVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDRESETPROPANIMATIONVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDRESETPROPANIMATIONVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

