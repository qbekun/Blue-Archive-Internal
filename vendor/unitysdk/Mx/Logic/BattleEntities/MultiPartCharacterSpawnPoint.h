#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SpawnData; }
namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLEENTITIES_MULTIPARTCHARACTERSPAWNPOINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11C6F90)
#define MX_LOGIC_BATTLEENTITIES_MULTIPARTCHARACTERSPAWNPOINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11C7B20)
#define MX_LOGIC_BATTLEENTITIES_MULTIPARTCHARACTERSPAWNPOINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11C7F50)
#define MX_LOGIC_BATTLEENTITIES_MULTIPARTCHARACTERSPAWNPOINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11C8210)
#define MX_LOGIC_BATTLEENTITIES_MULTIPARTCHARACTERSPAWNPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x11C7AD0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int MultiPartCharacterSpawnPoint_TypeDefinitionIndex = 13354;

	class MultiPartCharacterSpawnPoint : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::SpawnData* MainSpawnData; // 0x70
		Il2CppObject* SubSpawnData; // 0xA8

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::BattleEntities::MultiPartCharacterSpawnPoint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::BattleEntities::MultiPartCharacterSpawnPoint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_MULTIPARTCHARACTERSPAWNPOINT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_MULTIPARTCHARACTERSPAWNPOINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::BattleEntities::MultiPartCharacterSpawnPoint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::BattleEntities::MultiPartCharacterSpawnPoint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_MULTIPARTCHARACTERSPAWNPOINT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_MULTIPARTCHARACTERSPAWNPOINT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_MULTIPARTCHARACTERSPAWNPOINT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

