#pragma once
#include "../../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network::IRC { class Reply; }
namespace Assets::_MX::Program::Scripts::Network::IRC { class Channel; }
namespace Assets::_MX::Program::Scripts::Network::IRC { class KickEventArgs; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_HANDLEREPLY_OFFSET UNITYSDK_OFFSET(0xE5D350)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_REMOVE_WELCOMED_OFFSET UNITYSDK_OFFSET(0xE5D6F0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xE5D790)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_ADD_KICKRECEIVED_OFFSET UNITYSDK_OFFSET(0xE58A00)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_GET_LEAVEMESSAGE_OFFSET UNITYSDK_OFFSET(0xE5D7A0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_CLOSE_OFFSET UNITYSDK_OFFSET(0xE5D7B0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0xE5DC50)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_LISTEN_OFFSET UNITYSDK_OFFSET(0xE5DC60)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xE5E200)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_ADD_WELCOMED_OFFSET UNITYSDK_OFFSET(0xE5E290)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_GET_SERVERPASS_OFFSET UNITYSDK_OFFSET(0xE5E330)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_REMOVE_REPLYRECEIVED_OFFSET UNITYSDK_OFFSET(0xE5E340)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_APPENDMESSAGEBYTESFROMBUFFER_OFFSET UNITYSDK_OFFSET(0xE5E3E0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xE5E480)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_GET_REALNAME_OFFSET UNITYSDK_OFFSET(0xE5E6A0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_ADD_REPLYRECEIVED_OFFSET UNITYSDK_OFFSET(0xE58960)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_SET_LEAVEMESSAGE_OFFSET UNITYSDK_OFFSET(0xE5E6B0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_REGISTER_OFFSET UNITYSDK_OFFSET(0xE5E6C0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_CREATECHANNEL_OFFSET UNITYSDK_OFFSET(0xE5E7A0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_REMOVE_CONNECTIONREFUSED_OFFSET UNITYSDK_OFFSET(0xE5E910)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_TRYGETCHANNEL_OFFSET UNITYSDK_OFFSET(0xE5E9B0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_ONCONNECTIONREFUSED_OFFSET UNITYSDK_OFFSET(0xE5D690)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_REMOVE_KICKRECEIVED_OFFSET UNITYSDK_OFFSET(0xE5EA60)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xE5EB00)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_ONWELCOMED_OFFSET UNITYSDK_OFFSET(0xE5D6D0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_ONREPLYRECEIVED_OFFSET UNITYSDK_OFFSET(0xE5E1E0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_ONKICKRECEIVED_OFFSET UNITYSDK_OFFSET(0xE5D6B0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_SET_CHANNELS_OFFSET UNITYSDK_OFFSET(0xE5EB10)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_ADD_CONNECTIONREFUSED_OFFSET UNITYSDK_OFFSET(0xE5EB20)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_CONNECT_OFFSET UNITYSDK_OFFSET(0xE5EBC0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_GET_CHANNELS_OFFSET UNITYSDK_OFFSET(0xE5EFC0)

namespace Assets::_MX::Program::Scripts::Network::IRC
{
	inline static constexpr unsigned int IrcClient_TypeDefinitionIndex = 10464;

	class IrcClient : public Il2CppObject
	{
	public:
		Il2CppObject* ReplyReceived; // 0x38
		Il2CppObject* Welcomed; // 0x40
		Il2CppObject* ConnectionRefused; // 0x48
		Il2CppObject* KickReceived; // 0x50
		::System::Int64 _AccountId_k__BackingField; // 0x58
		::System::String* _ServerPass_k__BackingField; // 0x60
		::System::String* _LeaveMessage_k__BackingField; // 0x68
		Il2CppObject* _Channels_k__BackingField; // 0x70
		::System::Threading::Thread* _listenerThread; // 0x78
		::System::String* _nickname; // 0x80
		::System::String* _UserName_k__BackingField; // 0x88
		::System::String* _RealName_k__BackingField; // 0x90
		::Il2CppArray<::System::Object*>* buffer; // 0x98

		::System::Void HandleReply(::Assets::_MX::Program::Scripts::Network::IRC::Reply* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::Reply*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_HANDLEREPLY_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Welcomed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_REMOVE_WELCOMED_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void add_KickReceived(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_ADD_KICKRECEIVED_OFFSET))(arg, nullptr);
		}

		::System::String* get_LeaveMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_GET_LEAVEMESSAGE_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_CLOSE_OFFSET))(nullptr);
		}

		::System::String* get_UserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_GET_USERNAME_OFFSET))(nullptr);
		}

		::System::Void Listen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_LISTEN_OFFSET))(nullptr);
		}

		::System::Void set_Nickname(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_SET_NICKNAME_OFFSET))(str, nullptr);
		}

		::System::Void add_Welcomed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_ADD_WELCOMED_OFFSET))(arg, nullptr);
		}

		::System::String* get_ServerPass()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_GET_SERVERPASS_OFFSET))(nullptr);
		}

		::System::Void remove_ReplyReceived(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_REMOVE_REPLYRECEIVED_OFFSET))(arg, nullptr);
		}

		::System::Void AppendMessageBytesFromBuffer(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_APPENDMESSAGEBYTESFROMBUFFER_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Int64 arg2, ::System::String* str2, ::System::String* str3)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int64, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_.CTOR_OFFSET))(str, arg, arg2, str2, str3, nullptr);
		}

		::System::String* get_RealName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_GET_REALNAME_OFFSET))(nullptr);
		}

		::System::Void add_ReplyReceived(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_ADD_REPLYRECEIVED_OFFSET))(arg, nullptr);
		}

		::System::Void set_LeaveMessage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_SET_LEAVEMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Void Register()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_REGISTER_OFFSET))(nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::IRC::Channel* CreateChannel(::System::String* str, ::System::String* str2, ::System::Int64 arg)
		{
			return ((::Assets::_MX::Program::Scripts::Network::IRC::Channel*(*)(::System::String*, ::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_CREATECHANNEL_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Void remove_ConnectionRefused(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_REMOVE_CONNECTIONREFUSED_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetChannel(::System::String* str, ::Assets::_MX::Program::Scripts::Network::IRC::Channel&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::Assets::_MX::Program::Scripts::Network::IRC::Channel&*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_TRYGETCHANNEL_OFFSET))(str, arg, nullptr);
		}

		::System::Void OnConnectionRefused()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_ONCONNECTIONREFUSED_OFFSET))(nullptr);
		}

		::System::Void remove_KickReceived(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_REMOVE_KICKRECEIVED_OFFSET))(arg, nullptr);
		}

		::System::String* get_Nickname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_GET_NICKNAME_OFFSET))(nullptr);
		}

		::System::Void OnWelcomed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_ONWELCOMED_OFFSET))(nullptr);
		}

		::System::Void OnReplyReceived(::Assets::_MX::Program::Scripts::Network::IRC::Reply* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::Reply*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_ONREPLYRECEIVED_OFFSET))(arg, nullptr);
		}

		::System::Void OnKickReceived(::Assets::_MX::Program::Scripts::Network::IRC::KickEventArgs* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::KickEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_ONKICKRECEIVED_OFFSET))(arg, nullptr);
		}

		::System::Void set_Channels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_SET_CHANNELS_OFFSET))(arg, nullptr);
		}

		::System::Void add_ConnectionRefused(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_ADD_CONNECTIONREFUSED_OFFSET))(arg, nullptr);
		}

		::System::Boolean Connect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_CONNECT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Channels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCCLIENT_GET_CHANNELS_OFFSET))(nullptr);
		}

	};
}

