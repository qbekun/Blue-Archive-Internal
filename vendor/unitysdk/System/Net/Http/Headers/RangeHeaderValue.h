#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9824F90)
#define SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9824FE0)
#define SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_GET_RANGES_OFFSET UNITYSDK_OFFSET(0x98252B0)
#define SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_GET_UNIT_OFFSET UNITYSDK_OFFSET(0x9825330)
#define SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x9825340)
#define SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x98253A0)
#define SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9825450)
#define SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x98254C0)
#define SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9825F50)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int RangeHeaderValue_TypeDefinitionIndex = 36713;

	class RangeHeaderValue : public Il2CppObject
	{
	public:
		Il2CppObject* ranges; // 0x10
		::System::String* unit; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Net::Http::Headers::RangeHeaderValue* arg)
		{
			((::System::Void(*)(::System::Net::Http::Headers::RangeHeaderValue*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Ranges()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_GET_RANGES_OFFSET))(nullptr);
		}

		::System::String* get_Unit()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_GET_UNIT_OFFSET))(nullptr);
		}

		::System::Object* System.ICloneable.Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Net::Http::Headers::RangeHeaderValue&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::RangeHeaderValue&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEHEADERVALUE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

