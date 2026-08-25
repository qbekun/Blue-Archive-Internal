#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SETTINGSPROVIDERCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB1CE0)
#define SYSTEM_CONFIGURATION_SETTINGSPROVIDERCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9AB1D10)
#define SYSTEM_CONFIGURATION_SETTINGSPROVIDERCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x9AB1D40)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsProviderCollection_TypeDefinitionIndex = 29970;

	class SettingsProviderCollection : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROVIDERCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Configuration::SettingsProvider* get_Item(::System::String* str)
		{
			return (return (::System::Configuration::SettingsProvider*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROVIDERCOLLECTION_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Void Add(::System::Configuration::Provider::ProviderBase* arg)
		{
			((::System::Void(*)(::System::Configuration::Provider::ProviderBase*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROVIDERCOLLECTION_ADD_OFFSET))(arg, nullptr);
		}

	};
}

