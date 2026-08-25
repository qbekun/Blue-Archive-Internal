#pragma once
#include "../../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcUser; }
namespace MX::GameLogic::Chat { class IrcMessageType; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCHISTORYCOUNTMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE5A8D0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCHISTORYCOUNTMESSAGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE61950)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCHISTORYCOUNTMESSAGE_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0xE61B90)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCHISTORYCOUNTMESSAGE_GET_HISTORYCOUNT_OFFSET UNITYSDK_OFFSET(0xE61BA0)

namespace Assets::_MX::Program::Scripts::Network::IRC
{
	inline static constexpr unsigned int IrcHistoryCountMessage_TypeDefinitionIndex = 10471;

	class IrcHistoryCountMessage : public Il2CppObject
	{
	public:
		::System::Int32 _HistoryCount_k__BackingField; // 0x28

		::System::Void .ctor(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCHISTORYCOUNTMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCHISTORYCOUNTMESSAGE_TOSTRING_OFFSET))(nullptr);
		}

		::MX::GameLogic::Chat::IrcMessageType* get_MessageType()
		{
			return ((::MX::GameLogic::Chat::IrcMessageType*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCHISTORYCOUNTMESSAGE_GET_MESSAGETYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_HistoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCHISTORYCOUNTMESSAGE_GET_HISTORYCOUNT_OFFSET))(nullptr);
		}

	};
}

