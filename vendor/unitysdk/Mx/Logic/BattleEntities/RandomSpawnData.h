#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SpawnData; }

#define MX_LOGIC_BATTLEENTITIES_RANDOMSPAWNDATA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11CAF30)
#define MX_LOGIC_BATTLEENTITIES_RANDOMSPAWNDATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11CB130)
#define MX_LOGIC_BATTLEENTITIES_RANDOMSPAWNDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11CB550)
#define MX_LOGIC_BATTLEENTITIES_RANDOMSPAWNDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11CB540)
#define MX_LOGIC_BATTLEENTITIES_RANDOMSPAWNDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11CB6B0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int RandomSpawnData_TypeDefinitionIndex = 13362;

	class RandomSpawnData : public Il2CppObject
	{
	public:
		::System::Int64 RandomAmount; // 0x10
		::MX::Logic::BattleEntities::SpawnData* SpawnData; // 0x18

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMSPAWNDATA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::BattleEntities::RandomSpawnData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::BattleEntities::RandomSpawnData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMSPAWNDATA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::BattleEntities::RandomSpawnData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::BattleEntities::RandomSpawnData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMSPAWNDATA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMSPAWNDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMSPAWNDATA_.CCTOR_OFFSET))(nullptr);
		}

	};
}

