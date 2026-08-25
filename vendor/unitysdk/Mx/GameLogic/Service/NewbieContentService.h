#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountDB; }
namespace MX::GameLogic::DBModel { class AttendanceHistoryDB; }

#define MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_TRYPARSERELEASEDATESTRING_OFFSET UNITYSDK_OFFSET(0xFB6B90)
#define MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_CALCNEWBIEPERIODENDDATE_OFFSET UNITYSDK_OFFSET(0xFB6C40)
#define MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_CALCELAPSEDNEWBIEDAYS_OFFSET UNITYSDK_OFFSET(0xFB6D00)
#define MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_CALCELAPSEDNEWBIEDAYS_OFFSET UNITYSDK_OFFSET(0xFB6D90)
#define MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_CALCNEWBIEGACHAREMAININGDAYS_OFFSET UNITYSDK_OFFSET(0xFB6E40)
#define MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_CANUSENEWBIEGACHATOKEN_OFFSET UNITYSDK_OFFSET(0xFB6FB0)
#define MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_GETUSENEWBIEGACHATOKENENDDATE_OFFSET UNITYSDK_OFFSET(0xFB7010)
#define MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_GETNEWBIEPERIODENDDATE_OFFSET UNITYSDK_OFFSET(0xFB70D0)
#define MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_GETNEWBIEPERIODENDDATEWITHRELEASEDATE_OFFSET UNITYSDK_OFFSET(0xFB7200)
#define MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_GETNEWBIEPERIODDATE_OFFSET UNITYSDK_OFFSET(0xFB7300)
#define MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_CALCNEWBIEATTENDANCEREMAININGDAYS_OFFSET UNITYSDK_OFFSET(0xFB7490)
#define MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_CALCNEWBIEATTENDANCEREMAININGTIMEFROMDATE_OFFSET UNITYSDK_OFFSET(0xFB7670)
#define MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_CANRECEIVENEWBIEATTENDANCEREWARD_OFFSET UNITYSDK_OFFSET(0xFB77A0)
#define MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFB7940)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int NewbieContentService_TypeDefinitionIndex = 12379;

	class NewbieContentService : public Il2CppObject
	{
	public:
		::System::Boolean TryParseReleaseDateString(::System::String* str, ::System::DateTime&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::DateTime&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_TRYPARSERELEASEDATESTRING_OFFSET))(str, arg, nullptr);
		}

		::System::DateTime* CalcNewbiePeriodEndDate(::System::DateTime* arg, ::System::DateTime* arg2, ::System::Int32 arg3)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::System::DateTime*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_CALCNEWBIEPERIODENDDATE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 CalcElapsedNewbieDays(::System::DateTime* arg, ::System::DateTime* arg2, ::System::DateTime* arg3)
		{
			return ((::System::Int32(*)(::System::DateTime*, ::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_CALCELAPSEDNEWBIEDAYS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 CalcElapsedNewbieDays(::System::DateTime* arg, ::MX::GameLogic::DBModel::AccountDB* arg2, ::System::DateTime* arg3)
		{
			return ((::System::Int32(*)(::System::DateTime*, ::MX::GameLogic::DBModel::AccountDB*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_CALCELAPSEDNEWBIEDAYS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 CalcNewbieGachaRemainingDays(::System::DateTime* arg, ::MX::GameLogic::DBModel::AccountDB* arg2)
		{
			return ((::System::Int32(*)(::System::DateTime*, ::MX::GameLogic::DBModel::AccountDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_CALCNEWBIEGACHAREMAININGDAYS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanUseNewbieGachaToken(::System::DateTime* arg, ::MX::GameLogic::DBModel::AccountDB* arg2)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::MX::GameLogic::DBModel::AccountDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_CANUSENEWBIEGACHATOKEN_OFFSET))(arg, arg2, nullptr);
		}

		::System::DateTime* GetUseNewbieGachaTokenEndDate(::MX::GameLogic::DBModel::AccountDB* arg)
		{
			return ((::System::DateTime*(*)(::MX::GameLogic::DBModel::AccountDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_GETUSENEWBIEGACHATOKENENDDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* GetNewbiePeriodEndDate(::MX::GameLogic::DBModel::AccountDB* arg)
		{
			return ((::System::DateTime*(*)(::MX::GameLogic::DBModel::AccountDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_GETNEWBIEPERIODENDDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* GetNewbiePeriodEndDateWithReleaseDate(::MX::GameLogic::DBModel::AccountDB* arg, ::System::String* str)
		{
			return ((::System::DateTime*(*)(::MX::GameLogic::DBModel::AccountDB*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_GETNEWBIEPERIODENDDATEWITHRELEASEDATE_OFFSET))(arg, str, nullptr);
		}

		::System::Void GetNewbiePeriodDate(::MX::GameLogic::DBModel::AccountDB* arg, ::System::String* str, bool&* arg2, ::System::DateTime&* arg3, ::System::DateTime&* arg4)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountDB*, ::System::String*, bool&*, ::System::DateTime&*, ::System::DateTime&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_GETNEWBIEPERIODDATE_OFFSET))(arg, str, arg2, arg3, arg4, nullptr);
		}

		::System::Int32 CalcNewbieAttendanceRemainingDays(::System::DateTime* arg, ::MX::GameLogic::DBModel::AccountDB* arg2, ::System::Int64 arg3, ::MX::GameLogic::DBModel::AttendanceHistoryDB* arg4)
		{
			return ((::System::Int32(*)(::System::DateTime*, ::MX::GameLogic::DBModel::AccountDB*, ::System::Int64, ::MX::GameLogic::DBModel::AttendanceHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_CALCNEWBIEATTENDANCEREMAININGDAYS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::TimeSpan* CalcNewbieAttendanceRemainingTimeFromDate(::System::DateTime* arg, ::MX::GameLogic::DBModel::AccountDB* arg2, ::System::Int64 arg3, ::MX::GameLogic::DBModel::AttendanceHistoryDB* arg4)
		{
			return ((::System::TimeSpan*(*)(::System::DateTime*, ::MX::GameLogic::DBModel::AccountDB*, ::System::Int64, ::MX::GameLogic::DBModel::AttendanceHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_CALCNEWBIEATTENDANCEREMAININGTIMEFROMDATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean CanReceiveNewbieAttendanceReward(::System::DateTime* arg, ::MX::GameLogic::DBModel::AccountDB* arg2, ::MX::GameLogic::DBModel::AttendanceHistoryDB* arg3)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::MX::GameLogic::DBModel::AccountDB*, ::MX::GameLogic::DBModel::AttendanceHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_CANRECEIVENEWBIEATTENDANCEREWARD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_NEWBIECONTENTSERVICE_.CTOR_OFFSET))(nullptr);
		}

	};
}

