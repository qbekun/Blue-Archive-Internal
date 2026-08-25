#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLEENTITIES_SPAWNMOVEPOINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11CE0F0)
#define MX_LOGIC_BATTLEENTITIES_SPAWNMOVEPOINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11CE770)
#define MX_LOGIC_BATTLEENTITIES_SPAWNMOVEPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x11CE760)
#define MX_LOGIC_BATTLEENTITIES_SPAWNMOVEPOINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11CEA30)
#define MX_LOGIC_BATTLEENTITIES_SPAWNMOVEPOINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11CEC10)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SpawnMovePoint_TypeDefinitionIndex = 13366;

	class SpawnMovePoint : public Il2CppObject
	{
	public:
		::System::Boolean NeedFindPath; // 0x48

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::BattleEntities::SpawnMovePoint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::BattleEntities::SpawnMovePoint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNMOVEPOINT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNMOVEPOINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNMOVEPOINT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::BattleEntities::SpawnMovePoint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::BattleEntities::SpawnMovePoint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNMOVEPOINT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNMOVEPOINT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

