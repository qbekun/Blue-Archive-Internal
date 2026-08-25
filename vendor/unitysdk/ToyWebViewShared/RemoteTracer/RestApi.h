#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_REMOTETRACER_RESTAPI_POSTASYNC_OFFSET UNITYSDK_OFFSET(0x9BB4010)
#define TOYWEBVIEWSHARED_REMOTETRACER_RESTAPI_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9BB4B20)

namespace ToyWebViewShared::RemoteTracer
{
	inline static constexpr unsigned int RestApi_TypeDefinitionIndex = 25435;

	class RestApi : public Il2CppObject
	{
	public:
		::System::Net::Http::HttpClient* HttpClient; // 0x0

		Il2CppObject* PostAsync(::System::String* str, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_REMOTETRACER_RESTAPI_POSTASYNC_OFFSET))(str, str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_REMOTETRACER_RESTAPI_.CCTOR_OFFSET))(nullptr);
		}

	};
}

