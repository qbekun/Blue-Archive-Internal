#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDFORCEUPDATERAIDBOSSINDEXFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12E4220)
#define GROUNDCOMMANDFORCEUPDATERAIDBOSSINDEXFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12E4270)
#define GROUNDCOMMANDFORCEUPDATERAIDBOSSINDEXFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12E35C0)

	inline static constexpr unsigned int GroundCommandForceUpdateRaidBossIndexFormatter_TypeDefinitionIndex = 14180;

	class GroundCommandForceUpdateRaidBossIndexFormatter : public <GetEnumerator>d__35
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandForceUpdateRaidBossIndex&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandForceUpdateRaidBossIndex&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEUPDATERAIDBOSSINDEXFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandForceUpdateRaidBossIndex&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandForceUpdateRaidBossIndex&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEUPDATERAIDBOSSINDEXFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEUPDATERAIDBOSSINDEXFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

