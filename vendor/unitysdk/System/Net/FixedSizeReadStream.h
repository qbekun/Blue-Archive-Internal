#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_FIXEDSIZEREADSTREAM_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x9A6C500)
#define SYSTEM_NET_FIXEDSIZEREADSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A6C510)
#define SYSTEM_NET_FIXEDSIZEREADSTREAM_PROCESSREADASYNC_OFFSET UNITYSDK_OFFSET(0x9A6C530)

namespace System::Net
{
	inline static constexpr unsigned int FixedSizeReadStream_TypeDefinitionIndex = 29770;

	class FixedSizeReadStream : public Il2CppObject
	{
	public:
		::System::Int64 _ContentLength_k__BackingField; // 0x40
		::System::Int64 position; // 0x48

		::System::Int64 get_ContentLength()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FIXEDSIZEREADSTREAM_GET_CONTENTLENGTH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Net::WebOperation* arg, ::System::IO::Stream* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Net::WebOperation*, ::System::IO::Stream*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FIXEDSIZEREADSTREAM_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* ProcessReadAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FIXEDSIZEREADSTREAM_PROCESSREADASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

