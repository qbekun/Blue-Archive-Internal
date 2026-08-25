#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_CONFIGURATIONSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB61A0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONSETTINGS_GET_APPSETTINGS_OFFSET UNITYSDK_OFFSET(0x9AB61D0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONSETTINGS_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x9AB6200)

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigurationSettings_TypeDefinitionIndex = 30023;

	class ConfigurationSettings : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONSETTINGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::Specialized::NameValueCollection* get_AppSettings()
		{
			return (return (::System::Collections::Specialized::NameValueCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONSETTINGS_GET_APPSETTINGS_OFFSET))(nullptr);
		}

		::System::Object* GetConfig(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONSETTINGS_GETCONFIG_OFFSET))(str, nullptr);
		}

	};
}

