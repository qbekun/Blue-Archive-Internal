#pragma once
#include "../../../unitysdk.h"

namespace Mono::Net::Security { class MobileTlsProvider; }

#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_GETPROVIDERINTERNAL_OFFSET UNITYSDK_OFFSET(0x96D3870)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_INITIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x96D8860)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_LOOKUPPROVIDER_OFFSET UNITYSDK_OFFSET(0x96D9140)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_INITIALIZEPROVIDERREGISTRATION_OFFSET UNITYSDK_OFFSET(0x96D8CD0)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_POPULATEUNITYPROVIDERS_OFFSET UNITYSDK_OFFSET(0x96D9780)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_POPULATEPROVIDERS_OFFSET UNITYSDK_OFFSET(0x96D98C0)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_ISBTLSSUPPORTED_OFFSET UNITYSDK_OFFSET(0x96D9AF0)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_CREATEDEFAULTPROVIDERIMPL_OFFSET UNITYSDK_OFFSET(0x96D8F50)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_GETPROVIDER_OFFSET UNITYSDK_OFFSET(0x96D9BB0)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x96D9C10)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int MonoTlsProviderFactory_TypeDefinitionIndex = 29079;

	class MonoTlsProviderFactory : public Il2CppObject
	{
	public:
		::System::Object* locker; // 0x0
		::System::Boolean initialized; // 0x8
		::Mono::Net::Security::MobileTlsProvider* defaultProvider; // 0x10
		Il2CppObject* providerRegistration; // 0x18
		Il2CppObject* providerCache; // 0x20
		::System::Guid* UnityTlsId; // 0x28
		::System::Guid* AppleTlsId; // 0x38
		::System::Guid* BtlsId; // 0x48

		::Mono::Net::Security::MobileTlsProvider* GetProviderInternal()
		{
			return (return (::Mono::Net::Security::MobileTlsProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_GETPROVIDERINTERNAL_OFFSET))(nullptr);
		}

		::System::Void InitializeInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_INITIALIZEINTERNAL_OFFSET))(nullptr);
		}

		::Mono::Net::Security::MobileTlsProvider* LookupProvider(::System::String* str, ::System::Boolean arg)
		{
			return (return (::Mono::Net::Security::MobileTlsProvider*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_LOOKUPPROVIDER_OFFSET))(str, arg, nullptr);
		}

		::System::Void InitializeProviderRegistration()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_INITIALIZEPROVIDERREGISTRATION_OFFSET))(nullptr);
		}

		::System::Void PopulateUnityProviders()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_POPULATEUNITYPROVIDERS_OFFSET))(nullptr);
		}

		::System::Void PopulateProviders()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_POPULATEPROVIDERS_OFFSET))(nullptr);
		}

		::System::Boolean IsBtlsSupported()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_ISBTLSSUPPORTED_OFFSET))(nullptr);
		}

		::Mono::Net::Security::MobileTlsProvider* CreateDefaultProviderImpl()
		{
			return (return (::Mono::Net::Security::MobileTlsProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_CREATEDEFAULTPROVIDERIMPL_OFFSET))(nullptr);
		}

		::Mono::Net::Security::MobileTlsProvider* GetProvider()
		{
			return (return (::Mono::Net::Security::MobileTlsProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_GETPROVIDER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

