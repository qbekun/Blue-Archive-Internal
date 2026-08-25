#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDFADEOUTINFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x216ED20)
#define GROUNDCOMMANDFADEOUTINFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x216DEE0)
#define GROUNDCOMMANDFADEOUTINFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x216ED70)

	inline static constexpr unsigned int GroundCommandFadeOutInFormatter_TypeDefinitionIndex = 4022;

	class GroundCommandFadeOutInFormatter : public <Enumerate>d__28
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandFadeOutIn&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandFadeOutIn&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTINFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTINFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandFadeOutIn&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandFadeOutIn&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTINFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

