#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandSkipUntargetableCheckInMove; }
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15BA880)
#define GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15BA890)
#define GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15BA8A0)
#define GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVEVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15BA960)

	inline static constexpr unsigned int GroundCommandSkipUntargetableCheckInMoveVisual_TypeDefinitionIndex = 1202;

	class GroundCommandSkipUntargetableCheckInMoveVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandSkipUntargetableCheckInMove* Command; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSKIPUNTARGETABLECHECKINMOVEVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

	};

