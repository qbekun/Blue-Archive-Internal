#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDFORCEMOVETOGROUNDPOINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12E2480)
#define GROUNDCOMMANDFORCEMOVETOGROUNDPOINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12E24D0)
#define GROUNDCOMMANDFORCEMOVETOGROUNDPOINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12DF410)

	inline static constexpr unsigned int GroundCommandForceMoveToGroundPointFormatter_TypeDefinitionIndex = 14176;

	class GroundCommandForceMoveToGroundPointFormatter : public DictionaryEnumerator
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandForceMoveToGroundPoint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandForceMoveToGroundPoint&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEMOVETOGROUNDPOINTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandForceMoveToGroundPoint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandForceMoveToGroundPoint&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEMOVETOGROUNDPOINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEMOVETOGROUNDPOINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

