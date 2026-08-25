#pragma once
#include "unitysdk.h"

class UILabel;
namespace FlatData { class WeekDungeonType; }

#define UIWEEKDUNGEONLOBBYTICKETCOUNTDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xBCA580)
#define UIWEEKDUNGEONLOBBYTICKETCOUNTDISPLAY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBCA5E0)

	inline static constexpr unsigned int UIWeekDungeonLobbyTicketCountDisplay_TypeDefinitionIndex = 8640;

	class UIWeekDungeonLobbyTicketCountDisplay : public Il2CppObject
	{
	public:
		UILabel* ticketCountLabel; // 0x18
		::FlatData::WeekDungeonType* weekDungeonType; // 0x20
		::System::String* localizeKey; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONLOBBYTICKETCOUNTDISPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONLOBBYTICKETCOUNTDISPLAY_ONENABLE_OFFSET))(nullptr);
		}

	};

