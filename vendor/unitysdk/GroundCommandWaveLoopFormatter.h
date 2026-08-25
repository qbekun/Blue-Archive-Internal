#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDWAVELOOPFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1336BD0)
#define GROUNDCOMMANDWAVELOOPFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1336C20)
#define GROUNDCOMMANDWAVELOOPFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1336A50)

	inline static constexpr unsigned int GroundCommandWaveLoopFormatter_TypeDefinitionIndex = 14267;

	class GroundCommandWaveLoopFormatter : public ::System::Collections::Generic::ValueListBuilder`1
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandWaveLoop&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandWaveLoop&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDWAVELOOPFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandWaveLoop&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandWaveLoop&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDWAVELOOPFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDWAVELOOPFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

