#pragma once
#include "../unitysdk.h"

namespace BoardGame { class BoardGameUpdateData; }

#define BOARDGAME_IBOARDGAMEBOARD_CLOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BOARDGAME_IBOARDGAMEBOARD_CO_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BOARDGAME_IBOARDGAMEBOARD_RESET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BoardGame
{
	inline static constexpr unsigned int IBoardGameBoard_TypeDefinitionIndex = 10306;

	class IBoardGameBoard : public Il2CppObject
	{
	public:
		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_IBOARDGAMEBOARD_CLOSE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Update(::BoardGame::BoardGameUpdateData* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::BoardGame::BoardGameUpdateData*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_IBOARDGAMEBOARD_CO_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_IBOARDGAMEBOARD_RESET_OFFSET))(nullptr);
		}

	};
}

