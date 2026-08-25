#pragma once
#include "unitysdk.h"

class PlatformServiceState;
namespace NPA { class NPLoginType; }
class RetLocatedCountry;
class RetSearchPurchaseProduct;
namespace FlatData { class Language; }
class RetLogin;
class UIPopup_System;
namespace NPA::Social { class NXPToyAchievement; }
class RetPurchase;
class RetGetIdentifierForVender;
class RetLogout;
class LocalNotification;
class RetRestorePurchase;

#define PLATFORMSERVICE_SET_CACHEDLOCATEDCOUNTRY_OFFSET UNITYSDK_OFFSET(0xC702C0)
#define PLATFORMSERVICE_INVOKELOADLOCATEDCOUNTRYTOYRESPONDED_OFFSET UNITYSDK_OFFSET(0xC68760)
#define PLATFORMSERVICE_UNREGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_RESTOREBILLINGPRODUCT_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_SET_CACHEDUID_OFFSET UNITYSDK_OFFSET(0xC702E0)
#define PLATFORMSERVICE_SET_STATE_OFFSET UNITYSDK_OFFSET(0xC702F0)
#define PLATFORMSERVICE_CALLPROMOTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_ADD_LOGOUTRESPONDED_OFFSET UNITYSDK_OFFSET(0xC70300)
#define PLATFORMSERVICE_REQUESTSTOREREVIEW_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_CODELAYACTION_OFFSET UNITYSDK_OFFSET(0xC703A0)
#define PLATFORMSERVICE_INVOKEREQUESTBILLINGITEMTOYRESPONDED_OFFSET UNITYSDK_OFFSET(0xC6D710)
#define PLATFORMSERVICE_ISENABLEGAMEPLATFORM_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_SETSDKLANGUAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_REMOVE_SEARCHPURCHASEPRODUCTRESPONDED_OFFSET UNITYSDK_OFFSET(0xC504D0)
#define PLATFORMSERVICE_GET_CACHEDTOKEN_OFFSET UNITYSDK_OFFSET(0xC70700)
#define PLATFORMSERVICE_INVOKECHANGEACCOUNTTOYRESPONDED_OFFSET UNITYSDK_OFFSET(0xC69DA0)
#define PLATFORMSERVICE_REMOVE_PURCHASERESPONDED_OFFSET UNITYSDK_OFFSET(0xC50570)
#define PLATFORMSERVICE__INVOKECHANGEACCOUNTTOYRESPONDED_B__141_3_OFFSET UNITYSDK_OFFSET(0xC707F0)
#define PLATFORMSERVICE_SET_LASTRESULTCODE_OFFSET UNITYSDK_OFFSET(0xC70880)
#define PLATFORMSERVICE_GET_HASCACHEDLOGIN_OFFSET UNITYSDK_OFFSET(0xC70890)
#define PLATFORMSERVICE_LOADACHIEVEMENTDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_ISCLEARGAMECENTERACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0xC5D100)
#define PLATFORMSERVICE_UNLOCKACHIEVEMENTIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_GET_CACHEDLOCATEDCOUNTRY_OFFSET UNITYSDK_OFFSET(0xC708A0)
#define PLATFORMSERVICE_REMOVE_LOGOUTRESPONDED_OFFSET UNITYSDK_OFFSET(0xC708B0)
#define PLATFORMSERVICE_INVOKELOGINTOYRESPONDED_OFFSET UNITYSDK_OFFSET(0xC67900)
#define PLATFORMSERVICE_OPENWEBVIEW_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_SHOWACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_EVENTTRACKINGPURCHASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_INVOKELOADACHIEVEMENTRESPONDED_OFFSET UNITYSDK_OFFSET(0xC67A60)
#define PLATFORMSERVICE_CANCELLOCALPUSH_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_SET_CACHEDLOCATEDCOUNTRYCODE_OFFSET UNITYSDK_OFFSET(0xC709C0)
#define PLATFORMSERVICE_GET_ONPURCHASEINFORMATION_OFFSET UNITYSDK_OFFSET(0xC709D0)
#define PLATFORMSERVICE_SYNCGAMECENTERACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0xC6F8C0)
#define PLATFORMSERVICE_GET_CACHEDLOGINMETHOD_OFFSET UNITYSDK_OFFSET(0xC709E0)
#define PLATFORMSERVICE_SET_HASCACHEDLOGIN_OFFSET UNITYSDK_OFFSET(0xC709F0)
#define PLATFORMSERVICE_REQUESTBILLINGPURCHASELIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_ISGAMECENTERPLATFORM_OFFSET UNITYSDK_OFFSET(0xC65040)
#define PLATFORMSERVICE_REMOVE_LOCATEDCOUNTRYRESPONDED_OFFSET UNITYSDK_OFFSET(0xC70A00)
#define PLATFORMSERVICE_CALLCOMMUNITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE__INVOKECHANGEACCOUNTTOYRESPONDED_B__141_2_OFFSET UNITYSDK_OFFSET(0xC70AA0)
#define PLATFORMSERVICE_DISCONNECTGAMEPLATFORM_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_GETADVERTISINGID_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_EVENTTRACKING_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_SETSTEPSACHIEVEMENTIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_LOGOUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_UNREGISTERNEXONMEMBERSHIP_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_GET_STATE_OFFSET UNITYSDK_OFFSET(0xC70B70)
#define PLATFORMSERVICE_GETGAMECENTERACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0xC70B80)
#define PLATFORMSERVICE_SET_CACHEDIDFV_OFFSET UNITYSDK_OFFSET(0xC70C60)
#define PLATFORMSERVICE_GET_CACHEDBIRTH_OFFSET UNITYSDK_OFFSET(0xC70C80)
#define PLATFORMSERVICE_INVOKEGETNGSXTOYREPONDED_OFFSET UNITYSDK_OFFSET(0xC70C90)
#define PLATFORMSERVICE_REVERTACHIEVEMENTREQUESTED_OFFSET UNITYSDK_OFFSET(0xC6F9B0)
#define PLATFORMSERVICE_GET_CACHEDADVERTISEMENTID_OFFSET UNITYSDK_OFFSET(0xC70DF0)
#define PLATFORMSERVICE_INCREMENTACHIEVEMENTIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_CLOSEWEBVIEW_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_INVOKEBILLINGPAYMENTTOYRESPONDED_OFFSET UNITYSDK_OFFSET(0xC6E280)
#define PLATFORMSERVICE_CLEARACHIEVEMENTREQUESTHISTORY_OFFSET UNITYSDK_OFFSET(0xC70950)
#define PLATFORMSERVICE_GET_CACHEDIDFV_OFFSET UNITYSDK_OFFSET(0xC70E00)
#define PLATFORMSERVICE_INVOKEDISCONNECTGAMERESPONDED_OFFSET UNITYSDK_OFFSET(0xC671E0)
#define PLATFORMSERVICE_GETIDENTIFIERFORVENDOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_LOADLOCATEDCOUNTRY_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_CANCELALLLOCALPUSH_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_INVOKEGETIDENTIFIERFORVENDORTOYRESPONDED_OFFSET UNITYSDK_OFFSET(0xC68510)
#define PLATFORMSERVICE_SHOWQRCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_GET_LASTRESULTCODE_OFFSET UNITYSDK_OFFSET(0xC70E10)
#define PLATFORMSERVICE_SET_CACHEDADVERTISEMENTID_OFFSET UNITYSDK_OFFSET(0xC70E20)
#define PLATFORMSERVICE_SET_CACHEDNPSN_OFFSET UNITYSDK_OFFSET(0xC70E40)
#define PLATFORMSERVICE_CALLHELPCENTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_ADD_LOGINRESPONDED_OFFSET UNITYSDK_OFFSET(0xC70E50)
#define PLATFORMSERVICE_REMOVE_RESTOREPURCHASERESPONDED_OFFSET UNITYSDK_OFFSET(0xC571C0)
#define PLATFORMSERVICE_DELINKACCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_SET_CACHEDBIRTH_OFFSET UNITYSDK_OFFSET(0xC70EF0)
#define PLATFORMSERVICE_SET_CACHEDDEVICELOCALECODE_OFFSET UNITYSDK_OFFSET(0xC70F00)
#define PLATFORMSERVICE_REQUESTAPPTRACKINGPERMISSION_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_SYNCGAMECENTERINCREMENTACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0xC6FA80)
#define PLATFORMSERVICE_GET_CACHEDUID_OFFSET UNITYSDK_OFFSET(0xC70F20)
#define PLATFORMSERVICE_ADD_LOCATEDCOUNTRYRESPONDED_OFFSET UNITYSDK_OFFSET(0xC70F30)
#define PLATFORMSERVICE_SHOWONCEPOPUP_OFFSET UNITYSDK_OFFSET(0xC70420)
#define PLATFORMSERVICE__INVOKECHANGEACCOUNTTOYRESPONDED_G__OPENPOPUPLOGOUTMESSAGE|141_1_OFFSET UNITYSDK_OFFSET(0xC70710)
#define PLATFORMSERVICE_GET_HASACCOUNTLINK_OFFSET UNITYSDK_OFFSET(0xC70FD0)
#define PLATFORMSERVICE_ADD_SEARCHPURCHASEPRODUCTRESPONDED_OFFSET UNITYSDK_OFFSET(0xC4FF80)
#define PLATFORMSERVICE_CHANGEACCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_INVOKELOGOUTTOYRESPONDED_OFFSET UNITYSDK_OFFSET(0xC689C0)
#define PLATFORMSERVICE_REMOVE_LOGINRESPONDED_OFFSET UNITYSDK_OFFSET(0xC70FF0)
#define PLATFORMSERVICE_GET_CACHEDNPSN_OFFSET UNITYSDK_OFFSET(0xC71090)
#define PLATFORMSERVICE_INVOKEGETUSERINFOTOYRESPONDED_OFFSET UNITYSDK_OFFSET(0xC693C0)
#define PLATFORMSERVICE_GET_CACHEDLOCATEDCOUNTRYCODE_OFFSET UNITYSDK_OFFSET(0xC712B0)
#define PLATFORMSERVICE_BILLINGPRODUCT_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_SET_CACHEDTOKEN_OFFSET UNITYSDK_OFFSET(0xC712C0)
#define PLATFORMSERVICE_SET_ONPURCHASEINFORMATION_OFFSET UNITYSDK_OFFSET(0xC712D0)
#define PLATFORMSERVICE_SENDFIREBASELOG_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_GET_CACHEDUSEREMAIL_OFFSET UNITYSDK_OFFSET(0xC712E0)
#define PLATFORMSERVICE__INVOKECHANGEACCOUNTTOYRESPONDED_B__141_0_OFFSET UNITYSDK_OFFSET(0xC712F0)
#define PLATFORMSERVICE_SETWEBVIEWMARGINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_GETUSERINFO_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_LOCALPUSH_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_INVOKERESTOREBILLINGITEMTOYRESPONDED_OFFSET UNITYSDK_OFFSET(0xC6E8E0)
#define PLATFORMSERVICE_INITIALIZEDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_SETERRORPOPUP_OFFSET UNITYSDK_OFFSET(0xC67E00)
#define PLATFORMSERVICE_GET_CACHEDCOUNTRY_OFFSET UNITYSDK_OFFSET(0xC71380)
#define PLATFORMSERVICE_GET_CACHEDDEVICELOCALECODE_OFFSET UNITYSDK_OFFSET(0xC71390)
#define PLATFORMSERVICE_SYNCGAMECENTERUNLOCKACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0xC6FBD0)
#define PLATFORMSERVICE_TRYMARKUNLOCKACHIEVEMENTREQUESTED_OFFSET UNITYSDK_OFFSET(0xC6C750)
#define PLATFORMSERVICE_ADD_RESTOREPURCHASERESPONDED_OFFSET UNITYSDK_OFFSET(0xC56C90)
#define PLATFORMSERVICE_LOGIN_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xC6ACB0)
#define PLATFORMSERVICE_SET_CACHEDCOUNTRY_OFFSET UNITYSDK_OFFSET(0xC713A0)
#define PLATFORMSERVICE_ADD_PURCHASERESPONDED_OFFSET UNITYSDK_OFFSET(0xC50020)
#define PLATFORMSERVICE_SETDEVICELOCALECODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_SET_CACHEDUSEREMAIL_OFFSET UNITYSDK_OFFSET(0xC713B0)
#define PLATFORMSERVICE_OPENEVENTBUILDER_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_SET_CACHEDLOGINMETHOD_OFFSET UNITYSDK_OFFSET(0xC713C0)
#define PLATFORMSERVICE_TRYMARKSTEPSACHIEVEMENTREQUESTED_OFFSET UNITYSDK_OFFSET(0xC6BD20)
#define PLATFORMSERVICE_CALLMAINTENANCEBANNER_OFFSET UNITYSDK_OFFSET(0xC710A0)
#define PLATFORMSERVICE_REQUESTPERMISSIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_SENDFUNNEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define PLATFORMSERVICE_INVOKEINITIALIZETOYRESPONDED_OFFSET UNITYSDK_OFFSET(0xC6B390)
#define PLATFORMSERVICE_CONNECTGAMEPLATOFRM_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int PlatformService_TypeDefinitionIndex = 9004;

	class PlatformService : public Il2CppObject
	{
	public:
		Il2CppObject* LoginResponded; // 0x10
		Il2CppObject* LogoutResponded; // 0x18
		Il2CppObject* SearchPurchaseProductResponded; // 0x20
		Il2CppObject* PurchaseResponded; // 0x28
		Il2CppObject* RestorePurchaseResponded; // 0x30
		Il2CppObject* LocatedCountryResponded; // 0x38
		PlatformServiceState* _State_k__BackingField; // 0x40
		::System::Int32 _LastResultCode_k__BackingField; // 0x44
		::System::Boolean _HasCachedLogin_k__BackingField; // 0x48
		::NPA::NPLoginType* _CachedLoginMethod_k__BackingField; // 0x4C
		::System::String* _CachedUid_k__BackingField; // 0x50
		::System::String* _CachedBirth_k__BackingField; // 0x58
		::System::String* _CachedCountry_k__BackingField; // 0x60
		::System::Int64 _CachedNPSN_k__BackingField; // 0x68
		::System::String* _CachedToken_k__BackingField; // 0x70
		::System::String* _CachedUserEmail_k__BackingField; // 0x78
		::System::Single reconnectTime; // 0x80
		::System::String* _CachedAdvertisementId_k__BackingField; // 0x88
		::System::String* _CachedIdfv_k__BackingField; // 0x90
		::System::String* _CachedLocatedCountry_k__BackingField; // 0x98
		::System::Int32 _CachedLocatedCountryCode_k__BackingField; // 0xA0
		::System::String* _CachedDeviceLocaleCode_k__BackingField; // 0xA8
		::System::Boolean _onPurchaseInformation_k__BackingField; // 0xB0
		Il2CppObject* GameCenterAchivementList; // 0xB8
		::System::Int32 CONST_ACHIEVEMENT_CLEAR_STATE; // 0x0
		Il2CppObject* requestedUnlockAchievements; // 0xC0
		Il2CppObject* requestedStepAchievements; // 0xC8
		::System::Boolean restoreBillingItemToy_NoMoreViewingToday; // 0xD0

		::System::Void set_CachedLocatedCountry(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SET_CACHEDLOCATEDCOUNTRY_OFFSET))(str, nullptr);
		}

		::System::Void InvokeLoadLocatedCountryToyResponded(RetLocatedCountry* arg)
		{
			((::System::Void(*)(RetLocatedCountry*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_INVOKELOADLOCATEDCOUNTRYTOYRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterService()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_UNREGISTERSERVICE_OFFSET))(nullptr);
		}

		::System::Void RestoreBillingProduct(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_RESTOREBILLINGPRODUCT_OFFSET))(arg, nullptr);
		}

		::System::Void set_CachedUid(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SET_CACHEDUID_OFFSET))(str, nullptr);
		}

		::System::Void set_State(PlatformServiceState* arg)
		{
			((::System::Void(*)(PlatformServiceState*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::Void CallPromotion(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_CALLPROMOTION_OFFSET))(str, arg, nullptr);
		}

		::System::Void add_LogoutResponded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_ADD_LOGOUTRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Void RequestStoreReview()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_REQUESTSTOREREVIEW_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoDelayAction(::System::Single arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_CODELAYACTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InvokeRequestBillingItemToyResponded(RetSearchPurchaseProduct* arg)
		{
			((::System::Void(*)(RetSearchPurchaseProduct*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_INVOKEREQUESTBILLINGITEMTOYRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEnableGamePlatform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_ISENABLEGAMEPLATFORM_OFFSET))(nullptr);
		}

		::System::Void SetSDKLanguage(::FlatData::Language* arg)
		{
			((::System::Void(*)(::FlatData::Language*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SETSDKLANGUAGE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_SearchPurchaseProductResponded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_REMOVE_SEARCHPURCHASEPRODUCTRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::String* get_CachedToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_GET_CACHEDTOKEN_OFFSET))(nullptr);
		}

		::System::Void InvokeChangeAccountToyResponded(RetLogin* arg)
		{
			((::System::Void(*)(RetLogin*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_INVOKECHANGEACCOUNTTOYRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_PurchaseResponded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_REMOVE_PURCHASERESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Void _InvokeChangeAccountToyResponded_b__141_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE__INVOKECHANGEACCOUNTTOYRESPONDED_B__141_3_OFFSET))(nullptr);
		}

		::System::Void set_LastResultCode(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SET_LASTRESULTCODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasCachedLogin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_GET_HASCACHEDLOGIN_OFFSET))(nullptr);
		}

		::System::Void LoadAchievementData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_LOADACHIEVEMENTDATA_OFFSET))(nullptr);
		}

		::System::Boolean IsClearGameCenterAchievement(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_ISCLEARGAMECENTERACHIEVEMENT_OFFSET))(str, nullptr);
		}

		::System::Void UnlockAchievementImmediate(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_UNLOCKACHIEVEMENTIMMEDIATE_OFFSET))(str, nullptr);
		}

		::System::Boolean Init()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_INIT_OFFSET))(nullptr);
		}

		::System::String* get_CachedLocatedCountry()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_GET_CACHEDLOCATEDCOUNTRY_OFFSET))(nullptr);
		}

		::System::Void remove_LogoutResponded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_REMOVE_LOGOUTRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeLoginToyResponded(RetLogin* arg)
		{
			((::System::Void(*)(RetLogin*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_INVOKELOGINTOYRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Void OpenWebView(::System::String* str, ::System::String* str2, ::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::System::Action* arg5, ::System::Action* arg6, ::System::Action* arg7)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Action*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_OPENWEBVIEW_OFFSET))(str, str2, arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void ShowAchievement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SHOWACHIEVEMENT_OFFSET))(nullptr);
		}

		::System::Void EventTrackingPurchase(::System::String* str, ::System::Double arg, ::System::String* str2, ::System::String* str3)
		{
			((::System::Void(*)(::System::String*, ::System::Double, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_EVENTTRACKINGPURCHASE_OFFSET))(str, arg, str2, str3, nullptr);
		}

		::System::Void InvokeLoadAchievementResponded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_INVOKELOADACHIEVEMENTRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Void CancelLocalPush(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_CANCELLOCALPUSH_OFFSET))(arg, nullptr);
		}

		::System::Void set_CachedLocatedCountryCode(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SET_CACHEDLOCATEDCOUNTRYCODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_onPurchaseInformation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_GET_ONPURCHASEINFORMATION_OFFSET))(nullptr);
		}

		::System::Void SyncGameCenterAchievement(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SYNCGAMECENTERACHIEVEMENT_OFFSET))(str, arg, nullptr);
		}

		::NPA::NPLoginType* get_CachedLoginMethod()
		{
			return ((::NPA::NPLoginType*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_GET_CACHEDLOGINMETHOD_OFFSET))(nullptr);
		}

		::System::Void set_HasCachedLogin(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SET_HASCACHEDLOGIN_OFFSET))(arg, nullptr);
		}

		::System::Void RequestBillingPurchaseList(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_REQUESTBILLINGPURCHASELIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsGameCenterPlatform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_ISGAMECENTERPLATFORM_OFFSET))(nullptr);
		}

		::System::Void remove_LocatedCountryResponded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_REMOVE_LOCATEDCOUNTRYRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Void CallCommunity(::System::Action* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_CALLCOMMUNITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _InvokeChangeAccountToyResponded_b__141_2(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE__INVOKECHANGEACCOUNTTOYRESPONDED_B__141_2_OFFSET))(arg, nullptr);
		}

		::System::Void DisconnectGamePlatform()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_DISCONNECTGAMEPLATFORM_OFFSET))(nullptr);
		}

		::System::Void GetAdvertisingId(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_GETADVERTISINGID_OFFSET))(arg, nullptr);
		}

		::System::Void EventTracking(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_EVENTTRACKING_OFFSET))(str, nullptr);
		}

		::System::Void SetStepsAchievementImmediate(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SETSTEPSACHIEVEMENTIMMEDIATE_OFFSET))(str, arg, nullptr);
		}

		::System::Void LogOut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_LOGOUT_OFFSET))(nullptr);
		}

		::System::Void UnregisterNexonMembership()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_UNREGISTERNEXONMEMBERSHIP_OFFSET))(nullptr);
		}

		PlatformServiceState* get_State()
		{
			return ((PlatformServiceState*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_GET_STATE_OFFSET))(nullptr);
		}

		::NPA::Social::NXPToyAchievement* GetGameCenterAchievement(::System::String* str)
		{
			return ((::NPA::Social::NXPToyAchievement*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_GETGAMECENTERACHIEVEMENT_OFFSET))(str, nullptr);
		}

		::System::Void set_CachedIdfv(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SET_CACHEDIDFV_OFFSET))(str, nullptr);
		}

		::System::String* get_CachedBirth()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_GET_CACHEDBIRTH_OFFSET))(nullptr);
		}

		::System::Void InvokeGetNgsxToyReponded(RetLogin* arg)
		{
			((::System::Void(*)(RetLogin*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_INVOKEGETNGSXTOYREPONDED_OFFSET))(arg, nullptr);
		}

		::System::Void RevertAchievementRequested(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_REVERTACHIEVEMENTREQUESTED_OFFSET))(str, nullptr);
		}

		::System::String* get_CachedAdvertisementId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_GET_CACHEDADVERTISEMENTID_OFFSET))(nullptr);
		}

		::System::Void IncrementAchievementImmediate(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_INCREMENTACHIEVEMENTIMMEDIATE_OFFSET))(str, arg, nullptr);
		}

		::System::Void CloseWebView()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_CLOSEWEBVIEW_OFFSET))(nullptr);
		}

		::System::Void InvokeBillingPaymentToyResponded(RetPurchase* arg)
		{
			((::System::Void(*)(RetPurchase*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_INVOKEBILLINGPAYMENTTOYRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Void ClearAchievementRequestHistory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_CLEARACHIEVEMENTREQUESTHISTORY_OFFSET))(nullptr);
		}

		::System::String* get_CachedIdfv()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_GET_CACHEDIDFV_OFFSET))(nullptr);
		}

		::System::Void InvokeDisconnectGameResponded()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_INVOKEDISCONNECTGAMERESPONDED_OFFSET))(nullptr);
		}

		::System::Void GetIdentifierForVendor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_GETIDENTIFIERFORVENDOR_OFFSET))(nullptr);
		}

		::System::Void LoadLocatedCountry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_LOADLOCATEDCOUNTRY_OFFSET))(nullptr);
		}

		::System::Void CancelAllLocalPush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_CANCELALLLOCALPUSH_OFFSET))(nullptr);
		}

		::System::Void InvokeGetIdentifierForVendorToyResponded(RetGetIdentifierForVender* arg)
		{
			((::System::Void(*)(RetGetIdentifierForVender*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_INVOKEGETIDENTIFIERFORVENDORTOYRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Void ShowQRCode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SHOWQRCODE_OFFSET))(nullptr);
		}

		::System::Int32 get_LastResultCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_GET_LASTRESULTCODE_OFFSET))(nullptr);
		}

		::System::Void set_CachedAdvertisementId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SET_CACHEDADVERTISEMENTID_OFFSET))(str, nullptr);
		}

		::System::Void set_CachedNPSN(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SET_CACHEDNPSN_OFFSET))(arg, nullptr);
		}

		::System::Void CallHelpCenter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_CALLHELPCENTER_OFFSET))(nullptr);
		}

		::System::Void add_LoginResponded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_ADD_LOGINRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_RestorePurchaseResponded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_REMOVE_RESTOREPURCHASERESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Void DelinkAccount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_DELINKACCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_CachedBirth(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SET_CACHEDBIRTH_OFFSET))(str, nullptr);
		}

		::System::Void set_CachedDeviceLocaleCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SET_CACHEDDEVICELOCALECODE_OFFSET))(str, nullptr);
		}

		::System::Void RequestAppTrackingPermission(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_REQUESTAPPTRACKINGPERMISSION_OFFSET))(arg, nullptr);
		}

		::System::Void SyncGameCenterIncrementAchievement(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SYNCGAMECENTERINCREMENTACHIEVEMENT_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_CachedUid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_GET_CACHEDUID_OFFSET))(nullptr);
		}

		::System::Void add_LocatedCountryResponded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_ADD_LOCATEDCOUNTRYRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Void ShowOncePopup(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SHOWONCEPOPUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _InvokeChangeAccountToyResponded_g__OpenPopupLogOutMessage|141_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE__INVOKECHANGEACCOUNTTOYRESPONDED_G__OPENPOPUPLOGOUTMESSAGE|141_1_OFFSET))(nullptr);
		}

		::System::Boolean get_HasAccountLink()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_GET_HASACCOUNTLINK_OFFSET))(nullptr);
		}

		::System::Void add_SearchPurchaseProductResponded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_ADD_SEARCHPURCHASEPRODUCTRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeAccount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_CHANGEACCOUNT_OFFSET))(nullptr);
		}

		::System::Void InvokeLogoutToyResponded(RetLogout* arg)
		{
			((::System::Void(*)(RetLogout*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_INVOKELOGOUTTOYRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_LoginResponded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_REMOVE_LOGINRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CachedNPSN()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_GET_CACHEDNPSN_OFFSET))(nullptr);
		}

		::System::Void InvokeGetUserInfoToyResponded(RetLogin* arg)
		{
			((::System::Void(*)(RetLogin*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_INVOKEGETUSERINFOTOYRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CachedLocatedCountryCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_GET_CACHEDLOCATEDCOUNTRYCODE_OFFSET))(nullptr);
		}

		::System::Void BillingProduct(::System::Int64 arg, ::System::Boolean arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_BILLINGPRODUCT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_CachedToken(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SET_CACHEDTOKEN_OFFSET))(str, nullptr);
		}

		::System::Void set_onPurchaseInformation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SET_ONPURCHASEINFORMATION_OFFSET))(arg, nullptr);
		}

		::System::Void SendFirebaseLog(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SENDFIREBASELOG_OFFSET))(str, nullptr);
		}

		::System::String* get_CachedUserEmail()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_GET_CACHEDUSEREMAIL_OFFSET))(nullptr);
		}

		::System::Void _InvokeChangeAccountToyResponded_b__141_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE__INVOKECHANGEACCOUNTTOYRESPONDED_B__141_0_OFFSET))(nullptr);
		}

		::System::Void SetWebViewMargins(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SETWEBVIEWMARGINS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void GetUserInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_GETUSERINFO_OFFSET))(nullptr);
		}

		::System::Boolean LocalPush(LocalNotification* arg)
		{
			return ((::System::Boolean(*)(LocalNotification*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_LOCALPUSH_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeRestoreBillingItemToyResponded(RetRestorePurchase* arg)
		{
			((::System::Void(*)(RetRestorePurchase*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_INVOKERESTOREBILLINGITEMTOYRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Boolean InitializeData(::System::Action* arg)
		{
			return ((::System::Boolean(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_INITIALIZEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetErrorPopup(::System::Int32 arg, ::System::String* str, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SETERRORPOPUP_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::String* get_CachedCountry()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_GET_CACHEDCOUNTRY_OFFSET))(nullptr);
		}

		::System::String* get_CachedDeviceLocaleCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_GET_CACHEDDEVICELOCALECODE_OFFSET))(nullptr);
		}

		::System::Void SyncGameCenterUnlockAchievement(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SYNCGAMECENTERUNLOCKACHIEVEMENT_OFFSET))(str, nullptr);
		}

		::System::Boolean TryMarkUnlockAchievementRequested(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_TRYMARKUNLOCKACHIEVEMENTREQUESTED_OFFSET))(str, nullptr);
		}

		::System::Void add_RestorePurchaseResponded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_ADD_RESTOREPURCHASERESPONDED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Login()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_LOGIN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CachedCountry(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SET_CACHEDCOUNTRY_OFFSET))(str, nullptr);
		}

		::System::Void add_PurchaseResponded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_ADD_PURCHASERESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Void SetDeviceLocaleCode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SETDEVICELOCALECODE_OFFSET))(nullptr);
		}

		::System::Void set_CachedUserEmail(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SET_CACHEDUSEREMAIL_OFFSET))(str, nullptr);
		}

		::System::Void OpenEventBuilder(::System::String* str, ::System::String* str2, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_OPENEVENTBUILDER_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Void set_CachedLoginMethod(::NPA::NPLoginType* arg)
		{
			((::System::Void(*)(::NPA::NPLoginType*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SET_CACHEDLOGINMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryMarkStepsAchievementRequested(::System::String* str, ::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_TRYMARKSTEPSACHIEVEMENTREQUESTED_OFFSET))(str, arg, nullptr);
		}

		::System::Void CallMaintenanceBanner()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_CALLMAINTENANCEBANNER_OFFSET))(nullptr);
		}

		::System::Void RequestPermissions(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_REQUESTPERMISSIONS_OFFSET))(arg, nullptr);
		}

		::System::Void SendFunnel(::System::String* str, Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_SENDFUNNEL_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void InvokeInitializeToyResponded(RetLogin* arg)
		{
			((::System::Void(*)(RetLogin*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_INVOKEINITIALIZETOYRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Void ConnectGamePlatofrm(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICE_CONNECTGAMEPLATOFRM_OFFSET))(arg, nullptr);
		}

	};

