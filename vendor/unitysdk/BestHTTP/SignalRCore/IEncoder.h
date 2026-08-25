#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::PlatformSupport::Memory { class BufferSegment; }

#define BESTHTTP_SIGNALRCORE_IENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_IENCODER_DECODEAS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_IENCODER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SignalRCore
{
	inline static constexpr unsigned int IEncoder_TypeDefinitionIndex = 21425;

	class IEncoder : public Il2CppObject
	{
	public:
		::BestHTTP::PlatformSupport::Memory::BufferSegment* Encode(Il2CppObject* arg)
		{
			return (return (::BestHTTP::PlatformSupport::Memory::BufferSegment*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IENCODER_ENCODE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* DecodeAs(::BestHTTP::PlatformSupport::Memory::BufferSegment* arg)
		{
			return (return (Il2CppObject*(*)(::BestHTTP::PlatformSupport::Memory::BufferSegment*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IENCODER_DECODEAS_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertTo(::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IENCODER_CONVERTTO_OFFSET))(arg, arg, nullptr);
		}

	};
}

