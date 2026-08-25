#pragma once
#include "../unitysdk.h"

namespace NPA { class NPAccountNative; }
namespace UnityEngine { class GameObject; }
namespace NPA { class NPAccount; }
namespace NPA { class INPRecvNotificationListener; }
namespace NPA { class INPGCMListener; }
namespace NPA { class INPListener; }
namespace NPA { class NPLoginType; }
namespace NPA { class NPSnsType; }
namespace NPA { class INPBannerListener; }
namespace NPA { class INPOnCloseListener; }
namespace NPA { class NXPInset; }
namespace NPA { class INPEndingBannerListener; }
namespace NPA { class NPCSInfo; }
namespace NPA { class NPCountry; }
namespace NPA { class NPLocale; }
namespace NPA { class NPNotificationData; }
namespace NPA { class INPPlateListener; }
namespace NPA { class NXPPaymentInfo; }
namespace NPA { class NPOptions; }
namespace NPA { class NXPPushPolicies; }
namespace NPA::SimpleJSON { class JSONClass; }
namespace NPA { class INPRuntimePermissionListener; }
namespace NPA { class NXPRequestPermissionInfo; }
namespace NPA::Store { class NPBillingProductStorePromotionVisibility; }

#define NPA_NPACCOUNT_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9BCD780)
#define NPA_NPACCOUNT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCD7D0)
#define NPA_NPACCOUNT_ISAUTHCRASHERROR_OFFSET UNITYSDK_OFFSET(0x9BCDA90)
#define NPA_NPACCOUNT_PUSHINIT_OFFSET UNITYSDK_OFFSET(0x9BCDAC0)
#define NPA_NPACCOUNT_PUSHINIT_OFFSET UNITYSDK_OFFSET(0x9BCDAE0)
#define NPA_NPACCOUNT_REGISTERPUSH_OFFSET UNITYSDK_OFFSET(0x9BCDC70)
#define NPA_NPACCOUNT_UNREGISTERPUSH_OFFSET UNITYSDK_OFFSET(0x9BCDD50)
#define NPA_NPACCOUNT_LOGIN_OFFSET UNITYSDK_OFFSET(0x9BCDE30)
#define NPA_NPACCOUNT_LOGIN_OFFSET UNITYSDK_OFFSET(0x9BCDF10)
#define NPA_NPACCOUNT_LOGINFORKAKAO_OFFSET UNITYSDK_OFFSET(0x9BCE000)
#define NPA_NPACCOUNT_UNREGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x9BCE100)
#define NPA_NPACCOUNT_CANDELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x9BCE1E0)
#define NPA_NPACCOUNT_RECOVERUSER_OFFSET UNITYSDK_OFFSET(0x9BCE210)
#define NPA_NPACCOUNT_LOGOUT_OFFSET UNITYSDK_OFFSET(0x9BCE2F0)
#define NPA_NPACCOUNT_GETUSERINFO_OFFSET UNITYSDK_OFFSET(0x9BCE3D0)
#define NPA_NPACCOUNT_ISSNSTYPE_OFFSET UNITYSDK_OFFSET(0x9BCE4B0)
#define NPA_NPACCOUNT_GETFRIENDS_OFFSET UNITYSDK_OFFSET(0x9BCE4C0)
#define NPA_NPACCOUNT_GETFRIENDS_OFFSET UNITYSDK_OFFSET(0x9BCE730)
#define NPA_NPACCOUNT_SHARE_OFFSET UNITYSDK_OFFSET(0x9BCE840)
#define NPA_NPACCOUNT_SHOWBANNER_OFFSET UNITYSDK_OFFSET(0x9BCE870)
#define NPA_NPACCOUNT_GETBANNERS_OFFSET UNITYSDK_OFFSET(0x9BCEA00)
#define NPA_NPACCOUNT_NXLOGIN_OFFSET UNITYSDK_OFFSET(0x9BCEB00)
#define NPA_NPACCOUNT_DISMISSENDINGBANNER_OFFSET UNITYSDK_OFFSET(0x9BCEC00)
#define NPA_NPACCOUNT_GETNEXONSN_OFFSET UNITYSDK_OFFSET(0x9BCEC10)
#define NPA_NPACCOUNT_GETNEXONSN_OFFSET UNITYSDK_OFFSET(0x9BCECF0)
#define NPA_NPACCOUNT_GETNEXONSNBYNAVERCHANNEL_OFFSET UNITYSDK_OFFSET(0x9BCEDE0)
#define NPA_NPACCOUNT_GETLOGINTYPE_OFFSET UNITYSDK_OFFSET(0x9BCE700)
#define NPA_NPACCOUNT_SHOWNOTICE_OFFSET UNITYSDK_OFFSET(0x9BCEEC0)
#define NPA_NPACCOUNT_SHOWNOTICE_OFFSET UNITYSDK_OFFSET(0x9BCEEF0)
#define NPA_NPACCOUNT_SHOWBATCHNOTICE_OFFSET UNITYSDK_OFFSET(0x9BCEFD0)
#define NPA_NPACCOUNT_SHOWFAQ_OFFSET UNITYSDK_OFFSET(0x9BCF0B0)
#define NPA_NPACCOUNT_SHOWITEMPROBABILITY_OFFSET UNITYSDK_OFFSET(0x9BCF0E0)
#define NPA_NPACCOUNT_SHOWWEB_OFFSET UNITYSDK_OFFSET(0x9BCF110)
#define NPA_NPACCOUNT_SHOWWEB_OFFSET UNITYSDK_OFFSET(0x9BCF140)
#define NPA_NPACCOUNT_SHOWEVENTWEB_OFFSET UNITYSDK_OFFSET(0x9BCF170)
#define NPA_NPACCOUNT_SHOWCUSTOMWEB_OFFSET UNITYSDK_OFFSET(0x9BCF1A0)
#define NPA_NPACCOUNT_GOCUSTOMWEBURL_OFFSET UNITYSDK_OFFSET(0x9BCF1D0)
#define NPA_NPACCOUNT_CLOSECUSTOMWEB_OFFSET UNITYSDK_OFFSET(0x9BCF200)
#define NPA_NPACCOUNT_SHOWENDINGBANNER_OFFSET UNITYSDK_OFFSET(0x9BCF230)
#define NPA_NPACCOUNT_SHOWINPUTCOUPON_OFFSET UNITYSDK_OFFSET(0x9BCF3F0)
#define NPA_NPACCOUNT_SHOWHELPCENTER_OFFSET UNITYSDK_OFFSET(0x9BCF400)
#define NPA_NPACCOUNT_SETCOUNTRY_OFFSET UNITYSDK_OFFSET(0x9BCF430)
#define NPA_NPACCOUNT_GETCOUNTRY_OFFSET UNITYSDK_OFFSET(0x9BCF460)
#define NPA_NPACCOUNT_GETCOUNTRYLETTERCODE_OFFSET UNITYSDK_OFFSET(0x9BCF490)
#define NPA_NPACCOUNT_SETLOCALE_OFFSET UNITYSDK_OFFSET(0x9BCF4C0)
#define NPA_NPACCOUNT_GETLOCALE_OFFSET UNITYSDK_OFFSET(0x9BCF4F0)
#define NPA_NPACCOUNT_GETLOCALELETTERCODE_OFFSET UNITYSDK_OFFSET(0x9BCF520)
#define NPA_NPACCOUNT_DISPATCHLOCALPUSH_OFFSET UNITYSDK_OFFSET(0x9BCF550)
#define NPA_NPACCOUNT_CANCELLOCALPUSH_OFFSET UNITYSDK_OFFSET(0x9BCF580)
#define NPA_NPACCOUNT_CANCELALLLOCALPUSH_OFFSET UNITYSDK_OFFSET(0x9BCF5B0)
#define NPA_NPACCOUNT_SHOWACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0x9BCF5E0)
#define NPA_NPACCOUNT_SETSTEPSACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0x9BCF6C0)
#define NPA_NPACCOUNT_SETSTEPSACHIEVEMENTIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x9BCF6F0)
#define NPA_NPACCOUNT_UNLOCKACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0x9BCF7F0)
#define NPA_NPACCOUNT_UNLOCKACHIEVEMENTIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x9BCF820)
#define NPA_NPACCOUNT_INCREMENTACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0x9BCF910)
#define NPA_NPACCOUNT_INCREMENTACHIEVEMENTIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x9BCF940)
#define NPA_NPACCOUNT_LOADACHIEVEMENTDATA_OFFSET UNITYSDK_OFFSET(0x9BCFA40)
#define NPA_NPACCOUNT_SHOWALLLEADERBOARD_OFFSET UNITYSDK_OFFSET(0x9BCFB30)
#define NPA_NPACCOUNT_SHOWLEADERBOARD_OFFSET UNITYSDK_OFFSET(0x9BCFC10)
#define NPA_NPACCOUNT_SUBMITSCORE_OFFSET UNITYSDK_OFFSET(0x9BCFD00)
#define NPA_NPACCOUNT_SUBMITSCOREIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x9BCFD30)
#define NPA_NPACCOUNT_LOADCURRENTPLAYERLEADERBOARDSCORE_OFFSET UNITYSDK_OFFSET(0x9BCFE30)
#define NPA_NPACCOUNT_CONNECTGAMEPLATFORM_OFFSET UNITYSDK_OFFSET(0x9BCFF40)
#define NPA_NPACCOUNT_DISCONNECTGAMEPLATFORM_OFFSET UNITYSDK_OFFSET(0x9BD0020)
#define NPA_NPACCOUNT_LOGOUTGAMEPLATFORM_OFFSET UNITYSDK_OFFSET(0x9BD0100)
#define NPA_NPACCOUNT_ISENABLEGAMEPLATFORM_OFFSET UNITYSDK_OFFSET(0x9BD01E0)
#define NPA_NPACCOUNT_GETPLAYERSTATS_OFFSET UNITYSDK_OFFSET(0x9BD0210)
#define NPA_NPACCOUNT_SHOWPLATE_OFFSET UNITYSDK_OFFSET(0x9BD0300)
#define NPA_NPACCOUNT_SHOWPLATE_OFFSET UNITYSDK_OFFSET(0x9BD0330)
#define NPA_NPACCOUNT_SHOWPLATE_OFFSET UNITYSDK_OFFSET(0x9BD0350)
#define NPA_NPACCOUNT_SNSCONNECT_OFFSET UNITYSDK_OFFSET(0x9BD0440)
#define NPA_NPACCOUNT_SNSDISCONNECT_OFFSET UNITYSDK_OFFSET(0x9BD0530)
#define NPA_NPACCOUNT_GETSNSCONNECTIONSTATUS_OFFSET UNITYSDK_OFFSET(0x9BD0620)
#define NPA_NPACCOUNT_GETSNSUSERINFO_OFFSET UNITYSDK_OFFSET(0x9BD0700)
#define NPA_NPACCOUNT_GETSNSTOKENLIST_OFFSET UNITYSDK_OFFSET(0x9BD07F0)
#define NPA_NPACCOUNT_GETCOUNTRYFROMSERVER_OFFSET UNITYSDK_OFFSET(0x9BD08D0)
#define NPA_NPACCOUNT_LOADLOCATEDCOUNTRY_OFFSET UNITYSDK_OFFSET(0x9BD09B0)
#define NPA_NPACCOUNT_GETUUID_OFFSET UNITYSDK_OFFSET(0x9BD0A90)
#define NPA_NPACCOUNT_SHOWDATABACKUP_OFFSET UNITYSDK_OFFSET(0x9BD0AC0)
#define NPA_NPACCOUNT_SHOWDATABACKUP_OFFSET UNITYSDK_OFFSET(0x9BD0B10)
#define NPA_NPACCOUNT_SHOWDATARESTORE_OFFSET UNITYSDK_OFFSET(0x9BD0C00)
#define NPA_NPACCOUNT_SHOWDATARESTORE_OFFSET UNITYSDK_OFFSET(0x9BD0C50)
#define NPA_NPACCOUNT_SETDISABLELOGINTYPES_OFFSET UNITYSDK_OFFSET(0x9BD0D40)
#define NPA_NPACCOUNT_RESOLVEALREADYLOGINEDUSER_OFFSET UNITYSDK_OFFSET(0x9BD0D70)
#define NPA_NPACCOUNT_ENTERTOY_OFFSET UNITYSDK_OFFSET(0x9BD0E50)
#define NPA_NPACCOUNT_SHOWSETTLEMENTFUND_OFFSET UNITYSDK_OFFSET(0x9BD0F30)
#define NPA_NPACCOUNT_SHOWSETTLEMENTFUND_OFFSET UNITYSDK_OFFSET(0x9BD0F90)
#define NPA_NPACCOUNT_GETSERVICEINFO_OFFSET UNITYSDK_OFFSET(0x9BD10A0)
#define NPA_NPACCOUNT_GETADVERTISINGID_OFFSET UNITYSDK_OFFSET(0x9BD1180)
#define NPA_NPACCOUNT_BILLINGREQUESTPRODUCTS_OFFSET UNITYSDK_OFFSET(0x9BD1260)
#define NPA_NPACCOUNT_BILLINGPAYMENT_OFFSET UNITYSDK_OFFSET(0x9BD1350)
#define NPA_NPACCOUNT_BILLINGPAYMENT_OFFSET UNITYSDK_OFFSET(0x9BD1510)
#define NPA_NPACCOUNT_BILLINGPAYMENT_OFFSET UNITYSDK_OFFSET(0x9BD1430)
#define NPA_NPACCOUNT_BILLINGRESTORE_OFFSET UNITYSDK_OFFSET(0x9BD1620)
#define NPA_NPACCOUNT_BILLINGRESTORE_OFFSET UNITYSDK_OFFSET(0x9BD1630)
#define NPA_NPACCOUNT_DEQUEUEPROMOTEDPRODUCTID_OFFSET UNITYSDK_OFFSET(0x9BD1720)
#define NPA_NPACCOUNT_SENDFUNNEL_OFFSET UNITYSDK_OFFSET(0x9BD1750)
#define NPA_NPACCOUNT_SENDFUNNEL_OFFSET UNITYSDK_OFFSET(0x9BD1780)
#define NPA_NPACCOUNT_SENDNXLOG_OFFSET UNITYSDK_OFFSET(0x9BD17B0)
#define NPA_NPACCOUNT_SETNEXONANALYTICSUSERINFO_OFFSET UNITYSDK_OFFSET(0x9BD17E0)
#define NPA_NPACCOUNT_SENDSTAGELOG_OFFSET UNITYSDK_OFFSET(0x9BD1810)
#define NPA_NPACCOUNT_SENDERRORLOG_OFFSET UNITYSDK_OFFSET(0x9BD1840)
#define NPA_NPACCOUNT_SENDLOG_OFFSET UNITYSDK_OFFSET(0x9BD1870)
#define NPA_NPACCOUNT_SENDONLYONCELOG_OFFSET UNITYSDK_OFFSET(0x9BD18A0)
#define NPA_NPACCOUNT_SETNEXONANALYTICSDEVLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x9BD18D0)
#define NPA_NPACCOUNT_SENDDEVLOG_OFFSET UNITYSDK_OFFSET(0x9BD1900)
#define NPA_NPACCOUNT_SENDSYSTEMINFOLOG_OFFSET UNITYSDK_OFFSET(0x9BD1930)
#define NPA_NPACCOUNT_SENDASSIGNINFOUSER_OFFSET UNITYSDK_OFFSET(0x9BD1960)
#define NPA_NPACCOUNT_GETCOMMONFIELD_OFFSET UNITYSDK_OFFSET(0x9BD1990)
#define NPA_NPACCOUNT_SETOPTIONS_OFFSET UNITYSDK_OFFSET(0x9BD19E0)
#define NPA_NPACCOUNT_GETOPTIONS_OFFSET UNITYSDK_OFFSET(0x9BD1A10)
#define NPA_NPACCOUNT_GETPUSHPOLICY_OFFSET UNITYSDK_OFFSET(0x9BD1A40)
#define NPA_NPACCOUNT_SETPUSHPOLICY_OFFSET UNITYSDK_OFFSET(0x9BD1B20)
#define NPA_NPACCOUNT_SHOWPUSHMENU_OFFSET UNITYSDK_OFFSET(0x9BD1C10)
#define NPA_NPACCOUNT_GETSMSENABLED_OFFSET UNITYSDK_OFFSET(0x9BD1CF0)
#define NPA_NPACCOUNT_DICTOJSON_OFFSET UNITYSDK_OFFSET(0x9BD1DD0)
#define NPA_NPACCOUNT_FBLOGPURCHASE_OFFSET UNITYSDK_OFFSET(0x9BD1FF0)
#define NPA_NPACCOUNT_FBLOGEVENT_OFFSET UNITYSDK_OFFSET(0x9BD2020)
#define NPA_NPACCOUNT_FBLOGEVENT_OFFSET UNITYSDK_OFFSET(0x9BD2050)
#define NPA_NPACCOUNT_FBLOGEVENT_OFFSET UNITYSDK_OFFSET(0x9BD2080)
#define NPA_NPACCOUNT_FBLOGEVENT_OFFSET UNITYSDK_OFFSET(0x9BD20B0)
#define NPA_NPACCOUNT_FBACTIVATEAPP_OFFSET UNITYSDK_OFFSET(0x9BD20E0)
#define NPA_NPACCOUNT_FBFETCHDEFERREDAPPLINK_OFFSET UNITYSDK_OFFSET(0x9BD2110)
#define NPA_NPACCOUNT_FBSHARE_OFFSET UNITYSDK_OFFSET(0x9BD21F0)
#define NPA_NPACCOUNT_FBGETFRIENDS_OFFSET UNITYSDK_OFFSET(0x9BD2310)
#define NPA_NPACCOUNT_FBSETISDEBUGENABLED_OFFSET UNITYSDK_OFFSET(0x9BD2400)
#define NPA_NPACCOUNT_RESETBADGECOUNT_OFFSET UNITYSDK_OFFSET(0x9BD2430)
#define NPA_NPACCOUNT_REQUESTPERMISSIONS_OFFSET UNITYSDK_OFFSET(0x9BD2460)
#define NPA_NPACCOUNT_REQUESTPERMISSIONS_OFFSET UNITYSDK_OFFSET(0x9BD2540)
#define NPA_NPACCOUNT_GETPROMOTION_OFFSET UNITYSDK_OFFSET(0x9BD2640)
#define NPA_NPACCOUNT_GETPROMOTION_OFFSET UNITYSDK_OFFSET(0x9BD2660)
#define NPA_NPACCOUNT_SHOWPROMOTION_OFFSET UNITYSDK_OFFSET(0x9BD2760)
#define NPA_NPACCOUNT_SHOWPROMOTION_OFFSET UNITYSDK_OFFSET(0x9BD2780)
#define NPA_NPACCOUNT_SHOWACCOUNTMENU_OFFSET UNITYSDK_OFFSET(0x9BD2880)
#define NPA_NPACCOUNT_SHOWTODAY_OFFSET UNITYSDK_OFFSET(0x9BD2960)
#define NPA_NPACCOUNT_SHOWTODAY_OFFSET UNITYSDK_OFFSET(0x9BD2980)
#define NPA_NPACCOUNT_FBADDPERMISSION_OFFSET UNITYSDK_OFFSET(0x9BD2B80)
#define NPA_NPACCOUNT_FETCHSTOREPROMOTIONORDER_OFFSET UNITYSDK_OFFSET(0x9BD2C80)
#define NPA_NPACCOUNT_UPDATESTOREPROMOTIONORDERFORPRODUCTIDS_OFFSET UNITYSDK_OFFSET(0x9BD2D60)
#define NPA_NPACCOUNT_FETCHSTOREPROMOTIONVISIBILITYFORPRODUCTID_OFFSET UNITYSDK_OFFSET(0x9BD2E50)
#define NPA_NPACCOUNT_UPDATESTOREPROMOTIONVISIBILITY_OFFSET UNITYSDK_OFFSET(0x9BD2F40)
#define NPA_NPACCOUNT_TOYDEBUGLOG_OFFSET UNITYSDK_OFFSET(0x9BC8D40)
#define NPA_NPACCOUNT_GETPUBLICIP_OFFSET UNITYSDK_OFFSET(0x9BD3030)
#define NPA_NPACCOUNT_GETTOYSAMPLESERVERURL_OFFSET UNITYSDK_OFFSET(0x9BD3110)
#define NPA_NPACCOUNT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9BD3140)

