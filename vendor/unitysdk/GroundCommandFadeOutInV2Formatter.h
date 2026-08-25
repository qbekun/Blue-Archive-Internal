#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDFADEOUTINV2FORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x216FA80)
#define GROUNDCOMMANDFADEOUTINV2FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x2170950)
#define GROUNDCOMMANDFADEOUTINV2FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x21709A0)

	inline static constexpr unsigned int GroundCommandFadeOutInV2Formatter_TypeDefinitionIndex = 4025;

	class GroundCommandFadeOutInV2Formatter : public ::System::Collections::Concurrent::ConcurrentQueue`1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTINV2FORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandFadeOutInV2&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandFadeOutInV2&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTINV2FORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandFadeOutInV2&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandFadeOutInV2&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTINV2FORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

