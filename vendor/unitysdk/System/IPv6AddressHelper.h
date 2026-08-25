#pragma once
#include "../unitysdk.h"

#define SYSTEM_IPV6ADDRESSHELPER_FINDCOMPRESSIONRANGE_OFFSET UNITYSDK_OFFSET(0x9ACCE80)
#define SYSTEM_IPV6ADDRESSHELPER_SHOULDHAVEIPV4EMBEDDED_OFFSET UNITYSDK_OFFSET(0x9ACCFC0)
#define SYSTEM_IPV6ADDRESSHELPER_ISVALIDSTRICT_OFFSET UNITYSDK_OFFSET(0x9ACD070)
#define SYSTEM_IPV6ADDRESSHELPER_PARSE_OFFSET UNITYSDK_OFFSET(0x9ACD5A0)
#define SYSTEM_IPV6ADDRESSHELPER_PARSECANONICALNAME_OFFSET UNITYSDK_OFFSET(0x9ACDB80)
#define SYSTEM_IPV6ADDRESSHELPER_ISLOOPBACK_OFFSET UNITYSDK_OFFSET(0x9ACE4C0)
#define SYSTEM_IPV6ADDRESSHELPER_INTERNALISVALID_OFFSET UNITYSDK_OFFSET(0x9ACE580)
#define SYSTEM_IPV6ADDRESSHELPER_ISVALID_OFFSET UNITYSDK_OFFSET(0x9ACEA10)

namespace System
{
	inline static constexpr unsigned int IPv6AddressHelper_TypeDefinitionIndex = 29162;

	class IPv6AddressHelper : public Il2CppObject
	{
	public:
		Il2CppObject* FindCompressionRange(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_FINDCOMPRESSIONRANGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldHaveIpv4Embedded(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_SHOULDHAVEIPV4EMBEDDED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValidStrict(::System::Object** arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_ISVALIDSTRICT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Parse(Il2CppObject* arg, ::System::Object** arg, ::System::Int32 arg, ::System::String&* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object**, ::System::Int32, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_PARSE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* ParseCanonicalName(::System::String* str, ::System::Int32 arg, bool&* arg, ::System::String&* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, bool&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_PARSECANONICALNAME_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean IsLoopback(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_ISLOOPBACK_OFFSET))(arg, nullptr);
		}

		::System::Boolean InternalIsValid(::System::Object** arg, ::System::Int32 arg, int32_t&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::Int32, int32_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_INTERNALISVALID_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsValid(::System::Object** arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_ISVALID_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

