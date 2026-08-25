#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_IPADDRESSPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x9B90450)
#define SYSTEM_NET_IPADDRESSPARSER_IPV4ADDRESSTOSTRING_OFFSET UNITYSDK_OFFSET(0x9B91110)
#define SYSTEM_NET_IPADDRESSPARSER_IPV4ADDRESSTOSTRING_OFFSET UNITYSDK_OFFSET(0x9B925F0)
#define SYSTEM_NET_IPADDRESSPARSER_IPV4ADDRESSTOSTRINGHELPER_OFFSET UNITYSDK_OFFSET(0x9B92260)
#define SYSTEM_NET_IPADDRESSPARSER_IPV6ADDRESSTOSTRING_OFFSET UNITYSDK_OFFSET(0x9B910F0)
#define SYSTEM_NET_IPADDRESSPARSER_IPV6ADDRESSTOSTRINGHELPER_OFFSET UNITYSDK_OFFSET(0x9B92730)
#define SYSTEM_NET_IPADDRESSPARSER_FORMATIPV4ADDRESSNUMBER_OFFSET UNITYSDK_OFFSET(0x9B92640)
#define SYSTEM_NET_IPADDRESSPARSER_IPV4STRINGTOADDRESS_OFFSET UNITYSDK_OFFSET(0x9B921A0)
#define SYSTEM_NET_IPADDRESSPARSER_IPV6STRINGTOADDRESS_OFFSET UNITYSDK_OFFSET(0x9B92040)
#define SYSTEM_NET_IPADDRESSPARSER_APPENDSECTIONS_OFFSET UNITYSDK_OFFSET(0x9B928A0)
#define SYSTEM_NET_IPADDRESSPARSER_APPENDHEX_OFFSET UNITYSDK_OFFSET(0x9B92BF0)
#define SYSTEM_NET_IPADDRESSPARSER_EXTRACTIPV4ADDRESS_OFFSET UNITYSDK_OFFSET(0x9B92BB0)
#define SYSTEM_NET_IPADDRESSPARSER_REVERSE_OFFSET UNITYSDK_OFFSET(0x9B92C60)

namespace System::Net
{
	inline static constexpr unsigned int IPAddressParser_TypeDefinitionIndex = 29647;

	class IPAddressParser : public Il2CppObject
	{
	public:
		::System::Net::IPAddress* Parse(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::System::Net::IPAddress*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESSPARSER_PARSE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* IPv4AddressToString(::System::UInt32 arg)
		{
			return (return (::System::String*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESSPARSER_IPV4ADDRESSTOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void IPv4AddressToString(::System::UInt32 arg, ::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESSPARSER_IPV4ADDRESSTOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 IPv4AddressToStringHelper(::System::UInt32 arg, ::System::Object** arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESSPARSER_IPV4ADDRESSTOSTRINGHELPER_OFFSET))(arg, arg, nullptr);
		}

		::System::String* IPv6AddressToString(::Il2CppArray<::System::Object*>* arg, ::System::UInt32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESSPARSER_IPV6ADDRESSTOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Text::StringBuilder* IPv6AddressToStringHelper(::Il2CppArray<::System::Object*>* arg, ::System::UInt32 arg)
		{
			return (return (::System::Text::StringBuilder*(*)(::Il2CppArray<::System::Object*>*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESSPARSER_IPV6ADDRESSTOSTRINGHELPER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FormatIPv4AddressNumber(::System::Int32 arg, ::System::Object** arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object**, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESSPARSER_FORMATIPV4ADDRESSNUMBER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Ipv4StringToAddress(Il2CppObject* arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESSPARSER_IPV4STRINGTOADDRESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Ipv6StringToAddress(Il2CppObject* arg, ::System::Object** arg, ::System::Int32 arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Object**, ::System::Int32, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESSPARSER_IPV6STRINGTOADDRESS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AppendSections(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESSPARSER_APPENDSECTIONS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AppendHex(::System::UInt16 arg, ::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::UInt16, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESSPARSER_APPENDHEX_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 ExtractIPv4Address(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESSPARSER_EXTRACTIPV4ADDRESS_OFFSET))(arg, nullptr);
		}

		::System::UInt16 Reverse(::System::UInt16 arg)
		{
			return (return (::System::UInt16(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESSPARSER_REVERSE_OFFSET))(arg, nullptr);
		}

	};
}

