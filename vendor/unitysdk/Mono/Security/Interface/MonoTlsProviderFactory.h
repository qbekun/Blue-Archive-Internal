#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::Interface { class MonoTlsProvider; }

#define MONO_SECURITY_INTERFACE_MONOTLSPROVIDERFACTORY_GETPROVIDER_OFFSET UNITYSDK_OFFSET(0x910C5E0)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int MonoTlsProviderFactory_TypeDefinitionIndex = 35799;

	class MonoTlsProviderFactory : public Il2CppObject
	{
	public:
		::Mono::Security::Interface::MonoTlsProvider* GetProvider()
		{
			return (return (::Mono::Security::Interface::MonoTlsProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSPROVIDERFACTORY_GETPROVIDER_OFFSET))(nullptr);
		}

	};
}

