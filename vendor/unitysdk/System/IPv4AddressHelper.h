#pragma once
#include "../unitysdk.h"

#define SYSTEM_IPV4ADDRESSHELPER_PARSEHOSTNUMBER_OFFSET UNITYSDK_OFFSET(0x9ACBFC0)
#define SYSTEM_IPV4ADDRESSHELPER_ISVALID_OFFSET UNITYSDK_OFFSET(0x9ACC230)
#define SYSTEM_IPV4ADDRESSHELPER_PARSECANONICAL_OFFSET UNITYSDK_OFFSET(0x9ACC000)
#define SYSTEM_IPV4ADDRESSHELPER_ISVALIDCANONICAL_OFFSET UNITYSDK_OFFSET(0x9ACC270)
#define SYSTEM_IPV4ADDRESSHELPER_PARSENONCANONICAL_OFFSET UNITYSDK_OFFSET(0x9ACC610)
#define SYSTEM_IPV4ADDRESSHELPER_PARSECANONICALNAME_OFFSET UNITYSDK_OFFSET(0x9ACCA90)
#define SYSTEM_IPV4ADDRESSHELPER_PARSE_OFFSET UNITYSDK_OFFSET(0x9ACCE20)

namespace System
{
	inline static constexpr unsigned int IPv4AddressHelper_TypeDefinitionIndex = 29161;

	class IPv4AddressHelper : public Il2CppObject
	{
	public:
		::System::Int32 ParseHostNumber(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_PARSEHOSTNUMBER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsValid(::System::Object** arg, ::System::Int32 arg, int32_t&* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::Int32, int32_t&*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_ISVALID_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ParseCanonical(Il2CppObject* arg, ::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Object**, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_PARSECANONICAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsValidCanonical(::System::Object** arg, ::System::Int32 arg, int32_t&* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::Int32, int32_t&*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_ISVALIDCANONICAL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int64 ParseNonCanonical(::System::Object** arg, ::System::Int32 arg, int32_t&* arg, ::System::Boolean arg)
		{
			return (return (::System::Int64(*)(::System::Object**, ::System::Int32, int32_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_PARSENONCANONICAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* ParseCanonicalName(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, bool&* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_PARSECANONICALNAME_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean Parse(::System::String* str, ::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Object**, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_PARSE_OFFSET))(str, arg, arg, arg, nullptr);
		}

	};
}

