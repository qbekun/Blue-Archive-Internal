#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class WeekDay; }
namespace MX::Logic::Data { class BattleTypes; }
namespace FlatData { class PeriodType; }

#define MX_LOGIC_SERVICES_TIMESERVICE_DATETIMETOUNIXTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x10DFFC0)
#define MX_LOGIC_SERVICES_TIMESERVICE_DATETIMETOUNIXTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x10E0110)
#define MX_LOGIC_SERVICES_TIMESERVICE_GET_BASETIME_OFFSET UNITYSDK_OFFSET(0x10E0190)
#define MX_LOGIC_SERVICES_TIMESERVICE_GETMATCHFORMATTIMESTRING_OFFSET UNITYSDK_OFFSET(0x10E01A0)
#define MX_LOGIC_SERVICES_TIMESERVICE_DATETIMETOLOGTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x10E0290)
#define MX_LOGIC_SERVICES_TIMESERVICE_PARSETIMESPAN_OFFSET UNITYSDK_OFFSET(0x10E0320)
#define MX_LOGIC_SERVICES_TIMESERVICE_SECONDSTOSTRING_OFFSET UNITYSDK_OFFSET(0x10E03D0)
#define MX_LOGIC_SERVICES_TIMESERVICE_SECONDSTOSTRING_OFFSET UNITYSDK_OFFSET(0x10E0430)
#define MX_LOGIC_SERVICES_TIMESERVICE_MILLISECONDTOSECONDBYFLOOR_OFFSET UNITYSDK_OFFSET(0x10E0530)
#define MX_LOGIC_SERVICES_TIMESERVICE_MILLISECONDTOSECONDBYCEILING_OFFSET UNITYSDK_OFFSET(0x10E05B0)
#define MX_LOGIC_SERVICES_TIMESERVICE_FLOORMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x10E0690)
#define MX_LOGIC_SERVICES_TIMESERVICE_GETUTCOFFSET_OFFSET UNITYSDK_OFFSET(0x10E0770)
#define MX_LOGIC_SERVICES_TIMESERVICE_GETUTCOFFSET_OFFSET UNITYSDK_OFFSET(0x10E0850)
#define MX_LOGIC_SERVICES_TIMESERVICE_APPLYTIMEBIAS_OFFSET UNITYSDK_OFFSET(0x10E08D0)
#define MX_LOGIC_SERVICES_TIMESERVICE_REMOVETIMEBIAS_OFFSET UNITYSDK_OFFSET(0x10E0A40)
#define MX_LOGIC_SERVICES_TIMESERVICE_GETLASTPERIODDATETIME_OFFSET UNITYSDK_OFFSET(0x10E0BE0)
#define MX_LOGIC_SERVICES_TIMESERVICE_GETNEXTPERIODDATETIME_OFFSET UNITYSDK_OFFSET(0x10E0D20)
#define MX_LOGIC_SERVICES_TIMESERVICE_GETLASTPERIODDATETIME_OFFSET UNITYSDK_OFFSET(0x10E0E90)
#define MX_LOGIC_SERVICES_TIMESERVICE_GETNEXTPERIODDATETIME_OFFSET UNITYSDK_OFFSET(0x10E0F00)
#define MX_LOGIC_SERVICES_TIMESERVICE_GETWEEKDAY_OFFSET UNITYSDK_OFFSET(0x10E0F70)
#define MX_LOGIC_SERVICES_TIMESERVICE_FLOOR_OFFSET UNITYSDK_OFFSET(0x10E1050)
#define MX_LOGIC_SERVICES_TIMESERVICE_FLOOR_OFFSET UNITYSDK_OFFSET(0x10E10A0)
#define MX_LOGIC_SERVICES_TIMESERVICE_CEILING_OFFSET UNITYSDK_OFFSET(0x10E1170)
#define MX_LOGIC_SERVICES_TIMESERVICE_CEILING_OFFSET UNITYSDK_OFFSET(0x10E11C0)
#define MX_LOGIC_SERVICES_TIMESERVICE_GETNEXTREFRESHDATE_OFFSET UNITYSDK_OFFSET(0x10E1290)
#define MX_LOGIC_SERVICES_TIMESERVICE_GETNEXTREFRESHDATE_OFFSET UNITYSDK_OFFSET(0x10E12F0)
#define MX_LOGIC_SERVICES_TIMESERVICE_GETLASTREFRESHDATE_OFFSET UNITYSDK_OFFSET(0x10E13D0)
#define MX_LOGIC_SERVICES_TIMESERVICE_GETLASTREFRESHDATE_OFFSET UNITYSDK_OFFSET(0x10E1430)
#define MX_LOGIC_SERVICES_TIMESERVICE_GETLASTWEEKLYREFRESHDATE_OFFSET UNITYSDK_OFFSET(0x10E15D0)
#define MX_LOGIC_SERVICES_TIMESERVICE_GETNEXTWEEKLYREFRESHDATE_OFFSET UNITYSDK_OFFSET(0x10E1820)
#define MX_LOGIC_SERVICES_TIMESERVICE_GETNEXTWEEKLYREFRESHDATE_OFFSET UNITYSDK_OFFSET(0x10E1920)
#define MX_LOGIC_SERVICES_TIMESERVICE_GETLASTMONTHLYREFRESHDATE_OFFSET UNITYSDK_OFFSET(0x10E19B0)
#define MX_LOGIC_SERVICES_TIMESERVICE_GETNEXTMONTHLYREFRESHDATE_OFFSET UNITYSDK_OFFSET(0x10E1AD0)
#define MX_LOGIC_SERVICES_TIMESERVICE_GETNEXTMONTHLYREFRESHDATE_OFFSET UNITYSDK_OFFSET(0x10E1BC0)
#define MX_LOGIC_SERVICES_TIMESERVICE_ISSAMEDAY_OFFSET UNITYSDK_OFFSET(0x10E1C50)
#define MX_LOGIC_SERVICES_TIMESERVICE_ISSAMEDAY_OFFSET UNITYSDK_OFFSET(0x10E1CB0)
#define MX_LOGIC_SERVICES_TIMESERVICE_DATESAREINTHESAMEWEEK_OFFSET UNITYSDK_OFFSET(0x10E1D70)
#define MX_LOGIC_SERVICES_TIMESERVICE_DATESAREINTHESAMEMONTH_OFFSET UNITYSDK_OFFSET(0x10E1E00)
#define MX_LOGIC_SERVICES_TIMESERVICE_WITHINDURATION_OFFSET UNITYSDK_OFFSET(0x10E1E90)
#define MX_LOGIC_SERVICES_TIMESERVICE_GETNUMBEROFDAYSSINCE_OFFSET UNITYSDK_OFFSET(0x10E21E0)
#define MX_LOGIC_SERVICES_TIMESERVICE_GETNUMBEROFDAYSLEFT_OFFSET UNITYSDK_OFFSET(0x10E23A0)
#define MX_LOGIC_SERVICES_TIMESERVICE_GETNUMBEROFDAYSLEFTTO_OFFSET UNITYSDK_OFFSET(0x10E25B0)
#define MX_LOGIC_SERVICES_TIMESERVICE_ENDTIMESPANTOLOCALIZETEXT_OFFSET UNITYSDK_OFFSET(0x10E2790)
#define MX_LOGIC_SERVICES_TIMESERVICE_LOGICFRAMETOTRUNCATEDTIMESPAN_OFFSET UNITYSDK_OFFSET(0x10E2A80)
#define MX_LOGIC_SERVICES_TIMESERVICE_LOGICFRAMETOTIMESPAN_OFFSET UNITYSDK_OFFSET(0x10E2D20)
#define MX_LOGIC_SERVICES_TIMESERVICE_UNITYTIMETOTIMESPAN_OFFSET UNITYSDK_OFFSET(0x10E2D30)
#define MX_LOGIC_SERVICES_TIMESERVICE_LOGICFRAMETOUNITYTIME_OFFSET UNITYSDK_OFFSET(0x10E2D90)
#define MX_LOGIC_SERVICES_TIMESERVICE_LOGICFRAMETOSECONDTEXT_OFFSET UNITYSDK_OFFSET(0x10E2E10)
#define MX_LOGIC_SERVICES_TIMESERVICE_LOGICFRAMETOSECONDTEXT_OFFSET UNITYSDK_OFFSET(0x10E2E90)
#define MX_LOGIC_SERVICES_TIMESERVICE_MIN_OFFSET UNITYSDK_OFFSET(0x10E2F30)
#define MX_LOGIC_SERVICES_TIMESERVICE_MAX_OFFSET UNITYSDK_OFFSET(0x10E2F70)
#define MX_LOGIC_SERVICES_TIMESERVICE_COMMONSTRING_OFFSET UNITYSDK_OFFSET(0x10E2FB0)
#define MX_LOGIC_SERVICES_TIMESERVICE_TOCOMMONDATETIME_OFFSET UNITYSDK_OFFSET(0x10E3040)
#define MX_LOGIC_SERVICES_TIMESERVICE_BETWEEN_OFFSET UNITYSDK_OFFSET(0x10E30D0)
#define MX_LOGIC_SERVICES_TIMESERVICE_OUTOFDATE_OFFSET UNITYSDK_OFFSET(0x10E3160)
#define MX_LOGIC_SERVICES_TIMESERVICE_PASSED_OFFSET UNITYSDK_OFFSET(0x10E3270)
#define MX_LOGIC_SERVICES_TIMESERVICE_PASSED_OFFSET UNITYSDK_OFFSET(0x10E32D0)
#define MX_LOGIC_SERVICES_TIMESERVICE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x10E3490)
#define MX_LOGIC_SERVICES_TIMESERVICE_PARSE_OFFSET UNITYSDK_OFFSET(0x10E3520)
#define MX_LOGIC_SERVICES_TIMESERVICE_GETBIRTHDAYOFYEAR_OFFSET UNITYSDK_OFFSET(0x10E35A0)
#define MX_LOGIC_SERVICES_TIMESERVICE_CANRECEIVEBIRTHDAYMAIL_OFFSET UNITYSDK_OFFSET(0x10E3750)
#define MX_LOGIC_SERVICES_TIMESERVICE_INTERSECT_OFFSET UNITYSDK_OFFSET(0x10E3BE0)
#define MX_LOGIC_SERVICES_TIMESERVICE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x10E3E10)
#define MX_LOGIC_SERVICES_TIMESERVICE_ISPERIODELAPSED_OFFSET UNITYSDK_OFFSET(0x10E3F90)
#define MX_LOGIC_SERVICES_TIMESERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x10E4130)

