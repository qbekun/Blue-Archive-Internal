#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EmojiEvent; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTEREMOJIREPEAT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12C9550)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTEREMOJIREPEAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x12C9E50)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTEREMOJIREPEAT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12C9EA0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTEREMOJIREPEAT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12CA160)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTEREMOJIREPEAT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12CAE20)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandCharacterEmojiRepeat_TypeDefinitionIndex = 14150;

	class GroundCommandCharacterEmojiRepeat : public Il2CppObject
	{
	public:
		::FlatData::EmojiEvent* EmojiEvent; // 0x30
		::System::Int32 LoopCount; // 0x34
		::System::Boolean IsPlay; // 0x38

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandCharacterEmojiRepeat&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandCharacterEmojiRepeat&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTEREMOJIREPEAT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTEREMOJIREPEAT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTEREMOJIREPEAT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandCharacterEmojiRepeat&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandCharacterEmojiRepeat&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTEREMOJIREPEAT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTEREMOJIREPEAT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

