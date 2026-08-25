#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_IWEBREQUESTCREATE_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Net
{
	inline static constexpr unsigned int IWebRequestCreate_TypeDefinitionIndex = 29682;

	class IWebRequestCreate : public Il2CppObject
	{
	public:
		::System::Net::WebRequest* Create(::System::Uri* arg)
		{
			return (return (::System::Net::WebRequest*(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IWEBREQUESTCREATE_CREATE_OFFSET))(arg, nullptr);
		}

	};
}

