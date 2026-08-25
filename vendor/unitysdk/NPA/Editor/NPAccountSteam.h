#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor::Auth { class NXPAccountLinkBase; }
namespace NPA::Editor::Store { class INXPBilling; }
namespace NPA::Editor { class IExternalPlatform; }
namespace NPA::Editor::Auth { class INXPAuthAccountLink; }
namespace NPA::Editor::Auth { class INXPAuth; }
namespace NPA::Editor::Auth { class INXPAuthEx; }
namespace NPA { class NXPPaymentInfo; }
namespace NPA { class NXPPaymentInfoV2; }
namespace NPA { class NXPRestoreInfo; }
namespace NPA { class NPLoginType; }
namespace NPA { class NPCSInfo; }
namespace NPA::Service { class NXPToyLaunchMode; }

#define NPA_EDITOR_NPACCOUNTSTEAM_GETEXTERNALPLATFORM_OFFSET UNITYSDK_OFFSET(0x9D66DB0)
#define NPA_EDITOR_NPACCOUNTSTEAM_GETACCOUNTLINK_OFFSET UNITYSDK_OFFSET(0x9D66DF0)
#define NPA_EDITOR_NPACCOUNTSTEAM_GETAUTH_OFFSET UNITYSDK_OFFSET(0x9D66E00)
#define NPA_EDITOR_NPACCOUNTSTEAM_GETAUTHEX_OFFSET UNITYSDK_OFFSET(0x9D66E10)
#define NPA_EDITOR_NPACCOUNTSTEAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D66E20)
#define NPA_EDITOR_NPACCOUNTSTEAM_INITHANDLER_OFFSET UNITYSDK_OFFSET(0x9D671E0)
#define NPA_EDITOR_NPACCOUNTSTEAM_SHOWWEBPAGE_OFFSET UNITYSDK_OFFSET(0x9D67280)
#define NPA_EDITOR_NPACCOUNTSTEAM_SETSERVICEKEYFOREDITOR_OFFSET UNITYSDK_OFFSET(0x9D67360)
#define NPA_EDITOR_NPACCOUNTSTEAM_GETMARKETTYPEFORINITIALIZATION_OFFSET UNITYSDK_OFFSET(0x9D674A0)
#define NPA_EDITOR_NPACCOUNTSTEAM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9D67570)
#define NPA_EDITOR_NPACCOUNTSTEAM_AUTHENTICATEOTP_OFFSET UNITYSDK_OFFSET(0x9D676C0)
#define NPA_EDITOR_NPACCOUNTSTEAM_BILLINGFINISH_OFFSET UNITYSDK_OFFSET(0x9D67700)
#define NPA_EDITOR_NPACCOUNTSTEAM_BILLINGFINISHFORSERVERLESS_OFFSET UNITYSDK_OFFSET(0x9D67740)
#define NPA_EDITOR_NPACCOUNTSTEAM_BILLINGPAYMENT_OFFSET UNITYSDK_OFFSET(0x9D67780)
#define NPA_EDITOR_NPACCOUNTSTEAM_BILLINGPAYMENTV2_OFFSET UNITYSDK_OFFSET(0x9D67830)
#define NPA_EDITOR_NPACCOUNTSTEAM_BILLINGREQUESTPRODUCTS_OFFSET UNITYSDK_OFFSET(0x9D678E0)
#define NPA_EDITOR_NPACCOUNTSTEAM_BILLINGRESTORE_OFFSET UNITYSDK_OFFSET(0x9D67990)
#define NPA_EDITOR_NPACCOUNTSTEAM_DLCREQUESTPRODUCTS_OFFSET UNITYSDK_OFFSET(0x9D67A40)
#define NPA_EDITOR_NPACCOUNTSTEAM_DLCPAYMENT_OFFSET UNITYSDK_OFFSET(0x9D67AF0)
#define NPA_EDITOR_NPACCOUNTSTEAM_DLCOWNERSHIP_OFFSET UNITYSDK_OFFSET(0x9D67BA0)
#define NPA_EDITOR_NPACCOUNTSTEAM_LOGIN_OFFSET UNITYSDK_OFFSET(0x9D67C50)
#define NPA_EDITOR_NPACCOUNTSTEAM_LOGIN_OFFSET UNITYSDK_OFFSET(0x9D67C70)
#define NPA_EDITOR_NPACCOUNTSTEAM_LOGOUT_OFFSET UNITYSDK_OFFSET(0x9D680C0)
#define NPA_EDITOR_NPACCOUNTSTEAM_SIGNOUT_OFFSET UNITYSDK_OFFSET(0x9D68190)
#define NPA_EDITOR_NPACCOUNTSTEAM_GETACCOUNTLINKINFO_OFFSET UNITYSDK_OFFSET(0x9D68260)
#define NPA_EDITOR_NPACCOUNTSTEAM_DELINKACCOUNT_OFFSET UNITYSDK_OFFSET(0x9D68330)
#define NPA_EDITOR_NPACCOUNTSTEAM_UNREGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x9D68400)
#define NPA_EDITOR_NPACCOUNTSTEAM_GETSTORETYPE_OFFSET UNITYSDK_OFFSET(0x9D684D0)
#define NPA_EDITOR_NPACCOUNTSTEAM_SHOWACCOUNTMENU_OFFSET UNITYSDK_OFFSET(0x9D68540)
#define NPA_EDITOR_NPACCOUNTSTEAM_SHOWACCOUNTSETTINGS_OFFSET UNITYSDK_OFFSET(0x9D686A0)
#define NPA_EDITOR_NPACCOUNTSTEAM_GETPLATFORMFRIENDS_OFFSET UNITYSDK_OFFSET(0x9D68770)
#define NPA_EDITOR_NPACCOUNTSTEAM_GETPLATFORMLASTLOGININFO_OFFSET UNITYSDK_OFFSET(0x9D68820)
#define NPA_EDITOR_NPACCOUNTSTEAM_GETPLATFORMBLOCKUSERINFOS_OFFSET UNITYSDK_OFFSET(0x9D688D0)
#define NPA_EDITOR_NPACCOUNTSTEAM_SHOWPLATE_OFFSET UNITYSDK_OFFSET(0x9D68910)
#define NPA_EDITOR_NPACCOUNTSTEAM_GETEXECUTIONINFO_OFFSET UNITYSDK_OFFSET(0x9D68A20)
#define NPA_EDITOR_NPACCOUNTSTEAM_GETLAUNCHMODE_OFFSET UNITYSDK_OFFSET(0x9D68AA0)

