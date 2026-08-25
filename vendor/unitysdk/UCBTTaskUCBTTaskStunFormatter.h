#pragma once
#include "unitysdk.h"

#define UCBTTASKUCBTTASKSTUNFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xD86870)
#define UCBTTASKUCBTTASKSTUNFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD868D0)
#define UCBTTASKUCBTTASKSTUNFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD86910)

	inline static constexpr unsigned int UCBTTaskUCBTTaskStunFormatter_TypeDefinitionIndex = 9684;

	class UCBTTaskUCBTTaskStunFormatter : public __StaticArrayInitTypeSize=1665
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXUnderCover::UCBTTaskUCBTTaskStun&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXUnderCover::UCBTTaskUCBTTaskStun&*, ::PVOID))((::PBYTE)hIl2Cpp + UCBTTASKUCBTTASKSTUNFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UCBTTASKUCBTTASKSTUNFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXUnderCover::UCBTTaskUCBTTaskStun&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXUnderCover::UCBTTaskUCBTTaskStun&*, ::PVOID))((::PBYTE)hIl2Cpp + UCBTTASKUCBTTASKSTUNFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

