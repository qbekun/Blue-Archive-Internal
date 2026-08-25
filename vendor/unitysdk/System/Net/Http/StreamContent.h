#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_HTTP_STREAMCONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9816740)
#define SYSTEM_NET_HTTP_STREAMCONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9816750)
#define SYSTEM_NET_HTTP_STREAMCONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9812BD0)
#define SYSTEM_NET_HTTP_STREAMCONTENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9816850)
#define SYSTEM_NET_HTTP_STREAMCONTENT_SERIALIZETOSTREAMASYNC_OFFSET UNITYSDK_OFFSET(0x98168A0)
#define SYSTEM_NET_HTTP_STREAMCONTENT_TRYCOMPUTELENGTH_OFFSET UNITYSDK_OFFSET(0x9816980)

namespace System::Net::Http
{
	inline static constexpr unsigned int StreamContent_TypeDefinitionIndex = 36665;

	class StreamContent : public Il2CppObject
	{
	public:
		::System::IO::Stream* content; // 0x28
		::System::Int32 bufferSize; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::System::Int64 startPosition; // 0x40
		::System::Boolean contentCopied; // 0x48

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STREAMCONTENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STREAMCONTENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Threading::CancellationToken* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STREAMCONTENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STREAMCONTENT_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* SerializeToStreamAsync(::System::IO::Stream* arg, ::System::Net::TransportContext* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::IO::Stream*, ::System::Net::TransportContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STREAMCONTENT_SERIALIZETOSTREAMASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryComputeLength(int64_t&* arg)
		{
			return (return (::System::Boolean(*)(int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STREAMCONTENT_TRYCOMPUTELENGTH_OFFSET))(arg, nullptr);
		}

	};
}

