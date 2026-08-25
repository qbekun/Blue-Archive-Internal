#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_RAIDSEASONMANAGEDB_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x100A000)
#define MX_GAMELOGIC_DBMODEL_RAIDSEASONMANAGEDB_SET_SEASONSTARTDATE_OFFSET UNITYSDK_OFFSET(0x100A010)
#define MX_GAMELOGIC_DBMODEL_RAIDSEASONMANAGEDB_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x100A020)
#define MX_GAMELOGIC_DBMODEL_RAIDSEASONMANAGEDB_SET_SEASONSETTLEMENTENDDATE_OFFSET UNITYSDK_OFFSET(0x100A030)
#define MX_GAMELOGIC_DBMODEL_RAIDSEASONMANAGEDB_GET_SEASONSTARTDATE_OFFSET UNITYSDK_OFFSET(0x100A040)
#define MX_GAMELOGIC_DBMODEL_RAIDSEASONMANAGEDB_GET_SEASONENDDATE_OFFSET UNITYSDK_OFFSET(0x100A050)
#define MX_GAMELOGIC_DBMODEL_RAIDSEASONMANAGEDB_GET_SEASONSETTLEMENTENDDATE_OFFSET UNITYSDK_OFFSET(0x100A060)
#define MX_GAMELOGIC_DBMODEL_RAIDSEASONMANAGEDB_SET_SEASONENDDATE_OFFSET UNITYSDK_OFFSET(0x100A070)
#define MX_GAMELOGIC_DBMODEL_RAIDSEASONMANAGEDB_SET_UPDATEDATE_OFFSET UNITYSDK_OFFSET(0x100A080)
#define MX_GAMELOGIC_DBMODEL_RAIDSEASONMANAGEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100A090)
#define MX_GAMELOGIC_DBMODEL_RAIDSEASONMANAGEDB_GET_UPDATEDATE_OFFSET UNITYSDK_OFFSET(0x100A0A0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int RaidSeasonManageDB_TypeDefinitionIndex = 12709;

	class RaidSeasonManageDB : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x10
		::System::DateTime* _SeasonStartDate_k__BackingField; // 0x18
		::System::DateTime* _SeasonEndDate_k__BackingField; // 0x20
		::System::DateTime* _SeasonSettlementEndDate_k__BackingField; // 0x28
		::System::DateTime* _UpdateDate_k__BackingField; // 0x30

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDSEASONMANAGEDB_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonStartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDSEASONMANAGEDB_SET_SEASONSTARTDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDSEASONMANAGEDB_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void set_SeasonSettlementEndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDSEASONMANAGEDB_SET_SEASONSETTLEMENTENDDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_SeasonStartDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDSEASONMANAGEDB_GET_SEASONSTARTDATE_OFFSET))(nullptr);
		}

		::System::DateTime* get_SeasonEndDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDSEASONMANAGEDB_GET_SEASONENDDATE_OFFSET))(nullptr);
		}

		::System::DateTime* get_SeasonSettlementEndDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDSEASONMANAGEDB_GET_SEASONSETTLEMENTENDDATE_OFFSET))(nullptr);
		}

		::System::Void set_SeasonEndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDSEASONMANAGEDB_SET_SEASONENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_UpdateDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDSEASONMANAGEDB_SET_UPDATEDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDSEASONMANAGEDB_.CTOR_OFFSET))(nullptr);
		}

		::System::DateTime* get_UpdateDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDSEASONMANAGEDB_GET_UPDATEDATE_OFFSET))(nullptr);
		}

	};
}

