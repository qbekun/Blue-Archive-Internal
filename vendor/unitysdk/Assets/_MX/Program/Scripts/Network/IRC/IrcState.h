#pragma once
#include "../../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcState; }

namespace Assets::_MX::Program::Scripts::Network::IRC
{
	inline static constexpr unsigned int IrcState_TypeDefinitionIndex = 10472;

	class IrcState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Assets::_MX::Program::Scripts::Network::IRC::IrcState* None; // 0x0
		::Assets::_MX::Program::Scripts::Network::IRC::IrcState* Initialized; // 0x0
		::Assets::_MX::Program::Scripts::Network::IRC::IrcState* Connected; // 0x0
		::Assets::_MX::Program::Scripts::Network::IRC::IrcState* ConnectFailed; // 0x0
		::Assets::_MX::Program::Scripts::Network::IRC::IrcState* Disconnected; // 0x0
		::Assets::_MX::Program::Scripts::Network::IRC::IrcState* Registered; // 0x0
		::Assets::_MX::Program::Scripts::Network::IRC::IrcState* Kicked; // 0x0

	};
}

