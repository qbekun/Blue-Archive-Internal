#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLEENTITIES_RANDOMSPAWNPOINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11C5B60)
#define MX_LOGIC_BATTLEENTITIES_RANDOMSPAWNPOINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11C67D0)
#define MX_LOGIC_BATTLEENTITIES_RANDOMSPAWNPOINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11C6BD0)
#define MX_LOGIC_BATTLEENTITIES_RANDOMSPAWNPOINT_GET_RANDOMAMOUNTSUM_OFFSET UNITYSDK_OFFSET(0x11C65F0)
#define MX_LOGIC_BATTLEENTITIES_RANDOMSPAWNPOINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11C67E0)
#define MX_LOGIC_BATTLEENTITIES_RANDOMSPAWNPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x11C6780)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int RandomSpawnPoint_TypeDefinitionIndex = 13352;

	class RandomSpawnPoint : public Il2CppObject
	{
	public:
		::System::Int64 Delay; // 0x70
		Il2CppObject* SpawnList; // 0x78
		Il2CppObject* randomAmountSum; // 0x80

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::BattleEntities::RandomSpawnPoint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::BattleEntities::RandomSpawnPoint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMSPAWNPOINT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMSPAWNPOINT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::BattleEntities::RandomSpawnPoint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::BattleEntities::RandomSpawnPoint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMSPAWNPOINT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_RandomAmountSum()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMSPAWNPOINT_GET_RANDOMAMOUNTSUM_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMSPAWNPOINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMSPAWNPOINT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

