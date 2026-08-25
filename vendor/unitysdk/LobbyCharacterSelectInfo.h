#pragma once
#include "unitysdk.h"

#define LOBBYCHARACTERSELECTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x263CB80)

	inline static constexpr unsigned int LobbyCharacterSelectInfo_TypeDefinitionIndex = 6587;

	class LobbyCharacterSelectInfo : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Characters; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBBYCHARACTERSELECTINFO_.CTOR_OFFSET))(nullptr);
		}

	};

