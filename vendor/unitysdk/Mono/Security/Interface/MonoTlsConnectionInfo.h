#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::Interface { class CipherSuiteCode; }
namespace Mono::Security::Interface { class TlsProtocols; }

#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_GET_CIPHERSUITECODE_OFFSET UNITYSDK_OFFSET(0x910C2E0)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_CIPHERSUITECODE_OFFSET UNITYSDK_OFFSET(0x910C2F0)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_GET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x910C300)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x910C310)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_PEERDOMAINNAME_OFFSET UNITYSDK_OFFSET(0x910C320)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x910C330)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x910C3C0)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int MonoTlsConnectionInfo_TypeDefinitionIndex = 35794;

	class MonoTlsConnectionInfo : public Il2CppObject
	{
	public:
		::Mono::Security::Interface::CipherSuiteCode* _CipherSuiteCode_k__BackingField; // 0x10
		::Mono::Security::Interface::TlsProtocols* _ProtocolVersion_k__BackingField; // 0x14
		::System::String* _PeerDomainName_k__BackingField; // 0x18

		::Mono::Security::Interface::CipherSuiteCode* get_CipherSuiteCode()
		{
			return (return (::Mono::Security::Interface::CipherSuiteCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_GET_CIPHERSUITECODE_OFFSET))(nullptr);
		}

		::System::Void set_CipherSuiteCode(::Mono::Security::Interface::CipherSuiteCode* arg)
		{
			((::System::Void(*)(::Mono::Security::Interface::CipherSuiteCode*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_CIPHERSUITECODE_OFFSET))(arg, nullptr);
		}

		::Mono::Security::Interface::TlsProtocols* get_ProtocolVersion()
		{
			return (return (::Mono::Security::Interface::TlsProtocols*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_GET_PROTOCOLVERSION_OFFSET))(nullptr);
		}

		::System::Void set_ProtocolVersion(::Mono::Security::Interface::TlsProtocols* arg)
		{
			((::System::Void(*)(::Mono::Security::Interface::TlsProtocols*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_PROTOCOLVERSION_OFFSET))(arg, nullptr);
		}

		::System::Void set_PeerDomainName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_PEERDOMAINNAME_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

