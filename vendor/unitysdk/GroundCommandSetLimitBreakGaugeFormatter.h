#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDSETLIMITBREAKGAUGEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1308C20)
#define GROUNDCOMMANDSETLIMITBREAKGAUGEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1308BD0)
#define GROUNDCOMMANDSETLIMITBREAKGAUGEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1308C70)

	inline static constexpr unsigned int GroundCommandSetLimitBreakGaugeFormatter_TypeDefinitionIndex = 14218;

	class GroundCommandSetLimitBreakGaugeFormatter : public KeyCollection
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSetLimitBreakGauge&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSetLimitBreakGauge&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETLIMITBREAKGAUGEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETLIMITBREAKGAUGEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSetLimitBreakGauge&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSetLimitBreakGauge&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETLIMITBREAKGAUGEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

