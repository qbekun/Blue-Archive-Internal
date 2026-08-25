#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class UIEventTrigger;
class UITitleNicknamePopup;
class UITitleCallNamePopup;
class UITitleLoginCacheAux;
class UIAssetDataClearMenu;
class UIGrid;
class UITexture;
class RetLogin;
namespace UnityEngine { class Collider; }
class ServerWaitingState;
class UIPopup_ServerWaitingConnection;
namespace FlatData { class Language; }
class UIPopup_System;

#define UITITLE_CALLTOYPROMOTION_OFFSET UNITYSDK_OFFSET(0xCD80A0)
#define UITITLE_OPENWAITINGCONNECTIONPOPUP_OFFSET UNITYSDK_OFFSET(0xCD8240)
#define UITITLE_AWAKE_OFFSET UNITYSDK_OFFSET(0xCD83F0)
#define UITITLE_SHOWACCOUNTSYNCFAILPOPUP_OFFSET UNITYSDK_OFFSET(0xCD8850)
#define UITITLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCD8BE0)
#define UITITLE_HIDESERVERWAITINGCONNECTIONPOPUP_OFFSET UNITYSDK_OFFSET(0xCD8D00)
#define UITITLE__OPENWAITINGCONNECTIONPOPUP_B__36_0_OFFSET UNITYSDK_OFFSET(0xCD8E10)
#define UITITLE_ONLOGINRESPONDED_OFFSET UNITYSDK_OFFSET(0xCD8E40)
#define UITITLE_SHOWCALLNAMEPOPUP_OFFSET UNITYSDK_OFFSET(0xCD9060)
#define UITITLE_CHANGETOLOGINSTATE_OFFSET UNITYSDK_OFFSET(0xCD90B0)
#define UITITLE_CHANGELOGINMETHOD_OFFSET UNITYSDK_OFFSET(0xCD96A0)
#define UITITLE_REFRESHTITLEUID_OFFSET UNITYSDK_OFFSET(0xCD97B0)
#define UITITLE_ONCLICKSCREENEVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0xCD9870)
#define UITITLE_ACTIVATESCREENEVENT_OFFSET UNITYSDK_OFFSET(0xCD89B0)
#define UITITLE_SETLOGOTEXTURE_OFFSET UNITYSDK_OFFSET(0xCD85C0)
#define UITITLE_SETTITLEUID_OFFSET UNITYSDK_OFFSET(0xCD9B20)
#define UITITLE_SETINFORMATIONLABEL_OFFSET UNITYSDK_OFFSET(0xCD9C00)
#define UITITLE_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xCD9F90)
#define UITITLE_INITPLATFORMSERVICE_OFFSET UNITYSDK_OFFSET(0xCD9520)
#define UITITLE_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xCD9FC0)
#define UITITLE_STARTLOGIN_OFFSET UNITYSDK_OFFSET(0xCD9450)
#define UITITLE_ONOPENED_OFFSET UNITYSDK_OFFSET(0xCDA110)
#define UITITLE_SHOWNICKNAMEPOPUP_OFFSET UNITYSDK_OFFSET(0xCDA470)
#define UITITLE__ONOPENED_G__CO_DIALOGPLAY|24_0_OFFSET UNITYSDK_OFFSET(0xCDA410)
#define UITITLE__SHOWACCOUNTSYNCFAILPOPUP_B__40_1_OFFSET UNITYSDK_OFFSET(0xCDA4E0)
#define UITITLE__SHOWACCOUNTSYNCFAILPOPUP_B__40_0_OFFSET UNITYSDK_OFFSET(0xCDA570)
#define UITITLE_ONLOGINCHANGEBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xCDA610)
#define UITITLE_SETRATINGLIST_OFFSET UNITYSDK_OFFSET(0xCD8780)
#define UITITLE_SETRATINGTEXTURE_OFFSET UNITYSDK_OFFSET(0xCDA620)
#define UITITLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCDA7D0)
#define UITITLE_SHOWSERVERWAITINGCONNECTIONPOPUP_OFFSET UNITYSDK_OFFSET(0xCDA950)
#define UITITLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xCDA980)

	inline static constexpr unsigned int UITitle_TypeDefinitionIndex = 9164;

	class UITitle : public Il2CppObject
	{
	public:
		::System::String* SAVE_UID_KEY; // 0x0
		UILabel* buildVersionLabel; // 0xD8
		UILabel* uIDLabel; // 0xE0
		::UnityEngine::GameObject* touchToStartIndicator; // 0xE8
		UIEventTrigger* screenEventTrigger; // 0xF0
		UITitleNicknamePopup* nicknamePopup; // 0xF8
		UITitleCallNamePopup* callNamePopup; // 0x100
		UITitleLoginCacheAux* loginCacheAux; // 0x108
		UIAssetDataClearMenu* assetDataClearMenu; // 0x110
		::UnityEngine::GameObject* logoKr; // 0x118
		::UnityEngine::GameObject* logoTw; // 0x120
		::UnityEngine::GameObject* logoEn; // 0x128
		UIGrid* ratingGrid; // 0x130
		UITexture* ratingTw; // 0x138
		UILabel* patchVersionLabel; // 0x140
		UILabel* buildNameLabel; // 0x148
		UILabel* regionLabel; // 0x150
		RetLogin* Oa3b37e3b823ba2a66743898d9dec847d3a9dd76b92f0b733bbc3b1bcb02e895c; // 0x158
		::UnityEngine::Collider* screenEventTriggerCollider; // 0x160
		ServerWaitingState* serverWaitingState; // 0x168

		::System::Void CallToyPromotion()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLE_CALLTOYPROMOTION_OFFSET))(nullptr);
		}

		::System::Void OpenWaitingConnectionPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLE_OPENWAITINGCONNECTIONPOPUP_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void ShowAccountSyncFailPopup(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITITLE_SHOWACCOUNTSYNCFAILPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void HideServerWaitingConnectionPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLE_HIDESERVERWAITINGCONNECTIONPOPUP_OFFSET))(nullptr);
		}

		::System::Void _OpenWaitingConnectionPopup_b__36_0(UIPopup_ServerWaitingConnection* arg)
		{
			((::System::Void(*)(UIPopup_ServerWaitingConnection*, ::PVOID))((::PBYTE)hIl2Cpp + UITITLE__OPENWAITINGCONNECTIONPOPUP_B__36_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnLoginResponded(RetLogin* arg)
		{
			((::System::Void(*)(RetLogin*, ::PVOID))((::PBYTE)hIl2Cpp + UITITLE_ONLOGINRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Void ShowCallNamePopup(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITITLE_SHOWCALLNAMEPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeToLoginState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLE_CHANGETOLOGINSTATE_OFFSET))(nullptr);
		}

		::System::Void ChangeLoginMethod()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLE_CHANGELOGINMETHOD_OFFSET))(nullptr);
		}

		::System::Void RefreshTitleUID()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLE_REFRESHTITLEUID_OFFSET))(nullptr);
		}

		::System::Void OnClickScreenEventTrigger()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLE_ONCLICKSCREENEVENTTRIGGER_OFFSET))(nullptr);
		}

		::System::Void ActivateScreenEvent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITITLE_ACTIVATESCREENEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void SetLogoTexture(::FlatData::Language* arg)
		{
			((::System::Void(*)(::FlatData::Language*, ::PVOID))((::PBYTE)hIl2Cpp + UITITLE_SETLOGOTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void SetTitleUID(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UITITLE_SETTITLEUID_OFFSET))(arg, nullptr);
		}

		::System::Void SetInformationLabel(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UITITLE_SETINFORMATIONLABEL_OFFSET))(str, str2, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLE_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void InitPlatformService()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLE_INITPLATFORMSERVICE_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLE_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void StartLogin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLE_STARTLOGIN_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITITLE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void ShowNicknamePopup(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITITLE_SHOWNICKNAMEPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _OnOpened_g__Co_DialogPlay|24_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLE__ONOPENED_G__CO_DIALOGPLAY|24_0_OFFSET))(nullptr);
		}

		::System::Void _ShowAccountSyncFailPopup_b__40_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLE__SHOWACCOUNTSYNCFAILPOPUP_B__40_1_OFFSET))(nullptr);
		}

		::System::Void _ShowAccountSyncFailPopup_b__40_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UITITLE__SHOWACCOUNTSYNCFAILPOPUP_B__40_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnLoginChangeButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLE_ONLOGINCHANGEBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void SetRatingList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLE_SETRATINGLIST_OFFSET))(nullptr);
		}

		::System::Void SetRatingTexture(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UITITLE_SETRATINGTEXTURE_OFFSET))(str, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void ShowServerWaitingConnectionPopup(ServerWaitingState* arg)
		{
			((::System::Void(*)(ServerWaitingState*, ::PVOID))((::PBYTE)hIl2Cpp + UITITLE_SHOWSERVERWAITINGCONNECTIONPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLE_.CTOR_OFFSET))(nullptr);
		}

	};

