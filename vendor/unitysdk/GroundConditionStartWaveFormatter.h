#pragma once
#include "unitysdk.h"

#define GROUNDCONDITIONSTARTWAVEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1367B40)
#define GROUNDCONDITIONSTARTWAVEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x136A070)
#define GROUNDCONDITIONSTARTWAVEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x136A0C0)

	inline static constexpr unsigned int GroundConditionStartWaveFormatter_TypeDefinitionIndex = 14348;

	class GroundConditionStartWaveFormatter : public ::System::Collections::Generic::Comparer`1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONSTARTWAVEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionStartWave&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionStartWave&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONSTARTWAVEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionStartWave&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionStartWave&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONSTARTWAVEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

