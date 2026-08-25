#pragma once
#include "../../unitysdk.h"

namespace FlatData { class TargetGroup; }
namespace MX::Data::Excel { class WelcomeCampaignSeasonExcel; }

#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_ATTENDANCEBOOKSIZE_OFFSET UNITYSDK_OFFSET(0x1862E30)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_TARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1862E40)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_TITLEIMAGE_OFFSET UNITYSDK_OFFSET(0x1862E50)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1862E60)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_ACTIVEORDER_OFFSET UNITYSDK_OFFSET(0x1863050)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_MAXIMUMLOGINCOUNT_OFFSET UNITYSDK_OFFSET(0x1863060)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_ACTIVEORDER_OFFSET UNITYSDK_OFFSET(0x1863070)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_ENTERREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1863080)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_ENTERREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1863090)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x18630A0)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_CONTINUOUSATTENDANCE_OFFSET UNITYSDK_OFFSET(0x18630B0)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_EXPIRYDATE_OFFSET UNITYSDK_OFFSET(0x18630C0)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_ISACTIVECAMPAIGN_OFFSET UNITYSDK_OFFSET(0x18630D0)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_TITLELOCALIZECODE_OFFSET UNITYSDK_OFFSET(0x1863160)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_TITLEIMAGE_OFFSET UNITYSDK_OFFSET(0x1863170)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1863180)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_ENTERICONIMAGE_OFFSET UNITYSDK_OFFSET(0x1863190)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_MAXATTENDANCEREWARDDAY_OFFSET UNITYSDK_OFFSET(0x18631A0)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x18631B0)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_TARGETGROUP_OFFSET UNITYSDK_OFFSET(0x18631C0)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_MAXATTENDANCEREWARDDAY_OFFSET UNITYSDK_OFFSET(0x18631D0)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_TITLELOCALIZECODE_OFFSET UNITYSDK_OFFSET(0x18631E0)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x18631F0)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_CONTINUOUSATTENDANCE_OFFSET UNITYSDK_OFFSET(0x1863200)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_REWARDINCREASEID_OFFSET UNITYSDK_OFFSET(0x1863210)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_REWARDINCREASEID_OFFSET UNITYSDK_OFFSET(0x1863220)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_ENTERICONIMAGE_OFFSET UNITYSDK_OFFSET(0x1863230)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_MAXIMUMLOGINCOUNT_OFFSET UNITYSDK_OFFSET(0x1863240)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_SETMAXATTENDANCEREWARDDAY_OFFSET UNITYSDK_OFFSET(0x1863250)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_EXPIRYDATE_OFFSET UNITYSDK_OFFSET(0x1863260)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1863270)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1863280)
#define MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_ATTENDANCEBOOKSIZE_OFFSET UNITYSDK_OFFSET(0x1863290)

namespace MX::Data
{
	inline static constexpr unsigned int WelcomeCampaignSeasonInfo_TypeDefinitionIndex = 15914;

	class WelcomeCampaignSeasonInfo : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x10
		::System::UInt32 _TitleLocalizeCode_k__BackingField; // 0x18
		::System::Int32 _ActiveOrder_k__BackingField; // 0x1C
		::FlatData::TargetGroup* _TargetGroup_k__BackingField; // 0x20
		::System::DateTime* _StartDate_k__BackingField; // 0x28
		::System::DateTime* _EndDate_k__BackingField; // 0x30
		::System::Int64 _ExpiryDate_k__BackingField; // 0x38
		::System::Int64 _EnterRewardGroupId_k__BackingField; // 0x40
		::System::Int64 _RewardIncreaseId_k__BackingField; // 0x48
		::System::Int64 _MaximumLoginCount_k__BackingField; // 0x50
		::System::Int64 _AttendanceBookSize_k__BackingField; // 0x58
		::System::Boolean _ContinuousAttendance_k__BackingField; // 0x60
		::System::String* _EnterIconImage_k__BackingField; // 0x68
		::System::String* _TitleImage_k__BackingField; // 0x70
		::System::Int16 _MaxAttendanceRewardDay_k__BackingField; // 0x78

		::System::Void set_AttendanceBookSize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_ATTENDANCEBOOKSIZE_OFFSET))(arg, nullptr);
		}

		::FlatData::TargetGroup* get_TargetGroup()
		{
			return (return (::FlatData::TargetGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_TARGETGROUP_OFFSET))(nullptr);
		}

		::System::Void set_TitleImage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_TITLEIMAGE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::WelcomeCampaignSeasonExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::WelcomeCampaignSeasonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_ActiveOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_ACTIVEORDER_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaximumLoginCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_MAXIMUMLOGINCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_ActiveOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_ACTIVEORDER_OFFSET))(nullptr);
		}

		::System::Void set_EnterRewardGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_ENTERREWARDGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EnterRewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_ENTERREWARDGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_StartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_STARTDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ContinuousAttendance()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_CONTINUOUSATTENDANCE_OFFSET))(nullptr);
		}

		::System::Int64 get_ExpiryDate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_EXPIRYDATE_OFFSET))(nullptr);
		}

		::System::Boolean IsActiveCampaign(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_ISACTIVECAMPAIGN_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_TitleLocalizeCode()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_TITLELOCALIZECODE_OFFSET))(nullptr);
		}

		::System::String* get_TitleImage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_TITLEIMAGE_OFFSET))(nullptr);
		}

		::System::DateTime* get_EndDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::String* get_EnterIconImage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_ENTERICONIMAGE_OFFSET))(nullptr);
		}

		::System::Void set_MaxAttendanceRewardDay(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_MAXATTENDANCEREWARDDAY_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_StartDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_STARTDATE_OFFSET))(nullptr);
		}

		::System::Void set_TargetGroup(::FlatData::TargetGroup* arg)
		{
			((::System::Void(*)(::FlatData::TargetGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_TARGETGROUP_OFFSET))(arg, nullptr);
		}

		::System::Int16 get_MaxAttendanceRewardDay()
		{
			return (return (::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_MAXATTENDANCEREWARDDAY_OFFSET))(nullptr);
		}

		::System::Void set_TitleLocalizeCode(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_TITLELOCALIZECODE_OFFSET))(arg, nullptr);
		}

		::System::Void set_EndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_ENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ContinuousAttendance(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_CONTINUOUSATTENDANCE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RewardIncreaseId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_REWARDINCREASEID_OFFSET))(nullptr);
		}

		::System::Void set_RewardIncreaseId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_REWARDINCREASEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EnterIconImage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_ENTERICONIMAGE_OFFSET))(str, nullptr);
		}

		::System::Void set_MaximumLoginCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_MAXIMUMLOGINCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void SetMaxAttendanceRewardDay(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_SETMAXATTENDANCEREWARDDAY_OFFSET))(arg, nullptr);
		}

		::System::Void set_ExpiryDate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_EXPIRYDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AttendanceBookSize()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNSEASONINFO_GET_ATTENDANCEBOOKSIZE_OFFSET))(nullptr);
		}

	};
}

