#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB1A40)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_DESERIALIZED_OFFSET UNITYSDK_OFFSET(0x9AB1A70)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_SET_DESERIALIZED_OFFSET UNITYSDK_OFFSET(0x9AB1AA0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x9AB1AD0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x9AB1B00)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9AB1B30)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_PROPERTY_OFFSET UNITYSDK_OFFSET(0x9AB1B60)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_PROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x9AB1B90)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_SET_PROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x9AB1BC0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_SERIALIZEDVALUE_OFFSET UNITYSDK_OFFSET(0x9AB1BF0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_SET_SERIALIZEDVALUE_OFFSET UNITYSDK_OFFSET(0x9AB1C20)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_USINGDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x9AB1C50)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsPropertyValue_TypeDefinitionIndex = 29967;

	class SettingsPropertyValue : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Configuration::SettingsProperty* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingsProperty*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Deserialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_DESERIALIZED_OFFSET))(nullptr);
		}

		::System::Void set_Deserialized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_SET_DESERIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDirty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_ISDIRTY_OFFSET))(nullptr);
		}

		::System::Void set_IsDirty(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_SET_ISDIRTY_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Configuration::SettingsProperty* get_Property()
		{
			return (return (::System::Configuration::SettingsProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_PROPERTY_OFFSET))(nullptr);
		}

		::System::Object* get_PropertyValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_PROPERTYVALUE_OFFSET))(nullptr);
		}

		::System::Void set_PropertyValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_SET_PROPERTYVALUE_OFFSET))(arg, nullptr);
		}

		::System::Object* get_SerializedValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_SERIALIZEDVALUE_OFFSET))(nullptr);
		}

		::System::Void set_SerializedValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_SET_SERIALIZEDVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UsingDefaultValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYVALUE_GET_USINGDEFAULTVALUE_OFFSET))(nullptr);
		}

	};
}

