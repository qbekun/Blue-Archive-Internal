#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class BattleCommand; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroupTag; }

#define MX_LOGIC_BATTLES_BATTLECOMMANDEXECUTER_GET_COMMANDS_OFFSET UNITYSDK_OFFSET(0x1273F00)
#define MX_LOGIC_BATTLES_BATTLECOMMANDEXECUTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1273F10)
#define MX_LOGIC_BATTLES_BATTLECOMMANDEXECUTER_ADDCOMMAND_OFFSET UNITYSDK_OFFSET(0x1273F90)
#define MX_LOGIC_BATTLES_BATTLECOMMANDEXECUTER_PROCESS_OFFSET UNITYSDK_OFFSET(0x1274030)
#define MX_LOGIC_BATTLES_BATTLECOMMANDEXECUTER_PROCESSCOMMAND_OFFSET UNITYSDK_OFFSET(0x1274140)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int BattleCommandExecuter_TypeDefinitionIndex = 14058;

	class BattleCommandExecuter : public Il2CppObject
	{
	public:
		Il2CppObject* _commands_k__BackingField; // 0x10

		Il2CppObject* get_commands()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLECOMMANDEXECUTER_GET_COMMANDS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLECOMMANDEXECUTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddCommand(::MX::Logic::Battles::BattleCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::BattleCommand*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLECOMMANDEXECUTER_ADDCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void Process(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLECOMMANDEXECUTER_PROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessCommand(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::GroupTag* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLECOMMANDEXECUTER_PROCESSCOMMAND_OFFSET))(arg, arg2, nullptr);
		}

	};
}

