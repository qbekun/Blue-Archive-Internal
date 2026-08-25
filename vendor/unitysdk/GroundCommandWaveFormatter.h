#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDWAVEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x132FEE0)
#define GROUNDCOMMANDWAVEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x132DFF0)
#define GROUNDCOMMANDWAVEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x132FF30)

	inline static constexpr unsigned int GroundCommandWaveFormatter_TypeDefinitionIndex = 14260;

	class GroundCommandWaveFormatter : public ::System::Collections::Generic::List`1
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandWave&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandWave&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDWAVEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDWAVEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandWave&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandWave&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDWAVEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

