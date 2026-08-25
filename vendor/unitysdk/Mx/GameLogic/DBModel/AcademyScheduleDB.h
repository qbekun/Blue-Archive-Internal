#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_ACADEMYSCHEDULEDB_SET_LASTUPDATEDATE_OFFSET UNITYSDK_OFFSET(0xFE0FA0)
#define MX_GAMELOGIC_DBMODEL_ACADEMYSCHEDULEDB_SET_SCHEDULEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFE0FB0)
#define MX_GAMELOGIC_DBMODEL_ACADEMYSCHEDULEDB_GET_SCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0xFE0FC0)
#define MX_GAMELOGIC_DBMODEL_ACADEMYSCHEDULEDB_GET_ZONEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFE0FD0)
#define MX_GAMELOGIC_DBMODEL_ACADEMYSCHEDULEDB_SET_COMPLETECOUNT_OFFSET UNITYSDK_OFFSET(0xFE0FE0)
#define MX_GAMELOGIC_DBMODEL_ACADEMYSCHEDULEDB_GET_LASTUPDATEDATE_OFFSET UNITYSDK_OFFSET(0xFE0FF0)
#define MX_GAMELOGIC_DBMODEL_ACADEMYSCHEDULEDB_SET_SCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0xFE1000)
#define MX_GAMELOGIC_DBMODEL_ACADEMYSCHEDULEDB_GET_COMPLETECOUNT_OFFSET UNITYSDK_OFFSET(0xFE1010)
#define MX_GAMELOGIC_DBMODEL_ACADEMYSCHEDULEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE1020)
#define MX_GAMELOGIC_DBMODEL_ACADEMYSCHEDULEDB_GET_SCHEDULEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFE1030)
#define MX_GAMELOGIC_DBMODEL_ACADEMYSCHEDULEDB_SET_ZONEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFE1040)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int AcademyScheduleDB_TypeDefinitionIndex = 12467;

	class AcademyScheduleDB : public Il2CppObject
	{
	public:
		::System::Int64 _ScheduleUniqueId_k__BackingField; // 0x10
		::System::Int64 _ScheduleGroupId_k__BackingField; // 0x18
		::System::Int64 _ZoneUniqueId_k__BackingField; // 0x20
		::System::DateTime* _LastUpdateDate_k__BackingField; // 0x28
		::System::Int32 _CompleteCount_k__BackingField; // 0x30

		::System::Void set_LastUpdateDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYSCHEDULEDB_SET_LASTUPDATEDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ScheduleUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYSCHEDULEDB_SET_SCHEDULEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ScheduleGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYSCHEDULEDB_GET_SCHEDULEGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_ZoneUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYSCHEDULEDB_GET_ZONEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_CompleteCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYSCHEDULEDB_SET_COMPLETECOUNT_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_LastUpdateDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYSCHEDULEDB_GET_LASTUPDATEDATE_OFFSET))(nullptr);
		}

		::System::Void set_ScheduleGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYSCHEDULEDB_SET_SCHEDULEGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CompleteCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYSCHEDULEDB_GET_COMPLETECOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYSCHEDULEDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_ScheduleUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYSCHEDULEDB_GET_SCHEDULEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_ZoneUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYSCHEDULEDB_SET_ZONEUNIQUEID_OFFSET))(arg, nullptr);
		}

	};
}

