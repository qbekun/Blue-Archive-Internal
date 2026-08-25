#pragma once
#include "unitysdk.h"

#define LOBBYFORMATIONUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C60B0)
#define LOBBYFORMATIONUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C60C0)

	inline static constexpr unsigned int LobbyFormationUIOpener_TypeDefinitionIndex = 6981;

	class LobbyFormationUIOpener : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBBYFORMATIONUIOPENER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBBYFORMATIONUIOPENER_OPENUI_OFFSET))(nullptr);
		}

	};

