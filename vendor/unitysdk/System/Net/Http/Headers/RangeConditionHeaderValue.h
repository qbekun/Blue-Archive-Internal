#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98247A0)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9824820)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_GET_DATE_OFFSET UNITYSDK_OFFSET(0x98248B0)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_SET_DATE_OFFSET UNITYSDK_OFFSET(0x98248D0)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_GET_ENTITYTAG_OFFSET UNITYSDK_OFFSET(0x98248E0)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_SET_ENTITYTAG_OFFSET UNITYSDK_OFFSET(0x98248F0)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x9824900)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9824910)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9824A40)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9824AB0)
#define SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9824EA0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int RangeConditionHeaderValue_TypeDefinitionIndex = 36712;

	class RangeConditionHeaderValue : public Il2CppObject
	{
	public:
		Il2CppObject* _Date_k__BackingField; // 0x10
		::System::Net::Http::Headers::EntityTagHeaderValue* _EntityTag_k__BackingField; // 0x28

		::System::Void .ctor(::System::DateTimeOffset* arg)
		{
			((::System::Void(*)(::System::DateTimeOffset*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Net::Http::Headers::EntityTagHeaderValue* arg)
		{
			((::System::Void(*)(::System::Net::Http::Headers::EntityTagHeaderValue*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Date()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_GET_DATE_OFFSET))(nullptr);
		}

		::System::Void set_Date(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_SET_DATE_OFFSET))(arg, nullptr);
		}

		::System::Net::Http::Headers::EntityTagHeaderValue* get_EntityTag()
		{
			return (return (::System::Net::Http::Headers::EntityTagHeaderValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_GET_ENTITYTAG_OFFSET))(nullptr);
		}

		::System::Void set_EntityTag(::System::Net::Http::Headers::EntityTagHeaderValue* arg)
		{
			((::System::Void(*)(::System::Net::Http::Headers::EntityTagHeaderValue*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_SET_ENTITYTAG_OFFSET))(arg, nullptr);
		}

		::System::Object* System.ICloneable.Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Net::Http::Headers::RangeConditionHeaderValue&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::RangeConditionHeaderValue&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGECONDITIONHEADERVALUE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

