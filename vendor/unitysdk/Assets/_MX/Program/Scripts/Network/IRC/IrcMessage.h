#pragma once
#include "../../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcUser; }
namespace MX::GameLogic::Chat { class IrcJsonMessage; }
namespace MX::GameLogic::Chat { class IrcMessageType; }
namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcMessage; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_GET_RECEIVEDTIME_OFFSET UNITYSDK_OFFSET(0xE61240)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_GET_CLIENTSENDTIME_OFFSET UNITYSDK_OFFSET(0xE61250)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_GET_USER_OFFSET UNITYSDK_OFFSET(0xE612B0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0xE612C0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_GET_STICKERID_OFFSET UNITYSDK_OFFSET(0xE612D0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xE5A510)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_SETTEXT_OFFSET UNITYSDK_OFFSET(0xE5A570)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_GET_JSONMESSAGE_OFFSET UNITYSDK_OFFSET(0xE612F0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE5A370)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE5F850)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE61300)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0xE615D0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0xE61710)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0xE61730)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0xE61750)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_COMPARETO_OFFSET UNITYSDK_OFFSET(0xE61600)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_COMPAREBYMESSAGETYPEHISTORYCOUNTLATER_OFFSET UNITYSDK_OFFSET(0xE61780)

namespace Assets::_MX::Program::Scripts::Network::IRC
{
	inline static constexpr unsigned int IrcMessage_TypeDefinitionIndex = 10470;

	class IrcMessage : public Il2CppObject
	{
	public:
		::System::DateTime* _ReceivedTime_k__BackingField; // 0x10
		::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* _User_k__BackingField; // 0x18
		::MX::GameLogic::Chat::IrcJsonMessage* _JsonMessage_k__BackingField; // 0x20

		::System::DateTime* get_ReceivedTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_GET_RECEIVEDTIME_OFFSET))(nullptr);
		}

		::System::DateTime* get_ClientSendTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_GET_CLIENTSENDTIME_OFFSET))(nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* get_User()
		{
			return ((::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_GET_USER_OFFSET))(nullptr);
		}

		::MX::GameLogic::Chat::IrcMessageType* get_MessageType()
		{
			return ((::MX::GameLogic::Chat::IrcMessageType*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_GET_MESSAGETYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_StickerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_GET_STICKERID_OFFSET))(nullptr);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void SetText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_SETTEXT_OFFSET))(str, nullptr);
		}

		::MX::GameLogic::Chat::IrcJsonMessage* get_JsonMessage()
		{
			return ((::MX::GameLogic::Chat::IrcJsonMessage*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_GET_JSONMESSAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg, ::System::String* str)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg, ::MX::GameLogic::Chat::IrcJsonMessage* arg2)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::MX::GameLogic::Chat::IrcJsonMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean op_LessThan(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage* arg, ::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage* arg2)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage*, ::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_OP_LESSTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_LessThanOrEqual(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage* arg, ::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage* arg2)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage*, ::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_OP_LESSTHANOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_GreaterThan(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage* arg, ::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage* arg2)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage*, ::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_OP_GREATERTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_GreaterThanOrEqual(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage* arg, ::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage* arg2)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage*, ::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_OP_GREATERTHANOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 CompareTo(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage* arg)
		{
			return ((::System::Int32(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareByMessageTypeHistoryCountLater(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage* arg, ::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage* arg2)
		{
			return ((::System::Int32(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage*, ::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCMESSAGE_COMPAREBYMESSAGETYPEHISTORYCOUNTLATER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

