#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_CONTENTDECODESTREAM_CREATE_OFFSET UNITYSDK_OFFSET(0x9A68910)
#define SYSTEM_NET_CONTENTDECODESTREAM_GET_ORIGINALINNERSTREAM_OFFSET UNITYSDK_OFFSET(0x9A68A40)
#define SYSTEM_NET_CONTENTDECODESTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A68A10)
#define SYSTEM_NET_CONTENTDECODESTREAM_PROCESSREADASYNC_OFFSET UNITYSDK_OFFSET(0x9A68A50)
#define SYSTEM_NET_CONTENTDECODESTREAM_FINISHREADING_OFFSET UNITYSDK_OFFSET(0x9A68A90)

namespace System::Net
{
	inline static constexpr unsigned int ContentDecodeStream_TypeDefinitionIndex = 29761;

	class ContentDecodeStream : public Il2CppObject
	{
	public:
		::System::IO::Stream* _OriginalInnerStream_k__BackingField; // 0x40

		::System::Net::ContentDecodeStream* Create(::System::Net::WebOperation* arg, ::System::IO::Stream* arg, Mode* arg)
		{
			return (return (::System::Net::ContentDecodeStream*(*)(::System::Net::WebOperation*, ::System::IO::Stream*, Mode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONTENTDECODESTREAM_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::IO::Stream* get_OriginalInnerStream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONTENTDECODESTREAM_GET_ORIGINALINNERSTREAM_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Net::WebOperation* arg, ::System::IO::Stream* arg, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::Net::WebOperation*, ::System::IO::Stream*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONTENTDECODESTREAM_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* ProcessReadAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONTENTDECODESTREAM_PROCESSREADASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* FinishReading(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONTENTDECODESTREAM_FINISHREADING_OFFSET))(arg, nullptr);
		}

	};
}

