#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class RaidBossGroupType; }
namespace MX::Data { class RaidStageInfo; }

#define MX_GAMELOGIC_DBMODEL_PERMANENTRAIDBOSSMANAGEDB_SET_LOCKENDDATE_OFFSET UNITYSDK_OFFSET(0x1006110)
#define MX_GAMELOGIC_DBMODEL_PERMANENTRAIDBOSSMANAGEDB__GETSTAGEIDS_B__12_0_OFFSET UNITYSDK_OFFSET(0x1006120)
#define MX_GAMELOGIC_DBMODEL_PERMANENTRAIDBOSSMANAGEDB_SET_LOCKSTARTDATE_OFFSET UNITYSDK_OFFSET(0x1006140)
#define MX_GAMELOGIC_DBMODEL_PERMANENTRAIDBOSSMANAGEDB_SET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1006150)
#define MX_GAMELOGIC_DBMODEL_PERMANENTRAIDBOSSMANAGEDB_GETSTAGEIDS_OFFSET UNITYSDK_OFFSET(0x1006160)
#define MX_GAMELOGIC_DBMODEL_PERMANENTRAIDBOSSMANAGEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1006360)
#define MX_GAMELOGIC_DBMODEL_PERMANENTRAIDBOSSMANAGEDB_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x1006370)
#define MX_GAMELOGIC_DBMODEL_PERMANENTRAIDBOSSMANAGEDB_GET_LOCKENDDATE_OFFSET UNITYSDK_OFFSET(0x10063D0)
#define MX_GAMELOGIC_DBMODEL_PERMANENTRAIDBOSSMANAGEDB_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x10063E0)
#define MX_GAMELOGIC_DBMODEL_PERMANENTRAIDBOSSMANAGEDB_GET_LOCKSTARTDATE_OFFSET UNITYSDK_OFFSET(0x10063F0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int PermanentRaidBossManageDB_TypeDefinitionIndex = 12677;

	class PermanentRaidBossManageDB : public Il2CppObject
	{
	public:
		::FlatData::RaidBossGroupType* _GroupType_k__BackingField; // 0x10
		::System::DateTime* _LockStartDate_k__BackingField; // 0x18
		::System::DateTime* _LockEndDate_k__BackingField; // 0x20

		::System::Void set_LockEndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PERMANENTRAIDBOSSMANAGEDB_SET_LOCKENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetStageIds_b__12_0(::MX::Data::RaidStageInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::RaidStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PERMANENTRAIDBOSSMANAGEDB__GETSTAGEIDS_B__12_0_OFFSET))(arg, nullptr);
		}

		::System::Void set_LockStartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PERMANENTRAIDBOSSMANAGEDB_SET_LOCKSTARTDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_GroupType(::FlatData::RaidBossGroupType* arg)
		{
			((::System::Void(*)(::FlatData::RaidBossGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PERMANENTRAIDBOSSMANAGEDB_SET_GROUPTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetStageIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PERMANENTRAIDBOSSMANAGEDB_GETSTAGEIDS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PERMANENTRAIDBOSSMANAGEDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsLocked(::System::DateTime* arg)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PERMANENTRAIDBOSSMANAGEDB_ISLOCKED_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_LockEndDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PERMANENTRAIDBOSSMANAGEDB_GET_LOCKENDDATE_OFFSET))(nullptr);
		}

		::FlatData::RaidBossGroupType* get_GroupType()
		{
			return ((::FlatData::RaidBossGroupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PERMANENTRAIDBOSSMANAGEDB_GET_GROUPTYPE_OFFSET))(nullptr);
		}

		::System::DateTime* get_LockStartDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PERMANENTRAIDBOSSMANAGEDB_GET_LOCKSTARTDATE_OFFSET))(nullptr);
		}

	};
}

