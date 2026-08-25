#pragma once
#include "../../unitysdk.h"

namespace Mono::Security::Interface { class TlsProtocols; }
namespace Mono::Security::Interface { class AlertDescription; }

#define MONO_UNITY_UNITYTLSCONVERSIONS_GETMINPROTOCOL_OFFSET UNITYSDK_OFFSET(0x96CCDD0)
#define MONO_UNITY_UNITYTLSCONVERSIONS_GETMAXPROTOCOL_OFFSET UNITYSDK_OFFSET(0x96CCE00)
#define MONO_UNITY_UNITYTLSCONVERSIONS_CONVERTPROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x96CDDE0)
#define MONO_UNITY_UNITYTLSCONVERSIONS_VERIFYRESULTTOALERTDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x96C9C70)
#define MONO_UNITY_UNITYTLSCONVERSIONS_VERIFYRESULTTOPOLICYERRROR_OFFSET UNITYSDK_OFFSET(0x96CF4F0)
#define MONO_UNITY_UNITYTLSCONVERSIONS_VERIFYRESULTTOCHAINSTATUS_OFFSET UNITYSDK_OFFSET(0x96CF530)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTlsConversions_TypeDefinitionIndex = 29049;

	class UnityTlsConversions : public Il2CppObject
	{
	public:
		unitytls_protocol* GetMinProtocol(::System::Security::Authentication::SslProtocols* arg)
		{
			return (return (unitytls_protocol*(*)(::System::Security::Authentication::SslProtocols*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONVERSIONS_GETMINPROTOCOL_OFFSET))(arg, nullptr);
		}

		unitytls_protocol* GetMaxProtocol(::System::Security::Authentication::SslProtocols* arg)
		{
			return (return (unitytls_protocol*(*)(::System::Security::Authentication::SslProtocols*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONVERSIONS_GETMAXPROTOCOL_OFFSET))(arg, nullptr);
		}

		::Mono::Security::Interface::TlsProtocols* ConvertProtocolVersion(unitytls_protocol* arg)
		{
			return (return (::Mono::Security::Interface::TlsProtocols*(*)(unitytls_protocol*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONVERSIONS_CONVERTPROTOCOLVERSION_OFFSET))(arg, nullptr);
		}

		::Mono::Security::Interface::AlertDescription* VerifyResultToAlertDescription(unitytls_x509verify_result* arg, ::Mono::Security::Interface::AlertDescription* arg)
		{
			return (return (::Mono::Security::Interface::AlertDescription*(*)(unitytls_x509verify_result*, ::Mono::Security::Interface::AlertDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONVERSIONS_VERIFYRESULTTOALERTDESCRIPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Net::Security::SslPolicyErrors* VerifyResultToPolicyErrror(unitytls_x509verify_result* arg)
		{
			return (return (::System::Net::Security::SslPolicyErrors*(*)(unitytls_x509verify_result*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONVERSIONS_VERIFYRESULTTOPOLICYERRROR_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* VerifyResultToChainStatus(unitytls_x509verify_result* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags*(*)(unitytls_x509verify_result*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONVERSIONS_VERIFYRESULTTOCHAINSTATUS_OFFSET))(arg, nullptr);
		}

	};
}

