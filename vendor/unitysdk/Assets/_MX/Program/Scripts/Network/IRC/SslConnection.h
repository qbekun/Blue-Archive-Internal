#pragma once
#include "../../../../../../unitysdk.h"

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_SSLCONNECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xE5E660)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_SSLCONNECTION_CONNECT_OFFSET UNITYSDK_OFFSET(0xE5EC90)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_SSLCONNECTION_VALIDATESERVERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0xE626B0)

namespace Assets::_MX::Program::Scripts::Network::IRC
{
	inline static constexpr unsigned int SslConnection_TypeDefinitionIndex = 10478;

	class SslConnection : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_SSLCONNECTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean Connect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_SSLCONNECTION_CONNECT_OFFSET))(nullptr);
		}

		::System::Boolean ValidateServerCertificate(::System::Object* arg, ::System::Security::Cryptography::X509Certificates::X509Certificate* arg2, ::System::Security::Cryptography::X509Certificates::X509Chain* arg3, ::System::Net::Security::SslPolicyErrors* arg4)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_SSLCONNECTION_VALIDATESERVERCERTIFICATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