namespace MX::Logic::Services
{
	inline static constexpr unsigned int TimeService_TypeDefinitionIndex = 12990;

	class TimeService : public Il2CppObject
	{
	public:
		::System::DateTime* UnixEpoch; // 0x0
		::System::Int32 SecondsInADay; // 0x8
		::System::Int32 SecondsInAnHour; // 0xC
		::System::Int32 TicksInASecond; // 0x10
		::System::Int32 TicksInAMilliSecond; // 0x14
		::System::Int32 MilliSecondsInASecond; // 0x18
		::System::TimeSpan* OneDay; // 0x20
		::System::Int32 baseTime; // 0x0
		::System::TimeSpan* dateResetBias; // 0x28

		::System::Int32 DateTimeToUnixTimestamp(::System::DateTime* arg)
		{
			return ((::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_DATETIMETOUNIXTIMESTAMP_OFFSET))(arg, nullptr);
		}

		::System::Int32 DateTimeToUnixTimestamp(Il2CppObject* arg)
		{
			return ((::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_DATETIMETOUNIXTIMESTAMP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BaseTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_GET_BASETIME_OFFSET))(nullptr);
		}

		::System::String* GetMatchFormatTimeString(::System::TimeSpan* arg)
		{
			return ((::System::String*(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_GETMATCHFORMATTIMESTRING_OFFSET))(arg, nullptr);
		}

		::System::String* DateTimeToLogTimestamp(::System::DateTime* arg)
		{
			return ((::System::String*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_DATETIMETOLOGTIMESTAMP_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* ParseTimeSpan(::System::Int64 arg)
		{
			return ((::System::TimeSpan*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_PARSETIMESPAN_OFFSET))(arg, nullptr);
		}

		::System::String* SecondsToString(::System::Single arg)
		{
			return ((::System::String*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_SECONDSTOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* SecondsToString(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_SECONDSTOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Int64 MillisecondToSecondByFloor(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_MILLISECONDTOSECONDBYFLOOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 MillisecondToSecondByCeiling(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_MILLISECONDTOSECONDBYCEILING_OFFSET))(arg, nullptr);
		}

		::System::DateTime* FloorMilliSeconds(::System::DateTime* arg)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_FLOORMILLISECONDS_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* GetUtcOffset()
		{
			return ((::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_GETUTCOFFSET_OFFSET))(nullptr);
		}

		::System::TimeSpan* GetUtcOffset(::System::DateTime* arg)
		{
			return ((::System::TimeSpan*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_GETUTCOFFSET_OFFSET))(arg, nullptr);
		}

		::System::DateTime* ApplyTimeBias(::System::DateTime* arg, ::System::TimeSpan* arg2)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_APPLYTIMEBIAS_OFFSET))(arg, arg2, nullptr);
		}

		::System::DateTime* RemoveTimeBias(::System::DateTime* arg, ::System::TimeSpan* arg2)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_REMOVETIMEBIAS_OFFSET))(arg, arg2, nullptr);
		}

		::System::DateTime* GetLastPeriodDateTime(::System::DateTime* arg, ::System::TimeSpan* arg2)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_GETLASTPERIODDATETIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::DateTime* GetNextPeriodDateTime(::System::DateTime* arg, ::System::TimeSpan* arg2)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_GETNEXTPERIODDATETIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::DateTime* GetLastPeriodDateTime(::System::DateTime* arg, ::System::TimeSpan* arg2, ::System::TimeSpan* arg3)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::System::TimeSpan*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_GETLASTPERIODDATETIME_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::DateTime* GetNextPeriodDateTime(::System::DateTime* arg, ::System::TimeSpan* arg2, ::System::TimeSpan* arg3)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::System::TimeSpan*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_GETNEXTPERIODDATETIME_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::FlatData::WeekDay* GetWeekDay(::System::DateTime* arg)
		{
			return ((::FlatData::WeekDay*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_GETWEEKDAY_OFFSET))(arg, nullptr);
		}

		::System::DateTime* Floor(::System::DateTime* arg, ::System::TimeSpan* arg2)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_FLOOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::DateTime* Floor(::System::DateTime* arg, ::System::TimeSpan* arg2, ::System::TimeSpan* arg3)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::System::TimeSpan*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_FLOOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::DateTime* Ceiling(::System::DateTime* arg, ::System::TimeSpan* arg2)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_CEILING_OFFSET))(arg, arg2, nullptr);
		}

		::System::DateTime* Ceiling(::System::DateTime* arg, ::System::TimeSpan* arg2, ::System::TimeSpan* arg3)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::System::TimeSpan*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_CEILING_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::DateTime* GetNextRefreshDate(::System::DateTime* arg)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_GETNEXTREFRESHDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* GetNextRefreshDate(::System::DateTime* arg, ::System::TimeSpan* arg2)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_GETNEXTREFRESHDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::DateTime* GetLastRefreshDate(::System::DateTime* arg)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_GETLASTREFRESHDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* GetLastRefreshDate(::System::DateTime* arg, ::System::TimeSpan* arg2)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_GETLASTREFRESHDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::DateTime* GetLastWeeklyRefreshDate(::System::DateTime* arg)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_GETLASTWEEKLYREFRESHDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* GetNextWeeklyRefreshDate(::System::DateTime* arg)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_GETNEXTWEEKLYREFRESHDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* GetNextWeeklyRefreshDate(::System::DateTime* arg, ::System::Int32 arg2)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_GETNEXTWEEKLYREFRESHDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::DateTime* GetLastMonthlyRefreshDate(::System::DateTime* arg)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_GETLASTMONTHLYREFRESHDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* GetNextMonthlyRefreshDate(::System::DateTime* arg)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_GETNEXTMONTHLYREFRESHDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* GetNextMonthlyRefreshDate(::System::DateTime* arg, ::System::Int32 arg2)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_GETNEXTMONTHLYREFRESHDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsSameDay(::System::DateTime* arg, ::System::DateTime* arg2)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_ISSAMEDAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsSameDay(::System::DateTime* arg, ::System::DateTime* arg2, ::System::TimeSpan* arg3)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::System::DateTime*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_ISSAMEDAY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean DatesAreInTheSameWeek(::System::DateTime* arg, ::System::DateTime* arg2)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_DATESAREINTHESAMEWEEK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean DatesAreInTheSameMonth(::System::DateTime* arg, ::System::DateTime* arg2)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_DATESAREINTHESAMEMONTH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean WithinDuration(::System::TimeSpan* arg, ::System::TimeSpan* arg2, ::System::DateTime* arg3)
		{
			return ((::System::Boolean(*)(::System::TimeSpan*, ::System::TimeSpan*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_WITHINDURATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 GetNumberOfDaysSince(::System::DateTime* arg, ::System::DateTime* arg2, ::System::Int32 arg3)
		{
			return ((::System::Int32(*)(::System::DateTime*, ::System::DateTime*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_GETNUMBEROFDAYSSINCE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 GetNumberOfDaysLeft(::System::DateTime* arg, ::System::DateTime* arg2, ::System::Int64 arg3)
		{
			return ((::System::Int32(*)(::System::DateTime*, ::System::DateTime*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_GETNUMBEROFDAYSLEFT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 GetNumberOfDaysLeftTo(::System::DateTime* arg, ::System::DateTime* arg2)
		{
			return ((::System::Int32(*)(::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_GETNUMBEROFDAYSLEFTTO_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* EndTimeSpanToLocalizeText(::System::DateTime* arg, ::System::DateTime* arg2)
		{
			return ((::System::String*(*)(::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_ENDTIMESPANTOLOCALIZETEXT_OFFSET))(arg, arg2, nullptr);
		}

		::System::TimeSpan* LogicFrameToTruncatedTimeSpan(::MX::Logic::Data::BattleTypes* arg, ::System::Int64 arg2)
		{
			return ((::System::TimeSpan*(*)(::MX::Logic::Data::BattleTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_LOGICFRAMETOTRUNCATEDTIMESPAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::TimeSpan* LogicFrameToTimeSpan(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::TimeSpan*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_LOGICFRAMETOTIMESPAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::TimeSpan* UnityTimeToTimeSpan(::System::Single arg)
		{
			return ((::System::TimeSpan*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_UNITYTIMETOTIMESPAN_OFFSET))(arg, nullptr);
		}

		::System::Single LogicFrameToUnityTime(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Single(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_LOGICFRAMETOUNITYTIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* LogicFrameToSecondText(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_LOGICFRAMETOSECONDTEXT_OFFSET))(arg, nullptr);
		}

		::System::String* LogicFrameToSecondText(::System::Int32 arg, ::System::Int64 arg2)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_LOGICFRAMETOSECONDTEXT_OFFSET))(arg, arg2, nullptr);
		}

		::System::DateTime* Min(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::DateTime*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_MIN_OFFSET))(arg, nullptr);
		}

		::System::DateTime* Max(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::DateTime*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_MAX_OFFSET))(arg, nullptr);
		}

		::System::String* CommonString(::System::DateTime* arg)
		{
			return ((::System::String*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_COMMONSTRING_OFFSET))(arg, nullptr);
		}

		::System::DateTime* ToCommonDateTime(::System::String* str)
		{
			return ((::System::DateTime*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_TOCOMMONDATETIME_OFFSET))(str, nullptr);
		}

		::System::Boolean Between(::System::DateTime* arg, ::System::DateTime* arg2, ::System::DateTime* arg3)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_BETWEEN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean OutOfDate(::System::DateTime* arg, ::System::DateTime* arg2, ::System::DateTime* arg3)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_OUTOFDATE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean Passed(::System::DateTime* arg, ::System::DateTime* arg2)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_PASSED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Passed(::System::DateTime* arg, ::System::String* str)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_PASSED_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::DateTime&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::DateTime&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::DateTime* Parse(::System::String* str)
		{
			return ((::System::DateTime*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_PARSE_OFFSET))(str, nullptr);
		}

		::System::DateTime* GetBirthdayOfYear(::System::Int32 arg, ::System::DateTime* arg2)
		{
			return ((::System::DateTime*(*)(::System::Int32, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_GETBIRTHDAYOFYEAR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanReceiveBirthdayMail(::System::DateTime* arg, ::System::DateTime* arg2, int32_t&* arg3)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::System::DateTime*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_CANRECEIVEBIRTHDAYMAIL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean Intersect(::System::DateTime* arg, ::System::DateTime* arg2, ::System::DateTime* arg3, ::System::DateTime* arg4)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::System::DateTime*, ::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_INTERSECT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean Contains(::System::DateTime* arg, ::System::DateTime* arg2, ::System::DateTime* arg3, ::System::DateTime* arg4)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::System::DateTime*, ::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_CONTAINS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean IsPeriodElapsed(::System::DateTime* arg, ::System::DateTime* arg2, ::FlatData::PeriodType* arg3)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::System::DateTime*, ::FlatData::PeriodType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_ISPERIODELAPSED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_TIMESERVICE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

