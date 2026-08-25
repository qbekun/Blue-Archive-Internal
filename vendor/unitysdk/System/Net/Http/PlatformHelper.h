#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_HTTP_PLATFORMHELPER_ISCONTENTHEADER_OFFSET UNITYSDK_OFFSET(0x980F9D0)
#define SYSTEM_NET_HTTP_PLATFORMHELPER_GETSINGLEHEADERSTRING_OFFSET UNITYSDK_OFFSET(0x980F5C0)
#define SYSTEM_NET_HTTP_PLATFORMHELPER_CREATESTREAMCONTENT_OFFSET UNITYSDK_OFFSET(0x980F960)

namespace System::Net::Http
{
	inline static constexpr unsigned int PlatformHelper_TypeDefinitionIndex = 36649;

	class PlatformHelper : public Il2CppObject
	{
	public:
		::System::Boolean IsContentHeader(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_PLATFORMHELPER_ISCONTENTHEADER_OFFSET))(str, nullptr);
		}

		::System::String* GetSingleHeaderString(::System::String* str, Il2CppObject* arg)
		{
			return (return (::System::String*(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_PLATFORMHELPER_GETSINGLEHEADERSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Net::Http::StreamContent* CreateStreamContent(::System::IO::Stream* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Net::Http::StreamContent*(*)(::System::IO::Stream*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_PLATFORMHELPER_CREATESTREAMCONTENT_OFFSET))(arg, arg, nullptr);
		}

	};
}

