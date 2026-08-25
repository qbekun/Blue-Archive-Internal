#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HTTPMETHOD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9815550)
#define SYSTEM_NET_HTTP_HTTPMETHOD_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x9815770)
#define SYSTEM_NET_HTTP_HTTPMETHOD_GET_POST_OFFSET UNITYSDK_OFFSET(0x9815780)
#define SYSTEM_NET_HTTP_HTTPMETHOD_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x98157D0)
#define SYSTEM_NET_HTTP_HTTPMETHOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x9815800)
#define SYSTEM_NET_HTTP_HTTPMETHOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x9815830)
#define SYSTEM_NET_HTTP_HTTPMETHOD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x98158B0)
#define SYSTEM_NET_HTTP_HTTPMETHOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x98158E0)
#define SYSTEM_NET_HTTP_HTTPMETHOD_.CCTOR_OFFSET UNITYSDK_OFFSET(0x98158F0)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpMethod_TypeDefinitionIndex = 36661;

	class HttpMethod : public Il2CppObject
	{
	public:
		::System::Net::Http::HttpMethod* delete_method; // 0x0
		::System::Net::Http::HttpMethod* get_method; // 0x8
		::System::Net::Http::HttpMethod* head_method; // 0x10
		::System::Net::Http::HttpMethod* options_method; // 0x18
		::System::Net::Http::HttpMethod* post_method; // 0x20
		::System::Net::Http::HttpMethod* put_method; // 0x28
		::System::Net::Http::HttpMethod* trace_method; // 0x30
		::System::String* method; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Method()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_GET_METHOD_OFFSET))(nullptr);
		}

		::System::Net::Http::HttpMethod* get_Post()
		{
			return (return (::System::Net::Http::HttpMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_GET_POST_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::System::Net::Http::HttpMethod* arg, ::System::Net::Http::HttpMethod* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::Http::HttpMethod*, ::System::Net::Http::HttpMethod*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Net::Http::HttpMethod* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::Http::HttpMethod*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_.CCTOR_OFFSET))(nullptr);
		}

	};
}

