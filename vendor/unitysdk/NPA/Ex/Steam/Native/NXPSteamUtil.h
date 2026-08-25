#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPSteamAppId_t; }
namespace NPA::Ex::Steam { class ENXPSteamGamepadTextInputMode; }
namespace NPA::Ex::Steam { class ENXPSteamGamepadTextInputLineMode; }

#define NPA_EX_STEAM_NATIVE_NXPSTEAMUTIL_GETIPCOUNTRY_OFFSET UNITYSDK_OFFSET(0x9D39630)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMUTIL_ISOVERLAYENABLED_OFFSET UNITYSDK_OFFSET(0x9D39750)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMUTIL_GETAPPID_OFFSET UNITYSDK_OFFSET(0x9D39860)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMUTIL_SHOWGAMEPADTEXTINPUT_OFFSET UNITYSDK_OFFSET(0x9D399A0)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMUTIL_GETENTEREDGAMEPADTEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x9D39D30)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMUTIL_GETENTEREDGAMEPADTEXTINPUT_OFFSET UNITYSDK_OFFSET(0x9D39E40)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMUTIL_ISSTEAMINBIGPICTUREMODE_OFFSET UNITYSDK_OFFSET(0x9D3A000)
#define NPA_EX_STEAM_NATIVE_NXPSTEAMUTIL_GETSERVERREALTIME_OFFSET UNITYSDK_OFFSET(0x9D3A110)

namespace NPA::Ex::Steam::Native
{
	inline static constexpr unsigned int NXPSteamUtil_TypeDefinitionIndex = 26082;

	class NXPSteamUtil : public Il2CppObject
	{
	public:
		::System::String* GetIPCountry()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMUTIL_GETIPCOUNTRY_OFFSET))(nullptr);
		}

		::System::Boolean IsOverlayEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMUTIL_ISOVERLAYENABLED_OFFSET))(nullptr);
		}

		::NPA::Ex::Steam::NXPSteamAppId_t* GetAppID()
		{
			return (return (::NPA::Ex::Steam::NXPSteamAppId_t*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMUTIL_GETAPPID_OFFSET))(nullptr);
		}

		::System::Boolean ShowGamepadTextInput(::NPA::Ex::Steam::ENXPSteamGamepadTextInputMode* arg, ::NPA::Ex::Steam::ENXPSteamGamepadTextInputLineMode* arg, ::System::String* str, ::System::UInt32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::ENXPSteamGamepadTextInputMode*, ::NPA::Ex::Steam::ENXPSteamGamepadTextInputLineMode*, ::System::String*, ::System::UInt32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMUTIL_SHOWGAMEPADTEXTINPUT_OFFSET))(arg, arg, str, arg, str, nullptr);
		}

		::System::UInt32 GetEnteredGamepadTextLength()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMUTIL_GETENTEREDGAMEPADTEXTLENGTH_OFFSET))(nullptr);
		}

		::System::Boolean GetEnteredGamepadTextInput(::System::String&* arg, ::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::String&*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMUTIL_GETENTEREDGAMEPADTEXTINPUT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsSteamInBigPictureMode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMUTIL_ISSTEAMINBIGPICTUREMODE_OFFSET))(nullptr);
		}

		::System::UInt32 GetServerRealTime()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NATIVE_NXPSTEAMUTIL_GETSERVERREALTIME_OFFSET))(nullptr);
		}

	};
}

