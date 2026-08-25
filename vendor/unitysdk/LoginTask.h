#pragma once
#include "unitysdk.h"

class LoginState;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::NetworkProtocol { class ErrorPacket; }
class UILobby;
class UIPopup_CallNameDownConfirm;
class UIGachaResult;
class UIPopup_System;
namespace FlatData { class ContentType; }

#define LOGINTASK__SKIPACCOUNTCALLNAME_G__TTSSAVEANDREQUESTACCOUNTAUTH|67_1_OFFSET UNITYSDK_OFFSET(0x2012B50)
#define LOGINTASK_STARTREQUESTRELAYPACKETS_OFFSET UNITYSDK_OFFSET(0x2012DD0)
#define LOGINTASK_CHECKCONTINUEEVENTCONTENT_OFFSET UNITYSDK_OFFSET(0x2012F10)
#define LOGINTASK_HANDLEACCOUNTCHECKNEXONRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2013580)
#define LOGINTASK__ACCOUNTAUTHSTART_B__28_0_OFFSET UNITYSDK_OFFSET(0x20135F0)
#define LOGINTASK_ERRORACCOUNTCREATE_OFFSET UNITYSDK_OFFSET(0x2013680)
#define LOGINTASK_REQUESTACCOUNTCHECKNEXON_OFFSET UNITYSDK_OFFSET(0x2013730)
#define LOGINTASK__HANDLECONTENTSAVEDISCARDRESPONSEMESSAGE_B__37_0_OFFSET UNITYSDK_OFFSET(0x20138A0)
#define LOGINTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x2013B20)
#define LOGINTASK_ERRORCONTENTSAVEDISCARD_OFFSET UNITYSDK_OFFSET(0x2013B90)
#define LOGINTASK_CHECKBEFOREHANDGACHAPROCEEDING_OFFSET UNITYSDK_OFFSET(0x2013D00)
#define LOGINTASK_ONLOGINFAIL_OFFSET UNITYSDK_OFFSET(0x2013F10)
#define LOGINTASK_REQUESTACCOUNTAUTH_OFFSET UNITYSDK_OFFSET(0x2012C70)
#define LOGINTASK__ACCOUNTAUTHSTART_B__28_1_OFFSET UNITYSDK_OFFSET(0x2014080)
#define LOGINTASK_REQUESTACCOUNTCALLNAMEENGLISH_OFFSET UNITYSDK_OFFSET(0x2014280)
#define LOGINTASK_REQUESTACCOUNTCREATE_OFFSET UNITYSDK_OFFSET(0x2014470)
#define LOGINTASK_REQUESTACCOUNTCALLNAME_OFFSET UNITYSDK_OFFSET(0x20145D0)
#define LOGINTASK__SHOWTTSDOWNLOADPOPUP_B__54_0_OFFSET UNITYSDK_OFFSET(0x20148D0)
#define LOGINTASK_CHECKCONTINUECONQUESTBATTLE_OFFSET UNITYSDK_OFFSET(0x2014960)
#define LOGINTASK_ERRORQUEUINGPROCESSWAITINGQUEUE_OFFSET UNITYSDK_OFFSET(0x2014DD0)
#define LOGINTASK_CO_SETUPSERVERDATA_OFFSET UNITYSDK_OFFSET(0x20150C0)
#define LOGINTASK__CHECKBEFOREHANDGACHAPROCEEDING_B__57_2_OFFSET UNITYSDK_OFFSET(0x2015140)
#define LOGINTASK_ISLOGINSTARTED_OFFSET UNITYSDK_OFFSET(0x2015170)
#define LOGINTASK_ERRORACCOUNTAUTH_OFFSET UNITYSDK_OFFSET(0x2015180)
#define LOGINTASK_ACCOUNTAUTHSTART_OFFSET UNITYSDK_OFFSET(0x2015310)
#define LOGINTASK__ONLOGINFINISH_G__CLOSETITLE|56_6_OFFSET UNITYSDK_OFFSET(0x2015810)
#define LOGINTASK_HANDLEACCOUNTCALLNAMERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2015970)
#define LOGINTASK_CHECKCONTINUECAMPAIGN_OFFSET UNITYSDK_OFFSET(0x2015A60)
#define LOGINTASK_REQUESTQUEUINGGETTICKETRETRY_OFFSET UNITYSDK_OFFSET(0x2015D60)
#define LOGINTASK_HANDLEQUEUINGPROCESSWAITINGQUEUERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2015EC0)
#define LOGINTASK_CHECKCONTINUEWEEKDUNGEON_OFFSET UNITYSDK_OFFSET(0x2016160)
#define LOGINTASK_SHOWNICKNAMEPOPUP_OFFSET UNITYSDK_OFFSET(0x2015710)
#define LOGINTASK_HANDLECONTENTSAVEDISCARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2016430)
#define LOGINTASK_RETRYLOGINWITHACCOUNTCHECKNEXON_OFFSET UNITYSDK_OFFSET(0x20165F0)
#define LOGINTASK_STARTLOGINWITHACCOUNTPASSCHECK_OFFSET UNITYSDK_OFFSET(0x2016600)
#define LOGINTASK_RESETCONTINUESTORYSAVEDATA_OFFSET UNITYSDK_OFFSET(0x2016610)
#define LOGINTASK_CLOSE_OFFSET UNITYSDK_OFFSET(0x20138B0)
#define LOGINTASK_CO_RELAYPACKETSPROCESS_OFFSET UNITYSDK_OFFSET(0x2012EA0)
#define LOGINTASK_SET_AUTHTICKET_OFFSET UNITYSDK_OFFSET(0x2016720)
#define LOGINTASK_RELEASE_OFFSET UNITYSDK_OFFSET(0x2016730)
#define LOGINTASK_HANDLEACCOUNTPASSCHECKRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2016CE0)
#define LOGINTASK_HANDLEACCOUNTCREATERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2016D50)
#define LOGINTASK_SKIPACCOUNTCALLNAME_OFFSET UNITYSDK_OFFSET(0x2016E20)
#define LOGINTASK_CHECKCONTINUESTORYMODE_OFFSET UNITYSDK_OFFSET(0x2016F00)
#define LOGINTASK_SHOWCALLNAMEPOPUP_OFFSET UNITYSDK_OFFSET(0x2012B70)
#define LOGINTASK_SET_WAITINGTICKET_OFFSET UNITYSDK_OFFSET(0x20170D0)
#define LOGINTASK_STARTLOGIN_OFFSET UNITYSDK_OFFSET(0x20170E0)
#define LOGINTASK_STARTLOGINWITHACCOUNTCHECKNEXON_OFFSET UNITYSDK_OFFSET(0x2017350)
#define LOGINTASK_HANDLESESSIONFINISHEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x2017470)
#define LOGINTASK_GET_AUTHTICKET_OFFSET UNITYSDK_OFFSET(0x2017560)
#define LOGINTASK_CHECKCONTINUESTORYSTRATEGY_OFFSET UNITYSDK_OFFSET(0x2017570)
#define LOGINTASK_ERRORACCOUNTNICKNAME_OFFSET UNITYSDK_OFFSET(0x20177F0)
#define LOGINTASK_ERRORACCOUNTCHECKNEXON_OFFSET UNITYSDK_OFFSET(0x2017900)
#define LOGINTASK_SETACCOUNTNICKNAME_OFFSET UNITYSDK_OFFSET(0x20179B0)
#define LOGINTASK_SETACCOUNTCALLNAMEENGLISH_OFFSET UNITYSDK_OFFSET(0x2017CD0)
#define LOGINTASK_ERRORACCOUNTPASSCHECK_OFFSET UNITYSDK_OFFSET(0x2017E00)
#define LOGINTASK_REQUESTACCOUNTPASSCHECK_OFFSET UNITYSDK_OFFSET(0x2017EB0)
#define LOGINTASK__CHECKBEFOREHANDGACHAPROCEEDING_B__57_1_OFFSET UNITYSDK_OFFSET(0x2018020)
#define LOGINTASK__ERRORACCOUNTAUTH_B__26_0_OFFSET UNITYSDK_OFFSET(0x2018100)
#define LOGINTASK_ERRORACCOUNTCALLNAME_OFFSET UNITYSDK_OFFSET(0x20181A0)
#define LOGINTASK_CHECKCONTINUESCHOOLDUNGEON_OFFSET UNITYSDK_OFFSET(0x20182B0)
#define LOGINTASK_GET_WAITINGTICKET_OFFSET UNITYSDK_OFFSET(0x2018540)
#define LOGINTASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2018550)
#define LOGINTASK_REQUESTACCOUNTNICKNAME_OFFSET UNITYSDK_OFFSET(0x2017AE0)
#define LOGINTASK_REQUESTQUEUINGGETTICKETNEXON_OFFSET UNITYSDK_OFFSET(0x2018A50)
#define LOGINTASK__SKIPACCOUNTCALLNAME_B__67_0_OFFSET UNITYSDK_OFFSET(0x2018C00)
#define LOGINTASK_LOADCALLNAMELIPSYNC_OFFSET UNITYSDK_OFFSET(0x2018CA0)
#define LOGINTASK_HANDLEACCOUNTAUTHRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2018D30)
#define LOGINTASK_HANDLEACCOUNTNICKNAMERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2018E00)
#define LOGINTASK__SHOWTTSDOWNLOADPOPUP_B__54_1_OFFSET UNITYSDK_OFFSET(0x2018F50)
#define LOGINTASK_ISLOGINFINISHED_OFFSET UNITYSDK_OFFSET(0x2018F60)
#define LOGINTASK_SETACCOUNTCALLNAME_OFFSET UNITYSDK_OFFSET(0x2018F70)
#define LOGINTASK_CO_SYNCTUTORIALCOMPLETIONIDS_OFFSET UNITYSDK_OFFSET(0x20191D0)
#define LOGINTASK_REQUESTCONTENTSAVEDISCARD_OFFSET UNITYSDK_OFFSET(0x2013330)
#define LOGINTASK_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x2019230)
#define LOGINTASK_SHOWTTSDOWNLOADPOPUP_OFFSET UNITYSDK_OFFSET(0x2014130)

	inline static constexpr unsigned int LoginTask_TypeDefinitionIndex = 3177;

	class LoginTask : public Il2CppObject
	{
	public:
		LoginState* loginState; // 0x10
		::System::String* _WaitingTicket_k__BackingField; // 0x18
		::System::String* _AuthTicket_k__BackingField; // 0x20

		::System::Void _SkipAccountCallname_g__TTSSaveAndRequestAccountAuth|67_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK__SKIPACCOUNTCALLNAME_G__TTSSAVEANDREQUESTACCOUNTAUTH|67_1_OFFSET))(nullptr);
		}

		::System::Void StartRequestRelayPackets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_STARTREQUESTRELAYPACKETS_OFFSET))(nullptr);
		}

		::System::Boolean CheckContinueEventContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_CHECKCONTINUEEVENTCONTENT_OFFSET))(nullptr);
		}

		::System::Boolean HandleAccountCheckNexonResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_HANDLEACCOUNTCHECKNEXONRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void _AccountAuthStart_b__28_0(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK__ACCOUNTAUTHSTART_B__28_0_OFFSET))(str, nullptr);
		}

		::System::Boolean ErrorAccountCreate(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_ERRORACCOUNTCREATE_OFFSET))(arg, nullptr);
		}

		::System::Void RequestAccountCheckNexon(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_REQUESTACCOUNTCHECKNEXON_OFFSET))(str, nullptr);
		}

		::System::Void _HandleContentSaveDiscardResponseMessage_b__37_0(UILobby* arg)
		{
			((::System::Void(*)(UILobby*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK__HANDLECONTENTSAVEDISCARDRESPONSEMESSAGE_B__37_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorContentSaveDiscard(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_ERRORCONTENTSAVEDISCARD_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckBeforehandGachaProceeding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_CHECKBEFOREHANDGACHAPROCEEDING_OFFSET))(nullptr);
		}

		::System::Void OnLoginFail(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_ONLOGINFAIL_OFFSET))(arg, nullptr);
		}

		::System::Void RequestAccountAuth()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_REQUESTACCOUNTAUTH_OFFSET))(nullptr);
		}

		::System::Void _AccountAuthStart_b__28_1(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK__ACCOUNTAUTHSTART_B__28_1_OFFSET))(arg, nullptr);
		}

		::System::Void RequestAccountCallnameEnglish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_REQUESTACCOUNTCALLNAMEENGLISH_OFFSET))(nullptr);
		}

		::System::Void RequestAccountCreate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_REQUESTACCOUNTCREATE_OFFSET))(nullptr);
		}

		::System::Void RequestAccountCallname()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_REQUESTACCOUNTCALLNAME_OFFSET))(nullptr);
		}

		::System::Void _ShowTTSDownLoadPopup_b__54_0(UIPopup_CallNameDownConfirm* arg)
		{
			((::System::Void(*)(UIPopup_CallNameDownConfirm*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK__SHOWTTSDOWNLOADPOPUP_B__54_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckContinueConquestBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_CHECKCONTINUECONQUESTBATTLE_OFFSET))(nullptr);
		}

		::System::Boolean ErrorQueuingProcessWaitingQueue(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_ERRORQUEUINGPROCESSWAITINGQUEUE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_SetupServerData(::System::String* str, ::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_CO_SETUPSERVERDATA_OFFSET))(str, arg, nullptr);
		}

		::System::Void _CheckBeforehandGachaProceeding_b__57_2(UIGachaResult* arg)
		{
			((::System::Void(*)(UIGachaResult*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK__CHECKBEFOREHANDGACHAPROCEEDING_B__57_2_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLoginStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_ISLOGINSTARTED_OFFSET))(nullptr);
		}

		::System::Boolean ErrorAccountAuth(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_ERRORACCOUNTAUTH_OFFSET))(arg, nullptr);
		}

		::System::Void AccountAuthStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_ACCOUNTAUTHSTART_OFFSET))(nullptr);
		}

		::System::Void _OnLoginFinish_g__CloseTitle|56_6()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK__ONLOGINFINISH_G__CLOSETITLE|56_6_OFFSET))(nullptr);
		}

		::System::Boolean HandleAccountCallnameResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_HANDLEACCOUNTCALLNAMERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckContinueCampaign()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_CHECKCONTINUECAMPAIGN_OFFSET))(nullptr);
		}

		::System::Void RequestQueuingGetTicketRetry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_REQUESTQUEUINGGETTICKETRETRY_OFFSET))(nullptr);
		}

		::System::Boolean HandleQueuingProcessWaitingQueueResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_HANDLEQUEUINGPROCESSWAITINGQUEUERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckContinueWeekDungeon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_CHECKCONTINUEWEEKDUNGEON_OFFSET))(nullptr);
		}

		::System::Void ShowNicknamePopup(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_SHOWNICKNAMEPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleContentSaveDiscardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_HANDLECONTENTSAVEDISCARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RetryLoginWithAccountCheckNexon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_RETRYLOGINWITHACCOUNTCHECKNEXON_OFFSET))(nullptr);
		}

		::System::Void StartLoginWithAccountPassCheck(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_STARTLOGINWITHACCOUNTPASSCHECK_OFFSET))(str, nullptr);
		}

		::System::Void ResetContinueStorySaveData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_RESETCONTINUESTORYSAVEDATA_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_CLOSE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_RelayPacketsProcess()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_CO_RELAYPACKETSPROCESS_OFFSET))(nullptr);
		}

		::System::Void set_AuthTicket(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_SET_AUTHTICKET_OFFSET))(str, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_RELEASE_OFFSET))(nullptr);
		}

		::System::Boolean HandleAccountPassCheckResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_HANDLEACCOUNTPASSCHECKRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleAccountCreateResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_HANDLEACCOUNTCREATERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SkipAccountCallname()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_SKIPACCOUNTCALLNAME_OFFSET))(nullptr);
		}

		::System::Boolean CheckContinueStoryMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_CHECKCONTINUESTORYMODE_OFFSET))(nullptr);
		}

		::System::Void ShowCallnamePopup(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_SHOWCALLNAMEPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void set_WaitingTicket(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_SET_WAITINGTICKET_OFFSET))(str, nullptr);
		}

		::System::Void StartLogin(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_STARTLOGIN_OFFSET))(str, arg, nullptr);
		}

		::System::Void StartLoginWithAccountCheckNexon(::System::Int64 arg, ::System::String* str, ::System::String* str2, ::System::String* str3, ::System::String* str4)
		{
			((::System::Void(*)(::System::Int64, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_STARTLOGINWITHACCOUNTCHECKNEXON_OFFSET))(arg, str, str2, str3, str4, nullptr);
		}

		::System::Boolean HandleSessionFinishedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_HANDLESESSIONFINISHEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::String* get_AuthTicket()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_GET_AUTHTICKET_OFFSET))(nullptr);
		}

		::System::Boolean CheckContinueStoryStrategy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_CHECKCONTINUESTORYSTRATEGY_OFFSET))(nullptr);
		}

		::System::Boolean ErrorAccountNickname(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_ERRORACCOUNTNICKNAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorAccountCheckNexon(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_ERRORACCOUNTCHECKNEXON_OFFSET))(arg, nullptr);
		}

		::System::Void SetAccountNickname(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_SETACCOUNTNICKNAME_OFFSET))(str, nullptr);
		}

		::System::Void SetAccountCallnameEnglish(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_SETACCOUNTCALLNAMEENGLISH_OFFSET))(str, nullptr);
		}

		::System::Boolean ErrorAccountPassCheck(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_ERRORACCOUNTPASSCHECK_OFFSET))(arg, nullptr);
		}

		::System::Void RequestAccountPassCheck(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_REQUESTACCOUNTPASSCHECK_OFFSET))(str, nullptr);
		}

		::System::Void _CheckBeforehandGachaProceeding_b__57_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK__CHECKBEFOREHANDGACHAPROCEEDING_B__57_1_OFFSET))(nullptr);
		}

		::System::Void _ErrorAccountAuth_b__26_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK__ERRORACCOUNTAUTH_B__26_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorAccountCallname(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_ERRORACCOUNTCALLNAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckContinueSchoolDungeon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_CHECKCONTINUESCHOOLDUNGEON_OFFSET))(nullptr);
		}

		::System::String* get_WaitingTicket()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_GET_WAITINGTICKET_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void RequestAccountNickname()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_REQUESTACCOUNTNICKNAME_OFFSET))(nullptr);
		}

		::System::Void RequestQueuingGetTicketNexon(::System::Int64 arg, ::System::String* str, ::System::String* str2, ::System::String* str3)
		{
			((::System::Void(*)(::System::Int64, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_REQUESTQUEUINGGETTICKETNEXON_OFFSET))(arg, str, str2, str3, nullptr);
		}

		::System::Void _SkipAccountCallname_b__67_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK__SKIPACCOUNTCALLNAME_B__67_0_OFFSET))(arg, nullptr);
		}

		::System::Void LoadCallNameLipSync()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_LOADCALLNAMELIPSYNC_OFFSET))(nullptr);
		}

		::System::Boolean HandleAccountAuthResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_HANDLEACCOUNTAUTHRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleAccountNicknameResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_HANDLEACCOUNTNICKNAMERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void _ShowTTSDownLoadPopup_b__54_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK__SHOWTTSDOWNLOADPOPUP_B__54_1_OFFSET))(nullptr);
		}

		::System::Boolean IsLoginFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_ISLOGINFINISHED_OFFSET))(nullptr);
		}

		::System::Void SetAccountCallname(::System::String* str, ::System::String* str2, ::System::String* str3)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_SETACCOUNTCALLNAME_OFFSET))(str, str2, str3, nullptr);
		}

		::System::Collections::IEnumerator* co_SyncTutorialCompletionIds()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_CO_SYNCTUTORIALCOMPLETIONIDS_OFFSET))(nullptr);
		}

		::System::Void RequestContentSaveDiscard(::FlatData::ContentType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_REQUESTCONTENTSAVEDISCARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnLoginFinish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_ONLOGINFINISH_OFFSET))(nullptr);
		}

		::System::Void ShowTTSDownLoadPopup(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LOGINTASK_SHOWTTSDOWNLOADPOPUP_OFFSET))(arg, nullptr);
		}

	};

