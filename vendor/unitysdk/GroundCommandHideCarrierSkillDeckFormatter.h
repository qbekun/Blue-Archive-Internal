#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDHIDECARRIERSKILLDECKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12E74D0)
#define GROUNDCOMMANDHIDECARRIERSKILLDECKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12E7520)
#define GROUNDCOMMANDHIDECARRIERSKILLDECKFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12E6860)

	inline static constexpr unsigned int GroundCommandHideCarrierSkillDeckFormatter_TypeDefinitionIndex = 14184;

	class GroundCommandHideCarrierSkillDeckFormatter : public ::System::Collections::Concurrent::IDictionaryDebugView`2
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandHideCarrierSkillDeck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandHideCarrierSkillDeck&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDECARRIERSKILLDECKFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandHideCarrierSkillDeck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandHideCarrierSkillDeck&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDECARRIERSKILLDECKFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDECARRIERSKILLDECKFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

