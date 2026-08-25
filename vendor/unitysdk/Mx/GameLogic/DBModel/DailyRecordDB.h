#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_DAILYRECORDDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF5B70)
#define MX_GAMELOGIC_DBMODEL_DAILYRECORDDB_GET_RECEIVEDREWARDDAY_OFFSET UNITYSDK_OFFSET(0xFF5B80)
#define MX_GAMELOGIC_DBMODEL_DAILYRECORDDB_GET_ATTENDANCEDAY_OFFSET UNITYSDK_OFFSET(0xFF5B90)
#define MX_GAMELOGIC_DBMODEL_DAILYRECORDDB_SET_RECEIVEDREWARDDAY_OFFSET UNITYSDK_OFFSET(0xFF5BA0)
#define MX_GAMELOGIC_DBMODEL_DAILYRECORDDB_GET_CANRECEIVEREWARD_OFFSET UNITYSDK_OFFSET(0xFF5BB0)
#define MX_GAMELOGIC_DBMODEL_DAILYRECORDDB_SET_ID_OFFSET UNITYSDK_OFFSET(0xFF5BC0)
#define MX_GAMELOGIC_DBMODEL_DAILYRECORDDB_GET_ID_OFFSET UNITYSDK_OFFSET(0xFF5BD0)
#define MX_GAMELOGIC_DBMODEL_DAILYRECORDDB_SET_ATTENDANCEDAY_OFFSET UNITYSDK_OFFSET(0xFF5BE0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int DailyRecordDB_TypeDefinitionIndex = 12575;

	class DailyRecordDB : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Int32 _AttendanceDay_k__BackingField; // 0x18
		::System::Int32 _ReceivedRewardDay_k__BackingField; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DAILYRECORDDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_ReceivedRewardDay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DAILYRECORDDB_GET_RECEIVEDREWARDDAY_OFFSET))(nullptr);
		}

		::System::Int32 get_AttendanceDay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DAILYRECORDDB_GET_ATTENDANCEDAY_OFFSET))(nullptr);
		}

		::System::Void set_ReceivedRewardDay(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DAILYRECORDDB_SET_RECEIVEDREWARDDAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanReceiveReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DAILYRECORDDB_GET_CANRECEIVEREWARD_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DAILYRECORDDB_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DAILYRECORDDB_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_AttendanceDay(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DAILYRECORDDB_SET_ATTENDANCEDAY_OFFSET))(arg, nullptr);
		}

	};
}

