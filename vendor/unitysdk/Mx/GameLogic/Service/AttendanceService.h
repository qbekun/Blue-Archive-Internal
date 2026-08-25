#pragma once
#include "../../../unitysdk.h"

namespace MX::Data { class AttendanceBookReward; }
namespace MX::GameLogic::DBModel { class AccountDB; }
namespace MX::GameLogic::DBModel { class AttendanceHistoryDB; }

#define MX_GAMELOGIC_SERVICE_ATTENDANCESERVICE_ISOUTOFCOMEBACKATTENDANCE_OFFSET UNITYSDK_OFFSET(0xF57F00)
#define MX_GAMELOGIC_SERVICE_ATTENDANCESERVICE_OPENANDAVAILABLE_OFFSET UNITYSDK_OFFSET(0xF580B0)
#define MX_GAMELOGIC_SERVICE_ATTENDANCESERVICE_FILTEROUTOFDATEBUTNOTYETEXPIRED_OFFSET UNITYSDK_OFFSET(0xF582F0)
#define MX_GAMELOGIC_SERVICE_ATTENDANCESERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF58410)
#define MX_GAMELOGIC_SERVICE_ATTENDANCESERVICE_ISEXPIRYDATE_OFFSET UNITYSDK_OFFSET(0xF58420)
#define MX_GAMELOGIC_SERVICE_ATTENDANCESERVICE_OPENATTENDANCEBOOK_OFFSET UNITYSDK_OFFSET(0xF581C0)
#define MX_GAMELOGIC_SERVICE_ATTENDANCESERVICE_ISOUTOFEVENTLASTDAY_OFFSET UNITYSDK_OFFSET(0xF58550)
#define MX_GAMELOGIC_SERVICE_ATTENDANCESERVICE_CALCATTENDDAY_OFFSET UNITYSDK_OFFSET(0xF586D0)
#define MX_GAMELOGIC_SERVICE_ATTENDANCESERVICE_AVAILABLEANDNOTYETATTENDEDTODAY_OFFSET UNITYSDK_OFFSET(0xF589D0)
#define MX_GAMELOGIC_SERVICE_ATTENDANCESERVICE_ISEXPIREDCOMEBACKATTENDANCE_OFFSET UNITYSDK_OFFSET(0xF58F40)
#define MX_GAMELOGIC_SERVICE_ATTENDANCESERVICE_ISOUTOFDATE_OFFSET UNITYSDK_OFFSET(0xF59060)
#define MX_GAMELOGIC_SERVICE_ATTENDANCESERVICE_ATTEND_OFFSET UNITYSDK_OFFSET(0xF59190)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int AttendanceService_TypeDefinitionIndex = 12235;

	class AttendanceService : public Il2CppObject
	{
	public:
		::System::Boolean IsOutOfComebackAttendance(::MX::Data::AttendanceBookReward* arg, ::MX::GameLogic::DBModel::AccountDB* arg2, Il2CppObject* arg3)
		{
			return ((::System::Boolean(*)(::MX::Data::AttendanceBookReward*, ::MX::GameLogic::DBModel::AccountDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ATTENDANCESERVICE_ISOUTOFCOMEBACKATTENDANCE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* OpenAndAvailable(::System::DateTime* arg, ::MX::GameLogic::DBModel::AccountDB* arg2, Il2CppObject* arg3)
		{
			return ((Il2CppObject*(*)(::System::DateTime*, ::MX::GameLogic::DBModel::AccountDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ATTENDANCESERVICE_OPENANDAVAILABLE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* FilterOutOfDateButNotYetExpired(::System::DateTime* arg, ::MX::GameLogic::DBModel::AccountDB* arg2, Il2CppObject* arg3)
		{
			return ((Il2CppObject*(*)(::System::DateTime*, ::MX::GameLogic::DBModel::AccountDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ATTENDANCESERVICE_FILTEROUTOFDATEBUTNOTYETEXPIRED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ATTENDANCESERVICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsExpiryDate(::MX::GameLogic::DBModel::AttendanceHistoryDB* arg, ::System::DateTime* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::AttendanceHistoryDB*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ATTENDANCESERVICE_ISEXPIRYDATE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* OpenAttendanceBook(::System::DateTime* arg, ::MX::GameLogic::DBModel::AccountDB* arg2, Il2CppObject* arg3)
		{
			return ((Il2CppObject*(*)(::System::DateTime*, ::MX::GameLogic::DBModel::AccountDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ATTENDANCESERVICE_OPENATTENDANCEBOOK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsOutOfEventLastDay(::MX::Data::AttendanceBookReward* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::MX::Data::AttendanceBookReward*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ATTENDANCESERVICE_ISOUTOFEVENTLASTDAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 CalcAttendDay(::MX::Data::AttendanceBookReward* arg, ::System::DateTime* arg2, ::MX::GameLogic::DBModel::AttendanceHistoryDB* arg3)
		{
			return ((::System::Int64(*)(::MX::Data::AttendanceBookReward*, ::System::DateTime*, ::MX::GameLogic::DBModel::AttendanceHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ATTENDANCESERVICE_CALCATTENDDAY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean AvailableAndNotYetAttendedToday(::MX::Data::AttendanceBookReward* arg, ::System::DateTime* arg2, Il2CppObject* arg3, ::MX::GameLogic::DBModel::AccountDB* arg4)
		{
			return ((::System::Boolean(*)(::MX::Data::AttendanceBookReward*, ::System::DateTime*, Il2CppObject*, ::MX::GameLogic::DBModel::AccountDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ATTENDANCESERVICE_AVAILABLEANDNOTYETATTENDEDTODAY_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean IsExpiredComebackAttendance(::MX::GameLogic::DBModel::AttendanceHistoryDB* arg, ::MX::GameLogic::DBModel::AccountDB* arg2, ::System::DateTime* arg3)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::AttendanceHistoryDB*, ::MX::GameLogic::DBModel::AccountDB*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ATTENDANCESERVICE_ISEXPIREDCOMEBACKATTENDANCE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsOutOfDate(::MX::GameLogic::DBModel::AttendanceHistoryDB* arg, ::System::DateTime* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::AttendanceHistoryDB*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ATTENDANCESERVICE_ISOUTOFDATE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::AttendanceHistoryDB* Attend(::MX::GameLogic::DBModel::AccountDB* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::DateTime* arg4, Il2CppObject* arg5)
		{
			return ((::MX::GameLogic::DBModel::AttendanceHistoryDB*(*)(::MX::GameLogic::DBModel::AccountDB*, ::System::Int64, ::System::Int64, ::System::DateTime*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ATTENDANCESERVICE_ATTEND_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

	};
}

