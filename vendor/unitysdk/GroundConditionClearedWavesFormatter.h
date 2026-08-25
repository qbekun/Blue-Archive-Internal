#pragma once
#include "unitysdk.h"

#define GROUNDCONDITIONCLEAREDWAVESFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1358870)
#define GROUNDCONDITIONCLEAREDWAVESFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13587A0)
#define GROUNDCONDITIONCLEAREDWAVESFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13588C0)

	inline static constexpr unsigned int GroundConditionClearedWavesFormatter_TypeDefinitionIndex = 14331;

	class GroundConditionClearedWavesFormatter : public ::System::Collections::Generic::DictionaryDebugView`2
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionClearedWaves&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionClearedWaves&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCLEAREDWAVESFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCLEAREDWAVESFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionClearedWaves&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionClearedWaves&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCLEAREDWAVESFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

