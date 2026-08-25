#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class BattleLogicState; }

#define MX_LOGIC_BATTLES_GAMESTATEEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1257100)
#define MX_LOGIC_BATTLES_GAMESTATEEVENTARGS_SET_GAMESTATE_OFFSET UNITYSDK_OFFSET(0x126E7A0)
#define MX_LOGIC_BATTLES_GAMESTATEEVENTARGS_GET_GAMESTATE_OFFSET UNITYSDK_OFFSET(0x126E7B0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GameStateEventArgs_TypeDefinitionIndex = 14001;

	class GameStateEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::BattleLogicState* _GameState_k__BackingField; // 0x10

		::System::Void .ctor(::MX::Logic::Battles::BattleLogicState* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::BattleLogicState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GAMESTATEEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_GameState(::MX::Logic::Battles::BattleLogicState* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::BattleLogicState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GAMESTATEEVENTARGS_SET_GAMESTATE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::BattleLogicState* get_GameState()
		{
			return ((::MX::Logic::Battles::BattleLogicState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GAMESTATEEVENTARGS_GET_GAMESTATE_OFFSET))(nullptr);
		}

	};
}

