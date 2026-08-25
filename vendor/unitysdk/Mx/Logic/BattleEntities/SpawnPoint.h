#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SpawnData; }
namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLEENTITIES_SPAWNPOINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11C4A50)
#define MX_LOGIC_BATTLEENTITIES_SPAWNPOINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11C4DC0)
#define MX_LOGIC_BATTLEENTITIES_SPAWNPOINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11C5820)
#define MX_LOGIC_BATTLEENTITIES_SPAWNPOINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11C5AB0)
#define MX_LOGIC_BATTLEENTITIES_SPAWNPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x11C57D0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SpawnPoint_TypeDefinitionIndex = 13350;

	class SpawnPoint : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::SpawnData* SpawnData; // 0x70

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNPOINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::BattleEntities::SpawnPoint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::BattleEntities::SpawnPoint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNPOINT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::BattleEntities::SpawnPoint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::BattleEntities::SpawnPoint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNPOINT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNPOINT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNPOINT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

