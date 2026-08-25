#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_ICONFIGURATIONSECTIONHANDLER_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Configuration
{
	inline static constexpr unsigned int IConfigurationSectionHandler_TypeDefinitionIndex = 29960;

	class IConfigurationSectionHandler : public Il2CppObject
	{
	public:
		::System::Object* Create(::System::Object* arg, ::System::Object* arg, ::System::Xml::XmlNode* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Object*, ::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_ICONFIGURATIONSECTIONHANDLER_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

