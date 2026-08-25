#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_GROUNDCOMMANDOVERRIDERAIDBOSSBUFFICON_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12ECC30)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDOVERRIDERAIDBOSSBUFFICON_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12ECC40)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDOVERRIDERAIDBOSSBUFFICON_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12ECE40)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDOVERRIDERAIDBOSSBUFFICON_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12EDA20)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDOVERRIDERAIDBOSSBUFFICON_.CTOR_OFFSET UNITYSDK_OFFSET(0x12ED9D0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandOverrideRaidBossBuffIcon_TypeDefinitionIndex = 14193;

	class GroundCommandOverrideRaidBossBuffIcon : public Il2CppObject
	{
	public:
		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDOVERRIDERAIDBOSSBUFFICON_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDOVERRIDERAIDBOSSBUFFICON_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandOverrideRaidBossBuffIcon&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandOverrideRaidBossBuffIcon&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDOVERRIDERAIDBOSSBUFFICON_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandOverrideRaidBossBuffIcon&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandOverrideRaidBossBuffIcon&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDOVERRIDERAIDBOSSBUFFICON_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDOVERRIDERAIDBOSSBUFFICON_.CTOR_OFFSET))(nullptr);
		}

	};
}

