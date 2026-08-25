#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SETTINGELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB5E10)
#define SYSTEM_CONFIGURATION_SETTINGELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB5E40)
#define SYSTEM_CONFIGURATION_SETTINGELEMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9AB5E70)
#define SYSTEM_CONFIGURATION_SETTINGELEMENT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9AB5EA0)
#define SYSTEM_CONFIGURATION_SETTINGELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB5ED0)
#define SYSTEM_CONFIGURATION_SETTINGELEMENT_GET_SERIALIZEAS_OFFSET UNITYSDK_OFFSET(0x9AB5F00)
#define SYSTEM_CONFIGURATION_SETTINGELEMENT_SET_SERIALIZEAS_OFFSET UNITYSDK_OFFSET(0x9AB5F30)
#define SYSTEM_CONFIGURATION_SETTINGELEMENT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9AB5F60)
#define SYSTEM_CONFIGURATION_SETTINGELEMENT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9AB5F90)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingElement_TypeDefinitionIndex = 30021;

	class SettingElement : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Configuration::SettingsSerializeAs* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Configuration::SettingsSerializeAs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENT_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENT_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENT_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENT_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Configuration::SettingsSerializeAs* get_SerializeAs()
		{
			return (return (::System::Configuration::SettingsSerializeAs*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENT_GET_SERIALIZEAS_OFFSET))(nullptr);
		}

		::System::Void set_SerializeAs(::System::Configuration::SettingsSerializeAs* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingsSerializeAs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENT_SET_SERIALIZEAS_OFFSET))(arg, nullptr);
		}

		::System::Configuration::SettingValueElement* get_Value()
		{
			return (return (::System::Configuration::SettingValueElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENT_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::Configuration::SettingValueElement* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingValueElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGELEMENT_SET_VALUE_OFFSET))(arg, nullptr);
		}

	};
}