namespace NPA::Editor
{
	inline static constexpr unsigned int NPAccountSteam_TypeDefinitionIndex = 26208;

	class NPAccountSteam : public Il2CppObject
	{
	public:
		::NPA::Editor::Auth::NXPAccountLinkBase* auth; // 0x88
		::NPA::Editor::Store::INXPBilling* billing; // 0x90

		::NPA::Editor::IExternalPlatform* GetExternalPlatform()
		{
			return (return (::NPA::Editor::IExternalPlatform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_GETEXTERNALPLATFORM_OFFSET))(nullptr);
		}

		::NPA::Editor::Auth::INXPAuthAccountLink* GetAccountLink()
		{
			return (return (::NPA::Editor::Auth::INXPAuthAccountLink*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_GETACCOUNTLINK_OFFSET))(nullptr);
		}

		::NPA::Editor::Auth::INXPAuth* GetAuth()
		{
			return (return (::NPA::Editor::Auth::INXPAuth*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_GETAUTH_OFFSET))(nullptr);
		}

		::NPA::Editor::Auth::INXPAuthEx* GetAuthEx()
		{
			return (return (::NPA::Editor::Auth::INXPAuthEx*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_GETAUTHEX_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitHandler()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_INITHANDLER_OFFSET))(nullptr);
		}

		::System::Void ShowWebPage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_SHOWWEBPAGE_OFFSET))(str, nullptr);
		}

		::System::Void SetServiceKeyForEditor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_SETSERVICEKEYFOREDITOR_OFFSET))(str, nullptr);
		}

		::System::String* GetMarketTypeForInitialization()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_GETMARKETTYPEFORINITIALIZATION_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void AuthenticateOtp(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_AUTHENTICATEOTP_OFFSET))(arg, nullptr);
		}

		::System::Void BillingFinish(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_BILLINGFINISH_OFFSET))(str, arg, nullptr);
		}

		::System::Void BillingFinishForServerless(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_BILLINGFINISHFORSERVERLESS_OFFSET))(str, arg, nullptr);
		}

		::System::Void BillingPayment(::NPA::NXPPaymentInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPPaymentInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_BILLINGPAYMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BillingPaymentV2(::NPA::NXPPaymentInfoV2* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPPaymentInfoV2*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_BILLINGPAYMENTV2_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BillingRequestProducts(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_BILLINGREQUESTPRODUCTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BillingRestore(::NPA::NXPRestoreInfo* arg, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPRestoreInfo*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_BILLINGRESTORE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DLCRequestProducts(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_DLCREQUESTPRODUCTS_OFFSET))(arg, nullptr);
		}

		::System::Void DLCPayment(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_DLCPAYMENT_OFFSET))(str, arg, nullptr);
		}

		::System::Void DLCOwnership(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_DLCOWNERSHIP_OFFSET))(arg, nullptr);
		}

		::System::Void Login(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_LOGIN_OFFSET))(arg, nullptr);
		}

		::System::Void Login(::NPA::NPLoginType* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NPLoginType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_LOGIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Logout(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_LOGOUT_OFFSET))(arg, nullptr);
		}

		::System::Void SignOut(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_SIGNOUT_OFFSET))(arg, nullptr);
		}

		::System::Void GetAccountLinkInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_GETACCOUNTLINKINFO_OFFSET))(arg, nullptr);
		}

		::System::Void DelinkAccount(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_DELINKACCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterService(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_UNREGISTERSERVICE_OFFSET))(arg, nullptr);
		}

		::System::String* GetStoreType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_GETSTORETYPE_OFFSET))(nullptr);
		}

		::System::Void ShowAccountMenu(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_SHOWACCOUNTMENU_OFFSET))(arg, nullptr);
		}

		::System::Void ShowAccountSettings(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_SHOWACCOUNTSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void GetPlatformFriends(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_GETPLATFORMFRIENDS_OFFSET))(arg, nullptr);
		}

		::System::Void GetPlatformLastLoginInfo(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_GETPLATFORMLASTLOGININFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetPlatformBlockUserInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_GETPLATFORMBLOCKUSERINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void ShowPlate(::System::Int32 arg, ::NPA::NPCSInfo* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::NPCSInfo*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_SHOWPLATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GetExecutionInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_GETEXECUTIONINFO_OFFSET))(arg, nullptr);
		}

		::NPA::Service::NXPToyLaunchMode* GetLaunchMode()
		{
			return (return (::NPA::Service::NXPToyLaunchMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTSTEAM_GETLAUNCHMODE_OFFSET))(nullptr);
		}

	};
}

