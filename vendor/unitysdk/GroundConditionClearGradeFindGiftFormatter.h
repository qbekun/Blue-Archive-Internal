#pragma once
#include "unitysdk.h"

#define GROUNDCONDITIONCLEARGRADEFINDGIFTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1359BA0)
#define GROUNDCONDITIONCLEARGRADEFINDGIFTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x135B090)
#define GROUNDCONDITIONCLEARGRADEFINDGIFTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x135B0E0)

	inline static constexpr unsigned int GroundConditionClearGradeFindGiftFormatter_TypeDefinitionIndex = 14333;

	class GroundConditionClearGradeFindGiftFormatter : public ::System::Collections::Generic::CollectionDebugView`1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCLEARGRADEFINDGIFTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionClearGradeFindGift&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionClearGradeFindGift&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCLEARGRADEFINDGIFTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionClearGradeFindGift&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionClearGradeFindGift&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCLEARGRADEFINDGIFTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

