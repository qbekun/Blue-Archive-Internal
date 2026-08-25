#pragma once
#include "unitysdk.h"

class GroundCommandSkipBattleResult;
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDSKIPBATTLERESULTVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15BA6E0)
#define GROUNDCOMMANDSKIPBATTLERESULTVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15BA6F0)
#define GROUNDCOMMANDSKIPBATTLERESULTVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15BA7B0)
#define GROUNDCOMMANDSKIPBATTLERESULTVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15BA7C0)

	inline static constexpr unsigned int GroundCommandSkipBattleResultVisual_TypeDefinitionIndex = 1201;

	class GroundCommandSkipBattleResultVisual : public Il2CppObject
	{
	public:
		GroundCommandSkipBattleResult* SkipBattleResult; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSKIPBATTLERESULTVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSKIPBATTLERESULTVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSKIPBATTLERESULTVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSKIPBATTLERESULTVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

	};

