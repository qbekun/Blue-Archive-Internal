#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_MONOCHUNKSTREAM_GET_DECODER_OFFSET UNITYSDK_OFFSET(0x9A77300)
#define SYSTEM_NET_MONOCHUNKSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A77310)
#define SYSTEM_NET_MONOCHUNKSTREAM_PROCESSREADASYNC_OFFSET UNITYSDK_OFFSET(0x9A773B0)
#define SYSTEM_NET_MONOCHUNKSTREAM_FINISHREADING_OFFSET UNITYSDK_OFFSET(0x9A77510)
#define SYSTEM_NET_MONOCHUNKSTREAM_THROWEXPECTINGCHUNKTRAILER_OFFSET UNITYSDK_OFFSET(0x9A77610)
#define SYSTEM_NET_MONOCHUNKSTREAM___N__0_OFFSET UNITYSDK_OFFSET(0x9A77680)

namespace System::Net
{
	inline static constexpr unsigned int MonoChunkStream_TypeDefinitionIndex = 29787;

	class MonoChunkStream : public Il2CppObject
	{
	public:
		::System::Net::WebHeaderCollection* _Headers_k__BackingField; // 0x40
		::System::Net::MonoChunkParser* _Decoder_k__BackingField; // 0x48

		::System::Net::MonoChunkParser* get_Decoder()
		{
			return (return (::System::Net::MonoChunkParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_GET_DECODER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Net::WebOperation* arg, ::System::IO::Stream* arg, ::System::Net::WebHeaderCollection* arg)
		{
			((::System::Void(*)(::System::Net::WebOperation*, ::System::IO::Stream*, ::System::Net::WebHeaderCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* ProcessReadAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_PROCESSREADASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* FinishReading(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_FINISHREADING_OFFSET))(arg, nullptr);
		}

		::System::Void ThrowExpectingChunkTrailer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_THROWEXPECTINGCHUNKTRAILER_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::Task* __n__0(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM___N__0_OFFSET))(arg, nullptr);
		}

	};
}

