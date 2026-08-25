#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace MX::Logic::Data { class RaidMemberCollection; }
namespace MX::GameLogic::DBModel { class RaidBossDB; }
namespace MX::Logic::Data { class RaidMemberDescription; }
namespace MX::GameLogic::DBModel { class RaidBattleDB; }
namespace MX::Logic::Data { class RaidBossResultCollection; }
namespace MX::Data { class RaidData; }
namespace MX::Data { class WorldRaidData; }

#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1006890)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x10068A0)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_GET_RAIDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x10068B0)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_SET_RAIDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x10068C0)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_GET_RAIDBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x10068D0)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_SET_RAIDBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x10068E0)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_GET_CURRENTBOSSHP_OFFSET UNITYSDK_OFFSET(0x10068F0)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_SET_CURRENTBOSSHP_OFFSET UNITYSDK_OFFSET(0x1006900)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_GET_CURRENTBOSSGROGGY_OFFSET UNITYSDK_OFFSET(0x1006910)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_SET_CURRENTBOSSGROGGY_OFFSET UNITYSDK_OFFSET(0x1006920)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_GET_CURRENTBOSSAIPHASE_OFFSET UNITYSDK_OFFSET(0x1006930)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_SET_CURRENTBOSSAIPHASE_OFFSET UNITYSDK_OFFSET(0x1006940)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_GET_BIECHELON_OFFSET UNITYSDK_OFFSET(0x1006950)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_SET_BIECHELON_OFFSET UNITYSDK_OFFSET(0x1006960)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_GET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0x1006970)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_SET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0x1006980)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_GET_RAIDMEMBERS_OFFSET UNITYSDK_OFFSET(0x1006990)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_SET_RAIDMEMBERS_OFFSET UNITYSDK_OFFSET(0x10069A0)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_SHOULDSERIALIZERAIDMEMBERS_OFFSET UNITYSDK_OFFSET(0x10069B0)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_GET_SUBPARTSHPS_OFFSET UNITYSDK_OFFSET(0x10069F0)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_SET_SUBPARTSHPS_OFFSET UNITYSDK_OFFSET(0x1006A00)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_SHOULDSERIALIZESUBPARTSHPS_OFFSET UNITYSDK_OFFSET(0x1006A10)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1006A50)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1006A60)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1006B10)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1006DB0)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_UPDATE_OFFSET UNITYSDK_OFFSET(0x1006DC0)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_UPDATE_OFFSET UNITYSDK_OFFSET(0x1007480)
#define MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_BUILD_OFFSET UNITYSDK_OFFSET(0x1006F30)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int RaidBattleDB_TypeDefinitionIndex = 12686;

	class RaidBattleDB : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x10
		::System::Int64 _RaidUniqueId_k__BackingField; // 0x18
		::System::Int32 _RaidBossIndex_k__BackingField; // 0x20
		::System::Int64 _CurrentBossHP_k__BackingField; // 0x28
		::System::Int64 _CurrentBossGroggy_k__BackingField; // 0x30
		::System::Int64 _CurrentBossAIPhase_k__BackingField; // 0x38
		::System::String* _BIEchelon_k__BackingField; // 0x40
		::System::Boolean _IsClear_k__BackingField; // 0x48
		::MX::Logic::Data::RaidMemberCollection* _RaidMembers_k__BackingField; // 0x50
		Il2CppObject* _SubPartsHPs_k__BackingField; // 0x58

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RaidUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_GET_RAIDUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_RaidUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_SET_RAIDUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RaidBossIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_GET_RAIDBOSSINDEX_OFFSET))(nullptr);
		}

		::System::Void set_RaidBossIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_SET_RAIDBOSSINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CurrentBossHP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_GET_CURRENTBOSSHP_OFFSET))(nullptr);
		}

		::System::Void set_CurrentBossHP(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_SET_CURRENTBOSSHP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CurrentBossGroggy()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_GET_CURRENTBOSSGROGGY_OFFSET))(nullptr);
		}

		::System::Void set_CurrentBossGroggy(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_SET_CURRENTBOSSGROGGY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CurrentBossAIPhase()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_GET_CURRENTBOSSAIPHASE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentBossAIPhase(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_SET_CURRENTBOSSAIPHASE_OFFSET))(arg, nullptr);
		}

		::System::String* get_BIEchelon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_GET_BIECHELON_OFFSET))(nullptr);
		}

		::System::Void set_BIEchelon(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_SET_BIECHELON_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_GET_ISCLEAR_OFFSET))(nullptr);
		}

		::System::Void set_IsClear(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_SET_ISCLEAR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::RaidMemberCollection* get_RaidMembers()
		{
			return ((::MX::Logic::Data::RaidMemberCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_GET_RAIDMEMBERS_OFFSET))(nullptr);
		}

		::System::Void set_RaidMembers(::MX::Logic::Data::RaidMemberCollection* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::RaidMemberCollection*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_SET_RAIDMEMBERS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeRaidMembers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_SHOULDSERIALIZERAIDMEMBERS_OFFSET))(nullptr);
		}

		Il2CppObject* get_SubPartsHPs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_GET_SUBPARTSHPS_OFFSET))(nullptr);
		}

		::System::Void set_SubPartsHPs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_SET_SUBPARTSHPS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeSubPartsHPs()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_SHOULDSERIALIZESUBPARTSHPS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::ContentType* arg, ::System::Int64 arg2, ::MX::GameLogic::DBModel::RaidBossDB* arg3, ::MX::Logic::Data::RaidMemberDescription* arg4)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::System::Int64, ::MX::GameLogic::DBModel::RaidBossDB*, ::MX::Logic::Data::RaidMemberDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::GameLogic::DBModel::RaidBattleDB* Clone(::MX::GameLogic::DBModel::RaidBattleDB* arg)
		{
			return ((::MX::GameLogic::DBModel::RaidBattleDB*(*)(::MX::GameLogic::DBModel::RaidBattleDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_CLONE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::RaidBattleDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::RaidBattleDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Update(::System::Int64 arg, ::MX::Logic::Data::RaidBossResultCollection* arg2, ::MX::Data::RaidData* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::Logic::Data::RaidBossResultCollection*, ::MX::Data::RaidData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_UPDATE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean Update(::System::Int64 arg, ::MX::Logic::Data::RaidBossResultCollection* arg2, ::MX::Data::WorldRaidData* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::Logic::Data::RaidBossResultCollection*, ::MX::Data::WorldRaidData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_UPDATE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Build(::System::Int64 arg, ::MX::Logic::Data::RaidBossResultCollection* arg2, ::System::Int64 arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::Int64, ::MX::Logic::Data::RaidBossResultCollection*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDBATTLEDB_BUILD_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

