#pragma once
#include "../unitysdk.h"

namespace BoardGame { class IBoardGameRule; }
namespace BoardGame { class IBoardGameBoard; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace BoardGame { class BoardGameMessage; }
namespace BoardGame { class BoardGamePlayEnd; }

#define BOARDGAME_BOARDGAMEPLAY_GET_ISGAMEOVER_OFFSET UNITYSDK_OFFSET(0xE04B80)
#define BOARDGAME_BOARDGAMEPLAY_GET__BOARD_OFFSET UNITYSDK_OFFSET(0xE04B90)
#define BOARDGAME_BOARDGAMEPLAY_PLAYUPDATEOPERATION_OFFSET UNITYSDK_OFFSET(0xE04C30)
#define BOARDGAME_BOARDGAMEPLAY_HANDLEPLAYEVENT_OFFSET UNITYSDK_OFFSET(0xE04DD0)
#define BOARDGAME_BOARDGAMEPLAY_ENTER_OFFSET UNITYSDK_OFFSET(0xE05350)
#define BOARDGAME_BOARDGAMEPLAY_SET_ISGAMEOVER_OFFSET UNITYSDK_OFFSET(0xE054B0)
#define BOARDGAME_BOARDGAMEPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xE054C0)
#define BOARDGAME_BOARDGAMEPLAY_END_OFFSET UNITYSDK_OFFSET(0xE04FC0)

namespace BoardGame
{
	inline static constexpr unsigned int BoardGamePlay_TypeDefinitionIndex = 10253;

	class BoardGamePlay : public Il2CppObject
	{
	public:
		::System::Boolean _IsGameOver_k__BackingField; // 0x10
		::BoardGame::IBoardGameRule* _rule; // 0x18

		::System::Boolean get_IsGameOver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEPLAY_GET_ISGAMEOVER_OFFSET))(nullptr);
		}

		::BoardGame::IBoardGameBoard* get__board()
		{
			return ((::BoardGame::IBoardGameBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEPLAY_GET__BOARD_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PlayUpdateOperation(::BoardGame::BoardGameMessage* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::BoardGame::BoardGameMessage*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEPLAY_PLAYUPDATEOPERATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandlePlayEvent(::BoardGame::BoardGameMessage* arg)
		{
			return ((::System::Boolean(*)(::BoardGame::BoardGameMessage*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEPLAY_HANDLEPLAYEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void Enter(::BoardGame::IBoardGameRule* arg)
		{
			((::System::Void(*)(::BoardGame::IBoardGameRule*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEPLAY_ENTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsGameOver(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEPLAY_SET_ISGAMEOVER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void End(::BoardGame::BoardGamePlayEnd* arg)
		{
			((::System::Void(*)(::BoardGame::BoardGamePlayEnd*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEPLAY_END_OFFSET))(arg, nullptr);
		}

	};
}

