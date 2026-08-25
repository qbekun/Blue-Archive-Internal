#pragma once
#include "../../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcState; }
namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcComponent; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCSTATECHANGEDMESSAGE_GET_IRCSTATE_OFFSET UNITYSDK_OFFSET(0xE5EFD0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCSTATECHANGEDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE5EFE0)

namespace Assets::_MX::Program::Scripts::Network::IRC
{
	inline static constexpr unsigned int IrcStateChangedMessage_TypeDefinitionIndex = 10465;

	class IrcStateChangedMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::Assets::_MX::Program::Scripts::Network::IRC::IrcState* _IrcState_k__BackingField; // 0x18

		::Assets::_MX::Program::Scripts::Network::IRC::IrcState* get_IrcState()
		{
			return ((::Assets::_MX::Program::Scripts::Network::IRC::IrcState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCSTATECHANGEDMESSAGE_GET_IRCSTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Assets::_MX::Program::Scripts::Network::IRC::IrcComponent* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcComponent*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCSTATECHANGEDMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

