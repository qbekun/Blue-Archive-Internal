#pragma once
#include "unitysdk.h"

#define UCBTDECORATORISSTUNNEDFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD64B00)
#define UCBTDECORATORISSTUNNEDFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xD66AA0)
#define UCBTDECORATORISSTUNNEDFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD66AF0)

	inline static constexpr unsigned int UCBTDecoratorIsStunnedFormatter_TypeDefinitionIndex = 9662;

	class UCBTDecoratorIsStunnedFormatter : public __StaticArrayInitTypeSize=648
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UCBTDECORATORISSTUNNEDFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXUnderCover::UCBTDecoratorIsStunned&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXUnderCover::UCBTDecoratorIsStunned&*, ::PVOID))((::PBYTE)hIl2Cpp + UCBTDECORATORISSTUNNEDFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXUnderCover::UCBTDecoratorIsStunned&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXUnderCover::UCBTDecoratorIsStunned&*, ::PVOID))((::PBYTE)hIl2Cpp + UCBTDECORATORISSTUNNEDFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

