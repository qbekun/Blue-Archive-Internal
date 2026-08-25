#pragma once
#include "unitysdk.h"

#define UCBTDECORATORISSTUNNEDREADYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xD68FE0)
#define UCBTDECORATORISSTUNNEDREADYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD69030)
#define UCBTDECORATORISSTUNNEDREADYFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD66F30)

	inline static constexpr unsigned int UCBTDecoratorIsStunnedReadyFormatter_TypeDefinitionIndex = 9664;

	class UCBTDecoratorIsStunnedReadyFormatter : public __StaticArrayInitTypeSize=761
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXUnderCover::UCBTDecoratorIsStunnedReady&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXUnderCover::UCBTDecoratorIsStunnedReady&*, ::PVOID))((::PBYTE)hIl2Cpp + UCBTDECORATORISSTUNNEDREADYFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXUnderCover::UCBTDecoratorIsStunnedReady&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXUnderCover::UCBTDecoratorIsStunnedReady&*, ::PVOID))((::PBYTE)hIl2Cpp + UCBTDECORATORISSTUNNEDREADYFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UCBTDECORATORISSTUNNEDREADYFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

