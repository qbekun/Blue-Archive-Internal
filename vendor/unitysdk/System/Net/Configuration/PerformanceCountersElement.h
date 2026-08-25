#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_PERFORMANCECOUNTERSELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB4410)
#define SYSTEM_NET_CONFIGURATION_PERFORMANCECOUNTERSELEMENT_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9AB4440)
#define SYSTEM_NET_CONFIGURATION_PERFORMANCECOUNTERSELEMENT_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9AB4470)
#define SYSTEM_NET_CONFIGURATION_PERFORMANCECOUNTERSELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB44A0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int PerformanceCountersElement_TypeDefinitionIndex = 29999;

	class PerformanceCountersElement : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PERFORMANCECOUNTERSELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_Enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PERFORMANCECOUNTERSELEMENT_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Void set_Enabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PERFORMANCECOUNTERSELEMENT_SET_ENABLED_OFFSET))(arg, nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PERFORMANCECOUNTERSELEMENT_GET_PROPERTIES_OFFSET))(nullptr);
		}

	};
}

