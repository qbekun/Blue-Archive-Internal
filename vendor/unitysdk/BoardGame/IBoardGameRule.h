#pragma once
#include "../unitysdk.h"

namespace BoardGame { class IBoardGameBoard; }
namespace BoardGame { class BoardGameUpdateData; }

#define BOARDGAME_IBOARDGAMERULE_GETBOARD_OFFSET UNITYSDK_OFFSET(0x000000)
#define BOARDGAME_IBOARDGAMERULE_CO_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BOARDGAME_IBOARDGAMERULE_ISGAMEOVER_OFFSET UNITYSDK_OFFSET(0x000000)
#define BOARDGAME_IBOARDGAMERULE_RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define BOARDGAME_IBOARDGAMERULE_OPENBOARD_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BoardGame
{
	inline static constexpr unsigned int IBoardGameRule_TypeDefinitionIndex = 10307;

	class IBoardGameRule : public Il2CppObject
	{
	public:
		::BoardGame::IBoardGameBoard* GetBoard()
		{
			return ((::BoardGame::IBoardGameBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_IBOARDGAMERULE_GETBOARD_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Update(::BoardGame::BoardGameUpdateData* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::BoardGame::BoardGameUpdateData*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_IBOARDGAMERULE_CO_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsGameOver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_IBOARDGAMERULE_ISGAMEOVER_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_IBOARDGAMERULE_RESET_OFFSET))(nullptr);
		}

		::System::Void OpenBoard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_IBOARDGAMERULE_OPENBOARD_OFFSET))(nullptr);
		}

	};
}

