#pragma once
#include "../../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class AreaSpawnerDAO; }
namespace MX::GameData::DAO::Battle { class SkillEntitySpawnerDAO; }
namespace MX::Logic::Skills { class MovingAreaOptions; }

#define MX_GAMEDATA_DAO_BATTLE_SUMMONENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17899A0)
#define MX_GAMEDATA_DAO_BATTLE_SUMMONENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17899F0)
#define MX_GAMEDATA_DAO_BATTLE_SUMMONENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1789A00)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int SummonEntityDAO_TypeDefinitionIndex = 15545;

	class SummonEntityDAO : public Il2CppObject
	{
	public:
		::System::String* UniqueName; // 0x158
		::System::Single AngleOffset; // 0x160
		::System::Int32 Duration; // 0x164
		::System::Boolean DestroyAlreadyExist; // 0x168
		::MX::GameData::DAO::Battle::AreaSpawnerDAO* InitialAreaSpawnerEntity; // 0x170
		::MX::GameData::DAO::Battle::SkillEntitySpawnerDAO* InitialEntitySpawner; // 0x178
		::System::Boolean SpawnSameGridLayerAsInvoker; // 0x180
		::System::Boolean SummonAsEnemy; // 0x181
		::MX::Logic::Skills::MovingAreaOptions* MovingAreaOption; // 0x184

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUMMONENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUMMONENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUMMONENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

