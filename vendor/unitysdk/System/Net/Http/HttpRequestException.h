#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HTTPREQUESTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9815B90)
#define SYSTEM_NET_HTTP_HTTPREQUESTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9814950)
#define SYSTEM_NET_HTTP_HTTPREQUESTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98125D0)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpRequestException_TypeDefinitionIndex = 36662;

	class HttpRequestException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

