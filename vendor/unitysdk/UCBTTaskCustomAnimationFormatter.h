#pragma once
#include "unitysdk.h"

#define UCBTTASKCUSTOMANIMATIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xD74B10)
#define UCBTTASKCUSTOMANIMATIONFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD71710)
#define UCBTTASKCUSTOMANIMATIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD74B60)

	inline static constexpr unsigned int UCBTTaskCustomAnimationFormatter_TypeDefinitionIndex = 9672;

	class UCBTTaskCustomAnimationFormatter : public __StaticArrayInitTypeSize=1024
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXUnderCover::UCBTTaskCustomAnimation&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXUnderCover::UCBTTaskCustomAnimation&*, ::PVOID))((::PBYTE)hIl2Cpp + UCBTTASKCUSTOMANIMATIONFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UCBTTASKCUSTOMANIMATIONFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXUnderCover::UCBTTaskCustomAnimation&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXUnderCover::UCBTTaskCustomAnimation&*, ::PVOID))((::PBYTE)hIl2Cpp + UCBTTASKCUSTOMANIMATIONFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

