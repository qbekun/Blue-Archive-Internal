#pragma once
#include "../unitysdk.h"

namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP { class HTTPResponse; }

#define BESTHTTP_HTTPREQUESTASYNCEXTENSIONS_GETASTEXTURE2DASYNC_OFFSET UNITYSDK_OFFSET(0x4D7320)
#define BESTHTTP_HTTPREQUESTASYNCEXTENSIONS_GETASSTRINGASYNC_OFFSET UNITYSDK_OFFSET(0x4D7410)
#define BESTHTTP_HTTPREQUESTASYNCEXTENSIONS_GETHTTPRESPONSEASYNC_OFFSET UNITYSDK_OFFSET(0x4D7500)
#define BESTHTTP_HTTPREQUESTASYNCEXTENSIONS_CREATEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x4D75F0)
#define BESTHTTP_HTTPREQUESTASYNCEXTENSIONS_VERBOSELOGGING_OFFSET UNITYSDK_OFFSET(0x4D7840)
#define BESTHTTP_HTTPREQUESTASYNCEXTENSIONS_GETRAWDATAASYNC_OFFSET UNITYSDK_OFFSET(0x4D7B10)
#define BESTHTTP_HTTPREQUESTASYNCEXTENSIONS_CREATETASK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP
{
	inline static constexpr unsigned int HTTPRequestAsyncExtensions_TypeDefinitionIndex = 21295;

	class HTTPRequestAsyncExtensions : public Il2CppObject
	{
	public:
		Il2CppObject* GetAsTexture2DAsync(::BestHTTP::HTTPRequest* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::BestHTTP::HTTPRequest*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUESTASYNCEXTENSIONS_GETASTEXTURE2DASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetAsStringAsync(::BestHTTP::HTTPRequest* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::BestHTTP::HTTPRequest*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUESTASYNCEXTENSIONS_GETASSTRINGASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetHTTPResponseAsync(::BestHTTP::HTTPRequest* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::BestHTTP::HTTPRequest*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUESTASYNCEXTENSIONS_GETHTTPRESPONSEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CreateException(::System::String* str, ::BestHTTP::HTTPResponse* arg, ::System::Exception* arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::BestHTTP::HTTPResponse*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUESTASYNCEXTENSIONS_CREATEEXCEPTION_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void VerboseLogging(::BestHTTP::HTTPRequest* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUESTASYNCEXTENSIONS_VERBOSELOGGING_OFFSET))(arg, str, nullptr);
		}

		Il2CppObject* GetRawDataAsync(::BestHTTP::HTTPRequest* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::BestHTTP::HTTPRequest*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUESTASYNCEXTENSIONS_GETRAWDATAASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* CreateTask(::BestHTTP::HTTPRequest* arg, ::System::Threading::CancellationToken* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::BestHTTP::HTTPRequest*, ::System::Threading::CancellationToken*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUESTASYNCEXTENSIONS_CREATETASK_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

