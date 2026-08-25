#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_HTTP_BYTEARRAYCONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9812C00)
#define SYSTEM_NET_HTTP_BYTEARRAYCONTENT_SERIALIZETOSTREAMASYNC_OFFSET UNITYSDK_OFFSET(0x9812CA0)
#define SYSTEM_NET_HTTP_BYTEARRAYCONTENT_TRYCOMPUTELENGTH_OFFSET UNITYSDK_OFFSET(0x9812CE0)

namespace System::Net::Http
{
	inline static constexpr unsigned int ByteArrayContent_TypeDefinitionIndex = 36650;

	class ByteArrayContent : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* content; // 0x28
		::System::Int32 offset; // 0x30
		::System::Int32 count; // 0x34

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_BYTEARRAYCONTENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* SerializeToStreamAsync(::System::IO::Stream* arg, ::System::Net::TransportContext* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::IO::Stream*, ::System::Net::TransportContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_BYTEARRAYCONTENT_SERIALIZETOSTREAMASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryComputeLength(int64_t&* arg)
		{
			return (return (::System::Boolean(*)(int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_BYTEARRAYCONTENT_TRYCOMPUTELENGTH_OFFSET))(arg, nullptr);
		}

	};
}

