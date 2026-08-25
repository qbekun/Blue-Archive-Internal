#pragma once
#include "../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class HttpGameSession; }
namespace Assets::_MX::Program::Scripts::Network { class SessionState; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONSTATECHANGEDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE55B70)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONSTATECHANGEDMESSAGE_GET_SESSIONSTATE_OFFSET UNITYSDK_OFFSET(0xE55BA0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONSTATECHANGEDMESSAGE_GET_SESSION_OFFSET UNITYSDK_OFFSET(0xE55BE0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONSTATECHANGEDMESSAGE_GET_SESSIONID_OFFSET UNITYSDK_OFFSET(0xE55BF0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONSTATECHANGEDMESSAGE_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xE55C10)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int SessionStateChangedMessage_TypeDefinitionIndex = 10454;

	class SessionStateChangedMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::Assets::_MX::Program::Scripts::Network::HttpGameSession* _Session_k__BackingField; // 0x18

		::System::Void .ctor(::Assets::_MX::Program::Scripts::Network::HttpGameSession* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::HttpGameSession*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONSTATECHANGEDMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::SessionState* get_SessionState()
		{
			return ((::Assets::_MX::Program::Scripts::Network::SessionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONSTATECHANGEDMESSAGE_GET_SESSIONSTATE_OFFSET))(nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::HttpGameSession* get_Session()
		{
			return ((::Assets::_MX::Program::Scripts::Network::HttpGameSession*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONSTATECHANGEDMESSAGE_GET_SESSION_OFFSET))(nullptr);
		}

		::System::Int32 get_SessionId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONSTATECHANGEDMESSAGE_GET_SESSIONID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONSTATECHANGEDMESSAGE_GET_ISFINISHED_OFFSET))(nullptr);
		}

	};
}

