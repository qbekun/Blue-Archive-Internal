#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandBattleAdditionalUIAction; }
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDBATTLEADDITIONALUIACTIONVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AC9C0)
#define GROUNDCOMMANDBATTLEADDITIONALUIACTIONVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15ACA80)
#define GROUNDCOMMANDBATTLEADDITIONALUIACTIONVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15ACA90)
#define GROUNDCOMMANDBATTLEADDITIONALUIACTIONVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15ACAB0)

	inline static constexpr unsigned int GroundCommandBattleAdditionalUIActionVisual_TypeDefinitionIndex = 1119;

	class GroundCommandBattleAdditionalUIActionVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandBattleAdditionalUIAction* additionalUIAction; // 0x18

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDBATTLEADDITIONALUIACTIONVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDBATTLEADDITIONALUIACTIONVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDBATTLEADDITIONALUIACTIONVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDBATTLEADDITIONALUIACTIONVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

	};

