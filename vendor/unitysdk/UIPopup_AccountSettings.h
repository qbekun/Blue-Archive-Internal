#pragma once
#include "unitysdk.h"

class MXButton;
class UIScrollView;
class UILabel;
namespace UnityEngine { class GameObject; }
class UITable;
class UITexture;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class RetLogin;

#define UIPOPUP_ACCOUNTSETTINGS_ONCLICKCAFEREMOVEALLBUTTON_OFFSET UNITYSDK_OFFSET(0xCC8A30)
#define UIPOPUP_ACCOUNTSETTINGS_SETSCROLLTOBOTTOM_OFFSET UNITYSDK_OFFSET(0xCC8EE0)
#define UIPOPUP_ACCOUNTSETTINGS_AWAKE_OFFSET UNITYSDK_OFFSET(0xCC9520)
#define UIPOPUP_ACCOUNTSETTINGS_ONCLICKBLOCKLIST_OFFSET UNITYSDK_OFFSET(0xCCA6C0)
#define UIPOPUP_ACCOUNTSETTINGS_HANDLEGAMERESETMESSAGE_OFFSET UNITYSDK_OFFSET(0xCCA770)
#define UIPOPUP_ACCOUNTSETTINGS_ONCLICKCAFEFURNITUREINTERACTIONENABLE_OFFSET UNITYSDK_OFFSET(0xCCA920)
#define UIPOPUP_ACCOUNTSETTINGS_REFRESHGOOGLEPLAYACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0xCCA600)
#define UIPOPUP_ACCOUNTSETTINGS_CAFEREMOVEALL_OFFSET UNITYSDK_OFFSET(0xCC8A40)
#define UIPOPUP_ACCOUNTSETTINGS_ONCLICKCOUPON_OFFSET UNITYSDK_OFFSET(0xCCAA90)
#define UIPOPUP_ACCOUNTSETTINGS_ONCLICKQR_OFFSET UNITYSDK_OFFSET(0xCCAF90)
#define UIPOPUP_ACCOUNTSETTINGS_ONCLICKFRIENDSEARCHEXPOSUREBUTTON_OFFSET UNITYSDK_OFFSET(0xCCB030)
#define UIPOPUP_ACCOUNTSETTINGS_ONCLICKACCOUNTCONNECT_OFFSET UNITYSDK_OFFSET(0xCCB0E0)
#define UIPOPUP_ACCOUNTSETTINGS_ONCLICKACCOUNTUNREGISTER_OFFSET UNITYSDK_OFFSET(0xCCB180)
#define UIPOPUP_ACCOUNTSETTINGS_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCCB2E0)
#define UIPOPUP_ACCOUNTSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xCCB510)
#define UIPOPUP_ACCOUNTSETTINGS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCCB520)
#define UIPOPUP_ACCOUNTSETTINGS_ONCLICKSERVICECENTER_OFFSET UNITYSDK_OFFSET(0xCCB800)
#define UIPOPUP_ACCOUNTSETTINGS_REFRESHBIRTH_OFFSET UNITYSDK_OFFSET(0xCCBA20)
#define UIPOPUP_ACCOUNTSETTINGS_ONCLICKBIRTHINPUTBUTTON_OFFSET UNITYSDK_OFFSET(0xCCBB50)
#define UIPOPUP_ACCOUNTSETTINGS_ONOPENED_OFFSET UNITYSDK_OFFSET(0xCCBD50)
#define UIPOPUP_ACCOUNTSETTINGS_ONCLICKCAFEREMOVEALLBUTTON2_OFFSET UNITYSDK_OFFSET(0xCCC300)
#define UIPOPUP_ACCOUNTSETTINGS_REFRESHSURVEY_OFFSET UNITYSDK_OFFSET(0xCCC220)
#define UIPOPUP_ACCOUNTSETTINGS_ONCLICKACCOUNTCHANGE_OFFSET UNITYSDK_OFFSET(0xCCC310)
#define UIPOPUP_ACCOUNTSETTINGS__ONCLICKCAFEFURNITUREINTERACTIONENABLE_G__ONCONFIRMENABLE|47_1_OFFSET UNITYSDK_OFFSET(0xCCC3B0)
#define UIPOPUP_ACCOUNTSETTINGS_ONCLICKLOGOUT_OFFSET UNITYSDK_OFFSET(0xCCC4B0)
#define UIPOPUP_ACCOUNTSETTINGS_ONCLICKCLIENTVERSION_OFFSET UNITYSDK_OFFSET(0xCCC610)
#define UIPOPUP_ACCOUNTSETTINGS_REFRESHACCOUNTLINKSTATE_OFFSET UNITYSDK_OFFSET(0xCCBEC0)
#define UIPOPUP_ACCOUNTSETTINGS_ONCLICKGOOGLEPLAYACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0xCCC6C0)
#define UIPOPUP_ACCOUNTSETTINGS_ONCLICKACCOUNTRESET_OFFSET UNITYSDK_OFFSET(0xCCC830)
#define UIPOPUP_ACCOUNTSETTINGS_HANDLESETBIRTHMESSAGE_OFFSET UNITYSDK_OFFSET(0xCCC990)
#define UIPOPUP_ACCOUNTSETTINGS_ONBINDACCOUNTRESPONDED_OFFSET UNITYSDK_OFFSET(0xCCCA00)
#define UIPOPUP_ACCOUNTSETTINGS_ONCLICKCAFECURRENCYRECEIVE_OFFSET UNITYSDK_OFFSET(0xCCCCF0)

	inline static constexpr unsigned int UIPopup_AccountSettings_TypeDefinitionIndex = 9139;

	class UIPopup_AccountSettings : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UIScrollView* scrollView; // 0xE0
		MXButton* friendSearchExposureButton; // 0xE8
		MXButton* blockListButton; // 0xF0
		UILabel* birthLabel; // 0xF8
		::UnityEngine::GameObject* birthInputActive; // 0x100
		MXButton* birthInputButton; // 0x108
		::UnityEngine::GameObject* birthInputInactive; // 0x110
		MXButton* cafeRemoveAllButton; // 0x118
		MXButton* cafeRemoveAllButton2; // 0x120
		MXButton* cafeCurrencyReceiveButton; // 0x128
		MXButton* cafeFurnitureInteractionEnable; // 0x130
		MXButton* serviceCenterButton; // 0x138
		MXButton* clientVersionButton; // 0x140
		::UnityEngine::GameObject* couponRoot; // 0x148
		MXButton* couponButton; // 0x150
		MXButton* logoutButton; // 0x158
		MXButton* accountConnectButton; // 0x160
		MXButton* accountChageButton; // 0x168
		MXButton* accountResetButton; // 0x170
		MXButton* accountUnregisterButton; // 0x178
		::UnityEngine::GameObject* accountConnectObj; // 0x180
		::UnityEngine::GameObject* accountChageObj; // 0x188
		::UnityEngine::GameObject* accountLogout; // 0x190
		::UnityEngine::GameObject* accountUnregisterObj; // 0x198
		::UnityEngine::GameObject* accountRedDot; // 0x1A0
		UITable* accountGrid; // 0x1A8
		UITexture* connetPlatformIcon; // 0x1B0
		UILabel* userEmail; // 0x1B8
		MXButton* surveyButton; // 0x1C0
		::UnityEngine::GameObject* surveyButtonDisableRoot; // 0x1C8
		MXButton* QRButton; // 0x1D0
		MXButton* googlePlayAchievementButton; // 0x1D8
		::UnityEngine::GameObject* googlePlayAchievementRoot; // 0x1E0

		::System::Void OnClickCafeRemoveAllButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_ONCLICKCAFEREMOVEALLBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetScrollToBottom()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_SETSCROLLTOBOTTOM_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickBlocklist()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_ONCLICKBLOCKLIST_OFFSET))(nullptr);
		}

		::System::Boolean HandleGameResetMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_HANDLEGAMERESETMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCafeFurnitureInteractionEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_ONCLICKCAFEFURNITUREINTERACTIONENABLE_OFFSET))(nullptr);
		}

		::System::Void RefreshGooglePlayAchievement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_REFRESHGOOGLEPLAYACHIEVEMENT_OFFSET))(nullptr);
		}

		::System::Void CafeRemoveAll(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_CAFEREMOVEALL_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCoupon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_ONCLICKCOUPON_OFFSET))(nullptr);
		}

		::System::Void OnClickQR()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_ONCLICKQR_OFFSET))(nullptr);
		}

		::System::Void OnClickFriendSearchExposureButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_ONCLICKFRIENDSEARCHEXPOSUREBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickAccountConnect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_ONCLICKACCOUNTCONNECT_OFFSET))(nullptr);
		}

		::System::Void OnClickAccountUnregister()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_ONCLICKACCOUNTUNREGISTER_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickServiceCenter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_ONCLICKSERVICECENTER_OFFSET))(nullptr);
		}

		::System::Void RefreshBirth()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_REFRESHBIRTH_OFFSET))(nullptr);
		}

		::System::Void OnClickBirthInputButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_ONCLICKBIRTHINPUTBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCafeRemoveAllButton2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_ONCLICKCAFEREMOVEALLBUTTON2_OFFSET))(nullptr);
		}

		::System::Void RefreshSurvey()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_REFRESHSURVEY_OFFSET))(nullptr);
		}

		::System::Void OnClickAccountChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_ONCLICKACCOUNTCHANGE_OFFSET))(nullptr);
		}

		::System::Void _OnClickCafeFurnitureInteractionEnable_g__OnConfirmEnable|47_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS__ONCLICKCAFEFURNITUREINTERACTIONENABLE_G__ONCONFIRMENABLE|47_1_OFFSET))(nullptr);
		}

		::System::Void OnClickLogout()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_ONCLICKLOGOUT_OFFSET))(nullptr);
		}

		::System::Void OnClickClientVersion()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_ONCLICKCLIENTVERSION_OFFSET))(nullptr);
		}

		::System::Void RefreshAccountLinkState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_REFRESHACCOUNTLINKSTATE_OFFSET))(nullptr);
		}

		::System::Void OnClickGooglePlayAchievement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_ONCLICKGOOGLEPLAYACHIEVEMENT_OFFSET))(nullptr);
		}

		::System::Void OnClickAccountReset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_ONCLICKACCOUNTRESET_OFFSET))(nullptr);
		}

		::System::Boolean HandleSetBirthMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_HANDLESETBIRTHMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnBindAccountResponded(RetLogin* arg)
		{
			((::System::Void(*)(RetLogin*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_ONBINDACCOUNTRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCafeCurrencyReceive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTSETTINGS_ONCLICKCAFECURRENCYRECEIVE_OFFSET))(nullptr);
		}

	};

