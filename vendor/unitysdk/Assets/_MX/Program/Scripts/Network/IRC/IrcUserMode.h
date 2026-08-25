#pragma once
#include "../../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcUserMode; }

namespace Assets::_MX::Program::Scripts::Network::IRC
{
	inline static constexpr unsigned int IrcUserMode_TypeDefinitionIndex = 10475;

	class IrcUserMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Assets::_MX::Program::Scripts::Network::IRC::IrcUserMode* Away; // 0x0
		::Assets::_MX::Program::Scripts::Network::IRC::IrcUserMode* Invisible; // 0x0
		::Assets::_MX::Program::Scripts::Network::IRC::IrcUserMode* Wallops; // 0x0
		::Assets::_MX::Program::Scripts::Network::IRC::IrcUserMode* Restricted; // 0x0
		::Assets::_MX::Program::Scripts::Network::IRC::IrcUserMode* Operator; // 0x0
		::Assets::_MX::Program::Scripts::Network::IRC::IrcUserMode* LocalOperator; // 0x0
		::Assets::_MX::Program::Scripts::Network::IRC::IrcUserMode* Notices; // 0x0

	};
}

