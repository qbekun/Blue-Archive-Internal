#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDHIDESINGLECARRIERSKILLDECKFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12E8CC0)
#define GROUNDCOMMANDHIDESINGLECARRIERSKILLDECKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12E8D00)
#define GROUNDCOMMANDHIDESINGLECARRIERSKILLDECKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12E8D50)

	inline static constexpr unsigned int GroundCommandHideSingleCarrierSkillDeckFormatter_TypeDefinitionIndex = 14186;

	class GroundCommandHideSingleCarrierSkillDeckFormatter : public <GetEnumerator>d__35
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDESINGLECARRIERSKILLDECKFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandHideSingleCarrierSkillDeck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandHideSingleCarrierSkillDeck&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDESINGLECARRIERSKILLDECKFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandHideSingleCarrierSkillDeck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandHideSingleCarrierSkillDeck&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDESINGLECARRIERSKILLDECKFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

