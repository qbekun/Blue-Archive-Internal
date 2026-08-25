#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class TargetGroup; }
namespace MX::GameLogic::DBModel { class WelcomeCampaignDB; }
namespace MX::Data { class WelcomeCampaignSeasonInfo; }

#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_HASNOTRECEIVEREWARD_OFFSET UNITYSDK_OFFSET(0x1012F60)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_GET_CONSECUTIVEATTENDANCEDAYS_OFFSET UNITYSDK_OFFSET(0x1012FE0)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_GET_COMPLETEDDATE_OFFSET UNITYSDK_OFFSET(0x1012FF0)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1013000)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_GET_CUMULATIVEATTENDANCEDAYS_OFFSET UNITYSDK_OFFSET(0x1013010)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_SET_CONSECUTIVEREWARDRECEIVEDDATE_OFFSET UNITYSDK_OFFSET(0x1013020)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1013030)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_SET_LASTATTENDANCEDATE_OFFSET UNITYSDK_OFFSET(0x1013040)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_GET_LASTATTENDANCEDATE_OFFSET UNITYSDK_OFFSET(0x1013050)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_SET_COMPLETEDDATE_OFFSET UNITYSDK_OFFSET(0x1013060)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_SET_CUMULATIVEREWARDRECEIVEDDAY_OFFSET UNITYSDK_OFFSET(0x1013070)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1013080)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_SET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1013140)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1013150)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_SET_ATTENDANCECHECKTYPE_OFFSET UNITYSDK_OFFSET(0x1013160)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1013130)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_SET_CONSECUTIVEATTENDANCEDAYS_OFFSET UNITYSDK_OFFSET(0x1013170)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_SET_CUMULATIVEATTENDANCEDAYS_OFFSET UNITYSDK_OFFSET(0x1013180)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1013190)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_GET_WELCOMEREWARDRECEIVEDDATE_OFFSET UNITYSDK_OFFSET(0x10131A0)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_GET_CUMULATIVEREWARDRECEIVEDDAY_OFFSET UNITYSDK_OFFSET(0x10131B0)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_GET_CONSECUTIVEREWARDRECEIVEDDATE_OFFSET UNITYSDK_OFFSET(0x10131C0)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_RESETCOMEBACKWELCOMECAMPAIGN_OFFSET UNITYSDK_OFFSET(0x10131D0)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_MAKEWELCOMECAMPAIGNDB_OFFSET UNITYSDK_OFFSET(0x10132F0)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_SET_WELCOMEREWARDRECEIVEDDATE_OFFSET UNITYSDK_OFFSET(0x1013460)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_GET_ATTENDANCECHECKTYPE_OFFSET UNITYSDK_OFFSET(0x1013470)
#define MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_SET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1013480)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int WelcomeCampaignDB_TypeDefinitionIndex = 12752;

	class WelcomeCampaignDB : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x10
		::FlatData::TargetGroup* _AttendanceCheckType_k__BackingField; // 0x18
		::System::DateTime* _StartDate_k__BackingField; // 0x20
		::System::DateTime* _EndDate_k__BackingField; // 0x28
		Il2CppObject* _CompletedDate_k__BackingField; // 0x30
		Il2CppObject* _WelcomeRewardReceivedDate_k__BackingField; // 0x40
		::System::Int16 _CumulativeAttendanceDays_k__BackingField; // 0x50
		::System::Int16 _CumulativeRewardReceivedDay_k__BackingField; // 0x52
		Il2CppObject* _LastAttendanceDate_k__BackingField; // 0x58
		::System::Int16 _ConsecutiveAttendanceDays_k__BackingField; // 0x68
		Il2CppObject* _ConsecutiveRewardReceivedDate_k__BackingField; // 0x70

		::System::Boolean HasNotReceiveReward(::System::DateTime* arg)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_HASNOTRECEIVEREWARD_OFFSET))(arg, nullptr);
		}

		::System::Int16 get_ConsecutiveAttendanceDays()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_GET_CONSECUTIVEATTENDANCEDAYS_OFFSET))(nullptr);
		}

		Il2CppObject* get_CompletedDate()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_GET_COMPLETEDDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int16 get_CumulativeAttendanceDays()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_GET_CUMULATIVEATTENDANCEDAYS_OFFSET))(nullptr);
		}

		::System::Void set_ConsecutiveRewardReceivedDate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_SET_CONSECUTIVEREWARDRECEIVEDDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_EndDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::Void set_LastAttendanceDate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_SET_LASTATTENDANCEDATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_LastAttendanceDate()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_GET_LASTATTENDANCEDATE_OFFSET))(nullptr);
		}

		::System::Void set_CompletedDate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_SET_COMPLETEDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_CumulativeRewardReceivedDay(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_SET_CUMULATIVEREWARDRECEIVEDDAY_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::WelcomeCampaignDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::WelcomeCampaignDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_CLONE_OFFSET))(nullptr);
		}

		::System::Void set_StartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_SET_STARTDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Void set_AttendanceCheckType(::FlatData::TargetGroup* arg)
		{
			((::System::Void(*)(::FlatData::TargetGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_SET_ATTENDANCECHECKTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ConsecutiveAttendanceDays(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_SET_CONSECUTIVEATTENDANCEDAYS_OFFSET))(arg, nullptr);
		}

		::System::Void set_CumulativeAttendanceDays(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_SET_CUMULATIVEATTENDANCEDAYS_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_StartDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_GET_STARTDATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_WelcomeRewardReceivedDate()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_GET_WELCOMEREWARDRECEIVEDDATE_OFFSET))(nullptr);
		}

		::System::Int16 get_CumulativeRewardReceivedDay()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_GET_CUMULATIVEREWARDRECEIVEDDAY_OFFSET))(nullptr);
		}

		Il2CppObject* get_ConsecutiveRewardReceivedDate()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_GET_CONSECUTIVEREWARDRECEIVEDDATE_OFFSET))(nullptr);
		}

		::System::Void ResetComebackWelcomeCampaign(::System::DateTime* arg, ::System::DateTime* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::DateTime*, ::System::DateTime*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_RESETCOMEBACKWELCOMECAMPAIGN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::DBModel::WelcomeCampaignDB* MakeWelcomeCampaignDB(::MX::Data::WelcomeCampaignSeasonInfo* arg, ::System::DateTime* arg2)
		{
			return ((::MX::GameLogic::DBModel::WelcomeCampaignDB*(*)(::MX::Data::WelcomeCampaignSeasonInfo*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_MAKEWELCOMECAMPAIGNDB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_WelcomeRewardReceivedDate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_SET_WELCOMEREWARDRECEIVEDDATE_OFFSET))(arg, nullptr);
		}

		::FlatData::TargetGroup* get_AttendanceCheckType()
		{
			return ((::FlatData::TargetGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_GET_ATTENDANCECHECKTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WELCOMECAMPAIGNDB_SET_ENDDATE_OFFSET))(arg, nullptr);
		}

	};
}

