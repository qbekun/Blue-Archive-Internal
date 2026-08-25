#pragma once
#include "unitysdk.h"

#define GROUNDCONDITIONENDFINDGIFTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x135DA50)
#define GROUNDCONDITIONENDFINDGIFTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x135DAA0)
#define GROUNDCONDITIONENDFINDGIFTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x135C3E0)

	inline static constexpr unsigned int GroundConditionEndFindGiftFormatter_TypeDefinitionIndex = 14335;

	class GroundConditionEndFindGiftFormatter : public ::System::Collections::Generic::LowLevelList`1
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionEndFindGift&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionEndFindGift&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONENDFINDGIFTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionEndFindGift&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionEndFindGift&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONENDFINDGIFTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONENDFINDGIFTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

