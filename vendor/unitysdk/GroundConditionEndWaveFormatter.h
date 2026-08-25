#pragma once
#include "unitysdk.h"

#define GROUNDCONDITIONENDWAVEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1360190)
#define GROUNDCONDITIONENDWAVEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1360270)
#define GROUNDCONDITIONENDWAVEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13602C0)

	inline static constexpr unsigned int GroundConditionEndWaveFormatter_TypeDefinitionIndex = 14337;

	class GroundConditionEndWaveFormatter : public Enumerator
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONENDWAVEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionEndWave&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionEndWave&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONENDWAVEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionEndWave&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionEndWave&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONENDWAVEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

