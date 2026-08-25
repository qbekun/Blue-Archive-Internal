#pragma once
#include "../../../../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKSERVICE_PARSEPROTOCOL_OFFSET UNITYSDK_OFFSET(0xE2FA00)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKSERVICE_PARSEPACKETSTRING_OFFSET UNITYSDK_OFFSET(0xE2FB40)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKSERVICE_SHOWDEFAULTNETWORKERROR_OFFSET UNITYSDK_OFFSET(0xE2FBD0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE2FE00)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKSERVICE_PARSERECEIVEDSTRING_OFFSET UNITYSDK_OFFSET(0xE2FE10)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKSERVICE_GETIPADDRESS_OFFSET UNITYSDK_OFFSET(0xE2FFC0)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int NetworkService_TypeDefinitionIndex = 10439;

	class NetworkService : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* ParseProtocol(::System::String* str)
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKSERVICE_PARSEPROTOCOL_OFFSET))(str, nullptr);
		}

		::System::String* ParsePacketString(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKSERVICE_PARSEPACKETSTRING_OFFSET))(str, nullptr);
		}

		::System::Void ShowDefaultNetworkError(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKSERVICE_SHOWDEFAULTNETWORKERROR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKSERVICE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* ParseReceivedString(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKSERVICE_PARSERECEIVEDSTRING_OFFSET))(str, nullptr);
		}

		::System::String* GetIpAddress(::System::Net::Sockets::AddressFamily* arg)
		{
			return ((::System::String*(*)(::System::Net::Sockets::AddressFamily*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKSERVICE_GETIPADDRESS_OFFSET))(arg, nullptr);
		}

	};
}

