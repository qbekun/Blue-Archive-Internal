#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9826C30)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0x9826C40)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_SET_QUALITY_OFFSET UNITYSDK_OFFSET(0x9826C50)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9826C60)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9826C70)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x9826C80)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9826C90)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9826D60)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9826DE0)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x9826E80)
#define SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9827260)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int StringWithQualityHeaderValue_TypeDefinitionIndex = 36716;

	class StringWithQualityHeaderValue : public Il2CppObject
	{
	public:
		Il2CppObject* _Quality_k__BackingField; // 0x10
		::System::String* _Value_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Quality()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_GET_QUALITY_OFFSET))(nullptr);
		}

		::System::Void set_Quality(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_SET_QUALITY_OFFSET))(arg, nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::Object* System.ICloneable.Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_TRYPARSE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* arg, ::System::Net::Http::Headers::StringWithQualityHeaderValue&* arg, ::System::Net::Http::Headers::Token&* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::StringWithQualityHeaderValue&*, ::System::Net::Http::Headers::Token&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_TRYPARSEELEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_STRINGWITHQUALITYHEADERVALUE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

