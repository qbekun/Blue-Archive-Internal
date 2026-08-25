#pragma once
#include "unitysdk.h"

namespace NPA { class NXPWeb; }
namespace NPA { class NXPToyResult; }
namespace NPA { class NXPInset; }
class LocalNotification;
namespace NPA::Auth { class NXPToyLoginResult; }
namespace NPA::Social { class NXPToyAchievementsResult; }
namespace NPA::Auth { class NXPToyAccountSettingsResult; }
namespace NPA::Auth { class NXPToyIDFVResult; }
namespace NPA::Auth { class NXPToyCountryResult; }
namespace NPA::Auth { class NXPToyUserInfoResult; }
namespace NPA::Promotion { class NXPToyCloseResult; }
namespace NPA::Service { class NXPToyPlateActionPerformedResult; }
class UIPopup_System;
namespace FlatData { class Language; }

#define PLATFORMSERVICENEXON_SENDFIREBASELOG_OFFSET UNITYSDK_OFFSET(0xC64CD0)
#define PLATFORMSERVICENEXON__CALLHELPCENTERTOY_B__61_1_OFFSET UNITYSDK_OFFSET(0xC64CE0)
#define PLATFORMSERVICENEXON_OPENSUBSCRIPTIONMARKETTOY_OFFSET UNITYSDK_OFFSET(0xC64DF0)
#define PLATFORMSERVICENEXON_SHOWACHIEVEMENTTOY_OFFSET UNITYSDK_OFFSET(0xC64E70)
#define PLATFORMSERVICENEXON_DELINKACCOUNT_OFFSET UNITYSDK_OFFSET(0xC650D0)
#define PLATFORMSERVICENEXON_LOGINTOY_OFFSET UNITYSDK_OFFSET(0xC65180)
#define PLATFORMSERVICENEXON__CALLHELPCENTERTOY_G__OPENPOPUPLOGOUTMESSAGE|61_6_OFFSET UNITYSDK_OFFSET(0xC65230)
#define PLATFORMSERVICENEXON_OPENWEBVIEWTOY_OFFSET UNITYSDK_OFFSET(0xC65310)
#define PLATFORMSERVICENEXON_REQUESTAPPTRACKINGPERMISSION_OFFSET UNITYSDK_OFFSET(0xC65760)
#define PLATFORMSERVICENEXON_UNLOCKACHIEVEMENTIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xC659E0)
#define PLATFORMSERVICENEXON_INITIALIZETOY_OFFSET UNITYSDK_OFFSET(0xC65BE0)
#define PLATFORMSERVICENEXON_EVENTTRACKINGTOY_OFFSET UNITYSDK_OFFSET(0xC65E80)
#define PLATFORMSERVICENEXON_SETOUTOFAPPPURCHASEOBSERVERTOY_OFFSET UNITYSDK_OFFSET(0xC65F00)
#define PLATFORMSERVICENEXON_CALLHELPCENTER_OFFSET UNITYSDK_OFFSET(0xC66000)
#define PLATFORMSERVICENEXON__CALLHELPCENTERTOY_B__61_3_OFFSET UNITYSDK_OFFSET(0xC665D0)
#define PLATFORMSERVICENEXON__UNREGISTERSERVICETOY_B__60_0_OFFSET UNITYSDK_OFFSET(0xC66680)
#define PLATFORMSERVICENEXON__CALLHELPCENTERTOY_B__61_8_OFFSET UNITYSDK_OFFSET(0xC66870)
#define PLATFORMSERVICENEXON_CANCELALLLOCALPUSHTOY_OFFSET UNITYSDK_OFFSET(0xC66900)
#define PLATFORMSERVICENEXON_GETADVERTISINGIDTOY_OFFSET UNITYSDK_OFFSET(0xC66980)
#define PLATFORMSERVICENEXON_SENDFUNNELTOY_OFFSET UNITYSDK_OFFSET(0xC66A90)
#define PLATFORMSERVICENEXON_LOCALPUSHLOCALTOY_OFFSET UNITYSDK_OFFSET(0xC66B20)
#define PLATFORMSERVICENEXON_GETUSERINFO_OFFSET UNITYSDK_OFFSET(0xC67100)
#define PLATFORMSERVICENEXON__DISCONNECTGAMEPLATFORMTOY_B__83_0_OFFSET UNITYSDK_OFFSET(0xC671C0)
#define PLATFORMSERVICENEXON__CALLHELPCENTERTOY_B__61_7_OFFSET UNITYSDK_OFFSET(0xC67270)
#define PLATFORMSERVICENEXON_CLOSEWEBVIEW_OFFSET UNITYSDK_OFFSET(0xC67300)
#define PLATFORMSERVICENEXON_CHANGEACCOUNT_OFFSET UNITYSDK_OFFSET(0xC673D0)
#define PLATFORMSERVICENEXON_SETWEBVIEWMARGINSTOY_OFFSET UNITYSDK_OFFSET(0xC67490)
#define PLATFORMSERVICENEXON_SETSTEPSACHIEVEMENTIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xC67500)
#define PLATFORMSERVICENEXON_CHECKPURCHASABLEITEMTOY_OFFSET UNITYSDK_OFFSET(0xC676D0)
#define PLATFORMSERVICENEXON__LOGINTOY_B__47_0_OFFSET UNITYSDK_OFFSET(0xC67810)
#define PLATFORMSERVICENEXON_STEAMBLOCKTOUCH_OFFSET UNITYSDK_OFFSET(0xC64D00)
#define PLATFORMSERVICENEXON_GETIDENTIFIERFORVENDORTOY_OFFSET UNITYSDK_OFFSET(0xC67980)
#define PLATFORMSERVICENEXON__LOADACHIEVEMENTDATATOY_B__84_0_OFFSET UNITYSDK_OFFSET(0xC67A30)
#define PLATFORMSERVICENEXON_INIT_OFFSET UNITYSDK_OFFSET(0xC67B70)
#define PLATFORMSERVICENEXON_ISENABLEGAMEPLATFORMTOY_OFFSET UNITYSDK_OFFSET(0xC67B80)
#define PLATFORMSERVICENEXON_CALLHELPCENTERTOY_OFFSET UNITYSDK_OFFSET(0xC66010)
#define PLATFORMSERVICENEXON__CALLHELPCENTERTOY_B__61_5_OFFSET UNITYSDK_OFFSET(0xC67C60)
#define PLATFORMSERVICENEXON_RESTOREBILLINGITEMTOY_OFFSET UNITYSDK_OFFSET(0xC67F70)
#define PLATFORMSERVICENEXON_EVENTTRACKINGPURCHASETOY_OFFSET UNITYSDK_OFFSET(0xC681E0)
#define PLATFORMSERVICENEXON__GETIDENTIFIERFORVENDORTOY_B__77_0_OFFSET UNITYSDK_OFFSET(0xC683B0)
#define PLATFORMSERVICENEXON_EVENTTRACKINGPURCHASE_OFFSET UNITYSDK_OFFSET(0xC685B0)
#define PLATFORMSERVICENEXON__DELINKACCOUNT_B__79_0_OFFSET UNITYSDK_OFFSET(0xC685D0)
#define PLATFORMSERVICENEXON__LOADLOCATEDCOUNTRYTOY_B__59_0_OFFSET UNITYSDK_OFFSET(0xC68680)
#define PLATFORMSERVICENEXON__SHOWQRCODETOY_B__89_0_OFFSET UNITYSDK_OFFSET(0xC687C0)
#define PLATFORMSERVICENEXON_LOGOUTTOY_OFFSET UNITYSDK_OFFSET(0xC68870)
#define PLATFORMSERVICENEXON__LOGOUTTOY_B__50_0_OFFSET UNITYSDK_OFFSET(0xC68BB0)
#define PLATFORMSERVICENEXON__GETUSERINFOTOY_B__49_0_OFFSET UNITYSDK_OFFSET(0xC68C40)
#define PLATFORMSERVICENEXON_OPENWEBVIEW_OFFSET UNITYSDK_OFFSET(0xC69700)
#define PLATFORMSERVICENEXON_REQUESTBILLINGITEMTOY_OFFSET UNITYSDK_OFFSET(0xC697D0)
#define PLATFORMSERVICENEXON_INCREMENTACHIEVEMENTIMMEDIATETOY_OFFSET UNITYSDK_OFFSET(0xC699F0)
#define PLATFORMSERVICENEXON_EVENTTRACKING_OFFSET UNITYSDK_OFFSET(0xC69BA0)
#define PLATFORMSERVICENEXON_UNREGISTERNEXONMEMBERSHIP_OFFSET UNITYSDK_OFFSET(0xC69C20)
#define PLATFORMSERVICENEXON_REQUESTPERMISSIONS_OFFSET UNITYSDK_OFFSET(0xC69CE0)
#define PLATFORMSERVICENEXON__SHOWACCOUNTMENUTOY_B__48_0_OFFSET UNITYSDK_OFFSET(0xC69CF0)
#define PLATFORMSERVICENEXON_LOADACHIEVEMENTDATA_OFFSET UNITYSDK_OFFSET(0xC69ED0)
#define PLATFORMSERVICENEXON_CONNECTGAMEPLATOFRMTOY_OFFSET UNITYSDK_OFFSET(0xC6A020)
#define PLATFORMSERVICENEXON_LOADLOCATEDCOUNTRY_OFFSET UNITYSDK_OFFSET(0xC6A1B0)
#define PLATFORMSERVICENEXON_PUSHINITTOY_OFFSET UNITYSDK_OFFSET(0xC691A0)
#define PLATFORMSERVICENEXON_CANCELALLLOCALPUSH_OFFSET UNITYSDK_OFFSET(0xC6A270)
#define PLATFORMSERVICENEXON_INITIALIZEDATA_OFFSET UNITYSDK_OFFSET(0xC6A2F0)
#define PLATFORMSERVICENEXON_CANCELLOCALPUSHTOY_OFFSET UNITYSDK_OFFSET(0xC6A630)
#define PLATFORMSERVICENEXON_BILLINGPAYMENTTOY_OFFSET UNITYSDK_OFFSET(0xC6A6B0)
#define PLATFORMSERVICENEXON_SHOWACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0xC6AAC0)
#define PLATFORMSERVICENEXON_CALLPROMOTIONTOY_OFFSET UNITYSDK_OFFSET(0xC6AAD0)
#define PLATFORMSERVICENEXON_SHOWACCOUNTMENUTOY_OFFSET UNITYSDK_OFFSET(0xC673E0)
#define PLATFORMSERVICENEXON__CALLHELPCENTERTOY_B__61_10_OFFSET UNITYSDK_OFFSET(0xC6AC00)
#define PLATFORMSERVICENEXON_GETIDENTIFIERFORVENDOR_OFFSET UNITYSDK_OFFSET(0xC6AC90)
#define PLATFORMSERVICENEXON_.CTOR_OFFSET UNITYSDK_OFFSET(0xC6ACA0)
#define PLATFORMSERVICENEXON_REQUESTSTOREREVIEW_OFFSET UNITYSDK_OFFSET(0xC6AE80)
#define PLATFORMSERVICENEXON_CONNECTGAMEPLATOFRM_OFFSET UNITYSDK_OFFSET(0xC6AF00)
#define PLATFORMSERVICENEXON_CANCELLOCALPUSH_OFFSET UNITYSDK_OFFSET(0xC6AF10)
#define PLATFORMSERVICENEXON_SENDFUNNEL_OFFSET UNITYSDK_OFFSET(0xC6AF90)
#define PLATFORMSERVICENEXON__INITIALIZETOY_B__46_0_OFFSET UNITYSDK_OFFSET(0xC6B300)
#define PLATFORMSERVICENEXON__CALLHELPCENTERTOY_B__61_0_OFFSET UNITYSDK_OFFSET(0xC6B5F0)
#define PLATFORMSERVICENEXON__CALLHELPCENTERTOY_B__61_4_OFFSET UNITYSDK_OFFSET(0xC6B650)
#define PLATFORMSERVICENEXON_CALLCOMMUNITY_OFFSET UNITYSDK_OFFSET(0xC6B670)
#define PLATFORMSERVICENEXON_LOADLOCATEDCOUNTRYTOY_OFFSET UNITYSDK_OFFSET(0xC6A1C0)
#define PLATFORMSERVICENEXON_SETWEBVIEWMARGINS_OFFSET UNITYSDK_OFFSET(0xC6B830)
#define PLATFORMSERVICENEXON__CALLHELPCENTERTOY_B__61_2_OFFSET UNITYSDK_OFFSET(0xC6B910)
#define PLATFORMSERVICENEXON_OPENEVENTBUILDER_OFFSET UNITYSDK_OFFSET(0xC6B9C0)
#define PLATFORMSERVICENEXON_LOCALPUSH_OFFSET UNITYSDK_OFFSET(0xC6BB70)
#define PLATFORMSERVICENEXON__CALLHELPCENTERTOY_B__61_9_OFFSET UNITYSDK_OFFSET(0xC6BB80)
#define PLATFORMSERVICENEXON_GETUSERINFOTOY_OFFSET UNITYSDK_OFFSET(0xC67110)
#define PLATFORMSERVICENEXON_UNREGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0xC6BC50)
#define PLATFORMSERVICENEXON_SETSTEPSACHIEVEMENTIMMEDIATETOY_OFFSET UNITYSDK_OFFSET(0xC67510)
#define PLATFORMSERVICENEXON_SHOWQRCODE_OFFSET UNITYSDK_OFFSET(0xC6BDF0)
#define PLATFORMSERVICENEXON_UNREGISTERNEXONMEMBERSHIPTOY_OFFSET UNITYSDK_OFFSET(0xC69C30)
#define PLATFORMSERVICENEXON_RESTOREBILLINGPRODUCT_OFFSET UNITYSDK_OFFSET(0xC6BFC0)
#define PLATFORMSERVICENEXON__UNREGISTERSERVICETOY_B__60_1_OFFSET UNITYSDK_OFFSET(0xC6BFD0)
#define PLATFORMSERVICENEXON_LOGOUT_OFFSET UNITYSDK_OFFSET(0xC6C0A0)
#define PLATFORMSERVICENEXON_GETADVERTISINGID_OFFSET UNITYSDK_OFFSET(0xC6C0B0)
#define PLATFORMSERVICENEXON_CLOSEWEBVIEWTOY_OFFSET UNITYSDK_OFFSET(0xC67310)
#define PLATFORMSERVICENEXON_SHOWPROMOTION_OFFSET UNITYSDK_OFFSET(0xC6C180)
#define PLATFORMSERVICENEXON_LOGIN_OFFSET UNITYSDK_OFFSET(0xC6C3C0)
#define PLATFORMSERVICENEXON_BILLINGPRODUCT_OFFSET UNITYSDK_OFFSET(0xC6C420)
#define PLATFORMSERVICENEXON_CALLPROMOTION_OFFSET UNITYSDK_OFFSET(0xC6C500)
#define PLATFORMSERVICENEXON_INCREMENTACHIEVEMENTIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xC6C510)
#define PLATFORMSERVICENEXON_OPENEVENTBUILDERTOY_OFFSET UNITYSDK_OFFSET(0xC6B9D0)
#define PLATFORMSERVICENEXON_SETDEVICELOCALECODE_OFFSET UNITYSDK_OFFSET(0xC6C530)
#define PLATFORMSERVICENEXON__UNREGISTERSERVICETOY_B__60_2_OFFSET UNITYSDK_OFFSET(0xC6C5C0)
#define PLATFORMSERVICENEXON_CALLCOMMUNITYTOY_OFFSET UNITYSDK_OFFSET(0xC6B680)
#define PLATFORMSERVICENEXON_UNLOCKACHIEVEMENTIMMEDIATETOY_OFFSET UNITYSDK_OFFSET(0xC659F0)
#define PLATFORMSERVICENEXON_REQUESTBILLINGPURCHASELIST_OFFSET UNITYSDK_OFFSET(0xC6C7C0)
#define PLATFORMSERVICENEXON_UNREGISTERSERVICETOY_OFFSET UNITYSDK_OFFSET(0xC6BC60)
#define PLATFORMSERVICENEXON_DISCONNECTGAMEPLATFORM_OFFSET UNITYSDK_OFFSET(0xC6C870)
#define PLATFORMSERVICENEXON_ISENABLEGAMEPLATFORM_OFFSET UNITYSDK_OFFSET(0xC6C9C0)
#define PLATFORMSERVICENEXON_PAUSE_OFFSET UNITYSDK_OFFSET(0xC6C9D0)
#define PLATFORMSERVICENEXON__UNREGISTERNEXONMEMBERSHIPTOY_B__63_0_OFFSET UNITYSDK_OFFSET(0xC6C9E0)
#define PLATFORMSERVICENEXON_SETSDKLANGUAGE_OFFSET UNITYSDK_OFFSET(0xC6CA20)
#define PLATFORMSERVICENEXON_SHOWQRCODETOY_OFFSET UNITYSDK_OFFSET(0xC6BE00)
#define PLATFORMSERVICENEXON_REQUESTAPPTRACKINGPERMISSIONTOY_OFFSET UNITYSDK_OFFSET(0xC65830)
#define PLATFORMSERVICENEXON_DISCONNECTGAMEPLATFORMTOY_OFFSET UNITYSDK_OFFSET(0xC6C880)
#define PLATFORMSERVICENEXON_LOADACHIEVEMENTDATATOY_OFFSET UNITYSDK_OFFSET(0xC69EE0)

	inline static constexpr unsigned int PlatformServiceNexon_TypeDefinitionIndex = 8987;

	class PlatformServiceNexon : public Il2CppObject
	{
	public:
		::System::String* toySdkVersion; // 0x0
		::System::String* SENDER_ID; // 0x0
		::NPA::NXPWeb* toyWebviewInstance; // 0xD8

		::System::Void SendFirebaseLog(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_SENDFIREBASELOG_OFFSET))(str, nullptr);
		}

		::System::Void _CallHelpCenterToy_b__61_1(::NPA::NXPToyResult* arg)
		{
			((::System::Void(*)(::NPA::NXPToyResult*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__CALLHELPCENTERTOY_B__61_1_OFFSET))(arg, nullptr);
		}

		::System::Void OpenSubscriptionMarketToy(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_OPENSUBSCRIPTIONMARKETTOY_OFFSET))(str, arg, nullptr);
		}

		::System::Void ShowAchievementToy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_SHOWACHIEVEMENTTOY_OFFSET))(nullptr);
		}

		::System::Void DelinkAccount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_DELINKACCOUNT_OFFSET))(nullptr);
		}

		::System::Void LoginToy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_LOGINTOY_OFFSET))(nullptr);
		}

		::System::Void _CallHelpCenterToy_g__OpenPopupLogOutMessage|61_6()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__CALLHELPCENTERTOY_G__OPENPOPUPLOGOUTMESSAGE|61_6_OFFSET))(nullptr);
		}

		::System::Void OpenWebViewToy(::System::String* str, ::System::String* str2, ::NPA::NXPInset* arg, ::System::Action* arg2, ::System::Action* arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::NPA::NXPInset*, ::System::Action*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_OPENWEBVIEWTOY_OFFSET))(str, str2, arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void RequestAppTrackingPermission(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_REQUESTAPPTRACKINGPERMISSION_OFFSET))(arg, nullptr);
		}

		::System::Void UnlockAchievementImmediate(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_UNLOCKACHIEVEMENTIMMEDIATE_OFFSET))(str, nullptr);
		}

		::System::Void InitializeToy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_INITIALIZETOY_OFFSET))(nullptr);
		}

		::System::Void EventTrackingToy(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_EVENTTRACKINGTOY_OFFSET))(str, nullptr);
		}

		::System::Void SetOutOfAppPurchaseObserverToy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_SETOUTOFAPPPURCHASEOBSERVERTOY_OFFSET))(arg, nullptr);
		}

		::System::Void CallHelpCenter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_CALLHELPCENTER_OFFSET))(nullptr);
		}

		::System::Void _CallHelpCenterToy_b__61_3(::NPA::NXPToyResult* arg)
		{
			((::System::Void(*)(::NPA::NXPToyResult*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__CALLHELPCENTERTOY_B__61_3_OFFSET))(arg, nullptr);
		}

		::System::Void _UnregisterServiceToy_b__60_0(::NPA::NXPToyResult* arg)
		{
			((::System::Void(*)(::NPA::NXPToyResult*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__UNREGISTERSERVICETOY_B__60_0_OFFSET))(arg, nullptr);
		}

		::System::Void _CallHelpCenterToy_b__61_8()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__CALLHELPCENTERTOY_B__61_8_OFFSET))(nullptr);
		}

		::System::Void CancelAllLocalPushToy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_CANCELALLLOCALPUSHTOY_OFFSET))(nullptr);
		}

		::System::Void GetAdvertisingIdToy(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_GETADVERTISINGIDTOY_OFFSET))(arg, nullptr);
		}

		::System::Void SendFunnelToy(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_SENDFUNNELTOY_OFFSET))(str, str2, nullptr);
		}

		::System::Boolean LocalPushLocalToy(LocalNotification* arg)
		{
			return ((::System::Boolean(*)(LocalNotification*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_LOCALPUSHLOCALTOY_OFFSET))(arg, nullptr);
		}

		::System::Void GetUserInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_GETUSERINFO_OFFSET))(nullptr);
		}

		::System::Void _DisconnectGamePlatformToy_b__83_0(::NPA::NXPToyResult* arg)
		{
			((::System::Void(*)(::NPA::NXPToyResult*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__DISCONNECTGAMEPLATFORMTOY_B__83_0_OFFSET))(arg, nullptr);
		}

		::System::Void _CallHelpCenterToy_b__61_7()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__CALLHELPCENTERTOY_B__61_7_OFFSET))(nullptr);
		}

		::System::Void CloseWebView()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_CLOSEWEBVIEW_OFFSET))(nullptr);
		}

		::System::Void ChangeAccount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_CHANGEACCOUNT_OFFSET))(nullptr);
		}

		::System::Void SetWebViewMarginsToy(::NPA::NXPInset* arg)
		{
			((::System::Void(*)(::NPA::NXPInset*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_SETWEBVIEWMARGINSTOY_OFFSET))(arg, nullptr);
		}

		::System::Void SetStepsAchievementImmediate(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_SETSTEPSACHIEVEMENTIMMEDIATE_OFFSET))(str, arg, nullptr);
		}

		::System::Void CheckPurchasableItemToy(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_CHECKPURCHASABLEITEMTOY_OFFSET))(str, arg, nullptr);
		}

		::System::Void _LoginToy_b__47_0(::NPA::Auth::NXPToyLoginResult* arg)
		{
			((::System::Void(*)(::NPA::Auth::NXPToyLoginResult*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__LOGINTOY_B__47_0_OFFSET))(arg, nullptr);
		}

		::System::Void SteamBlockTouch(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_STEAMBLOCKTOUCH_OFFSET))(arg, nullptr);
		}

		::System::Void GetIdentifierForVendorToy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_GETIDENTIFIERFORVENDORTOY_OFFSET))(nullptr);
		}

		::System::Void _LoadAchievementDataToy_b__84_0(::NPA::Social::NXPToyAchievementsResult* arg)
		{
			((::System::Void(*)(::NPA::Social::NXPToyAchievementsResult*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__LOADACHIEVEMENTDATATOY_B__84_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean Init()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_INIT_OFFSET))(nullptr);
		}

		::System::Boolean IsEnableGamePlatformToy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_ISENABLEGAMEPLATFORMTOY_OFFSET))(nullptr);
		}

		::System::Void CallHelpCenterToy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_CALLHELPCENTERTOY_OFFSET))(nullptr);
		}

		::System::Void _CallHelpCenterToy_b__61_5(::NPA::Auth::NXPToyAccountSettingsResult* arg)
		{
			((::System::Void(*)(::NPA::Auth::NXPToyAccountSettingsResult*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__CALLHELPCENTERTOY_B__61_5_OFFSET))(arg, nullptr);
		}

		::System::Void RestoreBillingItemToy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_RESTOREBILLINGITEMTOY_OFFSET))(arg, nullptr);
		}

		::System::Void EventTrackingPurchaseToy(::System::String* str, ::System::Double arg, ::System::String* str2, ::System::String* str3)
		{
			((::System::Void(*)(::System::String*, ::System::Double, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_EVENTTRACKINGPURCHASETOY_OFFSET))(str, arg, str2, str3, nullptr);
		}

		::System::Void _GetIdentifierForVendorToy_b__77_0(::NPA::Auth::NXPToyIDFVResult* arg)
		{
			((::System::Void(*)(::NPA::Auth::NXPToyIDFVResult*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__GETIDENTIFIERFORVENDORTOY_B__77_0_OFFSET))(arg, nullptr);
		}

		::System::Void EventTrackingPurchase(::System::String* str, ::System::Double arg, ::System::String* str2, ::System::String* str3)
		{
			((::System::Void(*)(::System::String*, ::System::Double, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_EVENTTRACKINGPURCHASE_OFFSET))(str, arg, str2, str3, nullptr);
		}

		::System::Void _DelinkAccount_b__79_0(::NPA::NXPToyResult* arg)
		{
			((::System::Void(*)(::NPA::NXPToyResult*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__DELINKACCOUNT_B__79_0_OFFSET))(arg, nullptr);
		}

		::System::Void _LoadLocatedCountryToy_b__59_0(::NPA::Auth::NXPToyCountryResult* arg)
		{
			((::System::Void(*)(::NPA::Auth::NXPToyCountryResult*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__LOADLOCATEDCOUNTRYTOY_B__59_0_OFFSET))(arg, nullptr);
		}

		::System::Void _ShowQRCodeToy_b__89_0(::NPA::NXPToyResult* arg)
		{
			((::System::Void(*)(::NPA::NXPToyResult*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__SHOWQRCODETOY_B__89_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean LogOutToy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_LOGOUTTOY_OFFSET))(nullptr);
		}

		::System::Void _LogOutToy_b__50_0(::NPA::NXPToyResult* arg)
		{
			((::System::Void(*)(::NPA::NXPToyResult*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__LOGOUTTOY_B__50_0_OFFSET))(arg, nullptr);
		}

		::System::Void _GetUserInfoToy_b__49_0(::NPA::Auth::NXPToyUserInfoResult* arg)
		{
			((::System::Void(*)(::NPA::Auth::NXPToyUserInfoResult*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__GETUSERINFOTOY_B__49_0_OFFSET))(arg, nullptr);
		}

		::System::Void OpenWebView(::System::String* str, ::System::String* str2, ::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::System::Action* arg5, ::System::Action* arg6, ::System::Action* arg7)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Action*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_OPENWEBVIEW_OFFSET))(str, str2, arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void RequestBillingItemToy(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_REQUESTBILLINGITEMTOY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void IncrementAchievementImmediateToy(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_INCREMENTACHIEVEMENTIMMEDIATETOY_OFFSET))(str, arg, nullptr);
		}

		::System::Void EventTracking(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_EVENTTRACKING_OFFSET))(str, nullptr);
		}

		::System::Void UnregisterNexonMembership()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_UNREGISTERNEXONMEMBERSHIP_OFFSET))(nullptr);
		}

		::System::Void RequestPermissions(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_REQUESTPERMISSIONS_OFFSET))(arg, nullptr);
		}

		::System::Void _ShowAccountMenuToy_b__48_0(::NPA::Auth::NXPToyAccountSettingsResult* arg)
		{
			((::System::Void(*)(::NPA::Auth::NXPToyAccountSettingsResult*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__SHOWACCOUNTMENUTOY_B__48_0_OFFSET))(arg, nullptr);
		}

		::System::Void LoadAchievementData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_LOADACHIEVEMENTDATA_OFFSET))(nullptr);
		}

		::System::Void ConnectGamePlatofrmToy(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_CONNECTGAMEPLATOFRMTOY_OFFSET))(arg, nullptr);
		}

		::System::Void LoadLocatedCountry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_LOADLOCATEDCOUNTRY_OFFSET))(nullptr);
		}

		::System::Void PushInitToy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_PUSHINITTOY_OFFSET))(nullptr);
		}

		::System::Void CancelAllLocalPush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_CANCELALLLOCALPUSH_OFFSET))(nullptr);
		}

		::System::Boolean InitializeData(::System::Action* arg)
		{
			return ((::System::Boolean(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_INITIALIZEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void CancelLocalPushToy(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_CANCELLOCALPUSHTOY_OFFSET))(arg, nullptr);
		}

		::System::Void BillingPaymentToy(::System::Int64 arg, ::System::String* str, ::System::Int64 arg2, ::System::String* str2, ::System::Boolean arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::System::Int64, ::System::String*, ::System::Int64, ::System::String*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_BILLINGPAYMENTTOY_OFFSET))(arg, str, arg2, str2, arg3, arg4, nullptr);
		}

		::System::Void ShowAchievement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_SHOWACHIEVEMENT_OFFSET))(nullptr);
		}

		::System::Void CallPromotionToy(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_CALLPROMOTIONTOY_OFFSET))(str, arg, nullptr);
		}

		::System::Void ShowAccountMenuToy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_SHOWACCOUNTMENUTOY_OFFSET))(nullptr);
		}

		::System::Void _CallHelpCenterToy_b__61_10()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__CALLHELPCENTERTOY_B__61_10_OFFSET))(nullptr);
		}

		::System::Void GetIdentifierForVendor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_GETIDENTIFIERFORVENDOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RequestStoreReview()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_REQUESTSTOREREVIEW_OFFSET))(nullptr);
		}

		::System::Void ConnectGamePlatofrm(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_CONNECTGAMEPLATOFRM_OFFSET))(arg, nullptr);
		}

		::System::Void CancelLocalPush(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_CANCELLOCALPUSH_OFFSET))(arg, nullptr);
		}

		::System::Void SendFunnel(::System::String* str, Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_SENDFUNNEL_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void _InitializeToy_b__46_0(::NPA::NXPToyResult* arg)
		{
			((::System::Void(*)(::NPA::NXPToyResult*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__INITIALIZETOY_B__46_0_OFFSET))(arg, nullptr);
		}

		::System::Void _CallHelpCenterToy_b__61_0(::NPA::Promotion::NXPToyCloseResult* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyCloseResult*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__CALLHELPCENTERTOY_B__61_0_OFFSET))(arg, nullptr);
		}

		::System::Void _CallHelpCenterToy_b__61_4(::NPA::Service::NXPToyPlateActionPerformedResult* arg)
		{
			((::System::Void(*)(::NPA::Service::NXPToyPlateActionPerformedResult*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__CALLHELPCENTERTOY_B__61_4_OFFSET))(arg, nullptr);
		}

		::System::Void CallCommunity(::System::Action* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_CALLCOMMUNITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LoadLocatedCountryToy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_LOADLOCATEDCOUNTRYTOY_OFFSET))(nullptr);
		}

		::System::Void SetWebViewMargins(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_SETWEBVIEWMARGINS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void _CallHelpCenterToy_b__61_2(::NPA::NXPToyResult* arg)
		{
			((::System::Void(*)(::NPA::NXPToyResult*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__CALLHELPCENTERTOY_B__61_2_OFFSET))(arg, nullptr);
		}

		::System::Void OpenEventBuilder(::System::String* str, ::System::String* str2, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_OPENEVENTBUILDER_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Boolean LocalPush(LocalNotification* arg)
		{
			return ((::System::Boolean(*)(LocalNotification*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_LOCALPUSH_OFFSET))(arg, nullptr);
		}

		::System::Void _CallHelpCenterToy_b__61_9(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__CALLHELPCENTERTOY_B__61_9_OFFSET))(arg, nullptr);
		}

		::System::Void GetUserInfoToy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_GETUSERINFOTOY_OFFSET))(nullptr);
		}

		::System::Void UnregisterService()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_UNREGISTERSERVICE_OFFSET))(nullptr);
		}

		::System::Void SetStepsAchievementImmediateToy(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_SETSTEPSACHIEVEMENTIMMEDIATETOY_OFFSET))(str, arg, nullptr);
		}

		::System::Void ShowQRCode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_SHOWQRCODE_OFFSET))(nullptr);
		}

		::System::Void UnregisterNexonMembershipToy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_UNREGISTERNEXONMEMBERSHIPTOY_OFFSET))(nullptr);
		}

		::System::Void RestoreBillingProduct(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_RESTOREBILLINGPRODUCT_OFFSET))(arg, nullptr);
		}

		::System::Void _UnregisterServiceToy_b__60_1(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__UNREGISTERSERVICETOY_B__60_1_OFFSET))(arg, nullptr);
		}

		::System::Void LogOut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_LOGOUT_OFFSET))(nullptr);
		}

		::System::Void GetAdvertisingId(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_GETADVERTISINGID_OFFSET))(arg, nullptr);
		}

		::System::Void CloseWebViewToy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_CLOSEWEBVIEWTOY_OFFSET))(nullptr);
		}

		::System::Void ShowPromotion(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_SHOWPROMOTION_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Login()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_LOGIN_OFFSET))(nullptr);
		}

		::System::Void BillingProduct(::System::Int64 arg, ::System::Boolean arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_BILLINGPRODUCT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void CallPromotion(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_CALLPROMOTION_OFFSET))(str, arg, nullptr);
		}

		::System::Void IncrementAchievementImmediate(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_INCREMENTACHIEVEMENTIMMEDIATE_OFFSET))(str, arg, nullptr);
		}

		::System::Void OpenEventBuilderToy(::System::String* str, ::System::String* str2, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_OPENEVENTBUILDERTOY_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Void SetDeviceLocaleCode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_SETDEVICELOCALECODE_OFFSET))(nullptr);
		}

		::System::Void _UnregisterServiceToy_b__60_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__UNREGISTERSERVICETOY_B__60_2_OFFSET))(nullptr);
		}

		::System::Void CallCommunityToy(::System::Action* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_CALLCOMMUNITYTOY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UnlockAchievementImmediateToy(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_UNLOCKACHIEVEMENTIMMEDIATETOY_OFFSET))(str, nullptr);
		}

		::System::Void RequestBillingPurchaseList(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_REQUESTBILLINGPURCHASELIST_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterServiceToy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_UNREGISTERSERVICETOY_OFFSET))(nullptr);
		}

		::System::Void DisconnectGamePlatform()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_DISCONNECTGAMEPLATFORM_OFFSET))(nullptr);
		}

		::System::Boolean IsEnableGamePlatform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_ISENABLEGAMEPLATFORM_OFFSET))(nullptr);
		}

		::System::Void Pause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_PAUSE_OFFSET))(arg, nullptr);
		}

		::System::Void _UnregisterNexonMembershipToy_b__63_0(::NPA::NXPToyResult* arg)
		{
			((::System::Void(*)(::NPA::NXPToyResult*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON__UNREGISTERNEXONMEMBERSHIPTOY_B__63_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetSDKLanguage(::FlatData::Language* arg)
		{
			((::System::Void(*)(::FlatData::Language*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_SETSDKLANGUAGE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowQRCodeToy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_SHOWQRCODETOY_OFFSET))(nullptr);
		}

		::System::Void RequestAppTrackingPermissionToy(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_REQUESTAPPTRACKINGPERMISSIONTOY_OFFSET))(arg, nullptr);
		}

		::System::Void DisconnectGamePlatformToy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_DISCONNECTGAMEPLATFORMTOY_OFFSET))(nullptr);
		}

		::System::Void LoadAchievementDataToy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICENEXON_LOADACHIEVEMENTDATATOY_OFFSET))(nullptr);
		}

	};

