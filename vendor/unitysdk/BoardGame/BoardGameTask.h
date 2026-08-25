#pragma once
#include "../unitysdk.h"

namespace BoardGame { class BoardGamePlay; }
namespace BoardGame { class IBoardGameRule; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define BOARDGAME_BOARDGAMETASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE06420)
#define BOARDGAME_BOARDGAMETASK_RELEASE_OFFSET UNITYSDK_OFFSET(0xE06490)
#define BOARDGAME_BOARDGAMETASK_STARTGAME_OFFSET UNITYSDK_OFFSET(0xE064E0)
#define BOARDGAME_BOARDGAMETASK_STARTGAME_OFFSET UNITYSDK_OFFSET(0xE066B0)
#define BOARDGAME_BOARDGAMETASK_GAMEPROCESS_OFFSET UNITYSDK_OFFSET(0xE06510)
#define BOARDGAME_BOARDGAMETASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xE067A0)

namespace BoardGame
{
	inline static constexpr unsigned int BoardGameTask_TypeDefinitionIndex = 10255;

	class BoardGameTask : public Il2CppObject
	{
	public:
		::BoardGame::BoardGamePlay* _currentPlay; // 0x10
		::System::Threading::CancellationTokenSource* processCancelToken; // 0x18

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMETASK_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMETASK_RELEASE_OFFSET))(nullptr);
		}

		::System::Void StartGame(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMETASK_STARTGAME_OFFSET))(arg, nullptr);
		}

		::System::Void StartGame(::BoardGame::IBoardGameRule* arg)
		{
			((::System::Void(*)(::BoardGame::IBoardGameRule*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMETASK_STARTGAME_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* GameProcess(Il2CppObject* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMETASK_GAMEPROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMETASK_.CTOR_OFFSET))(nullptr);
		}

	};
}

