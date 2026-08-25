#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x981B1F0)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GET_FROM_OFFSET UNITYSDK_OFFSET(0x981B240)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SET_FROM_OFFSET UNITYSDK_OFFSET(0x981B250)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x981B260)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x981B270)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GET_TO_OFFSET UNITYSDK_OFFSET(0x981B280)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SET_TO_OFFSET UNITYSDK_OFFSET(0x981B290)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GET_UNIT_OFFSET UNITYSDK_OFFSET(0x981B2A0)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x981B2B0)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x981B2C0)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x981B3D0)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x981B4B0)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x981BD00)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int ContentRangeHeaderValue_TypeDefinitionIndex = 36673;

	class ContentRangeHeaderValue : public Il2CppObject
	{
	public:
		::System::String* unit; // 0x10
		Il2CppObject* _From_k__BackingField; // 0x18
		Il2CppObject* _Length_k__BackingField; // 0x28
		Il2CppObject* _To_k__BackingField; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_From()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GET_FROM_OFFSET))(nullptr);
		}

		::System::Void set_From(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SET_FROM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Length()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void set_Length(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SET_LENGTH_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_To()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GET_TO_OFFSET))(nullptr);
		}

		::System::Void set_To(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SET_TO_OFFSET))(arg, nullptr);
		}

		::System::String* get_Unit()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GET_UNIT_OFFSET))(nullptr);
		}

		::System::Object* System.ICloneable.Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Net::Http::Headers::ContentRangeHeaderValue&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::ContentRangeHeaderValue&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTRANGEHEADERVALUE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

