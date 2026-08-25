#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class BeamPhase; }
namespace MX::GameData::DAO::Battle { class AreaSpawnerDAO; }
namespace MX::GameData::DAO::Battle { class SkillEntitySpawnerDAO; }
namespace MX::GameData::DAO::Battle { class TargetAttachedEntityDAO; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class BeamSplashDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_BEAMSPLASHDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17D5BE0)
#define MX_GAMEDATA_DAO_BATTLE_BEAMSPLASHDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17D5BF0)
#define MX_GAMEDATA_DAO_BATTLE_BEAMSPLASHDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D5EB0)
#define MX_GAMEDATA_DAO_BATTLE_BEAMSPLASHDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D6380)
#define MX_GAMEDATA_DAO_BATTLE_BEAMSPLASHDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17D6370)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int BeamSplashDAO_TypeDefinitionIndex = 15584;

	class BeamSplashDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BeamPhase* Phase; // 0x10
		::MX::GameData::DAO::Battle::AreaSpawnerDAO* AreaSpawner; // 0x18
		::MX::GameData::DAO::Battle::SkillEntitySpawnerDAO* SkillEntitySpawner; // 0x20
		::MX::GameData::DAO::Battle::TargetAttachedEntityDAO* TargetAttachedEntity; // 0x28

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BEAMSPLASHDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BEAMSPLASHDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BeamSplashDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BeamSplashDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BEAMSPLASHDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BeamSplashDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BeamSplashDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BEAMSPLASHDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BEAMSPLASHDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

