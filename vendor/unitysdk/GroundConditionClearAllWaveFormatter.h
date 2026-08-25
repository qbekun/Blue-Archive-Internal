#pragma once
#include "unitysdk.h"

#define GROUNDCONDITIONCLEARALLWAVEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1353AA0)
#define GROUNDCONDITIONCLEARALLWAVEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1355F10)
#define GROUNDCONDITIONCLEARALLWAVEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1355F60)

	inline static constexpr unsigned int GroundConditionClearAllWaveFormatter_TypeDefinitionIndex = 14329;

	class GroundConditionClearAllWaveFormatter : public ::System::Collections::Generic::StackDebugView`1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCLEARALLWAVEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionClearAllWave&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionClearAllWave&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCLEARALLWAVEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionClearAllWave&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionClearAllWave&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCLEARALLWAVEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

