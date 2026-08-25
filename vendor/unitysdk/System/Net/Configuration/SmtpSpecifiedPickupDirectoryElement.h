#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_SMTPSPECIFIEDPICKUPDIRECTORYELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB3CF0)
#define SYSTEM_NET_CONFIGURATION_SMTPSPECIFIEDPICKUPDIRECTORYELEMENT_GET_PICKUPDIRECTORYLOCATION_OFFSET UNITYSDK_OFFSET(0x9AB3D20)
#define SYSTEM_NET_CONFIGURATION_SMTPSPECIFIEDPICKUPDIRECTORYELEMENT_SET_PICKUPDIRECTORYLOCATION_OFFSET UNITYSDK_OFFSET(0x9AB3D50)
#define SYSTEM_NET_CONFIGURATION_SMTPSPECIFIEDPICKUPDIRECTORYELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB3D80)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int SmtpSpecifiedPickupDirectoryElement_TypeDefinitionIndex = 29995;

	class SmtpSpecifiedPickupDirectoryElement : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSPECIFIEDPICKUPDIRECTORYELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_PickupDirectoryLocation()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSPECIFIEDPICKUPDIRECTORYELEMENT_GET_PICKUPDIRECTORYLOCATION_OFFSET))(nullptr);
		}

		::System::Void set_PickupDirectoryLocation(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSPECIFIEDPICKUPDIRECTORYELEMENT_SET_PICKUPDIRECTORYLOCATION_OFFSET))(str, nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSPECIFIEDPICKUPDIRECTORYELEMENT_GET_PROPERTIES_OFFSET))(nullptr);
		}

	};
}

