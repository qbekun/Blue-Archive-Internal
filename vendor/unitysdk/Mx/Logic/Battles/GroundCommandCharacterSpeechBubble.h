#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class BattleDialogType; }
namespace UnityEngine { class Vector2; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERSPEECHBUBBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12CAED0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERSPEECHBUBBLE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12CAF20)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERSPEECHBUBBLE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12CB1E0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERSPEECHBUBBLE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12CC730)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERSPEECHBUBBLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12CD700)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandCharacterSpeechBubble_TypeDefinitionIndex = 14152;

	class GroundCommandCharacterSpeechBubble : public Il2CppObject
	{
	public:
		::System::String* DialogLocalizeEtcKey; // 0x30
		::FlatData::BattleDialogType* DialogType; // 0x38
		::System::Int64 DurationMilisecond; // 0x40
		::UnityEngine::Vector2* Offset; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERSPEECHBUBBLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERSPEECHBUBBLE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandCharacterSpeechBubble&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandCharacterSpeechBubble&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERSPEECHBUBBLE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandCharacterSpeechBubble&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandCharacterSpeechBubble&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERSPEECHBUBBLE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDCHARACTERSPEECHBUBBLE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

