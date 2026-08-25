#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDSETSINGLECARRIERSKILLDECKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x130E2E0)
#define GROUNDCOMMANDSETSINGLECARRIERSKILLDECKFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x130E290)
#define GROUNDCOMMANDSETSINGLECARRIERSKILLDECKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x130E330)

	inline static constexpr unsigned int GroundCommandSetSingleCarrierSkillDeckFormatter_TypeDefinitionIndex = 14222;

	class GroundCommandSetSingleCarrierSkillDeckFormatter : public ValueCollection
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSetSingleCarrierSkillDeck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSetSingleCarrierSkillDeck&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSINGLECARRIERSKILLDECKFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSINGLECARRIERSKILLDECKFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSetSingleCarrierSkillDeck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSetSingleCarrierSkillDeck&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSINGLECARRIERSKILLDECKFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

