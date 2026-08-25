#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDCHARACTEREMOJIFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12C9460)
#define GROUNDCOMMANDCHARACTEREMOJIFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12C94B0)
#define GROUNDCOMMANDCHARACTEREMOJIFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12C9500)

	inline static constexpr unsigned int GroundCommandCharacterEmojiFormatter_TypeDefinitionIndex = 14147;

	class GroundCommandCharacterEmojiFormatter : public ValueCollection
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTEREMOJIFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandCharacterEmoji&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandCharacterEmoji&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTEREMOJIFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandCharacterEmoji&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandCharacterEmoji&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTEREMOJIFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