namespace NPA
{
	inline static constexpr unsigned int NPAccount_TypeDefinitionIndex = 25745;

	class NPAccount : public Il2CppObject
	{
	public:
		::System::String* FRIEND_FILTER_TYPE_FRIENDS; // 0x0
		::System::String* FRIEND_FILTER_TYPE_INVITES; // 0x8
		::System::String* FRIEND_FILTER_TYPE_ALL; // 0x10
		::System::Int32 LOCAL_PUSH_TYPE_ON; // 0x18
		::System::Int32 LOCAL_PUSH_TYPE_AFTER; // 0x1C
		::System::Int32 LOCAL_PUSH_TYPE_NOW; // 0x20
		::NPA::NPAccountNative* account; // 0x10
		::System::String* GAMEOBJECT_NAME; // 0x18
		::UnityEngine::GameObject* mGameObject; // 0x20
		::System::Boolean isDebug; // 0x24

		::NPA::NPAccount* get_Instance()
		{
			return (return (::NPA::NPAccount*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean isAuthCrashError(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_ISAUTHCRASHERROR_OFFSET))(arg, nullptr);
		}

		::System::Void pushInit(::NPA::INPRecvNotificationListener* arg, ::System::String* str)
		{
			((::System::Void(*)(::NPA::INPRecvNotificationListener*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_PUSHINIT_OFFSET))(arg, str, nullptr);
		}

		::System::Void pushInit(::NPA::INPRecvNotificationListener* arg, ::NPA::INPGCMListener* arg, ::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::NPA::INPRecvNotificationListener*, ::NPA::INPGCMListener*, ::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_PUSHINIT_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::System::Void RegisterPush(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_REGISTERPUSH_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterPush(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_UNREGISTERPUSH_OFFSET))(arg, nullptr);
		}

		::System::Void Login(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_LOGIN_OFFSET))(arg, nullptr);
		}

