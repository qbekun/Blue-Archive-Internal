#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_WEBUTILITYELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB4B00)
#define SYSTEM_NET_CONFIGURATION_WEBUTILITYELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB4B30)
#define SYSTEM_NET_CONFIGURATION_WEBUTILITYELEMENT_GET_UNICODEDECODINGCONFORMANCE_OFFSET UNITYSDK_OFFSET(0x9AB4B60)
#define SYSTEM_NET_CONFIGURATION_WEBUTILITYELEMENT_SET_UNICODEDECODINGCONFORMANCE_OFFSET UNITYSDK_OFFSET(0x9AB4B90)
#define SYSTEM_NET_CONFIGURATION_WEBUTILITYELEMENT_GET_UNICODEENCODINGCONFORMANCE_OFFSET UNITYSDK_OFFSET(0x9AB4BC0)
#define SYSTEM_NET_CONFIGURATION_WEBUTILITYELEMENT_SET_UNICODEENCODINGCONFORMANCE_OFFSET UNITYSDK_OFFSET(0x9AB4BF0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int WebUtilityElement_TypeDefinitionIndex = 30003;

	class WebUtilityElement : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBUTILITYELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBUTILITYELEMENT_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Net::Configuration::UnicodeDecodingConformance* get_UnicodeDecodingConformance()
		{
			return (return (::System::Net::Configuration::UnicodeDecodingConformance*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBUTILITYELEMENT_GET_UNICODEDECODINGCONFORMANCE_OFFSET))(nullptr);
		}

		::System::Void set_UnicodeDecodingConformance(::System::Net::Configuration::UnicodeDecodingConformance* arg)
		{
			((::System::Void(*)(::System::Net::Configuration::UnicodeDecodingConformance*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBUTILITYELEMENT_SET_UNICODEDECODINGCONFORMANCE_OFFSET))(arg, nullptr);
		}

		::System::Net::Configuration::UnicodeEncodingConformance* get_UnicodeEncodingConformance()
		{
			return (return (::System::Net::Configuration::UnicodeEncodingConformance*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBUTILITYELEMENT_GET_UNICODEENCODINGCONFORMANCE_OFFSET))(nullptr);
		}

		::System::Void set_UnicodeEncodingConformance(::System::Net::Configuration::UnicodeEncodingConformance* arg)
		{
			((::System::Void(*)(::System::Net::Configuration::UnicodeEncodingConformance*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBUTILITYELEMENT_SET_UNICODEENCODINGCONFORMANCE_OFFSET))(arg, nullptr);
		}

	};
}

