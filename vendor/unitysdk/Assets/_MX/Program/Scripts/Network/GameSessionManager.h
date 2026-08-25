#pragma once
#include "../../../../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MX::Core::Crypto { class O2bd538d36c3a5a4c5e73cc15f4c126910fe08660da77ed8a7bad9f5db1313995; }
namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcComponent; }
namespace UnityEngine::Networking { class CertificateHandler; }
namespace MX::NetworkProtocol { class RequestPacket; }
namespace Assets::_MX::Program::Scripts::Network { class HttpGameSession; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcState; }
namespace MX::NetworkProtocol { class IrcServerConfig; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0xE30290)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_GET_ISDISABLEWEBVIEWBANNER_OFFSET UNITYSDK_OFFSET(0xE302A0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SET_ISDISABLEWEBVIEWBANNER_OFFSET UNITYSDK_OFFSET(0xE302B0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_GET_NXSID_OFFSET UNITYSDK_OFFSET(0xE302C0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SET_NXSID_OFFSET UNITYSDK_OFFSET(0xE302D0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_GET_BUNDLEVERSION_OFFSET UNITYSDK_OFFSET(0xE302E0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SET_BUNDLEVERSION_OFFSET UNITYSDK_OFFSET(0xE302F0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_GET_APIURL_OFFSET UNITYSDK_OFFSET(0xE30300)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SET_APIURL_OFFSET UNITYSDK_OFFSET(0xE30310)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_GET_GATEWAYURL_OFFSET UNITYSDK_OFFSET(0xE30330)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SET_GATEWAYURL_OFFSET UNITYSDK_OFFSET(0xE30340)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_GET_CERTIFICATEHANDLER_OFFSET UNITYSDK_OFFSET(0xE30360)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SET_CERTIFICATEHANDLER_OFFSET UNITYSDK_OFFSET(0xE30370)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_GET_SESSIONQUEUECOUNT_OFFSET UNITYSDK_OFFSET(0xE30390)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_GET_ISGATEWAYBYPASSED_OFFSET UNITYSDK_OFFSET(0xE303D0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SET_ISGATEWAYBYPASSED_OFFSET UNITYSDK_OFFSET(0xE303E0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_GET_AUTHKEY_OFFSET UNITYSDK_OFFSET(0xE303F0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SET_AUTHKEY_OFFSET UNITYSDK_OFFSET(0xE30400)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE30420)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_CLEARALLSESSION_OFFSET UNITYSDK_OFFSET(0xE30920)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_CLEARALLSESSIONWITHOUTCURRENT_OFFSET UNITYSDK_OFFSET(0xE29110)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_OD3ED0139201ED0E07B85BBE6B376B5C0E01C121692679E6FAC2F10A6D5A38927_OFFSET UNITYSDK_OFFSET(0xE309C0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SENDREQUESTAPI_OFFSET UNITYSDK_OFFSET(0xE2F7A0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SENDREQUESTGATEWAY_OFFSET UNITYSDK_OFFSET(0xE2F960)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SENDREQUEST_OFFSET UNITYSDK_OFFSET(0xE36240)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_OFBDFA901508749A1F88B2D7D5096F16E0E38D0AE4A66E78273B335B66A2AAB2B_OFFSET UNITYSDK_OFFSET(0xE364F0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_O7E3B114A224B9EFF55740617D6A1B7C360B5C6752957BF7ACCF70CD29896291B_OFFSET UNITYSDK_OFFSET(0xE366C0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_O3E19D487AD23154FDC59148353ECA4E549E4AC6AB48CD7A5B4BB8EF9FE43C250_OFFSET UNITYSDK_OFFSET(0xE368A0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SETCOOKIEPARAMETER_OFFSET UNITYSDK_OFFSET(0xE36C90)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_CREATESESSION_OFFSET UNITYSDK_OFFSET(0xE363A0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_REMOVESESSION_OFFSET UNITYSDK_OFFSET(0xE36CA0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE36F40)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_HANDLESESSIONSTATECHANGEDMESSAGE_OFFSET UNITYSDK_OFFSET(0xE370E0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_DISABLENETWORKINPUTLAYER_OFFSET UNITYSDK_OFFSET(0xE371D0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_ENABLENETWORKINPUTLAYER_OFFSET UNITYSDK_OFFSET(0xE372E0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_HANDLECLIENTNOTFOUNDSERVER_OFFSET UNITYSDK_OFFSET(0xE36050)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_HANDLECLIENTNETWORKNOTREACHABLE_OFFSET UNITYSDK_OFFSET(0xE37420)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_DOWNLOADPROHIBITEDWORD_OFFSET UNITYSDK_OFFSET(0xE376C0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_GET_IRCSTATE_OFFSET UNITYSDK_OFFSET(0xE376E0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_INITIRC_OFFSET UNITYSDK_OFFSET(0xE37700)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_INITIRC_OFFSET UNITYSDK_OFFSET(0xE37A20)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_CONNECTIRC_OFFSET UNITYSDK_OFFSET(0xE37B50)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_DISCONNECTIRC_OFFSET UNITYSDK_OFFSET(0xE37BE0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_JOINIRC_OFFSET UNITYSDK_OFFSET(0xE37D80)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_REQUESTCHATLOG_OFFSET UNITYSDK_OFFSET(0xE37EF0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SENDCHAT_OFFSET UNITYSDK_OFFSET(0xE38050)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SENDSTICKER_OFFSET UNITYSDK_OFFSET(0xE381B0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SENDLOCALNOTICE_OFFSET UNITYSDK_OFFSET(0xE38310)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE38470)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER__CONNECTIRC_B__73_0_OFFSET UNITYSDK_OFFSET(0xE38650)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int GameSessionManager_TypeDefinitionIndex = 10446;

	class GameSessionManager : public ::ToyWebViewShared::Messages::NotifyPageStarted
	{
	public:
		Il2CppObject* sessionQueue; // 0x20
		Il2CppObject* sessionSet; // 0x28
		::UnityEngine::GameObject* prefab; // 0x30
		::System::String* prohibitedWordBlackListUri; // 0x38
		::System::String* prohibitedWordWhiteListUri; // 0x40
		::System::String* prohibitedChattingWordBlackListUri; // 0x48
		::System::Boolean _IsDisableWebviewBanner_k__BackingField; // 0x50
		::System::String* _NXSID_k__BackingField; // 0x58
		::System::String* _bundleVersion_k__BackingField; // 0x60
		::MX::Core::Crypto::O2bd538d36c3a5a4c5e73cc15f4c126910fe08660da77ed8a7bad9f5db1313995* O7953c5e2e5ae5a172724bb078ca8be01a8f30f5c7f8ab2a1d967eda8e1830e11; // 0x68
		::Il2CppArray<::System::Object*>* O7ee141eb0be4d2c31078f0814b5ae509a3816dd5973892c2b8595c9be1b6736c; // 0x70
		::Il2CppArray<::System::Object*>* Oe35f1f552da5dfc74fcf250f030d0aa479eb0a87cacbc37102961c848af0465f; // 0x78
		::Il2CppArray<::System::Object*>* O916a62331c1dab718ebffdb880b3ef3c141edebf3a5d6745396d925de24eae90; // 0x80
		Il2CppObject* publisherAccountId; // 0x88
		::UnityEngine::GameObject* ircGameObject; // 0x98
		::Assets::_MX::Program::Scripts::Network::IRC::IrcComponent* irc; // 0xA0
		::System::String* _ApiUrl_k__BackingField; // 0xA8
		::System::String* _GatewayUrl_k__BackingField; // 0xB0
		::UnityEngine::Networking::CertificateHandler* _CertificateHandler_k__BackingField; // 0xB8
		::System::Boolean _IsGatewayBypassed_k__BackingField; // 0xC0
		::System::String* _AuthKey_k__BackingField; // 0xC8

		::System::Single get_TIMEOUT()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_GET_TIMEOUT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDisableWebviewBanner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_GET_ISDISABLEWEBVIEWBANNER_OFFSET))(nullptr);
		}

		::System::Void set_IsDisableWebviewBanner(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SET_ISDISABLEWEBVIEWBANNER_OFFSET))(arg, nullptr);
		}

		::System::String* get_NXSID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_GET_NXSID_OFFSET))(nullptr);
		}

		::System::Void set_NXSID(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SET_NXSID_OFFSET))(str, nullptr);
		}

		::System::String* get_bundleVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_GET_BUNDLEVERSION_OFFSET))(nullptr);
		}

		::System::Void set_bundleVersion(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SET_BUNDLEVERSION_OFFSET))(str, nullptr);
		}

		::System::String* get_ApiUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_GET_APIURL_OFFSET))(nullptr);
		}

		::System::Void set_ApiUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SET_APIURL_OFFSET))(str, nullptr);
		}

		::System::String* get_GatewayUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_GET_GATEWAYURL_OFFSET))(nullptr);
		}

		::System::Void set_GatewayUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SET_GATEWAYURL_OFFSET))(str, nullptr);
		}

		::UnityEngine::Networking::CertificateHandler* get_CertificateHandler()
		{
			return ((::UnityEngine::Networking::CertificateHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_GET_CERTIFICATEHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_CertificateHandler(::UnityEngine::Networking::CertificateHandler* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::CertificateHandler*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SET_CERTIFICATEHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SessionQueueCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_GET_SESSIONQUEUECOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsGatewayBypassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_GET_ISGATEWAYBYPASSED_OFFSET))(nullptr);
		}

		::System::Void set_IsGatewayBypassed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SET_ISGATEWAYBYPASSED_OFFSET))(arg, nullptr);
		}

		::System::String* get_AuthKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_GET_AUTHKEY_OFFSET))(nullptr);
		}

		::System::Void set_AuthKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SET_AUTHKEY_OFFSET))(str, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void ClearAllSession()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_CLEARALLSESSION_OFFSET))(nullptr);
		}

		::System::Void ClearAllSessionWithoutCurrent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_CLEARALLSESSIONWITHOUTCURRENT_OFFSET))(nullptr);
		}

		::System::Boolean Od3ed0139201ed0e07b85bbe6b376b5c0e01c121692679e6fac2f10a6d5a38927(::System::String* str, ::System::String* str2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_OD3ED0139201ED0E07B85BBE6B376B5C0E01C121692679E6FAC2F10A6D5A38927_OFFSET))(str, str2, nullptr);
		}

		::System::Int32 SendRequestApi(::MX::NetworkProtocol::RequestPacket* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::System::Action* arg4)
		{
			return ((::System::Int32(*)(::MX::NetworkProtocol::RequestPacket*, Il2CppObject*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SENDREQUESTAPI_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int32 SendRequestGateway(::MX::NetworkProtocol::RequestPacket* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::System::Action* arg4)
		{
			return ((::System::Int32(*)(::MX::NetworkProtocol::RequestPacket*, Il2CppObject*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SENDREQUESTGATEWAY_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int32 SendRequest(::MX::NetworkProtocol::RequestPacket* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::System::String* str, ::System::Action* arg4, Il2CppObject* arg5)
		{
			return ((::System::Int32(*)(::MX::NetworkProtocol::RequestPacket*, Il2CppObject*, Il2CppObject*, ::System::String*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SENDREQUEST_OFFSET))(arg, arg2, arg3, str, arg4, arg5, nullptr);
		}

		::System::Void Ofbdfa901508749a1f88b2d7d5096f16e0e38d0ae4a66e78273b335b66a2aab2b()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_OFBDFA901508749A1F88B2D7D5096F16E0E38D0AE4A66E78273B335B66A2AAB2B_OFFSET))(nullptr);
		}

		::System::Void O7e3b114a224b9eff55740617d6a1b7c360b5c6752957bf7accf70cd29896291b(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_O7E3B114A224B9EFF55740617D6A1B7C360B5C6752957BF7ACCF70CD29896291B_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean O3e19d487ad23154fdc59148353eca4e549e4ac6ab48cd7a5b4bb8ef9fe43c250(::System::String* str, ::System::String* str2, ::System::String* str3, ::System::String* str4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_O3E19D487AD23154FDC59148353ECA4E549E4AC6AB48CD7A5B4BB8EF9FE43C250_OFFSET))(str, str2, str3, str4, nullptr);
		}

		::System::Void SetCookieParameter(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SETCOOKIEPARAMETER_OFFSET))(arg, nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::HttpGameSession* CreateSession(Il2CppObject* arg, Il2CppObject* arg2, ::System::Action* arg3)
		{
			return ((::Assets::_MX::Program::Scripts::Network::HttpGameSession*(*)(Il2CppObject*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_CREATESESSION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void RemoveSession(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_REMOVESESSION_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Boolean HandleSessionStateChangedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_HANDLESESSIONSTATECHANGEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void DisableNetworkInputLayer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_DISABLENETWORKINPUTLAYER_OFFSET))(nullptr);
		}

		::System::Void EnableNetworkInputLayer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_ENABLENETWORKINPUTLAYER_OFFSET))(nullptr);
		}

		::System::Void HandleClientNotFoundServer(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_HANDLECLIENTNOTFOUNDSERVER_OFFSET))(str, str2, nullptr);
		}

		::System::Void HandleClientNetworkNotReachable(::Assets::_MX::Program::Scripts::Network::HttpGameSession* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::HttpGameSession*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_HANDLECLIENTNETWORKNOTREACHABLE_OFFSET))(arg, nullptr);
		}

		::System::Void DownloadProhibitedWord()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_DOWNLOADPROHIBITEDWORD_OFFSET))(nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::IRC::IrcState* get_IrcState()
		{
			return ((::Assets::_MX::Program::Scripts::Network::IRC::IrcState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_GET_IRCSTATE_OFFSET))(nullptr);
		}

		::System::Boolean InitIrc(::MX::NetworkProtocol::IrcServerConfig* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::IrcServerConfig*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_INITIRC_OFFSET))(arg, nullptr);
		}

		::System::Boolean InitIrc(::MX::NetworkProtocol::IrcServerConfig* arg, ::System::Int64 arg2, ::System::String* str, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int64 arg5)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::IrcServerConfig*, ::System::Int64, ::System::String*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_INITIRC_OFFSET))(arg, arg2, str, arg3, arg4, arg5, nullptr);
		}

		::System::Collections::IEnumerator* ConnectIrc()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_CONNECTIRC_OFFSET))(nullptr);
		}

		::System::Boolean DisconnectIrc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_DISCONNECTIRC_OFFSET))(nullptr);
		}

		::System::Boolean JoinIrc(::System::String* str, ::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_JOINIRC_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean RequestChatLog(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_REQUESTCHATLOG_OFFSET))(arg, nullptr);
		}

		::System::Boolean SendChat(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SENDCHAT_OFFSET))(str, nullptr);
		}

		::System::Boolean SendSticker(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SENDSTICKER_OFFSET))(arg, nullptr);
		}

		::System::Boolean SendLocalNotice(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_SENDLOCALNOTICE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ConnectIrc_b__73_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_GAMESESSIONMANAGER__CONNECTIRC_B__73_0_OFFSET))(nullptr);
		}

	};
}

