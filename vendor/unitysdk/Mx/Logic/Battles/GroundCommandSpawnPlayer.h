#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDSPAWNPLAYER_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x13202E0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSPAWNPLAYER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x13204E0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSPAWNPLAYER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1320540)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSPAWNPLAYER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1320E40)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSPAWNPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1320E50)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSPAWNPLAYER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1320EA0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandSpawnPlayer_TypeDefinitionIndex = 14246;

	class GroundCommandSpawnPlayer : public Il2CppObject
	{
	public:
		::System::Boolean IsEnemy; // 0x30
		::System::Boolean IgnoreSkillCardShuffle; // 0x31

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSPAWNPLAYER_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSPAWNPLAYER_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSpawnPlayer&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSpawnPlayer&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSPAWNPLAYER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSPAWNPLAYER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSPAWNPLAYER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSpawnPlayer&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSpawnPlayer&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSPAWNPLAYER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

