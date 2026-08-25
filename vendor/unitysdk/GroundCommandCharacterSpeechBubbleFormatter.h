#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDCHARACTERSPEECHBUBBLEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12CB1A0)
#define GROUNDCOMMANDCHARACTERSPEECHBUBBLEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12CD710)
#define GROUNDCOMMANDCHARACTERSPEECHBUBBLEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12CD760)

	inline static constexpr unsigned int GroundCommandCharacterSpeechBubbleFormatter_TypeDefinitionIndex = 14151;

	class GroundCommandCharacterSpeechBubbleFormatter : public HashtableEnumerator
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTERSPEECHBUBBLEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandCharacterSpeechBubble&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandCharacterSpeechBubble&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTERSPEECHBUBBLEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandCharacterSpeechBubble&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandCharacterSpeechBubble&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTERSPEECHBUBBLEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

