#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_GAMES_GAMEIDENTIFIERS_GETNXCMDSERVERID_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_GAMES_GAMEIDENTIFIERS_GETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_GAMES_GAMEIDENTIFIERS_GETCHANNELID_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_GAMES_GAMEIDENTIFIERS_GETWORLDID_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Games
{
	inline static constexpr unsigned int GameIdentifiers_TypeDefinitionIndex = 26811;

	class GameIdentifiers : public Il2CppObject
	{
	public:
		::System::String* GetNXCMDServerID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_GAMEIDENTIFIERS_GETNXCMDSERVERID_OFFSET))(nullptr);
		}

		::System::String* GetCharacterID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_GAMEIDENTIFIERS_GETCHARACTERID_OFFSET))(nullptr);
		}

		::System::String* GetChannelID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_GAMEIDENTIFIERS_GETCHANNELID_OFFSET))(nullptr);
		}

		::System::String* GetWorldID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_GAMES_GAMEIDENTIFIERS_GETWORLDID_OFFSET))(nullptr);
		}

	};
}

