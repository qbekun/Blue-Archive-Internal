#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_SMTPSECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB3780)
#define SYSTEM_NET_CONFIGURATION_SMTPSECTION_GET_DELIVERYFORMAT_OFFSET UNITYSDK_OFFSET(0x9AB37B0)
#define SYSTEM_NET_CONFIGURATION_SMTPSECTION_SET_DELIVERYFORMAT_OFFSET UNITYSDK_OFFSET(0x9AB37E0)
#define SYSTEM_NET_CONFIGURATION_SMTPSECTION_GET_DELIVERYMETHOD_OFFSET UNITYSDK_OFFSET(0x9AB3810)
#define SYSTEM_NET_CONFIGURATION_SMTPSECTION_SET_DELIVERYMETHOD_OFFSET UNITYSDK_OFFSET(0x9AB3840)
#define SYSTEM_NET_CONFIGURATION_SMTPSECTION_GET_FROM_OFFSET UNITYSDK_OFFSET(0x9AB3870)
#define SYSTEM_NET_CONFIGURATION_SMTPSECTION_SET_FROM_OFFSET UNITYSDK_OFFSET(0x9AB38A0)
#define SYSTEM_NET_CONFIGURATION_SMTPSECTION_GET_NETWORK_OFFSET UNITYSDK_OFFSET(0x9AB38D0)
#define SYSTEM_NET_CONFIGURATION_SMTPSECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB3900)
#define SYSTEM_NET_CONFIGURATION_SMTPSECTION_GET_SPECIFIEDPICKUPDIRECTORY_OFFSET UNITYSDK_OFFSET(0x9AB3930)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int SmtpSection_TypeDefinitionIndex = 29993;

	class SmtpSection : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Net::Mail::SmtpDeliveryFormat* get_DeliveryFormat()
		{
			return (return (::System::Net::Mail::SmtpDeliveryFormat*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSECTION_GET_DELIVERYFORMAT_OFFSET))(nullptr);
		}

		::System::Void set_DeliveryFormat(::System::Net::Mail::SmtpDeliveryFormat* arg)
		{
			((::System::Void(*)(::System::Net::Mail::SmtpDeliveryFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSECTION_SET_DELIVERYFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Net::Mail::SmtpDeliveryMethod* get_DeliveryMethod()
		{
			return (return (::System::Net::Mail::SmtpDeliveryMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSECTION_GET_DELIVERYMETHOD_OFFSET))(nullptr);
		}

		::System::Void set_DeliveryMethod(::System::Net::Mail::SmtpDeliveryMethod* arg)
		{
			((::System::Void(*)(::System::Net::Mail::SmtpDeliveryMethod*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSECTION_SET_DELIVERYMETHOD_OFFSET))(arg, nullptr);
		}

		::System::String* get_From()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSECTION_GET_FROM_OFFSET))(nullptr);
		}

		::System::Void set_From(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSECTION_SET_FROM_OFFSET))(str, nullptr);
		}

		::System::Net::Configuration::SmtpNetworkElement* get_Network()
		{
			return (return (::System::Net::Configuration::SmtpNetworkElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSECTION_GET_NETWORK_OFFSET))(nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSECTION_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement* get_SpecifiedPickupDirectory()
		{
			return (return (::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SMTPSECTION_GET_SPECIFIEDPICKUPDIRECTORY_OFFSET))(nullptr);
		}

	};
}

