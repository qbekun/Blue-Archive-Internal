#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_CONFIGURATION_PROVIDER_PROVIDERBASE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9627DA0)

namespace System::Configuration::Provider
{
	inline static constexpr unsigned int ProviderBase_TypeDefinitionIndex = 38062;

	class ProviderBase : public Il2CppObject
	{
	public:
		::System::Void Initialize(::System::String* str, ::System::Collections::Specialized::NameValueCollection* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Collections::Specialized::NameValueCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_PROVIDER_PROVIDERBASE_INITIALIZE_OFFSET))(str, arg, nullptr);
		}

	};
}

