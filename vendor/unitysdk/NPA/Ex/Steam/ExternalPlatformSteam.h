#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class SteamworksInitState; }
namespace NPA::Ex::Steam { class NXPSteamAppId_t; }
namespace NPA::Ex::Steam { class EDownloadableContentsDataState; }
namespace NPA::Ex::Steam { class EDownloadableContentsDataSource; }
namespace NPA::Ex::Steam { class NXPSteamAPIWarningMessageHook; }
namespace NPA::Ex::Steam { class ENXPSteamInputType; }
namespace NPA { class INXPToyControllerEventHandler; }
namespace NPA { class NXPDownloadableContentsDataContext; }
namespace NPA::Ex::Steam { class ENXPSteamOverlayToStoreFlag; }
namespace NPA::Ex::Steam::Callback { class NXPSteamGameOverlayActivated_t; }
namespace NPA::Ex::Steam::Callback { class NXPSteamInputDeviceConnected_t; }
namespace NPA::Ex::Steam::Callback { class NXPSteamInputDeviceDisconnected_t; }
namespace NPA { class NXPToyControllerType; }
namespace NPA::Ex::Steam { class NXPSteamItemDef_t; }
namespace NPA::Ex::Steam::Callback { class NXPSteamInventoryResultReady_t; }
namespace NPA::Ex::Steam::Callback { class NXPSteamInventoryFullUpdate_t; }
namespace NPA::Ex::Steam::Callback { class NXPSteamInventoryDefinitionUpdate_t; }
namespace NPA::Ex::Steam::Callback { class NXPSteamInventoryRequestPricesResult_t; }
namespace NPA::Ex::Steam::Callback { class NXPSteamInventoryStartPurchaseResult_t; }
namespace NPA::Ex::Steam::Callback { class NXPSteamInventoryEligiblePromoItemDefIDs_t; }
namespace NPA::Ex::Steam { class NXPSteamInventoryResult_t; }
namespace NPA::Ex::Steam { class NXPSteamAPICall_t; }
namespace NPA::Ex::Steam { class NXPCSteamID; }
namespace NPA::Ex::Steam::Callback { class NXPSteamGetAuthSessionTicketResponse_t; }
namespace NPA::Ex::Steam::Callback { class NXPSteamMicroTxnAuthorizationResponse_t; }
namespace NPA::Ex::Steam { class ENXPSteamGamepadTextInputMode; }
namespace NPA::Ex::Steam { class ENXPSteamGamepadTextInputLineMode; }
namespace NPA::Editor::Common { class NXPVirtualKeyboardOption; }
namespace NPA::Ex::Steam::Callback { class NXPSteamGamepadTextInputDismissed_t; }
namespace NPA::Ex::Steam { class NXPSteamAppDetail; }

