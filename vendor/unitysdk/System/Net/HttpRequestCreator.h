#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_HTTPREQUESTCREATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A6CA50)
#define SYSTEM_NET_HTTPREQUESTCREATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x9A6CA60)

namespace System::Net
{
	inline static constexpr unsigned int HttpRequestCreator_TypeDefinitionIndex = 29771;

	class HttpRequestCreator : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPREQUESTCREATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Net::WebRequest* Create(::System::Uri* arg)
		{
			return (return (::System::Net::WebRequest*(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPREQUESTCREATOR_CREATE_OFFSET))(arg, nullptr);
		}

	};
}

