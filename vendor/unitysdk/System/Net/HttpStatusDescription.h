#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_HTTPSTATUSDESCRIPTION_GET_OFFSET UNITYSDK_OFFSET(0x9B8CDC0)
#define SYSTEM_NET_HTTPSTATUSDESCRIPTION_GET_OFFSET UNITYSDK_OFFSET(0x9B8CDD0)

namespace System::Net
{
	inline static constexpr unsigned int HttpStatusDescription_TypeDefinitionIndex = 29637;

	class HttpStatusDescription : public Il2CppObject
	{
	public:
		::System::String* Get(::System::Net::HttpStatusCode* arg)
		{
			return (return (::System::String*(*)(::System::Net::HttpStatusCode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPSTATUSDESCRIPTION_GET_OFFSET))(arg, nullptr);
		}

		::System::String* Get(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPSTATUSDESCRIPTION_GET_OFFSET))(arg, nullptr);
		}

	};
}

