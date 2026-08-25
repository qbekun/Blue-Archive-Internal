#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_IGNORESECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9628150)
#define SYSTEM_CONFIGURATION_IGNORESECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9628180)
#define SYSTEM_CONFIGURATION_IGNORESECTION_DESERIALIZESECTION_OFFSET UNITYSDK_OFFSET(0x96281B0)
#define SYSTEM_CONFIGURATION_IGNORESECTION_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0x96281E0)
#define SYSTEM_CONFIGURATION_IGNORESECTION_RESET_OFFSET UNITYSDK_OFFSET(0x9628210)
#define SYSTEM_CONFIGURATION_IGNORESECTION_RESETMODIFIED_OFFSET UNITYSDK_OFFSET(0x9628240)
#define SYSTEM_CONFIGURATION_IGNORESECTION_SERIALIZESECTION_OFFSET UNITYSDK_OFFSET(0x9628270)

namespace System::Configuration
{
	inline static constexpr unsigned int IgnoreSection_TypeDefinitionIndex = 38073;

	class IgnoreSection : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IGNORESECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IGNORESECTION_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Void DeserializeSection(::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IGNORESECTION_DESERIALIZESECTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsModified()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IGNORESECTION_ISMODIFIED_OFFSET))(nullptr);
		}

		::System::Void Reset(::System::Configuration::ConfigurationElement* arg)
		{
			((::System::Void(*)(::System::Configuration::ConfigurationElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IGNORESECTION_RESET_OFFSET))(arg, nullptr);
		}

		::System::Void ResetModified()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IGNORESECTION_RESETMODIFIED_OFFSET))(nullptr);
		}

		::System::String* SerializeSection(::System::Configuration::ConfigurationElement* arg, ::System::String* str, ::System::Configuration::ConfigurationSaveMode* arg)
		{
			return (return (::System::String*(*)(::System::Configuration::ConfigurationElement*, ::System::String*, ::System::Configuration::ConfigurationSaveMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IGNORESECTION_SERIALIZESECTION_OFFSET))(arg, str, arg, nullptr);
		}

	};
}

