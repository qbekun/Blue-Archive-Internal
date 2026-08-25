#pragma once
#include "../../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcMessage; }
namespace MX::GameLogic::Chat { class IrcMessageType; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCRECEIVEDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE5F070)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCRECEIVEDMESSAGE_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0xE5F0A0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCRECEIVEDMESSAGE_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0xE5F0D0)

namespace Assets::_MX::Program::Scripts::Network::IRC
{
	inline static constexpr unsigned int IrcReceivedMessage_TypeDefinitionIndex = 10466;

	class IrcReceivedMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage* _Message_k__BackingField; // 0x18

		::System::Void .ctor(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCRECEIVEDMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Chat::IrcMessageType* get_MessageType()
		{
			return ((::MX::GameLogic::Chat::IrcMessageType*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCRECEIVEDMESSAGE_GET_MESSAGETYPE_OFFSET))(nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage* get_Message()
		{
			return ((::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCRECEIVEDMESSAGE_GET_MESSAGE_OFFSET))(nullptr);
		}

	};
}