#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D200C0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_STEAMINIT_OFFSET UNITYSDK_OFFSET(0x9D20370)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_SHOULDSKIPSTEAMINIT_OFFSET UNITYSDK_OFFSET(0x9D20460)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_HANDLESTEAMINITSTATE_OFFSET UNITYSDK_OFFSET(0x9D20780)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_QUITIFINITFAILED_OFFSET UNITYSDK_OFFSET(0x9D20830)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_REGISTERSTEAMNATIVECALLBACKS_OFFSET UNITYSDK_OFFSET(0x9D20CB0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_REGISTERSTEAMNATIVECALLRESULTS_OFFSET UNITYSDK_OFFSET(0x9D21010)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_INIT_OFFSET UNITYSDK_OFFSET(0x9D210B0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0x9D21360)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_CACHEDOWNLOADABLECONTENTSPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x9D21110)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETAPPDETAILS_OFFSET UNITYSDK_OFFSET(0x9D21510)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETMULTIPLEAPPDETAILS_OFFSET UNITYSDK_OFFSET(0x9D21680)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETPLATFORMIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9D21940)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETOPERATINGENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x9D21970)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_REQUIREONLINE_OFFSET UNITYSDK_OFFSET(0x9D219A0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETTITLEID_OFFSET UNITYSDK_OFFSET(0x9D21A40)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_CANSTARTPURCHASE_OFFSET UNITYSDK_OFFSET(0x9D21A90)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_CANSTARTRESTORE_OFFSET UNITYSDK_OFFSET(0x9D21C10)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETCONNECTEDNETWORKSTATUS_OFFSET UNITYSDK_OFFSET(0x9D21D10)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETDOWNLOADABLECONTENTSPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x9D21E30)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_PURCHASEDOWNLOADABLECONTENTS_OFFSET UNITYSDK_OFFSET(0x9D22240)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETDOWNLOADABLECONTENTSERRORCODE_OFFSET UNITYSDK_OFFSET(0x9D224B0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ISPRODUCTMULTIQUANTITYENABLED_OFFSET UNITYSDK_OFFSET(0x9D224D0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ISGAMEOVERLAYACTIVATED_OFFSET UNITYSDK_OFFSET(0x9D224E0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETGAMELANGUAGE_OFFSET UNITYSDK_OFFSET(0x9D224F0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_BISSUBSCRIBED_OFFSET UNITYSDK_OFFSET(0x9D225A0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETEARLIESTPURCHASEUNIXTIME_OFFSET UNITYSDK_OFFSET(0x9D225B0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_STEAMAPIDEBUGTEXTHOOK_OFFSET UNITYSDK_OFFSET(0x9D1FFF0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_VALIDATEANDCONFIGUREINITOPTIONS_OFFSET UNITYSDK_OFFSET(0x9D204C0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ISREQUIRERELAUNCH_OFFSET UNITYSDK_OFFSET(0x9D208B0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_RESTARTAPPIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x9D20960)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_INITSTEAMWORKSCLIENT_OFFSET UNITYSDK_OFFSET(0x9D20BA0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETPLAYERDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9D225D0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_QUERYFRIENDS_OFFSET UNITYSDK_OFFSET(0x9D225E0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_QUERYBLOCKUSERINFOS_OFFSET UNITYSDK_OFFSET(0x9D228E0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ACTIVATEGAMEOVERLAYTOSTORE_OFFSET UNITYSDK_OFFSET(0x9D224A0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ONSTEAMGAMEOVERLAYACTIVATED_OFFSET UNITYSDK_OFFSET(0x9D22920)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_INITSTEAMINPUT_OFFSET UNITYSDK_OFFSET(0x9D21210)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_SHUTDOWNSTEAMINPUT_OFFSET UNITYSDK_OFFSET(0x9D21380)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_POPULATEALREADYCONNECTEDCONTROLLERS_OFFSET UNITYSDK_OFFSET(0x9D22B20)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_REGISTERSTEAMINPUTCALLBACKS_OFFSET UNITYSDK_OFFSET(0x9D22A10)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ONSTEAMINPUTDEVICECONNECTED_OFFSET UNITYSDK_OFFSET(0x9D22D60)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ONSTEAMINPUTDEVICEDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x9D22F10)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_SETLASTACTIVE_OFFSET UNITYSDK_OFFSET(0x9D22D50)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_SETCONTROLLEREVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x9D23070)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETLASTACTIVECONTROLLERTYPE_OFFSET UNITYSDK_OFFSET(0x9D23080)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ISHANDLESTILLCONNECTED_OFFSET UNITYSDK_OFFSET(0x9D231B0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_MAPSTEAMINPUTTYPETOCONTROLLERTYPE_OFFSET UNITYSDK_OFFSET(0x9D22EF0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETPURCHASABLEPRODUCT_OFFSET UNITYSDK_OFFSET(0x9D23250)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_PURCHASEPRODUCT_OFFSET UNITYSDK_OFFSET(0x9D23710)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETENTITLEMENTSASJSONARRAY_OFFSET UNITYSDK_OFFSET(0x9D24050)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETACTUALITEMPRICE_OFFSET UNITYSDK_OFFSET(0x9D24160)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_CONVERTSTEAMPRICETOSTANDARDPRICE_OFFSET UNITYSDK_OFFSET(0x9D24340)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_REMOVEZERODECIMALPOINT_OFFSET UNITYSDK_OFFSET(0x9D243B0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ONSTEAMINVENTORYRESULTREADY_OFFSET UNITYSDK_OFFSET(0x9D24450)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ONSTEAMINVENTORYFULLUPDATE_OFFSET UNITYSDK_OFFSET(0x9D24C00)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ONSTEAMITEMDEFINITIONSUPDATED_OFFSET UNITYSDK_OFFSET(0x9D24CD0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ONREQUESTPRICESRESULTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D24DB0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ONSTEAMINVENTORYSTARTPURCHASERESULTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D25040)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ONSTEAMINVENTORYELIGIBLEPROMOITEMDEFIDS_OFFSET UNITYSDK_OFFSET(0x9D25580)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETITEMDEFINITIONIDS_OFFSET UNITYSDK_OFFSET(0x9D256A0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_REQUESTPRICES_OFFSET UNITYSDK_OFFSET(0x9D23360)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETLOCALIZEDITEMPROPERTY_OFFSET UNITYSDK_OFFSET(0x9D256B0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETITEMPROPERTY_OFFSET UNITYSDK_OFFSET(0x9D258E0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETRESULTITEMS_OFFSET UNITYSDK_OFFSET(0x9D24B00)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETALLITEMS_OFFSET UNITYSDK_OFFSET(0x9D259C0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_STARTPURCHASE_OFFSET UNITYSDK_OFFSET(0x9D24030)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_LOADITEMDEFINITIONS_OFFSET UNITYSDK_OFFSET(0x9D25BF0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETLOCALCURRENCYCODE_OFFSET UNITYSDK_OFFSET(0x9D25D60)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETITEMPRICE_OFFSET UNITYSDK_OFFSET(0x9D24330)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETELIGIBLEPROMOITEMDEFINITIONIDS_OFFSET UNITYSDK_OFFSET(0x9D25680)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_REQUESTELIGIBLEPROMOITEMDEFINITIONSIDS_OFFSET UNITYSDK_OFFSET(0x9D25D70)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETITEMDEFINITIONPROPERTY_OFFSET UNITYSDK_OFFSET(0x9D25990)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ISCONTAINSGETALLITEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D24B10)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETPURCHASEPRODUCTCALLBACKINFOBYORDERID_OFFSET UNITYSDK_OFFSET(0x9D25D80)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETNOTSETUPPURCHASEPRODUCTCALLBACKINFO_OFFSET UNITYSDK_OFFSET(0x9D254C0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_HASPURCHASEPRODUCTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D21BB0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETUSERIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9D25E70)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETAUTHTOKEN_OFFSET UNITYSDK_OFFSET(0x9D25EE0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETAUTHSESSIONTICKETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D260B0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ONMICROTXNAUTHORIZATIONRESPONSE_OFFSET UNITYSDK_OFFSET(0x9D264B0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETSTEAMID_OFFSET UNITYSDK_OFFSET(0x9D25ED0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETIPCOUNTRY_OFFSET UNITYSDK_OFFSET(0x9D25030)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ISOVERLAYENABLED_OFFSET UNITYSDK_OFFSET(0x9D21C00)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETAPPID_OFFSET UNITYSDK_OFFSET(0x9D225C0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_SHOWGAMEPADTEXTINPUT_OFFSET UNITYSDK_OFFSET(0x9D26810)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETENTEREDGAMEPADTEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x9D26840)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETENTEREDGAMEPADTEXTINPUT_OFFSET UNITYSDK_OFFSET(0x9D26850)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ISSTEAMINBIGPICTUREMODE_OFFSET UNITYSDK_OFFSET(0x9D26860)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_REQUIRESVIRTUALKEYBOARD_OFFSET UNITYSDK_OFFSET(0x9D26870)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_SHOWVIRTUALKEYBOARD_OFFSET UNITYSDK_OFFSET(0x9D268A0)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ONSTEAMGAMEPADTEXTINPUTDISMISSED_OFFSET UNITYSDK_OFFSET(0x9D26A00)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETSERVERREALTIME_OFFSET UNITYSDK_OFFSET(0x9D21E20)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM__CACHEDOWNLOADABLECONTENTSPRODUCTLIST_B__18_0_OFFSET UNITYSDK_OFFSET(0x9D26B60)
#define NPA_EX_STEAM_EXTERNALPLATFORMSTEAM__CACHEDOWNLOADABLECONTENTSPRODUCTLIST_B__18_1_OFFSET UNITYSDK_OFFSET(0x9D26C20)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int ExternalPlatformSteam_TypeDefinitionIndex = 26038;

	class ExternalPlatformSteam : public Il2CppObject
	{
	public:
		::NPA::Ex::Steam::SteamworksInitState* steamInitState; // 0x20
		::NPA::Ex::Steam::NXPSteamAppId_t* nxpSteamAppId; // 0x24
		::NPA::Ex::Steam::NXPSteamAppId_t* configuredSteamAppId; // 0x28
		::System::Boolean useCachedData; // 0x2C
		Il2CppObject* OnCloseDLCOverlay; // 0x30
		Il2CppObject* cachedDLCProductList; // 0x38
		::NPA::Ex::Steam::EDownloadableContentsDataState* downloadableContentsCachingProgressState; // 0x40
		::NPA::Ex::Steam::EDownloadableContentsDataSource* downloadableContentsDataSource; // 0x44
		::System::Boolean isGameOverlayActivated; // 0x48
		::NPA::Ex::Steam::NXPSteamAPIWarningMessageHook* SteamAPIWarningMessageHook; // 0x50
		Il2CppObject* m_GameOverlayActivated; // 0x58
		::System::Int32 STEAM_INPUT_MAX_COUNT; // 0x0
		::System::Boolean isSteamInputInitialized; // 0x60
		Il2CppObject* connectedDeviceStack; // 0x68
		::NPA::Ex::Steam::ENXPSteamInputType* lastActiveInputType; // 0x70
		::System::UInt64 lastActiveInputHandle; // 0x78
		::NPA::INXPToyControllerEventHandler* controllerEventHandler; // 0x80
		Il2CppObject* m_SteamInputDeviceConnected; // 0x88
		Il2CppObject* m_SteamInputDeviceDisconnected; // 0x90
		::System::String* m_localCurrencyCode; // 0x98
		Il2CppObject* m_SteamInventoryResultReady; // 0xA0
		Il2CppObject* m_SteamInventoryFullUpdate; // 0xA8
		Il2CppObject* m_SteamInventoryDefinitionUpdate; // 0xB0
		Il2CppObject* OnSteamInventoryEligiblePromoItemDefIDsCallResult; // 0xB8
		Il2CppObject* onPurchaseProductCallbackArray; // 0xC0
		Il2CppObject* onInventoryDefinitionUpdateCallbackArray; // 0xC8
		Il2CppObject* onRequestPricesCallbackArray; // 0xD0
		Il2CppObject* onGetAllItemCallbackArray; // 0xD8
		Il2CppObject* onGetAuthSessionTicketCallbackInfos; // 0xE0
		Il2CppObject* m_GetAuthSessionTicketResponse; // 0xE8
		Il2CppObject* m_MicroTxnAuthorizationResponse; // 0xF0
		Il2CppObject* m_GamepadTextInputDismissed; // 0xF8
		Il2CppObject* storedVirtualKeybaordDismissedCallback; // 0x100

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SteamInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_STEAMINIT_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSkipSteamInit()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_SHOULDSKIPSTEAMINIT_OFFSET))(nullptr);
		}

		::System::Void HandleSteamInitState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_HANDLESTEAMINITSTATE_OFFSET))(nullptr);
		}

		::System::Void QuitIfInitFailed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_QUITIFINITFAILED_OFFSET))(nullptr);
		}

		::System::Void RegisterSteamNativeCallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_REGISTERSTEAMNATIVECALLBACKS_OFFSET))(nullptr);
		}

		::System::Void RegisterSteamNativeCallResults()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_REGISTERSTEAMNATIVECALLRESULTS_OFFSET))(nullptr);
		}

		::System::Boolean Init()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_INIT_OFFSET))(nullptr);
		}

		::System::Void Uninitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_UNINITIALIZE_OFFSET))(nullptr);
		}

		::System::Void CacheDownloadableContentsProductList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_CACHEDOWNLOADABLECONTENTSPRODUCTLIST_OFFSET))(nullptr);
		}

		::System::Void GetAppDetails(::System::UInt32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::UInt32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETAPPDETAILS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetMultipleAppDetails(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETMULTIPLEAPPDETAILS_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetPlatformIdentifier()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETPLATFORMIDENTIFIER_OFFSET))(nullptr);
		}

		::System::String* GetOperatingEnvironment()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETOPERATINGENVIRONMENT_OFFSET))(nullptr);
		}

		::System::Void RequireOnline(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_REQUIREONLINE_OFFSET))(arg, nullptr);
		}

		::System::String* GetTitleId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETTITLEID_OFFSET))(nullptr);
		}

		::System::Void CanStartPurchase(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_CANSTARTPURCHASE_OFFSET))(arg, nullptr);
		}

		::System::Void CanStartRestore(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_CANSTARTRESTORE_OFFSET))(arg, nullptr);
		}

		::System::Void GetConnectedNetworkStatus(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETCONNECTEDNETWORKSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void GetDownloadableContentsProductList(::NPA::NXPDownloadableContentsDataContext* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPDownloadableContentsDataContext*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETDOWNLOADABLECONTENTSPRODUCTLIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PurchaseDownloadableContents(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_PURCHASEDOWNLOADABLECONTENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetDownloadableContentsErrorCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETDOWNLOADABLECONTENTSERRORCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsProductMultiQuantityEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ISPRODUCTMULTIQUANTITYENABLED_OFFSET))(nullptr);
		}

		::System::Boolean IsGameOverlayActivated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ISGAMEOVERLAYACTIVATED_OFFSET))(nullptr);
		}

		::System::String* GetGameLanguage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETGAMELANGUAGE_OFFSET))(nullptr);
		}

		::System::Boolean BIsSubscribed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_BISSUBSCRIBED_OFFSET))(nullptr);
		}

		::System::UInt32 GetEarliestPurchaseUnixTime(::NPA::Ex::Steam::NXPSteamAppId_t* arg)
		{
			return (return (::System::UInt32(*)(::NPA::Ex::Steam::NXPSteamAppId_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETEARLIESTPURCHASEUNIXTIME_OFFSET))(arg, nullptr);
		}

		::System::Void SteamAPIDebugTextHook(::System::Int32 arg, ::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_STEAMAPIDEBUGTEXTHOOK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ValidateAndConfigureInitOptions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_VALIDATEANDCONFIGUREINITOPTIONS_OFFSET))(nullptr);
		}

		::System::Boolean IsRequireRelaunch()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ISREQUIRERELAUNCH_OFFSET))(nullptr);
		}

		::System::Void RestartAppIfNecessary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_RESTARTAPPIFNECESSARY_OFFSET))(nullptr);
		}

		::System::Void InitSteamworksClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_INITSTEAMWORKSCLIENT_OFFSET))(nullptr);
		}

		::System::String* GetPlayerDisplayName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETPLAYERDISPLAYNAME_OFFSET))(arg, nullptr);
		}

		::System::Void QueryFriends(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_QUERYFRIENDS_OFFSET))(arg, nullptr);
		}

		::System::Void QueryBlockUserInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_QUERYBLOCKUSERINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void ActivateGameOverlayToStore(::NPA::Ex::Steam::NXPSteamAppId_t* arg, ::NPA::Ex::Steam::ENXPSteamOverlayToStoreFlag* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::NXPSteamAppId_t*, ::NPA::Ex::Steam::ENXPSteamOverlayToStoreFlag*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ACTIVATEGAMEOVERLAYTOSTORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnSteamGameOverlayActivated(::NPA::Ex::Steam::Callback::NXPSteamGameOverlayActivated_t* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::Callback::NXPSteamGameOverlayActivated_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ONSTEAMGAMEOVERLAYACTIVATED_OFFSET))(arg, nullptr);
		}

		::System::Boolean InitSteamInput()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_INITSTEAMINPUT_OFFSET))(nullptr);
		}

		::System::Void ShutdownSteamInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_SHUTDOWNSTEAMINPUT_OFFSET))(nullptr);
		}

		::System::Void PopulateAlreadyConnectedControllers(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_POPULATEALREADYCONNECTEDCONTROLLERS_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterSteamInputCallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_REGISTERSTEAMINPUTCALLBACKS_OFFSET))(nullptr);
		}

		::System::Void OnSteamInputDeviceConnected(::NPA::Ex::Steam::Callback::NXPSteamInputDeviceConnected_t* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::Callback::NXPSteamInputDeviceConnected_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ONSTEAMINPUTDEVICECONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnSteamInputDeviceDisconnected(::NPA::Ex::Steam::Callback::NXPSteamInputDeviceDisconnected_t* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::Callback::NXPSteamInputDeviceDisconnected_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ONSTEAMINPUTDEVICEDISCONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetLastActive(::System::UInt64 arg, ::NPA::Ex::Steam::ENXPSteamInputType* arg)
		{
			((::System::Void(*)(::System::UInt64, ::NPA::Ex::Steam::ENXPSteamInputType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_SETLASTACTIVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetControllerEventHandler(::NPA::INXPToyControllerEventHandler* arg)
		{
			((::System::Void(*)(::NPA::INXPToyControllerEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_SETCONTROLLEREVENTHANDLER_OFFSET))(arg, nullptr);
		}

		::NPA::NXPToyControllerType* GetLastActiveControllerType()
		{
			return (return (::NPA::NXPToyControllerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETLASTACTIVECONTROLLERTYPE_OFFSET))(nullptr);
		}

		::System::Boolean IsHandleStillConnected(::System::UInt64 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ISHANDLESTILLCONNECTED_OFFSET))(arg, nullptr);
		}

		::NPA::NXPToyControllerType* MapSteamInputTypeToControllerType(::NPA::Ex::Steam::ENXPSteamInputType* arg)
		{
			return (return (::NPA::NXPToyControllerType*(*)(::NPA::Ex::Steam::ENXPSteamInputType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_MAPSTEAMINPUTTYPETOCONTROLLERTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void GetPurchasableProduct(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETPURCHASABLEPRODUCT_OFFSET))(arg, nullptr);
		}

		::System::Void PurchaseProduct(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_PURCHASEPRODUCT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetEntitlementsAsJsonArray(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETENTITLEMENTSASJSONARRAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetActualItemPrice(::NPA::Ex::Steam::NXPSteamItemDef_t* arg, ::System::String&* arg, ::System::String&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamItemDef_t*, ::System::String&*, ::System::String&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETACTUALITEMPRICE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* ConvertSteamPriceToStandardPrice(::System::UInt64 arg)
		{
			return (return (::System::String*(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_CONVERTSTEAMPRICETOSTANDARDPRICE_OFFSET))(arg, nullptr);
		}

		::System::String* RemoveZeroDecimalPoint(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_REMOVEZERODECIMALPOINT_OFFSET))(str, nullptr);
		}

		::System::Void OnSteamInventoryResultReady(::NPA::Ex::Steam::Callback::NXPSteamInventoryResultReady_t* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::Callback::NXPSteamInventoryResultReady_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ONSTEAMINVENTORYRESULTREADY_OFFSET))(arg, nullptr);
		}

		::System::Void OnSteamInventoryFullUpdate(::NPA::Ex::Steam::Callback::NXPSteamInventoryFullUpdate_t* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::Callback::NXPSteamInventoryFullUpdate_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ONSTEAMINVENTORYFULLUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnSteamItemDefinitionsUpdated(::NPA::Ex::Steam::Callback::NXPSteamInventoryDefinitionUpdate_t* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::Callback::NXPSteamInventoryDefinitionUpdate_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ONSTEAMITEMDEFINITIONSUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Void OnRequestPricesResultCallback(::NPA::Ex::Steam::Callback::NXPSteamInventoryRequestPricesResult_t* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::Callback::NXPSteamInventoryRequestPricesResult_t*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ONREQUESTPRICESRESULTCALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnSteamInventoryStartPurchaseResultCallback(::NPA::Ex::Steam::Callback::NXPSteamInventoryStartPurchaseResult_t* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::Callback::NXPSteamInventoryStartPurchaseResult_t*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ONSTEAMINVENTORYSTARTPURCHASERESULTCALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnSteamInventoryEligiblePromoItemDefIDs(::NPA::Ex::Steam::Callback::NXPSteamInventoryEligiblePromoItemDefIDs_t* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::Callback::NXPSteamInventoryEligiblePromoItemDefIDs_t*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ONSTEAMINVENTORYELIGIBLEPROMOITEMDEFIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetItemDefinitionIDs(::Il2CppArray<::System::Object*>* arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETITEMDEFINITIONIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RequestPrices(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_REQUESTPRICES_OFFSET))(arg, nullptr);
		}

		::System::String* GetLocalizedItemProperty(::NPA::Ex::Steam::NXPSteamItemDef_t* arg, ::System::String* str)
		{
			return (return (::System::String*(*)(::NPA::Ex::Steam::NXPSteamItemDef_t*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETLOCALIZEDITEMPROPERTY_OFFSET))(arg, str, nullptr);
		}

		::System::String* GetItemProperty(::NPA::Ex::Steam::NXPSteamItemDef_t* arg, ::System::String* str)
		{
			return (return (::System::String*(*)(::NPA::Ex::Steam::NXPSteamItemDef_t*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETITEMPROPERTY_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean GetResultItems(::NPA::Ex::Steam::NXPSteamInventoryResult_t* arg, ::Il2CppArray<::System::Object*>* arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamInventoryResult_t*, ::Il2CppArray<::System::Object*>*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETRESULTITEMS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetAllItems(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETALLITEMS_OFFSET))(arg, nullptr);
		}

		::NPA::Ex::Steam::NXPSteamAPICall_t* StartPurchase(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::UInt32 arg)
		{
			return (return (::NPA::Ex::Steam::NXPSteamAPICall_t*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_STARTPURCHASE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void LoadItemDefinitions(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_LOADITEMDEFINITIONS_OFFSET))(arg, nullptr);
		}

		::System::String* GetLocalCurrencyCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETLOCALCURRENCYCODE_OFFSET))(nullptr);
		}

		::System::Boolean GetItemPrice(::NPA::Ex::Steam::NXPSteamItemDef_t* arg, uint64_t&* arg, uint64_t&* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamItemDef_t*, uint64_t&*, uint64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETITEMPRICE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GetEligiblePromoItemDefinitionIDs(::NPA::Ex::Steam::NXPCSteamID* arg, ::Il2CppArray<::System::Object*>* arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPCSteamID*, ::Il2CppArray<::System::Object*>*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETELIGIBLEPROMOITEMDEFINITIONIDS_OFFSET))(arg, arg, arg, nullptr);
		}

		::NPA::Ex::Steam::NXPSteamAPICall_t* RequestEligiblePromoItemDefinitionsIDs(::NPA::Ex::Steam::NXPCSteamID* arg)
		{
			return (return (::NPA::Ex::Steam::NXPSteamAPICall_t*(*)(::NPA::Ex::Steam::NXPCSteamID*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_REQUESTELIGIBLEPROMOITEMDEFINITIONSIDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetItemDefinitionProperty(::NPA::Ex::Steam::NXPSteamItemDef_t* arg, ::System::String* str, ::System::String&* arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamItemDef_t*, ::System::String*, ::System::String&*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETITEMDEFINITIONPROPERTY_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Boolean IsContainsGetAllItemCallback(::NPA::Ex::Steam::NXPSteamInventoryResult_t* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::NXPSteamInventoryResult_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ISCONTAINSGETALLITEMCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetPurchaseProductCallbackInfoByOrderId(::System::UInt64 arg)
		{
			return (return (::System::Int32(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETPURCHASEPRODUCTCALLBACKINFOBYORDERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetNotSetupPurchaseProductCallbackInfo()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETNOTSETUPPURCHASEPRODUCTCALLBACKINFO_OFFSET))(nullptr);
		}

		::System::Boolean HasPurchaseProductCallback()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_HASPURCHASEPRODUCTCALLBACK_OFFSET))(nullptr);
		}

		::System::String* GetUserIdentifier(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETUSERIDENTIFIER_OFFSET))(arg, nullptr);
		}

		::System::Void GetAuthToken(::System::Int32 arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETAUTHTOKEN_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void GetAuthSessionTicketCallback(::NPA::Ex::Steam::Callback::NXPSteamGetAuthSessionTicketResponse_t* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::Callback::NXPSteamGetAuthSessionTicketResponse_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETAUTHSESSIONTICKETCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void OnMicroTxnAuthorizationResponse(::NPA::Ex::Steam::Callback::NXPSteamMicroTxnAuthorizationResponse_t* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::Callback::NXPSteamMicroTxnAuthorizationResponse_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ONMICROTXNAUTHORIZATIONRESPONSE_OFFSET))(arg, nullptr);
		}

		::NPA::Ex::Steam::NXPCSteamID* GetSteamID()
		{
			return (return (::NPA::Ex::Steam::NXPCSteamID*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETSTEAMID_OFFSET))(nullptr);
		}

		::System::String* GetIPCountry()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETIPCOUNTRY_OFFSET))(nullptr);
		}

		::System::Boolean IsOverlayEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ISOVERLAYENABLED_OFFSET))(nullptr);
		}

		::NPA::Ex::Steam::NXPSteamAppId_t* GetAppID()
		{
			return (return (::NPA::Ex::Steam::NXPSteamAppId_t*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETAPPID_OFFSET))(nullptr);
		}

		::System::Boolean ShowGamepadTextInput(::NPA::Ex::Steam::ENXPSteamGamepadTextInputMode* arg, ::NPA::Ex::Steam::ENXPSteamGamepadTextInputLineMode* arg, ::System::String* str, ::System::UInt32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::Steam::ENXPSteamGamepadTextInputMode*, ::NPA::Ex::Steam::ENXPSteamGamepadTextInputLineMode*, ::System::String*, ::System::UInt32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_SHOWGAMEPADTEXTINPUT_OFFSET))(arg, arg, str, arg, str, nullptr);
		}

		::System::UInt32 GetEnteredGamepadTextLength()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETENTEREDGAMEPADTEXTLENGTH_OFFSET))(nullptr);
		}

		::System::Boolean GetEnteredGamepadTextInput(::System::String&* arg, ::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::String&*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETENTEREDGAMEPADTEXTINPUT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsSteamInBigPictureMode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ISSTEAMINBIGPICTUREMODE_OFFSET))(nullptr);
		}

		::System::Boolean RequiresVirtualKeyboard()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_REQUIRESVIRTUALKEYBOARD_OFFSET))(nullptr);
		}

		::System::Void ShowVirtualKeyboard(::NPA::Editor::Common::NXPVirtualKeyboardOption* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::NXPVirtualKeyboardOption*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_SHOWVIRTUALKEYBOARD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnSteamGamepadTextInputDismissed(::NPA::Ex::Steam::Callback::NXPSteamGamepadTextInputDismissed_t* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::Callback::NXPSteamGamepadTextInputDismissed_t*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_ONSTEAMGAMEPADTEXTINPUTDISMISSED_OFFSET))(arg, nullptr);
		}

		::System::UInt32 GetServerRealTime()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM_GETSERVERREALTIME_OFFSET))(nullptr);
		}

		::System::Void _CacheDownloadableContentsProductList_b__18_0(::NPA::Ex::Steam::NXPSteamAppDetail* arg)
		{
			((::System::Void(*)(::NPA::Ex::Steam::NXPSteamAppDetail*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM__CACHEDOWNLOADABLECONTENTSPRODUCTLIST_B__18_0_OFFSET))(arg, nullptr);
		}

		::System::Void _CacheDownloadableContentsProductList_b__18_1(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_EXTERNALPLATFORMSTEAM__CACHEDOWNLOADABLECONTENTSPRODUCTLIST_B__18_1_OFFSET))(arg, nullptr);
		}

	};
}

