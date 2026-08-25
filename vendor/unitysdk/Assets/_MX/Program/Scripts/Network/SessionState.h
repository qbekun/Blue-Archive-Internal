#pragma once
#include "../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class SessionState; }

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int SessionState_TypeDefinitionIndex = 10440;

	class SessionState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Assets::_MX::Program::Scripts::Network::SessionState* NONE; // 0x0
		::Assets::_MX::Program::Scripts::Network::SessionState* WAITING_SERVER_RESPONSE; // 0x0
		::Assets::_MX::Program::Scripts::Network::SessionState* RECEIVED_SERVER_RESPONSE; // 0x0
		::Assets::_MX::Program::Scripts::Network::SessionState* FILE_NOT_FOUND; // 0x0
		::Assets::_MX::Program::Scripts::Network::SessionState* FAILED; // 0x0
		::Assets::_MX::Program::Scripts::Network::SessionState* SUCCESS; // 0x0
		::Assets::_MX::Program::Scripts::Network::SessionState* CLIENT_NETWORK_NOT_REACHABLE; // 0x0
		::Assets::_MX::Program::Scripts::Network::SessionState* SERVER_RESPONSE_ERROR; // 0x0
		::Assets::_MX::Program::Scripts::Network::SessionState* SERVER_NOT_RESPONSE; // 0x0

	};
}

