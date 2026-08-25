#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDFORCEMOVETOFORMATIONBEACONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12DF1B0)
#define GROUNDCOMMANDFORCEMOVETOFORMATIONBEACONFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12DF170)
#define GROUNDCOMMANDFORCEMOVETOFORMATIONBEACONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12DF200)

	inline static constexpr unsigned int GroundCommandForceMoveToFormationBeaconFormatter_TypeDefinitionIndex = 14173;

	class GroundCommandForceMoveToFormationBeaconFormatter : public Node
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandForceMoveToFormationBeacon&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandForceMoveToFormationBeacon&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEMOVETOFORMATIONBEACONFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEMOVETOFORMATIONBEACONFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandForceMoveToFormationBeacon&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandForceMoveToFormationBeacon&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEMOVETOFORMATIONBEACONFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

