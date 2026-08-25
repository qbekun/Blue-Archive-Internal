#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
namespace UnityEngine { class GameObject; }
class ClanManagementPopup;
class ClanJoinManagementPopup;
class ClanMemberManagementPopup;
class IntTabController;
class ClanMember;
class UIClanScriptChatPopulator;
namespace MX::GameLogic::DBModel { class ClanDB; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::GameLogic::DBModel { class ClanMemberDB; }
class UIPopup_System;

#define UICLANLOBBY_ONOPENED_OFFSET UNITYSDK_OFFSET(0x233AE10)
#define UICLANLOBBY_.CTOR_OFFSET UNITYSDK_OFFSET(0x233B430)
#define UICLANLOBBY_ONCLICKCLANJOINCANCEL_OFFSET UNITYSDK_OFFSET(0x233B4B0)
#define UICLANLOBBY_HANDLEIRCRECEIVEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x233B610)
#define UICLANLOBBY_HANDLEIRCSTATECHANGEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x233BC80)
#define UICLANLOBBY_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x233C0B0)
#define UICLANLOBBY_REFRESHSELECTMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x233C1A0)
#define UICLANLOBBY_SETBOTTOMBTNSECTIONOBJECTLOCALSCALE_OFFSET UNITYSDK_OFFSET(0x233C6A0)
#define UICLANLOBBY_AWAKE_OFFSET UNITYSDK_OFFSET(0x233C740)
#define UICLANLOBBY_REFRESHJOINMANAGEMENT_OFFSET UNITYSDK_OFFSET(0x233CBF0)
#define UICLANLOBBY_SETMANAGEMENTBTNS_OFFSET UNITYSDK_OFFSET(0x233CE00)
#define UICLANLOBBY_ONCLICKBACK_OFFSET UNITYSDK_OFFSET(0x233CFA0)
#define UICLANLOBBY__HANDLEIRCSTATECHANGEDMESSAGE_G__CO_CHATTINGNOTICE|52_1_OFFSET UNITYSDK_OFFSET(0x233C050)
#define UICLANLOBBY_SETJOINBTS_OFFSET UNITYSDK_OFFSET(0x233CFE0)
#define UICLANLOBBY_ONCLANMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x2339960)
#define UICLANLOBBY_SETMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x233D300)
#define UICLANLOBBY_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x233D450)
#define UICLANLOBBY_REFRESHCLANINFO_OFFSET UNITYSDK_OFFSET(0x233CC50)
#define UICLANLOBBY_REFRESHCLANLOBBYTAB_OFFSET UNITYSDK_OFFSET(0x233AED0)
#define UICLANLOBBY_ONCLICKCLANMANAGEMENT_OFFSET UNITYSDK_OFFSET(0x233D940)
#define UICLANLOBBY_CLANCHATTINGNETWORKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x233BEC0)
#define UICLANLOBBY_SETJOINMANAGEMENTRADDOT_OFFSET UNITYSDK_OFFSET(0x233D220)
#define UICLANLOBBY__ONCLICKCLANJOIN_B__45_2_OFFSET UNITYSDK_OFFSET(0x233D9D0)
#define UICLANLOBBY__ONCLICKCLANJOIN_B__45_1_OFFSET UNITYSDK_OFFSET(0x233DA70)
#define UICLANLOBBY_ONCLICKCLANJOINMANAGEMENT_OFFSET UNITYSDK_OFFSET(0x233DB60)
#define UICLANLOBBY_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x233DBF0)
#define UICLANLOBBY_ONCLICKCLANJOIN_OFFSET UNITYSDK_OFFSET(0x233DC80)
#define UICLANLOBBY_CLANATTENDANCEREWARDPOPUPOPENCHECK_OFFSET UNITYSDK_OFFSET(0x233E040)
#define UICLANLOBBY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x233E360)
#define UICLANLOBBY_SETCLANMEMBERLIST_OFFSET UNITYSDK_OFFSET(0x233E410)
#define UICLANLOBBY___N__0_OFFSET UNITYSDK_OFFSET(0x233E9F0)
#define UICLANLOBBY_HANDLECLANMEMBERRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x233EA00)

	inline static constexpr unsigned int UIClanLobby_TypeDefinitionIndex = 4973;

