#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9828840)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_GET_AGENT_OFFSET UNITYSDK_OFFSET(0x9828850)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_SET_AGENT_OFFSET UNITYSDK_OFFSET(0x9828860)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_GET_CODE_OFFSET UNITYSDK_OFFSET(0x9828870)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_SET_CODE_OFFSET UNITYSDK_OFFSET(0x9828880)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_GET_DATE_OFFSET UNITYSDK_OFFSET(0x9828890)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_SET_DATE_OFFSET UNITYSDK_OFFSET(0x98288B0)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x98288C0)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x98288D0)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_ISCODEVALID_OFFSET UNITYSDK_OFFSET(0x98288E0)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x9828900)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9828910)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9828A60)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9828B20)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x9828BC0)
#define SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9828FA0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int WarningHeaderValue_TypeDefinitionIndex = 36720;

	class WarningHeaderValue : public Il2CppObject
	{
	public:
		::System::String* _Agent_k__BackingField; // 0x10
		::System::Int32 _Code_k__BackingField; // 0x18
		Il2CppObject* _Date_k__BackingField; // 0x20
		::System::String* _Text_k__BackingField; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_Agent()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_GET_AGENT_OFFSET))(nullptr);
		}

		::System::Void set_Agent(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_SET_AGENT_OFFSET))(str, nullptr);
		}

		::System::Int32 get_Code()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_GET_CODE_OFFSET))(nullptr);
		}

		::System::Void set_Code(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_SET_CODE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Date()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_GET_DATE_OFFSET))(nullptr);
		}

		::System::Void set_Date(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_SET_DATE_OFFSET))(arg, nullptr);
		}

		::System::String* get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void set_Text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_SET_TEXT_OFFSET))(str, nullptr);
		}

		::System::Boolean IsCodeValid(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_ISCODEVALID_OFFSET))(arg, nullptr);
		}

		::System::Object* System.ICloneable.Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_TRYPARSE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* arg, ::System::Net::Http::Headers::WarningHeaderValue&* arg, ::System::Net::Http::Headers::Token&* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::WarningHeaderValue&*, ::System::Net::Http::Headers::Token&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_TRYPARSEELEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_WARNINGHEADERVALUE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

