#pragma once
#include "../../unitysdk.h"

namespace FlatData { class AttendanceType; }
namespace FlatData { class TargetGroup; }
namespace FlatData { class AttendanceCountRule; }
namespace FlatData { class AttendanceResetType; }
namespace FlatData { class MailType; }
namespace MX::Data::Excel { class AttendanceExcel; }
namespace MX::GameLogic::DBModel { class AccountDB; }
namespace MX::GameLogic::DBModel { class AttendanceHistoryDB; }

#define MX_DATA_ATTENDANCEBOOKREWARD_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1810150)
#define MX_DATA_ATTENDANCEBOOKREWARD_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1810160)
#define MX_DATA_ATTENDANCEBOOKREWARD_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1810170)
#define MX_DATA_ATTENDANCEBOOKREWARD_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1810180)
#define MX_DATA_ATTENDANCEBOOKREWARD_GET_TARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1810190)
#define MX_DATA_ATTENDANCEBOOKREWARD_SET_TARGETGROUP_OFFSET UNITYSDK_OFFSET(0x18101A0)
#define MX_DATA_ATTENDANCEBOOKREWARD_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x18101B0)
#define MX_DATA_ATTENDANCEBOOKREWARD_SET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x18101C0)
#define MX_DATA_ATTENDANCEBOOKREWARD_GET_ACCOUNTLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0x18101D0)
#define MX_DATA_ATTENDANCEBOOKREWARD_SET_ACCOUNTLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0x18101E0)
#define MX_DATA_ATTENDANCEBOOKREWARD_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x18101F0)
#define MX_DATA_ATTENDANCEBOOKREWARD_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x1810200)
#define MX_DATA_ATTENDANCEBOOKREWARD_GET_TITLEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1810210)
#define MX_DATA_ATTENDANCEBOOKREWARD_SET_TITLEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1810220)
#define MX_DATA_ATTENDANCEBOOKREWARD_GET_COUNTRULE_OFFSET UNITYSDK_OFFSET(0x1810230)
#define MX_DATA_ATTENDANCEBOOKREWARD_SET_COUNTRULE_OFFSET UNITYSDK_OFFSET(0x1810240)
#define MX_DATA_ATTENDANCEBOOKREWARD_GET_COUNTRESET_OFFSET UNITYSDK_OFFSET(0x1810250)
#define MX_DATA_ATTENDANCEBOOKREWARD_SET_COUNTRESET_OFFSET UNITYSDK_OFFSET(0x1810260)
#define MX_DATA_ATTENDANCEBOOKREWARD_GET_BOOKSIZE_OFFSET UNITYSDK_OFFSET(0x1810270)
#define MX_DATA_ATTENDANCEBOOKREWARD_SET_BOOKSIZE_OFFSET UNITYSDK_OFFSET(0x1810280)
#define MX_DATA_ATTENDANCEBOOKREWARD_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1810290)
#define MX_DATA_ATTENDANCEBOOKREWARD_SET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x18102A0)
#define MX_DATA_ATTENDANCEBOOKREWARD_GET_STARTABLEENDDATE_OFFSET UNITYSDK_OFFSET(0x18102B0)
#define MX_DATA_ATTENDANCEBOOKREWARD_SET_STARTABLEENDDATE_OFFSET UNITYSDK_OFFSET(0x18102C0)
#define MX_DATA_ATTENDANCEBOOKREWARD_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x18102D0)
#define MX_DATA_ATTENDANCEBOOKREWARD_SET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x18102E0)
#define MX_DATA_ATTENDANCEBOOKREWARD_GET_EXPIRYDATE_OFFSET UNITYSDK_OFFSET(0x18102F0)
#define MX_DATA_ATTENDANCEBOOKREWARD_SET_EXPIRYDATE_OFFSET UNITYSDK_OFFSET(0x1810300)
#define MX_DATA_ATTENDANCEBOOKREWARD_GET_MAILTYPE_OFFSET UNITYSDK_OFFSET(0x1810310)
#define MX_DATA_ATTENDANCEBOOKREWARD_SET_MAILTYPE_OFFSET UNITYSDK_OFFSET(0x1810320)
#define MX_DATA_ATTENDANCEBOOKREWARD_GET_DAILYREWARDICONS_OFFSET UNITYSDK_OFFSET(0x1810330)
#define MX_DATA_ATTENDANCEBOOKREWARD_SET_DAILYREWARDICONS_OFFSET UNITYSDK_OFFSET(0x1810340)
#define MX_DATA_ATTENDANCEBOOKREWARD_GET_DAILYREWARDS_OFFSET UNITYSDK_OFFSET(0x1810350)
#define MX_DATA_ATTENDANCEBOOKREWARD_SET_DAILYREWARDS_OFFSET UNITYSDK_OFFSET(0x1810360)
#define MX_DATA_ATTENDANCEBOOKREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1810370)
#define MX_DATA_ATTENDANCEBOOKREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1810440)
#define MX_DATA_ATTENDANCEBOOKREWARD_ISVALIDBOOKSIZE_OFFSET UNITYSDK_OFFSET(0x1810E10)
#define MX_DATA_ATTENDANCEBOOKREWARD_ISOPEN_OFFSET UNITYSDK_OFFSET(0x1810F80)
#define MX_DATA_ATTENDANCEBOOKREWARD__ISOPEN_B__71_0_OFFSET UNITYSDK_OFFSET(0x1811160)

