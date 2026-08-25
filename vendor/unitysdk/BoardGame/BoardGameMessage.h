#pragma once
#include "../unitysdk.h"

namespace BoardGame { class BoardGameUpdateData; }

#define BOARDGAME_BOARDGAMEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE13A80)
#define BOARDGAME_BOARDGAMEMESSAGE_SET_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0xE13AB0)
#define BOARDGAME_BOARDGAMEMESSAGE_GET_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0xE13AC0)

namespace BoardGame
{
	inline static constexpr unsigned int BoardGameMessage_TypeDefinitionIndex = 10308;

	class BoardGameMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::BoardGame::BoardGameUpdateData* _UpdateData_k__BackingField; // 0x18

		::System::Void .ctor(::BoardGame::BoardGameUpdateData* arg)
		{
			((::System::Void(*)(::BoardGame::BoardGameUpdateData*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_UpdateData(::BoardGame::BoardGameUpdateData* arg)
		{
			((::System::Void(*)(::BoardGame::BoardGameUpdateData*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEMESSAGE_SET_UPDATEDATA_OFFSET))(arg, nullptr);
		}

		::BoardGame::BoardGameUpdateData* get_UpdateData()
		{
			return ((::BoardGame::BoardGameUpdateData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_BOARDGAMEMESSAGE_GET_UPDATEDATA_OFFSET))(nullptr);
		}

	};
}

