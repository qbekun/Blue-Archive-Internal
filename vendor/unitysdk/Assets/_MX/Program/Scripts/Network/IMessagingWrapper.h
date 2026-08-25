#pragma once
#include "../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IMESSAGINGWRAPPER_DELEGATEEQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IMESSAGINGWRAPPER_GET_MESSAGEHANDLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IMESSAGINGWRAPPER_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int IMessagingWrapper_TypeDefinitionIndex = 10418;

	class IMessagingWrapper : public Il2CppObject
	{
	public:
		::System::Boolean DelegateEquals(::System::Delegate* arg)
		{
			return ((::System::Boolean(*)(::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IMESSAGINGWRAPPER_DELEGATEEQUALS_OFFSET))(arg, nullptr);
		}

		::System::Delegate* get_MessageHandler()
		{
			return ((::System::Delegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IMESSAGINGWRAPPER_GET_MESSAGEHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean Invoke(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IMESSAGINGWRAPPER_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

