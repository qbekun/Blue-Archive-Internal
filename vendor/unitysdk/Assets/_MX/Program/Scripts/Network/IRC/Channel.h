#pragma once
#include "../../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcUserList; }
namespace Assets::_MX::Program::Scripts::Network::IRC { class Topic; }
namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcClient; }
namespace Assets::_MX::Program::Scripts::Network::IRC { class KickEventArgs; }
namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcMessage; }
namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcUser; }
namespace Assets::_MX::Program::Scripts::Network::IRC { class Reply; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_GET_TOPIC_OFFSET UNITYSDK_OFFSET(0xE57CD0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_REMOVE_ALLNAMESRECEIVED_OFFSET UNITYSDK_OFFSET(0xE57CE0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ADD_TOPICCHANGED_OFFSET UNITYSDK_OFFSET(0xE57D80)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_SET_NAME_OFFSET UNITYSDK_OFFSET(0xE57E20)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_CLEAR_OFFSET UNITYSDK_OFFSET(0xE57E30)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_SET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0xE57F80)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_SET_KEY_OFFSET UNITYSDK_OFFSET(0xE57F90)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_REMOVE_TOPICCHANGED_OFFSET UNITYSDK_OFFSET(0xE57FA0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_REMOVE_KICKED_OFFSET UNITYSDK_OFFSET(0xE58040)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ONKICKED_OFFSET UNITYSDK_OFFSET(0xE580E0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_REMOVE_LEFT_OFFSET UNITYSDK_OFFSET(0xE58100)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_SAY_OFFSET UNITYSDK_OFFSET(0xE581A0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_REMOVE_JOINED_OFFSET UNITYSDK_OFFSET(0xE582C0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ONMESSAGERECEIVED_OFFSET UNITYSDK_OFFSET(0xE58360)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ONLEFT_OFFSET UNITYSDK_OFFSET(0xE58380)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ADD_KICKED_OFFSET UNITYSDK_OFFSET(0xE58400)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ONPARTED_OFFSET UNITYSDK_OFFSET(0xE584A0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL__.CTOR_B__55_0_OFFSET UNITYSDK_OFFSET(0xE584C0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ADD_PARTED_OFFSET UNITYSDK_OFFSET(0xE584D0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ADD_JOINED_OFFSET UNITYSDK_OFFSET(0xE58570)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ONJOINED_OFFSET UNITYSDK_OFFSET(0xE58610)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_CLIENT_KICKRECEIVED_OFFSET UNITYSDK_OFFSET(0xE58630)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ONTOPICCHANGED_OFFSET UNITYSDK_OFFSET(0xE58650)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_JOIN_OFFSET UNITYSDK_OFFSET(0xE58670)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_REMOVE_MESSAGERECEIVED_OFFSET UNITYSDK_OFFSET(0xE58B30)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE58BD0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_GET_CLANID_OFFSET UNITYSDK_OFFSET(0xE58BE0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_GET_KEY_OFFSET UNITYSDK_OFFSET(0xE58BF0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_GET_CHANNELNAMEREGEX_OFFSET UNITYSDK_OFFSET(0xE58C00)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL__.CTOR_B__55_1_OFFSET UNITYSDK_OFFSET(0xE58C90)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ONALLNAMESRECEIVED_OFFSET UNITYSDK_OFFSET(0xE58CA0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_RETRIEVEHISTORY_OFFSET UNITYSDK_OFFSET(0xE58CC0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_LEAVE_OFFSET UNITYSDK_OFFSET(0xE58DE0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_GET_USERS_OFFSET UNITYSDK_OFFSET(0xE58F00)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_REMOVE_PARTED_OFFSET UNITYSDK_OFFSET(0xE58F10)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ADD_MESSAGERECEIVED_OFFSET UNITYSDK_OFFSET(0xE58FB0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_INVITE_OFFSET UNITYSDK_OFFSET(0xE59050)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_GET_NICKNAMEREGEX_OFFSET UNITYSDK_OFFSET(0xE59170)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0xE59200)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ADD_LEFT_OFFSET UNITYSDK_OFFSET(0xE59210)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xE592B0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_SET_CLANID_OFFSET UNITYSDK_OFFSET(0xE594D0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_GET__CLIENT_OFFSET UNITYSDK_OFFSET(0xE594E0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_SET_USERS_OFFSET UNITYSDK_OFFSET(0xE594F0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_CLIENT_REPLYRECEIVED_OFFSET UNITYSDK_OFFSET(0xE59500)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ADD_ALLNAMESRECEIVED_OFFSET UNITYSDK_OFFSET(0xE5A8F0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_SET_TOPIC_OFFSET UNITYSDK_OFFSET(0xE5A990)

namespace Assets::_MX::Program::Scripts::Network::IRC
{
	inline static constexpr unsigned int Channel_TypeDefinitionIndex = 10461;

	class Channel : public Il2CppObject
	{
	public:
		Il2CppObject* Parted; // 0x10
		::System::EventHandler* Left; // 0x18
		Il2CppObject* Joined; // 0x20
		Il2CppObject* AllNamesReceived; // 0x28
		Il2CppObject* TopicChanged; // 0x30
		Il2CppObject* MessageReceived; // 0x38
		Il2CppObject* Kicked; // 0x40
		::System::String* _Name_k__BackingField; // 0x48
		::System::String* _Key_k__BackingField; // 0x50
		::System::Boolean _IsConnected_k__BackingField; // 0x58
		::Assets::_MX::Program::Scripts::Network::IRC::IrcUserList* _Users_k__BackingField; // 0x60
		::Assets::_MX::Program::Scripts::Network::IRC::Topic* _Topic_k__BackingField; // 0x68
		::System::Int64 _ClanId_k__BackingField; // 0x70
		::Assets::_MX::Program::Scripts::Network::IRC::IrcClient* __client_k__BackingField; // 0x78
		::System::Text::RegularExpressions::Regex* _channelNameRegex; // 0x80
		::System::Text::RegularExpressions::Regex* _nicknameRegex; // 0x88

		::Assets::_MX::Program::Scripts::Network::IRC::Topic* get_Topic()
		{
			return ((::Assets::_MX::Program::Scripts::Network::IRC::Topic*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_GET_TOPIC_OFFSET))(nullptr);
		}

		::System::Void remove_AllNamesReceived(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_REMOVE_ALLNAMESRECEIVED_OFFSET))(arg, nullptr);
		}

		::System::Void add_TopicChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ADD_TOPICCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_CLEAR_OFFSET))(nullptr);
		}

		::System::Void set_IsConnected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_SET_ISCONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_Key(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_SET_KEY_OFFSET))(str, nullptr);
		}

		::System::Void remove_TopicChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_REMOVE_TOPICCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Kicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_REMOVE_KICKED_OFFSET))(arg, nullptr);
		}

		::System::Void OnKicked(::Assets::_MX::Program::Scripts::Network::IRC::KickEventArgs* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::KickEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ONKICKED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Left(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_REMOVE_LEFT_OFFSET))(arg, nullptr);
		}

		::System::Void Say(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_SAY_OFFSET))(str, nullptr);
		}

		::System::Void remove_Joined(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_REMOVE_JOINED_OFFSET))(arg, nullptr);
		}

		::System::Void OnMessageReceived(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ONMESSAGERECEIVED_OFFSET))(arg, nullptr);
		}

		::System::Void OnLeft()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ONLEFT_OFFSET))(nullptr);
		}

		::System::Void add_Kicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ADD_KICKED_OFFSET))(arg, nullptr);
		}

		::System::Void OnParted(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ONPARTED_OFFSET))(arg, nullptr);
		}

		::System::Void _.ctor_b__55_0(::System::Object* arg, ::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg2)
		{
			((::System::Void(*)(::System::Object*, ::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL__.CTOR_B__55_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void add_Parted(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ADD_PARTED_OFFSET))(arg, nullptr);
		}

		::System::Void add_Joined(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ADD_JOINED_OFFSET))(arg, nullptr);
		}

		::System::Void OnJoined(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ONJOINED_OFFSET))(arg, nullptr);
		}

		::System::Void client_KickReceived(::System::Object* arg, ::Assets::_MX::Program::Scripts::Network::IRC::KickEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::Assets::_MX::Program::Scripts::Network::IRC::KickEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_CLIENT_KICKRECEIVED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnTopicChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ONTOPICCHANGED_OFFSET))(nullptr);
		}

		::System::Void Join()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_JOIN_OFFSET))(nullptr);
		}

		::System::Void remove_MessageReceived(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_REMOVE_MESSAGERECEIVED_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_GET_NAME_OFFSET))(nullptr);
		}

		::System::Int64 get_ClanId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_GET_CLANID_OFFSET))(nullptr);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_GET_KEY_OFFSET))(nullptr);
		}

		::System::Text::RegularExpressions::Regex* get_ChannelNameRegex()
		{
			return ((::System::Text::RegularExpressions::Regex*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_GET_CHANNELNAMEREGEX_OFFSET))(nullptr);
		}

		::System::Void _.ctor_b__55_1(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL__.CTOR_B__55_1_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnAllNamesReceived(::Assets::_MX::Program::Scripts::Network::IRC::IrcUserList* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcUserList*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ONALLNAMESRECEIVED_OFFSET))(arg, nullptr);
		}

		::System::Void RetrieveHistory(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_RETRIEVEHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Void Leave(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_LEAVE_OFFSET))(str, nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::IRC::IrcUserList* get_Users()
		{
			return ((::Assets::_MX::Program::Scripts::Network::IRC::IrcUserList*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_GET_USERS_OFFSET))(nullptr);
		}

		::System::Void remove_Parted(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_REMOVE_PARTED_OFFSET))(arg, nullptr);
		}

		::System::Void add_MessageReceived(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ADD_MESSAGERECEIVED_OFFSET))(arg, nullptr);
		}

		::System::Void Invite(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_INVITE_OFFSET))(arg, nullptr);
		}

		::System::Text::RegularExpressions::Regex* get_NicknameRegex()
		{
			return ((::System::Text::RegularExpressions::Regex*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_GET_NICKNAMEREGEX_OFFSET))(nullptr);
		}

		::System::Boolean get_IsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_GET_ISCONNECTED_OFFSET))(nullptr);
		}

		::System::Void add_Left(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ADD_LEFT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Assets::_MX::Program::Scripts::Network::IRC::IrcClient* arg, ::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcClient*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_.CTOR_OFFSET))(arg, str, str2, nullptr);
		}

		::System::Void set_ClanId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_SET_CLANID_OFFSET))(arg, nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::IRC::IrcClient* get__client()
		{
			return ((::Assets::_MX::Program::Scripts::Network::IRC::IrcClient*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_GET__CLIENT_OFFSET))(nullptr);
		}

		::System::Void set_Users(::Assets::_MX::Program::Scripts::Network::IRC::IrcUserList* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcUserList*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_SET_USERS_OFFSET))(arg, nullptr);
		}

		::System::Void client_ReplyReceived(::System::Object* arg, ::Assets::_MX::Program::Scripts::Network::IRC::Reply* arg2)
		{
			((::System::Void(*)(::System::Object*, ::Assets::_MX::Program::Scripts::Network::IRC::Reply*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_CLIENT_REPLYRECEIVED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void add_AllNamesReceived(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_ADD_ALLNAMESRECEIVED_OFFSET))(arg, nullptr);
		}

		::System::Void set_Topic(::Assets::_MX::Program::Scripts::Network::IRC::Topic* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::Topic*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_CHANNEL_SET_TOPIC_OFFSET))(arg, nullptr);
		}

	};
}

