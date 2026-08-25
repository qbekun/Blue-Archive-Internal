#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandEndBattle; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDENDBATTLEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15AF8E0)
#define GROUNDCOMMANDENDBATTLEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AF8F0)
#define GROUNDCOMMANDENDBATTLEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AF9B0)

	inline static constexpr unsigned int GroundCommandEndBattleVisual_TypeDefinitionIndex = 1138;

	class GroundCommandEndBattleVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandEndBattle* EndBattle; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDENDBATTLEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDENDBATTLEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDENDBATTLEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

	};

