#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandBattleTimer; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDBATTLETIMERVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15ACD10)
#define GROUNDCOMMANDBATTLETIMERVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15ACDD0)
#define GROUNDCOMMANDBATTLETIMERVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15ACDE0)

	inline static constexpr unsigned int GroundCommandBattleTimerVisual_TypeDefinitionIndex = 1122;

	class GroundCommandBattleTimerVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandBattleTimer* BattleTimer; // 0x18

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDBATTLETIMERVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDBATTLETIMERVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDBATTLETIMERVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

	};

