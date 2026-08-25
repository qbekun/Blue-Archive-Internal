#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandBattleAdditionalUISet; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDBATTLEADDITIONALUISETVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15ACB90)
#define GROUNDCOMMANDBATTLEADDITIONALUISETVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15ACBA0)
#define GROUNDCOMMANDBATTLEADDITIONALUISETVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15ACC40)
#define GROUNDCOMMANDBATTLEADDITIONALUISETVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15ACD00)

	inline static constexpr unsigned int GroundCommandBattleAdditionalUISetVisual_TypeDefinitionIndex = 1121;

	class GroundCommandBattleAdditionalUISetVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandBattleAdditionalUISet* additionalUISet; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDBATTLEADDITIONALUISETVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDBATTLEADDITIONALUISETVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDBATTLEADDITIONALUISETVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDBATTLEADDITIONALUISETVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

	};

