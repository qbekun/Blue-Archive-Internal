#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillLevel; }

#define MX_LOGIC_BATTLEENTITIES_SPAWNDATA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11C9AA0)
#define MX_LOGIC_BATTLEENTITIES_SPAWNDATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11C9CA0)
#define MX_LOGIC_BATTLEENTITIES_SPAWNDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11CA630)
#define MX_LOGIC_BATTLEENTITIES_SPAWNDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11CA640)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SpawnData_TypeDefinitionIndex = 13360;

	class SpawnData : public Il2CppObject
	{
	public:
		::System::String* SpawnTemplateId; // 0x10
		::System::Int64 CostumeId; // 0x18
		::System::Int32 AIId; // 0x20
		::System::Boolean AppearAction; // 0x24
		::MX::Logic::BattleEntities::SkillLevel* SkillLevel; // 0x28

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNDATA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::BattleEntities::SpawnData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::BattleEntities::SpawnData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNDATA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNDATA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::BattleEntities::SpawnData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::BattleEntities::SpawnData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNDATA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

