#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB1410)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB1440)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB1470)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9AB14A0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x9AB14D0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x9AB1500)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x9AB1530)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x9AB1560)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9AB1590)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9AB15C0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x9AB15F0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x9AB1620)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x9AB1650)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x9AB1680)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_SERIALIZEAS_OFFSET UNITYSDK_OFFSET(0x9AB16B0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_SERIALIZEAS_OFFSET UNITYSDK_OFFSET(0x9AB16E0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_THROWONERRORDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x9AB1710)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_THROWONERRORDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x9AB1740)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_THROWONERRORSERIALIZING_OFFSET UNITYSDK_OFFSET(0x9AB1770)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_THROWONERRORSERIALIZING_OFFSET UNITYSDK_OFFSET(0x9AB17A0)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsProperty_TypeDefinitionIndex = 29964;

	class SettingsProperty : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Configuration::SettingsProperty* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingsProperty*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Type* arg, ::System::Configuration::SettingsProvider* arg, ::System::Boolean arg, ::System::Object* arg, ::System::Configuration::SettingsSerializeAs* arg, ::System::Configuration::SettingsAttributeDictionary* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Type*, ::System::Configuration::SettingsProvider*, ::System::Boolean, ::System::Object*, ::System::Configuration::SettingsSerializeAs*, ::System::Configuration::SettingsAttributeDictionary*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_.CTOR_OFFSET))(str, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Configuration::SettingsAttributeDictionary* get_Attributes()
		{
			return (return (::System::Configuration::SettingsAttributeDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Object* get_DefaultValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_DEFAULTVALUE_OFFSET))(nullptr);
		}

		::System::Void set_DefaultValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_DEFAULTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Void set_IsReadOnly(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_ISREADONLY_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Type* get_PropertyType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_PROPERTYTYPE_OFFSET))(nullptr);
		}

		::System::Void set_PropertyType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_PROPERTYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Configuration::SettingsProvider* get_Provider()
		{
			return (return (::System::Configuration::SettingsProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_PROVIDER_OFFSET))(nullptr);
		}

		::System::Void set_Provider(::System::Configuration::SettingsProvider* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingsProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_PROVIDER_OFFSET))(arg, nullptr);
		}

		::System::Configuration::SettingsSerializeAs* get_SerializeAs()
		{
			return (return (::System::Configuration::SettingsSerializeAs*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_SERIALIZEAS_OFFSET))(nullptr);
		}

		::System::Void set_SerializeAs(::System::Configuration::SettingsSerializeAs* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingsSerializeAs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_SERIALIZEAS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ThrowOnErrorDeserializing()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_THROWONERRORDESERIALIZING_OFFSET))(nullptr);
		}

		::System::Void set_ThrowOnErrorDeserializing(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_THROWONERRORDESERIALIZING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ThrowOnErrorSerializing()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_GET_THROWONERRORSERIALIZING_OFFSET))(nullptr);
		}

		::System::Void set_ThrowOnErrorSerializing(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTY_SET_THROWONERRORSERIALIZING_OFFSET))(arg, nullptr);
		}

	};
}

