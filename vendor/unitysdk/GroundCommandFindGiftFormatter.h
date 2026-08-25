#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDFINDGIFTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D97C0)
#define GROUNDCOMMANDFINDGIFTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D9810)
#define GROUNDCOMMANDFINDGIFTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12D7F20)

	inline static constexpr unsigned int GroundCommandFindGiftFormatter_TypeDefinitionIndex = 14164;

	class GroundCommandFindGiftFormatter : public ::System::Collections::Concurrent::PaddedHeadAndTail
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandFindGift&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandFindGift&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFINDGIFTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandFindGift&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandFindGift&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFINDGIFTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFINDGIFTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

