#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_DESERIALIZESECTION_OFFSET UNITYSDK_OFFSET(0x9627F80)
#define SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0x9627FB0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_RESETMODIFIED_OFFSET UNITYSDK_OFFSET(0x9627FE0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_SERIALIZESECTION_OFFSET UNITYSDK_OFFSET(0x9628010)

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigurationSection_TypeDefinitionIndex = 38065;

	class ConfigurationSection : public Il2CppObject
	{
	public:
		::System::Void DeserializeSection(::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_DESERIALIZESECTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsModified()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_ISMODIFIED_OFFSET))(nullptr);
		}

		::System::Void ResetModified()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_RESETMODIFIED_OFFSET))(nullptr);
		}

		::System::String* SerializeSection(::System::Configuration::ConfigurationElement* arg, ::System::String* str, ::System::Configuration::ConfigurationSaveMode* arg)
		{
			return (return (::System::String*(*)(::System::Configuration::ConfigurationElement*, ::System::String*, ::System::Configuration::ConfigurationSaveMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONSECTION_SERIALIZESECTION_OFFSET))(arg, str, arg, nullptr);
		}

	};
}

