#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDPLAYTIMELINEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x2178CB0)
#define GROUNDCOMMANDPLAYTIMELINEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2176330)
#define GROUNDCOMMANDPLAYTIMELINEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x2178D00)

	inline static constexpr unsigned int GroundCommandPlayTimelineFormatter_TypeDefinitionIndex = 4035;

	class GroundCommandPlayTimelineFormatter : public DictionaryEnumerator
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandPlayTimeline&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandPlayTimeline&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTIMELINEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTIMELINEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandPlayTimeline&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandPlayTimeline&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTIMELINEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

