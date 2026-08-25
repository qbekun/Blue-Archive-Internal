#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_BUFFEREDREADSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A68320)
#define SYSTEM_NET_BUFFEREDREADSTREAM_PROCESSREADASYNC_OFFSET UNITYSDK_OFFSET(0x9A68350)
#define SYSTEM_NET_BUFFEREDREADSTREAM_TRYREADFROMBUFFER_OFFSET UNITYSDK_OFFSET(0x9A684B0)

namespace System::Net
{
	inline static constexpr unsigned int BufferedReadStream_TypeDefinitionIndex = 29759;

	class BufferedReadStream : public Il2CppObject
	{
	public:
		::System::Net::BufferOffsetSize* readBuffer; // 0x40

		::System::Void .ctor(::System::Net::WebOperation* arg, ::System::IO::Stream* arg, ::System::Net::BufferOffsetSize* arg)
		{
			((::System::Void(*)(::System::Net::WebOperation*, ::System::IO::Stream*, ::System::Net::BufferOffsetSize*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BUFFEREDREADSTREAM_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* ProcessReadAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BUFFEREDREADSTREAM_PROCESSREADASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryReadFromBuffer(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BUFFEREDREADSTREAM_TRYREADFROMBUFFER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

