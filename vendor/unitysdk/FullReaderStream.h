#pragma once
#include "unitysdk.h"

#define FULLREADERSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x7B6380)
#define FULLREADERSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x7B63B0)

	inline static constexpr unsigned int FullReaderStream_TypeDefinitionIndex = 22710;

	class FullReaderStream : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + FULLREADERSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FULLREADERSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

	};

