#pragma once
#include "unitysdk.h"

#define UCBTTASKGETNEXTMOVINGPATHFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD75680)
#define UCBTTASKGETNEXTMOVINGPATHFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD78CD0)
#define UCBTTASKGETNEXTMOVINGPATHFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xD78D20)

	inline static constexpr unsigned int UCBTTaskGetNextMovingPathFormatter_TypeDefinitionIndex = 9674;

	class UCBTTaskGetNextMovingPathFormatter : public __StaticArrayInitTypeSize=1208
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UCBTTASKGETNEXTMOVINGPATHFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXUnderCover::UCBTTaskGetNextMovingPath&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXUnderCover::UCBTTaskGetNextMovingPath&*, ::PVOID))((::PBYTE)hIl2Cpp + UCBTTASKGETNEXTMOVINGPATHFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXUnderCover::UCBTTaskGetNextMovingPath&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXUnderCover::UCBTTaskGetNextMovingPath&*, ::PVOID))((::PBYTE)hIl2Cpp + UCBTTASKGETNEXTMOVINGPATHFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

