#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB5240)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB5270)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB52A0)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB52D0)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x9AB5300)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9AB5330)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9AB5360)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB5390)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GET_PROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x9AB53C0)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GET_PROVIDERS_OFFSET UNITYSDK_OFFSET(0x9AB53F0)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GET_SETTINGSKEY_OFFSET UNITYSDK_OFFSET(0x9AB5420)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_SET_SETTINGSKEY_OFFSET UNITYSDK_OFFSET(0x9AB5450)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ADD_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x9AB5480)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_REMOVE_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x9AB54B0)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ADD_SETTINGCHANGING_OFFSET UNITYSDK_OFFSET(0x9AB54E0)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_REMOVE_SETTINGCHANGING_OFFSET UNITYSDK_OFFSET(0x9AB5510)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ADD_SETTINGSLOADED_OFFSET UNITYSDK_OFFSET(0x9AB5540)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_REMOVE_SETTINGSLOADED_OFFSET UNITYSDK_OFFSET(0x9AB5570)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ADD_SETTINGSSAVING_OFFSET UNITYSDK_OFFSET(0x9AB55A0)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_REMOVE_SETTINGSSAVING_OFFSET UNITYSDK_OFFSET(0x9AB55D0)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GETPREVIOUSVERSION_OFFSET UNITYSDK_OFFSET(0x9AB5600)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x9AB5630)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ONSETTINGCHANGING_OFFSET UNITYSDK_OFFSET(0x9AB5660)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ONSETTINGSLOADED_OFFSET UNITYSDK_OFFSET(0x9AB5690)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ONSETTINGSSAVING_OFFSET UNITYSDK_OFFSET(0x9AB56C0)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_RELOAD_OFFSET UNITYSDK_OFFSET(0x9AB56F0)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_RESET_OFFSET UNITYSDK_OFFSET(0x9AB5720)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_SAVE_OFFSET UNITYSDK_OFFSET(0x9AB5750)
#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_UPGRADE_OFFSET UNITYSDK_OFFSET(0x9AB5780)

namespace System::Configuration
{
	inline static constexpr unsigned int ApplicationSettingsBase_TypeDefinitionIndex = 30011;

	class ApplicationSettingsBase : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::IComponent* arg)
		{
			((::System::Void(*)(::System::ComponentModel::IComponent*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::IComponent* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::ComponentModel::IComponent*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Configuration::SettingsContext* get_Context()
		{
			return (return (::System::Configuration::SettingsContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Object* get_Item(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Void set_Item(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_SET_ITEM_OFFSET))(str, arg, nullptr);
		}

		::System::Configuration::SettingsPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::SettingsPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Configuration::SettingsPropertyValueCollection* get_PropertyValues()
		{
			return (return (::System::Configuration::SettingsPropertyValueCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GET_PROPERTYVALUES_OFFSET))(nullptr);
		}

		::System::Configuration::SettingsProviderCollection* get_Providers()
		{
			return (return (::System::Configuration::SettingsProviderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GET_PROVIDERS_OFFSET))(nullptr);
		}

		::System::String* get_SettingsKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GET_SETTINGSKEY_OFFSET))(nullptr);
		}

		::System::Void set_SettingsKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_SET_SETTINGSKEY_OFFSET))(str, nullptr);
		}

		::System::Void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ADD_PROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_REMOVE_PROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_SettingChanging(::System::Configuration::SettingChangingEventHandler* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingChangingEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ADD_SETTINGCHANGING_OFFSET))(arg, nullptr);
		}

		::System::Void remove_SettingChanging(::System::Configuration::SettingChangingEventHandler* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingChangingEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_REMOVE_SETTINGCHANGING_OFFSET))(arg, nullptr);
		}

		::System::Void add_SettingsLoaded(::System::Configuration::SettingsLoadedEventHandler* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingsLoadedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ADD_SETTINGSLOADED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_SettingsLoaded(::System::Configuration::SettingsLoadedEventHandler* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingsLoadedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_REMOVE_SETTINGSLOADED_OFFSET))(arg, nullptr);
		}

		::System::Void add_SettingsSaving(::System::Configuration::SettingsSavingEventHandler* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingsSavingEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ADD_SETTINGSSAVING_OFFSET))(arg, nullptr);
		}

		::System::Void remove_SettingsSaving(::System::Configuration::SettingsSavingEventHandler* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingsSavingEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_REMOVE_SETTINGSSAVING_OFFSET))(arg, nullptr);
		}

		::System::Object* GetPreviousVersion(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_GETPREVIOUSVERSION_OFFSET))(str, nullptr);
		}

		::System::Void OnPropertyChanged(::System::Object* arg, ::System::ComponentModel::PropertyChangedEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ONPROPERTYCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnSettingChanging(::System::Object* arg, ::System::Configuration::SettingChangingEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Configuration::SettingChangingEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ONSETTINGCHANGING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnSettingsLoaded(::System::Object* arg, ::System::Configuration::SettingsLoadedEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Configuration::SettingsLoadedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ONSETTINGSLOADED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnSettingsSaving(::System::Object* arg, ::System::ComponentModel::CancelEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::ComponentModel::CancelEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_ONSETTINGSSAVING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_RELOAD_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_RESET_OFFSET))(nullptr);
		}

		::System::Void Save()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_SAVE_OFFSET))(nullptr);
		}

		::System::Void Upgrade()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSBASE_UPGRADE_OFFSET))(nullptr);
		}

	};
}

