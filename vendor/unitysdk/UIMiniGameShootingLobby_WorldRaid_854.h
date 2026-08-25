#pragma once
#include "unitysdk.h"

#define UIMINIGAMESHOOTINGLOBBY_WORLDRAID_854___N__0_OFFSET UNITYSDK_OFFSET(0x20696A0)
#define UIMINIGAMESHOOTINGLOBBY_WORLDRAID_854_CANSTARTNEWGAME_OFFSET UNITYSDK_OFFSET(0x2069710)
#define UIMINIGAMESHOOTINGLOBBY_WORLDRAID_854_.CTOR_OFFSET UNITYSDK_OFFSET(0x2069D60)
#define UIMINIGAMESHOOTINGLOBBY_WORLDRAID_854_CREATESTACKUI_OFFSET UNITYSDK_OFFSET(0x2069D70)

	inline static constexpr unsigned int UIMiniGameShootingLobby_WorldRaid_854_TypeDefinitionIndex = 3427;

	class UIMiniGameShootingLobby_WorldRaid_854 : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_WORLDRAID_854___N__0_OFFSET))(nullptr);
		}

		::System::Boolean CanStartNewGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_WORLDRAID_854_CANSTARTNEWGAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_WORLDRAID_854_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CreateStackUI()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGLOBBY_WORLDRAID_854_CREATESTACKUI_OFFSET))(nullptr);
		}

	};

