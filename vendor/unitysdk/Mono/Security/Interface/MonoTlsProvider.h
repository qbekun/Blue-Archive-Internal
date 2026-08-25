#pragma once
#include "../../../unitysdk.h"

#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x910C5D0)
#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDER_GET_ID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDER_GET_SUPPORTSSSLSTREAM_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDER_GET_SUPPORTSCONNECTIONINFO_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDER_GET_SUPPORTSMONOEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDER_GET_SUPPORTEDPROTOCOLS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDER_GET_SUPPORTSCLEANSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int MonoTlsProvider_TypeDefinitionIndex = 35798;

	class MonoTlsProvider : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Guid* get_ID()
		{
			return (return (::System::Guid*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDER_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDER_GET_NAME_OFFSET))(nullptr);
		}

		::System::Boolean get_SupportsSslStream()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDER_GET_SUPPORTSSSLSTREAM_OFFSET))(nullptr);
		}

		::System::Boolean get_SupportsConnectionInfo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDER_GET_SUPPORTSCONNECTIONINFO_OFFSET))(nullptr);
		}

		::System::Boolean get_SupportsMonoExtensions()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDER_GET_SUPPORTSMONOEXTENSIONS_OFFSET))(nullptr);
		}

		::System::Security::Authentication::SslProtocols* get_SupportedProtocols()
		{
			return (return (::System::Security::Authentication::SslProtocols*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDER_GET_SUPPORTEDPROTOCOLS_OFFSET))(nullptr);
		}

		::System::Boolean get_SupportsCleanShutdown()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDER_GET_SUPPORTSCLEANSHUTDOWN_OFFSET))(nullptr);
		}

	};
}

