#pragma once
#include "unitysdk.h"

#define MEDIAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xDF9FC0)
#define MEDIAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xDFAC10)
#define MEDIAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xDFAC60)

	inline static constexpr unsigned int MediaFormatter_TypeDefinitionIndex = 10189;

	class MediaFormatter : public ::System::IO::FileLoadException
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDIAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::Media::Service::Media&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::Media::Service::Media&*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIAFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::Media::Service::Media&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::Media::Service::Media&*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIAFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

