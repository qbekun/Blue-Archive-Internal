#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class ENXPSteamAPIInitResult; }
namespace NPA::Ex::Steam { class NXPSteamAppId_t; }
namespace NPA::Ex::Steam { class NXPHSteamPipe; }
namespace NPA::Ex::Steam { class NXPSteamAPICall_t; }
namespace NPA::Ex::Steam { class ENXPSteamFriendFlags; }
namespace NPA::Ex::Steam { class ENXPSteamPersonaState; }
namespace NPA::Ex::Steam { class NXPCSteamID; }
namespace NPA::Ex::Steam { class NXPSteamFriendGameInfo_t&; }
namespace NPA::Ex::Steam { class ENXPSteamOverlayToStoreFlag; }
namespace NPA::Ex::Steam { class NXPHSteamUser; }
namespace NPA::Ex::Steam { class NXPSteamAPIWarningMessageHook; }
namespace NPA::Ex::Steam { class ENXPSteamGamepadTextInputMode; }
namespace NPA::Ex::Steam { class ENXPSteamGamepadTextInputLineMode; }
namespace NPA::Ex::Steam { class NXPSteamInventoryResult_t; }
namespace NPA::Ex::Steam { class NXPSteamInventoryResult_t&; }
namespace NPA::Ex::Steam { class NXPSteamItemDef_t; }
namespace NPA::Ex::Steam { class ENXPSteamInputType; }

