#pragma once
#include "unitysdk.h"

#define UCBTTASKUCBTTASKSTUNREADYFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD87DA0)
#define UCBTTASKUCBTTASKSTUNREADYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD87DE0)
#define UCBTTASKUCBTTASKSTUNREADYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xD87E30)

	inline static constexpr unsigned int UCBTTaskUCBTTaskStunReadyFormatter_TypeDefinitionIndex = 9686;

	class UCBTTaskUCBTTaskStunReadyFormatter : public __StaticArrayInitTypeSize=1824
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UCBTTASKUCBTTASKSTUNREADYFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXUnderCover::UCBTTaskUCBTTaskStunReady&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXUnderCover::UCBTTaskUCBTTaskStunReady&*, ::PVOID))((::PBYTE)hIl2Cpp + UCBTTASKUCBTTASKSTUNREADYFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXUnderCover::UCBTTaskUCBTTaskStunReady&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXUnderCover::UCBTTaskUCBTTaskStunReady&*, ::PVOID))((::PBYTE)hIl2Cpp + UCBTTASKUCBTTASKSTUNREADYFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