namespace MX::Data
{
	inline static constexpr unsigned int AttendanceBookReward_TypeDefinitionIndex = 15715;

	class AttendanceBookReward : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::FlatData::AttendanceType* _Type_k__BackingField; // 0x18
		::FlatData::TargetGroup* _TargetGroup_k__BackingField; // 0x1C
		::System::Int64 _DisplayOrder_k__BackingField; // 0x20
		::System::Int64 _AccountLevelLimit_k__BackingField; // 0x28
		::System::String* _Title_k__BackingField; // 0x30
		::System::String* _TitleImagePath_k__BackingField; // 0x38
		::FlatData::AttendanceCountRule* _CountRule_k__BackingField; // 0x40
		::FlatData::AttendanceResetType* _CountReset_k__BackingField; // 0x44
		::System::Int64 _BookSize_k__BackingField; // 0x48
		::System::DateTime* _StartDate_k__BackingField; // 0x50
		::System::DateTime* _StartableEndDate_k__BackingField; // 0x58
		::System::DateTime* _EndDate_k__BackingField; // 0x60
		::System::Int64 _ExpiryDate_k__BackingField; // 0x68
		::FlatData::MailType* _MailType_k__BackingField; // 0x70
		Il2CppObject* _DailyRewardIcons_k__BackingField; // 0x78
		Il2CppObject* _DailyRewards_k__BackingField; // 0x80

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::FlatData::AttendanceType* get_Type()
		{
			return (return (::FlatData::AttendanceType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::FlatData::AttendanceType* arg)
		{
			((::System::Void(*)(::FlatData::AttendanceType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::TargetGroup* get_TargetGroup()
		{
			return (return (::FlatData::TargetGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_GET_TARGETGROUP_OFFSET))(nullptr);
		}

		::System::Void set_TargetGroup(::FlatData::TargetGroup* arg)
		{
			((::System::Void(*)(::FlatData::TargetGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_SET_TARGETGROUP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Void set_DisplayOrder(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_SET_DISPLAYORDER_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AccountLevelLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_GET_ACCOUNTLEVELLIMIT_OFFSET))(nullptr);
		}

		::System::Void set_AccountLevelLimit(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_SET_ACCOUNTLEVELLIMIT_OFFSET))(arg, nullptr);
		}

		::System::String* get_Title()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_GET_TITLE_OFFSET))(nullptr);
		}

		::System::Void set_Title(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_SET_TITLE_OFFSET))(str, nullptr);
		}

		::System::String* get_TitleImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_GET_TITLEIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Void set_TitleImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_SET_TITLEIMAGEPATH_OFFSET))(str, nullptr);
		}

		::FlatData::AttendanceCountRule* get_CountRule()
		{
			return (return (::FlatData::AttendanceCountRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_GET_COUNTRULE_OFFSET))(nullptr);
		}

		::System::Void set_CountRule(::FlatData::AttendanceCountRule* arg)
		{
			((::System::Void(*)(::FlatData::AttendanceCountRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_SET_COUNTRULE_OFFSET))(arg, nullptr);
		}

		::FlatData::AttendanceResetType* get_CountReset()
		{
			return (return (::FlatData::AttendanceResetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_GET_COUNTRESET_OFFSET))(nullptr);
		}

		::System::Void set_CountReset(::FlatData::AttendanceResetType* arg)
		{
			((::System::Void(*)(::FlatData::AttendanceResetType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_SET_COUNTRESET_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BookSize()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_GET_BOOKSIZE_OFFSET))(nullptr);
		}

		::System::Void set_BookSize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_SET_BOOKSIZE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_StartDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_GET_STARTDATE_OFFSET))(nullptr);
		}

		::System::Void set_StartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_SET_STARTDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_StartableEndDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_GET_STARTABLEENDDATE_OFFSET))(nullptr);
		}

		::System::Void set_StartableEndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_SET_STARTABLEENDDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_EndDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::Void set_EndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_SET_ENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ExpiryDate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_GET_EXPIRYDATE_OFFSET))(nullptr);
		}

		::System::Void set_ExpiryDate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_SET_EXPIRYDATE_OFFSET))(arg, nullptr);
		}

		::FlatData::MailType* get_MailType()
		{
			return (return (::FlatData::MailType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_GET_MAILTYPE_OFFSET))(nullptr);
		}

		::System::Void set_MailType(::FlatData::MailType* arg)
		{
			((::System::Void(*)(::FlatData::MailType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_SET_MAILTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DailyRewardIcons()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_GET_DAILYREWARDICONS_OFFSET))(nullptr);
		}

		::System::Void set_DailyRewardIcons(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_SET_DAILYREWARDICONS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DailyRewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_GET_DAILYREWARDS_OFFSET))(nullptr);
		}

		::System::Void set_DailyRewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_SET_DAILYREWARDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::AttendanceExcel* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::AttendanceExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsValidBookSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_ISVALIDBOOKSIZE_OFFSET))(nullptr);
		}

		::System::Boolean IsOpen(::System::DateTime* arg, ::MX::GameLogic::DBModel::AccountDB* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::MX::GameLogic::DBModel::AccountDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD_ISOPEN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean _IsOpen_b__71_0(::MX::GameLogic::DBModel::AttendanceHistoryDB* arg)
		{
			return (return (::System::Boolean(*)(::MX::GameLogic::DBModel::AttendanceHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEBOOKREWARD__ISOPEN_B__71_0_OFFSET))(arg, nullptr);
		}

	};
}

