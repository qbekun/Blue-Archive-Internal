#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDCHARACTEREMOJIREPEATFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12CAE30)
#define GROUNDCOMMANDCHARACTEREMOJIREPEATFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12CAE80)
#define GROUNDCOMMANDCHARACTEREMOJIREPEATFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12CA120)

	inline static constexpr unsigned int GroundCommandCharacterEmojiRepeatFormatter_TypeDefinitionIndex = 14149;

	class GroundCommandCharacterEmojiRepeatFormatter : public SyncHashtable
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandCharacterEmojiRepeat&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandCharacterEmojiRepeat&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTEREMOJIREPEATFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandCharacterEmojiRepeat&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandCharacterEmojiRepeat&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTEREMOJIREPEATFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTEREMOJIREPEATFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

