#pragma once
#include "../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGWRAPPER`1_GET_MESSAGEHANDLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGWRAPPER`1_SET_MESSAGEHANDLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGWRAPPER`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGWRAPPER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGWRAPPER`1_DELEGATEEQUALS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int MessagingWrapper`1_TypeDefinitionIndex = 10420;

	class MessagingWrapper`1 : public Il2CppObject
	{
	public:
		::System::Delegate* _MessageHandler_k__BackingField; // 0x0

		::System::Delegate* get_MessageHandler()
		{
			return ((::System::Delegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGWRAPPER`1_GET_MESSAGEHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_MessageHandler(::System::Delegate* arg)
		{
			((::System::Void(*)(::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGWRAPPER`1_SET_MESSAGEHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Boolean Invoke(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGWRAPPER`1_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGWRAPPER`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean DelegateEquals(::System::Delegate* arg)
		{
			return ((::System::Boolean(*)(::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGINGWRAPPER`1_DELEGATEEQUALS_OFFSET))(arg, nullptr);
		}

	};
}

