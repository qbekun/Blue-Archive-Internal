#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_CONFIGURATION_PROVIDER_PROVIDERCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x9628120)

namespace System::Configuration::Provider
{
	inline static constexpr unsigned int ProviderCollection_TypeDefinitionIndex = 38072;

	class ProviderCollection : public Il2CppObject
	{
	public:
		::System::Void Add(::System::Configuration::Provider::ProviderBase* arg)
		{
			((::System::Void(*)(::System::Configuration::Provider::ProviderBase*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_PROVIDER_PROVIDERCOLLECTION_ADD_OFFSET))(arg, nullptr);
		}

	};
}

