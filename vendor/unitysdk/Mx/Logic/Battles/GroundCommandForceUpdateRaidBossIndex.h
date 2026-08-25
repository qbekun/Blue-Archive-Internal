#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEUPDATERAIDBOSSINDEX_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12E2A30)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEUPDATERAIDBOSSINDEX_.CTOR_OFFSET UNITYSDK_OFFSET(0x12E2C00)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEUPDATERAIDBOSSINDEX_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12E2C50)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEUPDATERAIDBOSSINDEX_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12E3540)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEUPDATERAIDBOSSINDEX_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12E2A40)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEUPDATERAIDBOSSINDEX_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12E3600)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandForceUpdateRaidBossIndex_TypeDefinitionIndex = 14181;

	class GroundCommandForceUpdateRaidBossIndex : public Il2CppObject
	{
	public:
		::System::Int32 RaidBossIndex; // 0x30

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEUPDATERAIDBOSSINDEX_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEUPDATERAIDBOSSINDEX_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandForceUpdateRaidBossIndex&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandForceUpdateRaidBossIndex&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEUPDATERAIDBOSSINDEX_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEUPDATERAIDBOSSINDEX_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEUPDATERAIDBOSSINDEX_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandForceUpdateRaidBossIndex&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandForceUpdateRaidBossIndex&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEUPDATERAIDBOSSINDEX_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