		::System::Void Login(::NPA::NPLoginType* arg, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::NPLoginType*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_LOGIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LoginForKakao(::System::String* str, ::System::String* str, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_LOGINFORKAKAO_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void UnregisterService(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_UNREGISTERSERVICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanDeleteAccount()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_CANDELETEACCOUNT_OFFSET))(nullptr);
		}

		::System::Void RecoverUser(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_RECOVERUSER_OFFSET))(arg, nullptr);
		}

		::System::Void Logout(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_LOGOUT_OFFSET))(arg, nullptr);
		}

		::System::Void GetUserInfo(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETUSERINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean isSnsType(::NPA::NPLoginType* arg)
		{
			return (return (::System::Boolean(*)(::NPA::NPLoginType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_ISSNSTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void GetFriends(::System::Int32 arg, ::System::String* str, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETFRIENDS_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void GetFriends(::NPA::NPSnsType* arg, ::System::Int32 arg, ::System::String* str, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::NPSnsType*, ::System::Int32, ::System::String*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETFRIENDS_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void Share(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHARE_OFFSET))(str, str, str, nullptr);
		}

		::System::Void ShowBanner(::System::String* str, ::NPA::INPBannerListener* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::INPBannerListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWBANNER_OFFSET))(str, arg, nullptr);
		}

		::System::Void GetBanners(::System::String* str, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETBANNERS_OFFSET))(str, arg, nullptr);
		}

		::System::Void NXLogin(::System::String* str, ::System::String* str, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_NXLOGIN_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void DismissEndingBanner()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_DISMISSENDINGBANNER_OFFSET))(nullptr);
		}

		::System::Void GetNexonSN(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETNEXONSN_OFFSET))(arg, nullptr);
		}

		::System::Void GetNexonSN(::System::Boolean arg, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::Boolean, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETNEXONSN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetNexonSNByNaverChannel(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETNEXONSNBYNAVERCHANNEL_OFFSET))(arg, nullptr);
		}

		::NPA::NPLoginType* GetLoginType()
		{
			return (return (::NPA::NPLoginType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETLOGINTYPE_OFFSET))(nullptr);
		}

		::System::Void ShowNotice()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWNOTICE_OFFSET))(nullptr);
		}

		::System::Void ShowNotice(::NPA::INPOnCloseListener* arg)
		{
			((::System::Void(*)(::NPA::INPOnCloseListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWNOTICE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowBatchNotice(::NPA::INPOnCloseListener* arg)
		{
			((::System::Void(*)(::NPA::INPOnCloseListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWBATCHNOTICE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowFAQ()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWFAQ_OFFSET))(nullptr);
		}

		::System::Void ShowItemProbability()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWITEMPROBABILITY_OFFSET))(nullptr);
		}

		::System::Void ShowWeb(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWWEB_OFFSET))(str, str, nullptr);
		}

		::System::Void ShowWeb(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWWEB_OFFSET))(str, str, str, nullptr);
		}

		::System::Void ShowEventWeb(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWEVENTWEB_OFFSET))(str, nullptr);
		}

		::System::Void ShowCustomWeb(::NPA::NXPInset* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPInset*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWCUSTOMWEB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GoCustomWebUrl(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GOCUSTOMWEBURL_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void CloseCustomWeb(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_CLOSECUSTOMWEB_OFFSET))(arg, nullptr);
		}

		::System::Void ShowEndingBanner(::NPA::INPEndingBannerListener* arg)
		{
			((::System::Void(*)(::NPA::INPEndingBannerListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWENDINGBANNER_OFFSET))(arg, nullptr);
		}

		::System::Void ShowInputCoupon(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWINPUTCOUPON_OFFSET))(arg, nullptr);
		}

		::System::Void ShowHelpCenter(::NPA::NPCSInfo* arg)
		{
			((::System::Void(*)(::NPA::NPCSInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWHELPCENTER_OFFSET))(arg, nullptr);
		}

		::System::Void setCountry(::NPA::NPCountry* arg)
		{
			((::System::Void(*)(::NPA::NPCountry*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SETCOUNTRY_OFFSET))(arg, nullptr);
		}

		::NPA::NPCountry* getCountry()
		{
			return (return (::NPA::NPCountry*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETCOUNTRY_OFFSET))(nullptr);
		}

		::System::String* GetCountryLetterCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETCOUNTRYLETTERCODE_OFFSET))(nullptr);
		}

		::System::Void setLocale(::NPA::NPLocale* arg)
		{
			((::System::Void(*)(::NPA::NPLocale*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SETLOCALE_OFFSET))(arg, nullptr);
		}

		::NPA::NPLocale* getLocale()
		{
			return (return (::NPA::NPLocale*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETLOCALE_OFFSET))(nullptr);
		}

		::System::String* getLocaleLetterCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETLOCALELETTERCODE_OFFSET))(nullptr);
		}

		::System::Void dispatchLocalPush(::NPA::NPNotificationData* arg)
		{
			((::System::Void(*)(::NPA::NPNotificationData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_DISPATCHLOCALPUSH_OFFSET))(arg, nullptr);
		}

		::System::Void cancelLocalPush(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_CANCELLOCALPUSH_OFFSET))(arg, nullptr);
		}

		::System::Void cancelAllLocalPush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_CANCELALLLOCALPUSH_OFFSET))(nullptr);
		}

		::System::Void showAchievement(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWACHIEVEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void setStepsAchievement(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SETSTEPSACHIEVEMENT_OFFSET))(str, arg, nullptr);
		}

		::System::Void setStepsAchievementImmediate(::System::String* str, ::System::Int32 arg, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SETSTEPSACHIEVEMENTIMMEDIATE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void unlockAchievement(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_UNLOCKACHIEVEMENT_OFFSET))(str, nullptr);
		}

		::System::Void unlockAchievementImmediate(::System::String* str, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_UNLOCKACHIEVEMENTIMMEDIATE_OFFSET))(str, arg, nullptr);
		}

		::System::Void incrementAchievement(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_INCREMENTACHIEVEMENT_OFFSET))(str, arg, nullptr);
		}

		::System::Void incrementAchievementImmediate(::System::String* str, ::System::Int32 arg, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_INCREMENTACHIEVEMENTIMMEDIATE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void loadAchievementData(::System::Boolean arg, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::Boolean, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_LOADACHIEVEMENTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void showAllLeaderBoard(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWALLLEADERBOARD_OFFSET))(arg, nullptr);
		}

		::System::Void showLeaderBoard(::System::String* str, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWLEADERBOARD_OFFSET))(str, arg, nullptr);
		}

		::System::Void submitScore(::System::String* str, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SUBMITSCORE_OFFSET))(str, arg, nullptr);
		}

		::System::Void submitScoreImmediate(::System::String* str, ::System::Int64 arg, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SUBMITSCOREIMMEDIATE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void loadCurrentPlayerLeaderboardScore(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_LOADCURRENTPLAYERLEADERBOARDSCORE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void ConnectGamePlatform(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_CONNECTGAMEPLATFORM_OFFSET))(arg, nullptr);
		}

		::System::Void DisconnectGamePlatform(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_DISCONNECTGAMEPLATFORM_OFFSET))(arg, nullptr);
		}

		::System::Void LogoutGamePlatform(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_LOGOUTGAMEPLATFORM_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEnableGamePlatform()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_ISENABLEGAMEPLATFORM_OFFSET))(nullptr);
		}

		::System::Void GetPlayerStats(::System::Boolean arg, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::Boolean, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETPLAYERSTATS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowPlate(::NPA::NPCSInfo* arg)
		{
			((::System::Void(*)(::NPA::NPCSInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWPLATE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowPlate(::System::Int32 arg, ::NPA::NPCSInfo* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::NPCSInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWPLATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowPlate(::System::Int32 arg, ::NPA::NPCSInfo* arg, ::NPA::INPPlateListener* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::NPCSInfo*, ::NPA::INPPlateListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWPLATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void snsConnect(::NPA::NPSnsType* arg, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::NPSnsType*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SNSCONNECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void snsDisconnect(::NPA::NPSnsType* arg, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::NPSnsType*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SNSDISCONNECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void getSnsConnectionStatus(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETSNSCONNECTIONSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void getSnsUserInfo(::NPA::NPSnsType* arg, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::NPSnsType*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETSNSUSERINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void getSnsTokenList(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETSNSTOKENLIST_OFFSET))(arg, nullptr);
		}

		::System::Void GetCountryFromServer(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETCOUNTRYFROMSERVER_OFFSET))(arg, nullptr);
		}

		::System::Void LoadLocatedCountry(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_LOADLOCATEDCOUNTRY_OFFSET))(arg, nullptr);
		}

		::System::String* getUUID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETUUID_OFFSET))(nullptr);
		}

		::System::Void ShowDataBackup(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWDATABACKUP_OFFSET))(arg, nullptr);
		}

		::System::Void ShowDataBackup(::System::String* str, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWDATABACKUP_OFFSET))(str, arg, nullptr);
		}

		::System::Void ShowDataRestore(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWDATARESTORE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowDataRestore(::System::String* str, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWDATARESTORE_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetDisableLoginTypes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SETDISABLELOGINTYPES_OFFSET))(arg, nullptr);
		}

		::System::Void ResolveAlreadyLoginedUser(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_RESOLVEALREADYLOGINEDUSER_OFFSET))(arg, nullptr);
		}

		::System::Void EnterToy(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_ENTERTOY_OFFSET))(arg, nullptr);
		}

		::System::Void ShowSettlementFund(::System::String* str, ::System::String* str, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWSETTLEMENTFUND_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void ShowSettlementFund(::System::String* str, ::System::String* str, ::System::String* str, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWSETTLEMENTFUND_OFFSET))(str, str, str, arg, nullptr);
		}

		::System::Void GetServiceInfo(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETSERVICEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void GetAdvertisingId(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETADVERTISINGID_OFFSET))(arg, nullptr);
		}

		::System::Void BillingRequestProducts(Il2CppObject* arg, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_BILLINGREQUESTPRODUCTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BillingPayment(::System::String* str, Il2CppObject* arg, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_BILLINGPAYMENT_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void BillingPayment(::System::String* str, Il2CppObject* arg, Il2CppObject* arg, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_BILLINGPAYMENT_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void BillingPayment(::NPA::NXPPaymentInfo* arg, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::NXPPaymentInfo*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_BILLINGPAYMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BillingRestore(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_BILLINGRESTORE_OFFSET))(arg, nullptr);
		}

		::System::Void BillingRestore(::System::Boolean arg, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::Boolean, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_BILLINGRESTORE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* DequeuePromotedProductId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_DEQUEUEPROMOTEDPRODUCTID_OFFSET))(nullptr);
		}

		::System::Boolean SendFunnel(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SENDFUNNEL_OFFSET))(str, nullptr);
		}

		::System::Boolean SendFunnel(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SENDFUNNEL_OFFSET))(str, str, nullptr);
		}

		::System::Boolean SendNXLog(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SENDNXLOG_OFFSET))(str, str, nullptr);
		}

		::System::Void SetNexonAnalyticsUserInfo(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SETNEXONANALYTICSUSERINFO_OFFSET))(str, str, nullptr);
		}

		::System::Boolean SendStageLog(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SENDSTAGELOG_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean SendErrorLog(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SENDERRORLOG_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean SendLog(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SENDLOG_OFFSET))(str, str, nullptr);
		}

		::System::Boolean SendOnlyOnceLog(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SENDONLYONCELOG_OFFSET))(str, str, nullptr);
		}

		::System::Boolean SetNexonAnalyticsDevLogLevel(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SETNEXONANALYTICSDEVLOGLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean SendDevLog(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SENDDEVLOG_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean SendSystemInfoLog(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SENDSYSTEMINFOLOG_OFFSET))(str, nullptr);
		}

		::System::Boolean SendAssignInfoUser(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SENDASSIGNINFOUSER_OFFSET))(str, str, nullptr);
		}

		::System::String* GetCommonField(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETCOMMONFIELD_OFFSET))(str, nullptr);
		}

		::System::Void SetOptions(::NPA::NPOptions* arg)
		{
			((::System::Void(*)(::NPA::NPOptions*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SETOPTIONS_OFFSET))(arg, nullptr);
		}

		::NPA::NPOptions* GetOptions()
		{
			return (return (::NPA::NPOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETOPTIONS_OFFSET))(nullptr);
		}

		::System::Void GetPushPolicy(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETPUSHPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Void SetPushPolicy(::NPA::NXPPushPolicies* arg, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::NXPPushPolicies*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SETPUSHPOLICY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowPushMenu(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWPUSHMENU_OFFSET))(arg, nullptr);
		}

		::System::Void GetSmsEnabled(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETSMSENABLED_OFFSET))(arg, nullptr);
		}

		::NPA::SimpleJSON::JSONClass* dicToJSON(Il2CppObject* arg)
		{
			return (return (::NPA::SimpleJSON::JSONClass*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_DICTOJSON_OFFSET))(arg, nullptr);
		}

		::System::Void FBLogPurchase(::System::Double arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Double, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_FBLOGPURCHASE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void FBLogEvent(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_FBLOGEVENT_OFFSET))(str, nullptr);
		}

		::System::Void FBLogEvent(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_FBLOGEVENT_OFFSET))(str, arg, nullptr);
		}

		::System::Void FBLogEvent(::System::String* str, ::System::Double arg)
		{
			((::System::Void(*)(::System::String*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_FBLOGEVENT_OFFSET))(str, arg, nullptr);
		}

		::System::Void FBLogEvent(::System::String* str, ::System::Double arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Double, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_FBLOGEVENT_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void FBActivateApp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_FBACTIVATEAPP_OFFSET))(nullptr);
		}

		::System::Void FBFetchDeferredAppLink(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_FBFETCHDEFERREDAPPLINK_OFFSET))(arg, nullptr);
		}

		::System::Void FBShare(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_FBSHARE_OFFSET))(str, str, str, str, arg, nullptr);
		}

		::System::Void FBGetFriends(::System::Int32 arg, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_FBGETFRIENDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FBSetIsDebugEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_FBSETISDEBUGENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void ResetBadgeCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_RESETBADGECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void RequestPermissions(Il2CppObject* arg, ::System::Int32 arg, ::System::String* str, ::NPA::INPRuntimePermissionListener* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::String*, ::NPA::INPRuntimePermissionListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_REQUESTPERMISSIONS_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void RequestPermissions(::NPA::NXPRequestPermissionInfo* arg, ::System::Int32 arg, ::NPA::INPRuntimePermissionListener* arg)
		{
			((::System::Void(*)(::NPA::NXPRequestPermissionInfo*, ::System::Int32, ::NPA::INPRuntimePermissionListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_REQUESTPERMISSIONS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetPromotion(::System::String* str, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETPROMOTION_OFFSET))(str, arg, nullptr);
		}

		::System::Void GetPromotion(::System::String* str, ::System::Boolean arg, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETPROMOTION_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void ShowPromotion(::System::String* str, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWPROMOTION_OFFSET))(str, arg, nullptr);
		}

		::System::Void ShowPromotion(::System::String* str, ::System::Boolean arg, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWPROMOTION_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void ShowAccountMenu(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWACCOUNTMENU_OFFSET))(arg, nullptr);
		}

		::System::Void ShowToday(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWTODAY_OFFSET))(arg, nullptr);
		}

		::System::Void ShowToday(::System::Int32 arg, ::System::Boolean arg, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_SHOWTODAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void FbAddPermission(::System::Collections::ArrayList* arg, ::System::Int32 arg, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::Collections::ArrayList*, ::System::Int32, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_FBADDPERMISSION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void FetchStorePromotionOrder(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_FETCHSTOREPROMOTIONORDER_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateStorePromotionOrderForProductIds(Il2CppObject* arg, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_UPDATESTOREPROMOTIONORDERFORPRODUCTIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FetchStorePromotionVisibilityForProductId(::System::String* str, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_FETCHSTOREPROMOTIONVISIBILITYFORPRODUCTID_OFFSET))(str, arg, nullptr);
		}

		::System::Void UpdateStorePromotionVisibility(::NPA::Store::NPBillingProductStorePromotionVisibility* arg, ::System::String* str, ::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::Store::NPBillingProductStorePromotionVisibility*, ::System::String*, ::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_UPDATESTOREPROMOTIONVISIBILITY_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void ToyDebugLog(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_TOYDEBUGLOG_OFFSET))(str, nullptr);
		}

		::System::Void GetPublicIP(::NPA::INPListener* arg)
		{
			((::System::Void(*)(::NPA::INPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETPUBLICIP_OFFSET))(arg, nullptr);
		}

		::System::String* GetToySampleServerUrl()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_GETTOYSAMPLESERVERURL_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

