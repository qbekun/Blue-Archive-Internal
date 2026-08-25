#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9826450)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98264D0)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_GET_DATE_OFFSET UNITYSDK_OFFSET(0x98265C0)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_SET_DATE_OFFSET UNITYSDK_OFFSET(0x98265E0)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x98265F0)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_SET_DELTA_OFFSET UNITYSDK_OFFSET(0x9826600)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x9826610)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9826620)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x98267B0)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9826830)
#define SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9826AB0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int RetryConditionHeaderValue_TypeDefinitionIndex = 36715;

	class RetryConditionHeaderValue : public Il2CppObject
	{
	public:
		Il2CppObject* _Date_k__BackingField; // 0x10
		Il2CppObject* _Delta_k__BackingField; // 0x28

		::System::Void .ctor(::System::DateTimeOffset* arg)
		{
			((::System::Void(*)(::System::DateTimeOffset*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Date()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_GET_DATE_OFFSET))(nullptr);
		}

		::System::Void set_Date(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_SET_DATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Delta()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_GET_DELTA_OFFSET))(nullptr);
		}

		::System::Void set_Delta(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_SET_DELTA_OFFSET))(arg, nullptr);
		}

		::System::Object* System.ICloneable.Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Net::Http::Headers::RetryConditionHeaderValue&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::RetryConditionHeaderValue&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RETRYCONDITIONHEADERVALUE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

