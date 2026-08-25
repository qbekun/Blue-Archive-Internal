#pragma once
#include "../../../../../unitysdk.h"

namespace MX::NetworkProtocol { class RequestPacket; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKSENDER_ISRESENDABLE_OFFSET UNITYSDK_OFFSET(0xE2F520)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKSENDER_SENDREQUEST_OFFSET UNITYSDK_OFFSET(0xE2F5B0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKSENDER_SENDREQUESTGATEWAY_OFFSET UNITYSDK_OFFSET(0xE2F7D0)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int NetworkSender_TypeDefinitionIndex = 10436;

	class NetworkSender : public Il2CppObject
	{
	public:
		::System::Boolean IsResendAble(::MX::NetworkProtocol::RequestPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::RequestPacket*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKSENDER_ISRESENDABLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 SendRequest(::MX::NetworkProtocol::RequestPacket* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::System::Action* arg4)
		{
			return ((::System::Int32(*)(::MX::NetworkProtocol::RequestPacket*, Il2CppObject*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKSENDER_SENDREQUEST_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int32 SendRequestGateway(::MX::NetworkProtocol::RequestPacket* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::System::Action* arg4)
		{
			return ((::System::Int32(*)(::MX::NetworkProtocol::RequestPacket*, Il2CppObject*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKSENDER_SENDREQUESTGATEWAY_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

