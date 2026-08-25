#pragma once
#include "../../unitysdk.h"

namespace NPA::Games { class NXPToyGameInfoManager; }
namespace NPA::Games { class NXPToyGameInfo; }

#define NPA_GAMES_NXPTOYGAMEINFOMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD4880)
#define NPA_GAMES_NXPTOYGAMEINFOMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9CD4890)
#define NPA_GAMES_NXPTOYGAMEINFOMANAGER_GETGAMEINFO_OFFSET UNITYSDK_OFFSET(0x9CD4AB0)
#define NPA_GAMES_NXPTOYGAMEINFOMANAGER_SETGAMEINFO_OFFSET UNITYSDK_OFFSET(0x9CD4AC0)
#define NPA_GAMES_NXPTOYGAMEINFOMANAGER_GETGAMESERVERCODE_OFFSET UNITYSDK_OFFSET(0x9CD4AD0)
#define NPA_GAMES_NXPTOYGAMEINFOMANAGER_UPDATEGAMESERVERCODE_OFFSET UNITYSDK_OFFSET(0x9CD4B20)
#define NPA_GAMES_NXPTOYGAMEINFOMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9CD4BE0)

namespace NPA::Games
{
	inline static constexpr unsigned int NXPToyGameInfoManager_TypeDefinitionIndex = 27450;

	class NXPToyGameInfoManager : public Il2CppObject
	{
	public:
		::NPA::Games::NXPToyGameInfoManager* _instance; // 0x0
		::System::Object* syncRoot; // 0x8
		::NPA::Games::NXPToyGameInfo* gameInfo; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYGAMEINFOMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::NPA::Games::NXPToyGameInfoManager* get_Instance()
		{
			return (return (::NPA::Games::NXPToyGameInfoManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYGAMEINFOMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::NPA::Games::NXPToyGameInfo* GetGameInfo()
		{
			return (return (::NPA::Games::NXPToyGameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYGAMEINFOMANAGER_GETGAMEINFO_OFFSET))(nullptr);
		}

		::System::Void SetGameInfo(::NPA::Games::NXPToyGameInfo* arg)
		{
			((::System::Void(*)(::NPA::Games::NXPToyGameInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYGAMEINFOMANAGER_SETGAMEINFO_OFFSET))(arg, nullptr);
		}

		::System::String* GetGameServerCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYGAMEINFOMANAGER_GETGAMESERVERCODE_OFFSET))(nullptr);
		}

		::System::Void UpdateGameServerCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYGAMEINFOMANAGER_UPDATEGAMESERVERCODE_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYGAMEINFOMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

