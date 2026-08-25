#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x981A560)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x981A570)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x981A8E0)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x981A9B0)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x981AA10)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x981AAC0)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x981AB30)
#define SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x981AB80)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int ContentDispositionHeaderValue_TypeDefinitionIndex = 36672;

	class ContentDispositionHeaderValue : public Il2CppObject
	{
	public:
		::System::String* dispositionType; // 0x10
		Il2CppObject* parameters; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Net::Http::Headers::ContentDispositionHeaderValue* arg)
		{
			((::System::Void(*)(::System::Net::Http::Headers::ContentDispositionHeaderValue*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Parameters()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_GET_PARAMETERS_OFFSET))(nullptr);
		}

		::System::Object* System.ICloneable.Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Net::Http::Headers::ContentDispositionHeaderValue&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::ContentDispositionHeaderValue&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_CONTENTDISPOSITIONHEADERVALUE_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

	};
}