#define NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_INIT_OFFSET UNITYSDK_OFFSET(0x9D30000)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMINTERNAL_STEAMAPI_INIT_OFFSET UNITYSDK_OFFSET(0x9D30080)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x9D30150)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_RESTARTAPPIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x9D301D0)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_RELEASECURRENTTHREADMEMORY_OFFSET UNITYSDK_OFFSET(0x9D30250)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_RUNCALLBACKS_OFFSET UNITYSDK_OFFSET(0x9D302D0)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_REGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D30350)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_UNREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D303D0)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_REGISTERCALLRESULT_OFFSET UNITYSDK_OFFSET(0x9D30450)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_UNREGISTERCALLRESULT_OFFSET UNITYSDK_OFFSET(0x9D304E0)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_ISSTEAMRUNNING_OFFSET UNITYSDK_OFFSET(0x9D30570)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMINTERNAL_CREATEINTERFACE_OFFSET UNITYSDK_OFFSET(0x9D2F260)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_GETHSTEAMUSER_OFFSET UNITYSDK_OFFSET(0x9D305F0)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_GETHSTEAMPIPE_OFFSET UNITYSDK_OFFSET(0x9D30670)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_MANUALDISPATCH_INIT_OFFSET UNITYSDK_OFFSET(0x9D306F0)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_MANUALDISPATCH_FREELASTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D30770)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_MANUALDISPATCH_RUNFRAME_OFFSET UNITYSDK_OFFSET(0x9D307F0)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_MANUALDISPATCH_GETNEXTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D30870)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_MANUALDISPATCH_GETAPICALLRESULT_OFFSET UNITYSDK_OFFSET(0x9D30900)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMFRIENDS_GETPERSONANAME_OFFSET UNITYSDK_OFFSET(0x9D309D0)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMFRIENDS_GETFRIENDCOUNT_OFFSET UNITYSDK_OFFSET(0x9D30A50)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMFRIENDS_GETFRIENDBYINDEX_OFFSET UNITYSDK_OFFSET(0x9D30AD0)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMFRIENDS_GETFRIENDPERSONASTATE_OFFSET UNITYSDK_OFFSET(0x9D30B60)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMFRIENDS_GETFRIENDPERSONANAME_OFFSET UNITYSDK_OFFSET(0x9D30BF0)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMFRIENDS_GETFRIENDGAMEPLAYED_OFFSET UNITYSDK_OFFSET(0x9D30C80)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMFRIENDS_ACTIVATEGAMEOVERLAYTOSTORE_OFFSET UNITYSDK_OFFSET(0x9D30D10)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMCLIENT_GETISTEAMFRIENDS_OFFSET UNITYSDK_OFFSET(0x9D30DA0)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMCLIENT_GETISTEAMUTILS_OFFSET UNITYSDK_OFFSET(0x9D30E80)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMCLIENT_GETISTEAMUSER_OFFSET UNITYSDK_OFFSET(0x9D30F50)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMCLIENT_GETISTEAMAPPS_OFFSET UNITYSDK_OFFSET(0x9D31030)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMCLIENT_GETISTEAMINVENTORY_OFFSET UNITYSDK_OFFSET(0x9D31110)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMCLIENT_SETWARNINGMESSAGEHOOK_OFFSET UNITYSDK_OFFSET(0x9D311F0)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMUTILS_GETIPCOUNTRY_OFFSET UNITYSDK_OFFSET(0x9D31280)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMUTILS_ISOVERLAYENABLED_OFFSET UNITYSDK_OFFSET(0x9D31300)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMUTILS_GETAPPID_OFFSET UNITYSDK_OFFSET(0x9D31380)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMUTILS_SHOWGAMEPADTEXTINPUT_OFFSET UNITYSDK_OFFSET(0x9D31400)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMUTILS_GETENTEREDGAMEPADTEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x9D31550)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMUTILS_GETENTEREDGAMEPADTEXTINPUT_OFFSET UNITYSDK_OFFSET(0x9D315D0)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMUTILS_ISSTEAMINBIGPICTUREMODE_OFFSET UNITYSDK_OFFSET(0x9D31660)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMUTILS_GETSERVERREALTIME_OFFSET UNITYSDK_OFFSET(0x9D316E0)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMUSER_GETSTEAMID_OFFSET UNITYSDK_OFFSET(0x9D31760)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMUSER_GETAUTHSESSIONTICKET_OFFSET UNITYSDK_OFFSET(0x9D317E0)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMUSER_BLOGGEDON_OFFSET UNITYSDK_OFFSET(0x9D31880)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMAPPS_BISSUBSCRIBED_OFFSET UNITYSDK_OFFSET(0x9D31900)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMAPPS_GETCURRENTGAMELANGUAGE_OFFSET UNITYSDK_OFFSET(0x9D31980)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMAPPS_GETEARLIESTPURCHASEUNIXTIME_OFFSET UNITYSDK_OFFSET(0x9D31A00)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINVENTORY_GETITEMDEFINITIONIDS_OFFSET UNITYSDK_OFFSET(0x9D31A80)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINVENTORY_REQUESTPRICES_OFFSET UNITYSDK_OFFSET(0x9D31B20)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINVENTORY_GETRESULTITEMS_OFFSET UNITYSDK_OFFSET(0x9D31BA0)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINVENTORY_GETALLITEMS_OFFSET UNITYSDK_OFFSET(0x9D31C40)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINVENTORY_DESTROYRESULT_OFFSET UNITYSDK_OFFSET(0x9D31CD0)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINVENTORY_STARTPURCHASE_OFFSET UNITYSDK_OFFSET(0x9D31D50)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINVENTORY_LOADITEMDEFINITIONS_OFFSET UNITYSDK_OFFSET(0x9D31E00)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINVENTORY_GETITEMPRICE_OFFSET UNITYSDK_OFFSET(0x9D31E80)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINVENTORY_GETELIGIBLEPROMOITEMDEFINITIONIDS_OFFSET UNITYSDK_OFFSET(0x9D31F20)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINVENTORY_REQUESTELIGIBLEPROMOITEMDEFINITIONSIDS_OFFSET UNITYSDK_OFFSET(0x9D31FC0)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINVENTORY_GETITEMDEFINITIONPROPERTY_OFFSET UNITYSDK_OFFSET(0x9D32050)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMINPUT_V006_OFFSET UNITYSDK_OFFSET(0x9D2FDC0)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINPUT_INIT_OFFSET UNITYSDK_OFFSET(0x9D32140)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINPUT_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x9D321D0)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINPUT_RUNFRAME_OFFSET UNITYSDK_OFFSET(0x9D32250)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINPUT_GETCONNECTEDCONTROLLERS_OFFSET UNITYSDK_OFFSET(0x9D322D0)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINPUT_GETINPUTTYPEFORHANDLE_OFFSET UNITYSDK_OFFSET(0x9D32360)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINPUT_ENABLEDEVICECALLBACKS_OFFSET UNITYSDK_OFFSET(0x9D323F0)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINPUT_GETCONTROLLERFORGAMEPADINDEX_OFFSET UNITYSDK_OFFSET(0x9D32470)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINPUT_GETGAMEPADINDEXFORCONTROLLER_OFFSET UNITYSDK_OFFSET(0x9D324F0)
#define NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMGAMESERVER_GETHSTEAMPIPE_OFFSET UNITYSDK_OFFSET(0x9D32580)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPSteamBridge_TypeDefinitionIndex = 26070;

	class NXPSteamBridge : public Il2CppObject
	{
	public:
		::System::String* NativeLibraryName; // 0x0
		::System::String* NativeLibrary_SDKEncryptedAppTicket; // 0x0

		::System::Boolean SteamAPI_Init()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_INIT_OFFSET))(nullptr);
		}

		::NPA::Ex::Steam::ENXPSteamAPIInitResult* SteamInternal_SteamAPI_Init(::System::String* str, ::System::String&* arg)
		{
			return (return (::NPA::Ex::Steam::ENXPSteamAPIInitResult*(*)(::System::String*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMINTERNAL_STEAMAPI_INIT_OFFSET))(str, arg, nullptr);
		}

		::System::Void SteamAPI_Shutdown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_SHUTDOWN_OFFSET))(nullptr);
		}

		::System::Boolean SteamAPI_RestartAppIfNecessary(::NPA::Ex::Steam::NXPSteamAppId_t* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamAppId_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_RESTARTAPPIFNECESSARY_OFFSET))(arg, nullptr);
		}

		::System::Void SteamAPI_ReleaseCurrentThreadMemory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_RELEASECURRENTTHREADMEMORY_OFFSET))(nullptr);
		}

		::System::Void SteamAPI_RunCallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_RUNCALLBACKS_OFFSET))(nullptr);
		}

		::System::Void SteamAPI_RegisterCallback(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_REGISTERCALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SteamAPI_UnregisterCallback(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_UNREGISTERCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SteamAPI_RegisterCallResult(::System::Int32 arg, ::System::UInt64 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_REGISTERCALLRESULT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SteamAPI_UnregisterCallResult(::System::Int32 arg, ::System::UInt64 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_UNREGISTERCALLRESULT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SteamAPI_IsSteamRunning()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_ISSTEAMRUNNING_OFFSET))(nullptr);
		}

		::System::Int32 SteamInternal_CreateInterface(UTF8StringHandle* arg)
		{
			return (return (::System::Int32(*)(UTF8StringHandle*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMINTERNAL_CREATEINTERFACE_OFFSET))(arg, nullptr);
		}

		::System::Int32 SteamAPI_GetHSteamUser()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_GETHSTEAMUSER_OFFSET))(nullptr);
		}

		::System::Int32 SteamAPI_GetHSteamPipe()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_GETHSTEAMPIPE_OFFSET))(nullptr);
		}

		::System::Void SteamAPI_ManualDispatch_Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_MANUALDISPATCH_INIT_OFFSET))(nullptr);
		}

		::System::Void SteamAPI_ManualDispatch_FreeLastCallback(::NPA::Ex::Steam::NXPHSteamPipe* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::NXPHSteamPipe*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_MANUALDISPATCH_FREELASTCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SteamAPI_ManualDispatch_RunFrame(::NPA::Ex::Steam::NXPHSteamPipe* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::NXPHSteamPipe*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_MANUALDISPATCH_RUNFRAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean SteamAPI_ManualDispatch_GetNextCallback(::NPA::Ex::Steam::NXPHSteamPipe* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPHSteamPipe*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_MANUALDISPATCH_GETNEXTCALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SteamAPI_ManualDispatch_GetAPICallResult(::NPA::Ex::Steam::NXPHSteamPipe* arg, ::NPA::Ex::Steam::NXPSteamAPICall_t* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, bool&* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPHSteamPipe*, ::NPA::Ex::Steam::NXPSteamAPICall_t*, ::System::Int32, ::System::Int32, ::System::Int32, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMAPI_MANUALDISPATCH_GETAPICALLRESULT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ISteamFriends_GetPersonaName(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMFRIENDS_GETPERSONANAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 ISteamFriends_GetFriendCount(::System::Int32 arg, ::NPA::Ex::Steam::ENXPSteamFriendFlags* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::NPA::Ex::Steam::ENXPSteamFriendFlags*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMFRIENDS_GETFRIENDCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt64 ISteamFriends_GetFriendByIndex(::System::Int32 arg, ::System::Int32 arg, ::NPA::Ex::Steam::ENXPSteamFriendFlags* arg)
		{
			return (return (::System::UInt64(*)(::System::Int32, ::System::Int32, ::NPA::Ex::Steam::ENXPSteamFriendFlags*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMFRIENDS_GETFRIENDBYINDEX_OFFSET))(arg, arg, arg, nullptr);
		}

		::NPA::Ex::Steam::ENXPSteamPersonaState* ISteamFriends_GetFriendPersonaState(::System::Int32 arg, ::NPA::Ex::Steam::NXPCSteamID* arg)
		{
			return (return (::NPA::Ex::Steam::ENXPSteamPersonaState*(*)(::System::Int32, ::NPA::Ex::Steam::NXPCSteamID*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMFRIENDS_GETFRIENDPERSONASTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ISteamFriends_GetFriendPersonaName(::System::Int32 arg, ::NPA::Ex::Steam::NXPCSteamID* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::NPA::Ex::Steam::NXPCSteamID*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMFRIENDS_GETFRIENDPERSONANAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ISteamFriends_GetFriendGamePlayed(::System::Int32 arg, ::NPA::Ex::Steam::NXPCSteamID* arg, ::NPA::Ex::Steam::NXPSteamFriendGameInfo_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::NPA::Ex::Steam::NXPCSteamID*, ::NPA::Ex::Steam::NXPSteamFriendGameInfo_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMFRIENDS_GETFRIENDGAMEPLAYED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ISteamFriends_ActivateGameOverlayToStore(::System::Int32 arg, ::NPA::Ex::Steam::NXPSteamAppId_t* arg, ::NPA::Ex::Steam::ENXPSteamOverlayToStoreFlag* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::Ex::Steam::NXPSteamAppId_t*, ::NPA::Ex::Steam::ENXPSteamOverlayToStoreFlag*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMFRIENDS_ACTIVATEGAMEOVERLAYTOSTORE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ISteamClient_GetISteamFriends(::System::Int32 arg, ::NPA::Ex::Steam::NXPHSteamUser* arg, ::NPA::Ex::Steam::NXPHSteamPipe* arg, UTF8StringHandle* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::NPA::Ex::Steam::NXPHSteamUser*, ::NPA::Ex::Steam::NXPHSteamPipe*, UTF8StringHandle*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMCLIENT_GETISTEAMFRIENDS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ISteamClient_GetISteamUtils(::System::Int32 arg, ::NPA::Ex::Steam::NXPHSteamPipe* arg, UTF8StringHandle* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::NPA::Ex::Steam::NXPHSteamPipe*, UTF8StringHandle*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMCLIENT_GETISTEAMUTILS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ISteamClient_GetISteamUser(::System::Int32 arg, ::NPA::Ex::Steam::NXPHSteamUser* arg, ::NPA::Ex::Steam::NXPHSteamPipe* arg, UTF8StringHandle* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::NPA::Ex::Steam::NXPHSteamUser*, ::NPA::Ex::Steam::NXPHSteamPipe*, UTF8StringHandle*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMCLIENT_GETISTEAMUSER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ISteamClient_GetISteamApps(::System::Int32 arg, ::NPA::Ex::Steam::NXPHSteamUser* arg, ::NPA::Ex::Steam::NXPHSteamPipe* arg, UTF8StringHandle* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::NPA::Ex::Steam::NXPHSteamUser*, ::NPA::Ex::Steam::NXPHSteamPipe*, UTF8StringHandle*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMCLIENT_GETISTEAMAPPS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ISteamClient_GetISteamInventory(::System::Int32 arg, ::NPA::Ex::Steam::NXPHSteamUser* arg, ::NPA::Ex::Steam::NXPHSteamPipe* arg, UTF8StringHandle* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::NPA::Ex::Steam::NXPHSteamUser*, ::NPA::Ex::Steam::NXPHSteamPipe*, UTF8StringHandle*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMCLIENT_GETISTEAMINVENTORY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ISteamClient_SetWarningMessageHook(::System::Int32 arg, ::NPA::Ex::Steam::NXPSteamAPIWarningMessageHook* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::Ex::Steam::NXPSteamAPIWarningMessageHook*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMCLIENT_SETWARNINGMESSAGEHOOK_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ISteamUtils_GetIPCountry(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMUTILS_GETIPCOUNTRY_OFFSET))(arg, nullptr);
		}

		::System::Boolean ISteamUtils_IsOverlayEnabled(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMUTILS_ISOVERLAYENABLED_OFFSET))(arg, nullptr);
		}

		::System::UInt32 ISteamUtils_GetAppID(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMUTILS_GETAPPID_OFFSET))(arg, nullptr);
		}

		::System::Boolean ISteamUtils_ShowGamepadTextInput(::System::Int32 arg, ::NPA::Ex::Steam::ENXPSteamGamepadTextInputMode* arg, ::NPA::Ex::Steam::ENXPSteamGamepadTextInputLineMode* arg, UTF8StringHandle* arg, ::System::UInt32 arg, UTF8StringHandle* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::NPA::Ex::Steam::ENXPSteamGamepadTextInputMode*, ::NPA::Ex::Steam::ENXPSteamGamepadTextInputLineMode*, UTF8StringHandle*, ::System::UInt32, UTF8StringHandle*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMUTILS_SHOWGAMEPADTEXTINPUT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 ISteamUtils_GetEnteredGamepadTextLength(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMUTILS_GETENTEREDGAMEPADTEXTLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean ISteamUtils_GetEnteredGamepadTextInput(::System::Int32 arg, ::System::Int32 arg, ::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMUTILS_GETENTEREDGAMEPADTEXTINPUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ISteamUtils_IsSteamInBigPictureMode(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMUTILS_ISSTEAMINBIGPICTUREMODE_OFFSET))(arg, nullptr);
		}

		::System::UInt32 ISteamUtils_GetServerRealTime(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMUTILS_GETSERVERREALTIME_OFFSET))(arg, nullptr);
		}

		::System::UInt64 ISteamUser_GetSteamID(::System::Int32 arg)
		{
			return (return (::System::UInt64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMUSER_GETSTEAMID_OFFSET))(arg, nullptr);
		}

		::System::UInt32 ISteamUser_GetAuthSessionTicket(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, uint32_t&* arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMUSER_GETAUTHSESSIONTICKET_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ISteamUser_BLoggedOn(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMUSER_BLOGGEDON_OFFSET))(arg, nullptr);
		}

		::System::Boolean ISteamApps_BIsSubscribed(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMAPPS_BISSUBSCRIBED_OFFSET))(arg, nullptr);
		}

		::System::Int32 ISteamApps_GetCurrentGameLanguage(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMAPPS_GETCURRENTGAMELANGUAGE_OFFSET))(arg, nullptr);
		}

		::System::UInt32 ISteamApps_GetEarliestPurchaseUnixTime(::System::Int32 arg, ::NPA::Ex::Steam::NXPSteamAppId_t* arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::NPA::Ex::Steam::NXPSteamAppId_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMAPPS_GETEARLIESTPURCHASEUNIXTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ISteamInventory_GetItemDefinitionIDs(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINVENTORY_GETITEMDEFINITIONIDS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt64 ISteamInventory_RequestPrices(::System::Int32 arg)
		{
			return (return (::System::UInt64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINVENTORY_REQUESTPRICES_OFFSET))(arg, nullptr);
		}

		::System::Boolean ISteamInventory_GetResultItems(::System::Int32 arg, ::NPA::Ex::Steam::NXPSteamInventoryResult_t* arg, ::Il2CppArray<::System::Object*>* arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::NPA::Ex::Steam::NXPSteamInventoryResult_t*, ::Il2CppArray<::System::Object*>*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINVENTORY_GETRESULTITEMS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ISteamInventory_GetAllItems(::System::Int32 arg, ::NPA::Ex::Steam::NXPSteamInventoryResult_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::NPA::Ex::Steam::NXPSteamInventoryResult_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINVENTORY_GETALLITEMS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ISteamInventory_DestroyResult(::System::Int32 arg, ::NPA::Ex::Steam::NXPSteamInventoryResult_t* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::Ex::Steam::NXPSteamInventoryResult_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINVENTORY_DESTROYRESULT_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt64 ISteamInventory_StartPurchase(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt64(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINVENTORY_STARTPURCHASE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ISteamInventory_LoadItemDefinitions(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINVENTORY_LOADITEMDEFINITIONS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ISteamInventory_GetItemPrice(::System::Int32 arg, ::NPA::Ex::Steam::NXPSteamItemDef_t* arg, uint64_t&* arg, uint64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::NPA::Ex::Steam::NXPSteamItemDef_t*, uint64_t&*, uint64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINVENTORY_GETITEMPRICE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ISteamInventory_GetEligiblePromoItemDefinitionIDs(::System::Int32 arg, ::NPA::Ex::Steam::NXPCSteamID* arg, ::Il2CppArray<::System::Object*>* arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::NPA::Ex::Steam::NXPCSteamID*, ::Il2CppArray<::System::Object*>*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINVENTORY_GETELIGIBLEPROMOITEMDEFINITIONIDS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::UInt64 ISteamInventory_RequestEligiblePromoItemDefinitionsIDs(::System::Int32 arg, ::NPA::Ex::Steam::NXPCSteamID* arg)
		{
			return (return (::System::UInt64(*)(::System::Int32, ::NPA::Ex::Steam::NXPCSteamID*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINVENTORY_REQUESTELIGIBLEPROMOITEMDEFINITIONSIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ISteamInventory_GetItemDefinitionProperty(::System::Int32 arg, ::NPA::Ex::Steam::NXPSteamItemDef_t* arg, UTF8StringHandle* arg, ::System::Int32 arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::NPA::Ex::Steam::NXPSteamItemDef_t*, UTF8StringHandle*, ::System::Int32, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINVENTORY_GETITEMDEFINITIONPROPERTY_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 SteamInput_v006()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMINPUT_V006_OFFSET))(nullptr);
		}

		::System::Boolean ISteamInput_Init(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINPUT_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ISteamInput_Shutdown(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINPUT_SHUTDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void ISteamInput_RunFrame(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINPUT_RUNFRAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ISteamInput_GetConnectedControllers(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINPUT_GETCONNECTEDCONTROLLERS_OFFSET))(arg, arg, nullptr);
		}

		::NPA::Ex::Steam::ENXPSteamInputType* ISteamInput_GetInputTypeForHandle(::System::Int32 arg, ::System::UInt64 arg)
		{
			return (return (::NPA::Ex::Steam::ENXPSteamInputType*(*)(::System::Int32, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINPUT_GETINPUTTYPEFORHANDLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ISteamInput_EnableDeviceCallbacks(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINPUT_ENABLEDEVICECALLBACKS_OFFSET))(arg, nullptr);
		}

		::System::UInt64 ISteamInput_GetControllerForGamepadIndex(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt64(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINPUT_GETCONTROLLERFORGAMEPADINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ISteamInput_GetGamepadIndexForController(::System::Int32 arg, ::System::UInt64 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_ISTEAMINPUT_GETGAMEPADINDEXFORCONTROLLER_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 SteamGameServer_GetHSteamPipe()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMBRIDGE_STEAMGAMESERVER_GETHSTEAMPIPE_OFFSET))(nullptr);
		}

	};
}

