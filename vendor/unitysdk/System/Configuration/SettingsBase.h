#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SETTINGSBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB0E70)
#define SYSTEM_CONFIGURATION_SETTINGSBASE_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x9AB0EA0)
#define SYSTEM_CONFIGURATION_SETTINGSBASE_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x9AB0ED0)
#define SYSTEM_CONFIGURATION_SETTINGSBASE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9AB0F00)
#define SYSTEM_CONFIGURATION_SETTINGSBASE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9AB0F30)
#define SYSTEM_CONFIGURATION_SETTINGSBASE_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB0F60)
#define SYSTEM_CONFIGURATION_SETTINGSBASE_GET_PROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x9AB0F90)
#define SYSTEM_CONFIGURATION_SETTINGSBASE_GET_PROVIDERS_OFFSET UNITYSDK_OFFSET(0x9AB0FC0)
#define SYSTEM_CONFIGURATION_SETTINGSBASE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9AB0FF0)
#define SYSTEM_CONFIGURATION_SETTINGSBASE_SAVE_OFFSET UNITYSDK_OFFSET(0x9AB1020)
#define SYSTEM_CONFIGURATION_SETTINGSBASE_SYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x9AB1050)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsBase_TypeDefinitionIndex = 29961;

	class SettingsBase : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Configuration::SettingsContext* get_Context()
		{
			return (return (::System::Configuration::SettingsContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSBASE_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSBASE_GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* get_Item(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSBASE_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Void set_Item(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSBASE_SET_ITEM_OFFSET))(str, arg, nullptr);
		}

		::System::Configuration::SettingsPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::SettingsPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSBASE_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Configuration::SettingsPropertyValueCollection* get_PropertyValues()
		{
			return (return (::System::Configuration::SettingsPropertyValueCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSBASE_GET_PROPERTYVALUES_OFFSET))(nullptr);
		}

		::System::Configuration::SettingsProviderCollection* get_Providers()
		{
			return (return (::System::Configuration::SettingsProviderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSBASE_GET_PROVIDERS_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Configuration::SettingsContext* arg, ::System::Configuration::SettingsPropertyCollection* arg, ::System::Configuration::SettingsProviderCollection* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingsContext*, ::System::Configuration::SettingsPropertyCollection*, ::System::Configuration::SettingsProviderCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSBASE_INITIALIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Save()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSBASE_SAVE_OFFSET))(nullptr);
		}

		::System::Configuration::SettingsBase* Synchronized(::System::Configuration::SettingsBase* arg)
		{
			return (return (::System::Configuration::SettingsBase*(*)(::System::Configuration::SettingsBase*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSBASE_SYNCHRONIZED_OFFSET))(arg, nullptr);
		}

	};
}

