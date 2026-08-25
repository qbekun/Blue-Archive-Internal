#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_IDNELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6450)
#define SYSTEM_CONFIGURATION_IDNELEMENT_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9AB6480)
#define SYSTEM_CONFIGURATION_IDNELEMENT_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9AB64B0)
#define SYSTEM_CONFIGURATION_IDNELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB64E0)

namespace System::Configuration
{
	inline static constexpr unsigned int IdnElement_TypeDefinitionIndex = 30028;

	class IdnElement : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IDNELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::UriIdnScope* get_Enabled()
		{
			return (return (::System::UriIdnScope*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IDNELEMENT_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Void set_Enabled(::System::UriIdnScope* arg)
		{
			((::System::Void(*)(::System::UriIdnScope*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IDNELEMENT_SET_ENABLED_OFFSET))(arg, nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IDNELEMENT_GET_PROPERTIES_OFFSET))(nullptr);
		}

	};
}

