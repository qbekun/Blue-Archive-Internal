#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace MX::GameLogic::DBModel { class RaidBossDB; }

#define MX_GAMELOGIC_DBMODEL_RAIDBOSSDB_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x10076A0)
#define MX_GAMELOGIC_DBMODEL_RAIDBOSSDB_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x10076B0)
#define MX_GAMELOGIC_DBMODEL_RAIDBOSSDB_GET_BOSSINDEX_OFFSET UNITYSDK_OFFSET(0x10076C0)
#define MX_GAMELOGIC_DBMODEL_RAIDBOSSDB_SET_BOSSINDEX_OFFSET UNITYSDK_OFFSET(0x10076D0)
#define MX_GAMELOGIC_DBMODEL_RAIDBOSSDB_GET_BOSSCURRENTHP_OFFSET UNITYSDK_OFFSET(0x10076E0)
#define MX_GAMELOGIC_DBMODEL_RAIDBOSSDB_SET_BOSSCURRENTHP_OFFSET UNITYSDK_OFFSET(0x10076F0)
#define MX_GAMELOGIC_DBMODEL_RAIDBOSSDB_GET_BOSSGROGGYPOINT_OFFSET UNITYSDK_OFFSET(0x1007700)
#define MX_GAMELOGIC_DBMODEL_RAIDBOSSDB_SET_BOSSGROGGYPOINT_OFFSET UNITYSDK_OFFSET(0x1007710)
#define MX_GAMELOGIC_DBMODEL_RAIDBOSSDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1007720)
#define MX_GAMELOGIC_DBMODEL_RAIDBOSSDB_UPDATE_OFFSET UNITYSDK_OFFSET(0x10077B0)
#define MX_GAMELOGIC_DBMODEL_RAIDBOSSDB_CLONE_OFFSET UNITYSDK_OFFSET(0x10077C0)
#define MX_GAMELOGIC_DBMODEL_RAIDBOSSDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x10077A0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int RaidBossDB_TypeDefinitionIndex = 12687;

	class RaidBossDB : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x10
		::System::Int32 _BossIndex_k__BackingField; // 0x14
		::System::Int64 _BossCurrentHP_k__BackingField; // 0x18
		::System::Int64 _BossGroggyPoint_k__BackingField; // 0x20

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBOSSDB_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBOSSDB_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BossIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBOSSDB_GET_BOSSINDEX_OFFSET))(nullptr);
		}

		::System::Void set_BossIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBOSSDB_SET_BOSSINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BossCurrentHP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBOSSDB_GET_BOSSCURRENTHP_OFFSET))(nullptr);
		}

		::System::Void set_BossCurrentHP(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBOSSDB_SET_BOSSCURRENTHP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BossGroggyPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBOSSDB_GET_BOSSGROGGYPOINT_OFFSET))(nullptr);
		}

		::System::Void set_BossGroggyPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBOSSDB_SET_BOSSGROGGYPOINT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::RaidBossDB* Clone(::MX::GameLogic::DBModel::RaidBossDB* arg)
		{
			return ((::MX::GameLogic::DBModel::RaidBossDB*(*)(::MX::GameLogic::DBModel::RaidBossDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBOSSDB_CLONE_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::System::Int32 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBOSSDB_UPDATE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::DBModel::RaidBossDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::RaidBossDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBOSSDB_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBOSSDB_.CTOR_OFFSET))(nullptr);
		}

	};
}

