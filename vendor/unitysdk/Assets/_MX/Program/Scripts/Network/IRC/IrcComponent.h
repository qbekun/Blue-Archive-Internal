#pragma once
#include "../../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcUser; }
namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcClient; }
namespace Assets::_MX::Program::Scripts::Network::IRC { class Channel; }
namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcState; }
namespace Assets::_MX::Program::Scripts::Network::IRC { class KickEventArgs; }
namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcMessage; }
namespace MX::NetworkProtocol { class IrcServerConfig; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_ACTIVECHANNEL_KICKED_OFFSET UNITYSDK_OFFSET(0xE5F0E0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xE5F2C0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_CLIENT_CONNECTIONREFUSED_OFFSET UNITYSDK_OFFSET(0xE5F350)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_RETRIEVEHISTORYCOUNT_OFFSET UNITYSDK_OFFSET(0xE5F360)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_GET_USERS_OFFSET UNITYSDK_OFFSET(0xE5F400)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_ACTIVECHANNEL_MESSAGERECEIVED_OFFSET UNITYSDK_OFFSET(0xE5F420)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_SENDSTICKER_OFFSET UNITYSDK_OFFSET(0xE5F4D0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0xE5F900)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_CLIENT_WELCOMED_OFFSET UNITYSDK_OFFSET(0xE5F910)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE5F920)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xE5F810)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_SENDLOCALNOTICE_OFFSET UNITYSDK_OFFSET(0xE5FBD0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE5FD50)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_GET_STATE_OFFSET UNITYSDK_OFFSET(0xE5FFC0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0xE5FDA0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_JOIN_OFFSET UNITYSDK_OFFSET(0xE5FFD0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_SET_STATE_OFFSET UNITYSDK_OFFSET(0xE5F190)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_CONNECT_OFFSET UNITYSDK_OFFSET(0xE603C0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_UPDATE_OFFSET UNITYSDK_OFFSET(0xE604D0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_ACTIVECHANNEL_JOINED_OFFSET UNITYSDK_OFFSET(0xE606B0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_GET_EMBLEMID_OFFSET UNITYSDK_OFFSET(0xE5F830)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_CO_CONNECT_OFFSET UNITYSDK_OFFSET(0xE60460)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_SENDCHAT_OFFSET UNITYSDK_OFFSET(0xE606E0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_GET_ENDPOINTDEBUGTEXT_OFFSET UNITYSDK_OFFSET(0xE60A00)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_SENDRAWMESSAGE_OFFSET UNITYSDK_OFFSET(0xE60AA0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_DISCONNECT_OFFSET UNITYSDK_OFFSET(0xE5FDC0)

namespace Assets::_MX::Program::Scripts::Network::IRC
{
	inline static constexpr unsigned int IrcComponent_TypeDefinitionIndex = 10469;

	class IrcComponent : public Il2CppObject
	{
	public:
		::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* me; // 0x18
		::Assets::_MX::Program::Scripts::Network::IRC::IrcClient* client; // 0x20
		::Assets::_MX::Program::Scripts::Network::IRC::Channel* activeChannel; // 0x28
		::System::Int32 retryCount; // 0x30
		Il2CppObject* receivedMessages; // 0x38
		::Assets::_MX::Program::Scripts::Network::IRC::IrcState* state; // 0x40

		::System::Void ActiveChannel_Kicked(::System::Object* arg, ::Assets::_MX::Program::Scripts::Network::IRC::KickEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::Assets::_MX::Program::Scripts::Network::IRC::KickEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_ACTIVECHANNEL_KICKED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Client_ConnectionRefused(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_CLIENT_CONNECTIONREFUSED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RetrieveHistoryCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_RETRIEVEHISTORYCOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Users()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_GET_USERS_OFFSET))(nullptr);
		}

		::System::Void ActiveChannel_MessageReceived(::System::Object* arg, ::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage* arg2)
		{
			((::System::Void(*)(::System::Object*, ::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_ACTIVECHANNEL_MESSAGERECEIVED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SendSticker(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_SENDSTICKER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_GET_ISINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void Client_Welcomed(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_CLIENT_WELCOMED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(::MX::NetworkProtocol::IrcServerConfig* arg, ::System::Int64 arg2, ::System::String* str, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(::MX::NetworkProtocol::IrcServerConfig*, ::System::Int64, ::System::String*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_INITIALIZE_OFFSET))(arg, arg2, str, arg3, arg4, arg5, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void SendLocalNotice(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_SENDLOCALNOTICE_OFFSET))(str, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_ONDESTROY_OFFSET))(nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::IRC::IrcState* get_State()
		{
			return ((::Assets::_MX::Program::Scripts::Network::IRC::IrcState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_GET_STATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_GET_ISCONNECTED_OFFSET))(nullptr);
		}

		::System::Void Join(::System::String* str, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_JOIN_OFFSET))(str, arg, nullptr);
		}

		::System::Void set_State(::Assets::_MX::Program::Scripts::Network::IRC::IrcState* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcState*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::Void Connect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_CONNECT_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_UPDATE_OFFSET))(nullptr);
		}

		::System::Void ActiveChannel_Joined(::System::Object* arg, ::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg2)
		{
			((::System::Void(*)(::System::Object*, ::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_ACTIVECHANNEL_JOINED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_EmblemId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_GET_EMBLEMID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Connect()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_CO_CONNECT_OFFSET))(nullptr);
		}

		::System::Void SendChat(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_SENDCHAT_OFFSET))(str, nullptr);
		}

		::System::String* get_EndPointDebugText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_GET_ENDPOINTDEBUGTEXT_OFFSET))(nullptr);
		}

		::System::Void SendRawMessage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_SENDRAWMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Void Disconnect(::Assets::_MX::Program::Scripts::Network::IRC::IrcState* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcState*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCOMPONENT_DISCONNECT_OFFSET))(arg, nullptr);
		}

	};
}

