#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EmojiEvent; }
namespace UnityEngine { class Vector3; }
namespace MX::Logic::Battles { class EmojiSide; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTEREMOJI_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12C7A40)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTEREMOJI_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12C8350)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTEREMOJI_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12C9130)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTEREMOJI_.CTOR_OFFSET UNITYSDK_OFFSET(0x12C90E0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTEREMOJI_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12C94A0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandCharacterEmoji_TypeDefinitionIndex = 14148;

	class GroundCommandCharacterEmoji : public Il2CppObject
	{
	public:
		::FlatData::EmojiEvent* EmojiEvent; // 0x30
		::System::Boolean UseWorldPosition; // 0x34
		::UnityEngine::Vector3* WorldPosition; // 0x38
		::MX::Logic::Battles::EmojiSide* ShowPosition; // 0x44

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandCharacterEmoji&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandCharacterEmoji&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTEREMOJI_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandCharacterEmoji&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandCharacterEmoji&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTEREMOJI_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTEREMOJI_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTEREMOJI_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTEREMOJI_.CCTOR_OFFSET))(nullptr);
		}

	};
}