	class UIClanLobby : public Il2CppObject
	{
	public:
		UILabel* clanNameLabel; // 0xD8
		UILabel* clanIdLabel; // 0xE0
		UILabel* clanJoinOptionLabel; // 0xE8
		UILabel* clanMemberLabel; // 0xF0
		UILabel* clanNoticeLabel; // 0xF8
		MXButton* backButton; // 0x100
		MXButton* clanManagementButton; // 0x108
		MXButton* clanJoinButton; // 0x110
		MXButton* clanJoinCancelButton; // 0x118
		MXButton* clanJoinManagementButton; // 0x120
		::UnityEngine::GameObject* clanJoinManagementRadDot; // 0x128
		ClanManagementPopup* clanManagementPopup; // 0x130
		ClanJoinManagementPopup* clanJoinManagementPopup; // 0x138
		ClanMemberManagementPopup* clanMemberManagementPopup; // 0x140
		IntTabController* clanLobbyTab; // 0x148
		::UnityEngine::GameObject* clanLobbyTabJoin; // 0x150
		ClanMember* clanMember; // 0x158
		::UnityEngine::GameObject* presidentBtnObject; // 0x160
		::UnityEngine::GameObject* memberBtnObject; // 0x168
		::UnityEngine::GameObject* bottomBtnSectionObject; // 0x170
		UIClanScriptChatPopulator* clanScriptChatPopulator; // 0x178
		Il2CppObject* clanMemberList; // 0x180
		::MX::GameLogic::DBModel::ClanDB* lobbyClanDB; // 0x188
		::System::Int64 ClanDBId; // 0x190
		::System::Boolean chatServerFailed; // 0x198
		Il2CppObject* perIrcMessages; // 0x1A0
		::System::Int32 perChatLogCount; // 0x1A8

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickClanJoinCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_ONCLICKCLANJOINCANCEL_OFFSET))(nullptr);
		}

		::System::Boolean HandleIrcReceivedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_HANDLEIRCRECEIVEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleIrcStateChangedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_HANDLEIRCSTATECHANGEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void RefreshSelectMemberInfo(::MX::GameLogic::DBModel::ClanDB* arg, ::MX::GameLogic::DBModel::ClanMemberDB* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, ::MX::GameLogic::DBModel::ClanMemberDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_REFRESHSELECTMEMBERINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetBottomBtnSectionObjectLocalScale(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_SETBOTTOMBTNSECTIONOBJECTLOCALSCALE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void RefreshJoinManagement(::MX::GameLogic::DBModel::ClanDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_REFRESHJOINMANAGEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void SetManagementBtns()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_SETMANAGEMENTBTNS_OFFSET))(nullptr);
		}

		::System::Void OnClickBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_ONCLICKBACK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _HandleIrcStateChangedMessage_g__Co_ChattingNotice|52_1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY__HANDLEIRCSTATECHANGEDMESSAGE_G__CO_CHATTINGNOTICE|52_1_OFFSET))(nullptr);
		}

		::System::Void SetJoinBts()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_SETJOINBTS_OFFSET))(nullptr);
		}

		::System::Void OnClanMemberInfo(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_ONCLANMEMBERINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetMemberInfo(::MX::GameLogic::DBModel::ClanDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_SETMEMBERINFO_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void RefreshClanInfo(::MX::GameLogic::DBModel::ClanDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_REFRESHCLANINFO_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshClanLobbyTab()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_REFRESHCLANLOBBYTAB_OFFSET))(nullptr);
		}

		::System::Void OnClickClanManagement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_ONCLICKCLANMANAGEMENT_OFFSET))(nullptr);
		}

		::System::Void ClanChattingNetworkException()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_CLANCHATTINGNETWORKEXCEPTION_OFFSET))(nullptr);
		}

		::System::Void SetJoinManagementRadDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_SETJOINMANAGEMENTRADDOT_OFFSET))(nullptr);
		}

		::System::Void _OnClickClanJoin_b__45_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY__ONCLICKCLANJOIN_B__45_2_OFFSET))(nullptr);
		}

		::System::Void _OnClickClanJoin_b__45_1(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY__ONCLICKCLANJOIN_B__45_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickClanJoinManagement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_ONCLICKCLANJOINMANAGEMENT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnClickClanJoin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_ONCLICKCLANJOIN_OFFSET))(nullptr);
		}

		::System::Void ClanAttendanceRewardPopupOpenCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_CLANATTENDANCEREWARDPOPUPOPENCHECK_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::GameLogic::DBModel::ClanDB* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetClanMemberList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_SETCLANMEMBERLIST_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY___N__0_OFFSET))(nullptr);
		}

		::System::Boolean HandleClanMemberResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICLANLOBBY_HANDLECLANMEMBERRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

	};

