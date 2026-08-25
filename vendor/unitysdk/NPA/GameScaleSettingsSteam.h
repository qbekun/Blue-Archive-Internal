#pragma once
#include "../unitysdk.h"

#define NPA_GAMESCALESETTINGSSTEAM_GET_STEAMAPPID_OFFSET UNITYSDK_OFFSET(0x9BE5C90)
#define NPA_GAMESCALESETTINGSSTEAM_GET_ISSTEAMONLYLAUNCH_OFFSET UNITYSDK_OFFSET(0x9BE5CA0)
#define NPA_GAMESCALESETTINGSSTEAM_GET_STEAMAPIDLLPATH_OFFSET UNITYSDK_OFFSET(0x9BE5CB0)
#define NPA_GAMESCALESETTINGSSTEAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE5CC0)

namespace NPA
{
	inline static constexpr unsigned int GameScaleSettingsSteam_TypeDefinitionIndex = 25754;

	class GameScaleSettingsSteam : public ::NPA::NXPToyGetCartProductCountResult
	{
	public:
		::System::UInt32 steamAppId; // 0x18
		::System::Boolean isSteamOnlyLaunch; // 0x1C
		::System::String* steamApiDllPath; // 0x20

		::System::UInt32 get_SteamAppId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMESCALESETTINGSSTEAM_GET_STEAMAPPID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSteamOnlyLaunch()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMESCALESETTINGSSTEAM_GET_ISSTEAMONLYLAUNCH_OFFSET))(nullptr);
		}

		::System::String* get_SteamApiDllPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMESCALESETTINGSSTEAM_GET_STEAMAPIDLLPATH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMESCALESETTINGSSTEAM_.CTOR_OFFSET))(nullptr);
		}

	};
}

