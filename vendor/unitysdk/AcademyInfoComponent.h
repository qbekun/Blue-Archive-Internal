#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class AcademyDB; }
class AttendResult;
class UIFavorGrowthDirecting;
class UIAcademyScheduleResult;
class AttendResultProcess;
class UIAcademyLocationRankUp;

#define ACADEMYINFOCOMPONENT_GETNAVIGATEDLOCATIONID_OFFSET UNITYSDK_OFFSET(0x18185C0)
#define ACADEMYINFOCOMPONENT__ONATTENDRESULTPROCESSFINISH_B__33_5_OFFSET UNITYSDK_OFFSET(0x1818670)
#define ACADEMYINFOCOMPONENT__ONATTENDRESULTPROCESSFINISH_B__33_1_OFFSET UNITYSDK_OFFSET(0x1818930)
#define ACADEMYINFOCOMPONENT_GET_AVAILABLELOCATIONCHECKSTUDENTCOUNT_OFFSET UNITYSDK_OFFSET(0x18189D0)
#define ACADEMYINFOCOMPONENT_REQUESTATTENDSCHEDULE_OFFSET UNITYSDK_OFFSET(0x18189E0)
#define ACADEMYINFOCOMPONENT__ONATTENDRESULTPROCESSFINISH_B__33_6_OFFSET UNITYSDK_OFFSET(0x1818B70)
#define ACADEMYINFOCOMPONENT_GET_SYNCED_OFFSET UNITYSDK_OFFSET(0x1818CA0)
#define ACADEMYINFOCOMPONENT_SET_CACHEDACADEMYDB_OFFSET UNITYSDK_OFFSET(0x1818CB0)
#define ACADEMYINFOCOMPONENT_SETATTENDRESULT_OFFSET UNITYSDK_OFFSET(0x1818CC0)
#define ACADEMYINFOCOMPONENT_GETLOCATIONRANK_OFFSET UNITYSDK_OFFSET(0x1818ED0)
#define ACADEMYINFOCOMPONENT_FINDZONEVISITORS_OFFSET UNITYSDK_OFFSET(0x1818FD0)
#define ACADEMYINFOCOMPONENT_GET_TOTALRANKSUM_OFFSET UNITYSDK_OFFSET(0x1819060)
#define ACADEMYINFOCOMPONENT_SYNCACADEMYLOCATIONDBS_OFFSET UNITYSDK_OFFSET(0x18191A0)
#define ACADEMYINFOCOMPONENT_SYNC_OFFSET UNITYSDK_OFFSET(0x1819490)
#define ACADEMYINFOCOMPONENT_GET_CACHEDACADEMYDB_OFFSET UNITYSDK_OFFSET(0x18197C0)
#define ACADEMYINFOCOMPONENT_GETTOTALTICKETS_OFFSET UNITYSDK_OFFSET(0x18197D0)
#define ACADEMYINFOCOMPONENT_SET_CACHEDATTENDRESULT_OFFSET UNITYSDK_OFFSET(0x1819860)
#define ACADEMYINFOCOMPONENT_GET_AVAILABLELOCATIONIDS_OFFSET UNITYSDK_OFFSET(0x1819870)
#define ACADEMYINFOCOMPONENT_GETLOCATIONEXP_OFFSET UNITYSDK_OFFSET(0x1819C60)
#define ACADEMYINFOCOMPONENT_SETAVAILABLELOCATIONS_OFFSET UNITYSDK_OFFSET(0x1819950)
#define ACADEMYINFOCOMPONENT__ONATTENDRESULTPROCESSFINISH_B__33_2_OFFSET UNITYSDK_OFFSET(0x1819CF0)
#define ACADEMYINFOCOMPONENT_ONATTENDRESULTPROCESSFINISH_OFFSET UNITYSDK_OFFSET(0x1818680)
#define ACADEMYINFOCOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1819EB0)
#define ACADEMYINFOCOMPONENT_TRYGETLOCATIONDB_OFFSET UNITYSDK_OFFSET(0x1818F60)
#define ACADEMYINFOCOMPONENT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1819F80)
#define ACADEMYINFOCOMPONENT_SET_AVAILABLELOCATIONCHECKSTUDENTCOUNT_OFFSET UNITYSDK_OFFSET(0x181A020)
#define ACADEMYINFOCOMPONENT_SYNCACADEMYDB_OFFSET UNITYSDK_OFFSET(0x181A030)
#define ACADEMYINFOCOMPONENT_GETCURRENCYCURRENCYOVERDAYMAX_OFFSET UNITYSDK_OFFSET(0x181A120)
#define ACADEMYINFOCOMPONENT_CLEARATTENDRESULTCACHE_OFFSET UNITYSDK_OFFSET(0x1818C80)
#define ACADEMYINFOCOMPONENT_CANATTENDZONESCHECULE_OFFSET UNITYSDK_OFFSET(0x181A300)
#define ACADEMYINFOCOMPONENT__ONATTENDRESULTPROCESSFINISH_B__33_0_OFFSET UNITYSDK_OFFSET(0x181A490)
#define ACADEMYINFOCOMPONENT_GET_CACHEDATTENDRESULT_OFFSET UNITYSDK_OFFSET(0x181A710)
#define ACADEMYINFOCOMPONENT_ISZONEOPEN_OFFSET UNITYSDK_OFFSET(0x181A370)
#define ACADEMYINFOCOMPONENT__ONATTENDRESULTPROCESSFINISH_B__33_4_OFFSET UNITYSDK_OFFSET(0x181A720)

	inline static constexpr unsigned int AcademyInfoComponent_TypeDefinitionIndex = 1267;

	class AcademyInfoComponent : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::AcademyDB* _CachedAcademyDB_k__BackingField; // 0x10
		Il2CppObject* locationDBDict; // 0x18
		AttendResult* _CachedAttendResult_k__BackingField; // 0x20
		Il2CppObject* AvailableLocations; // 0x28
		::System::Int32 _AvailableLocationCheckStudentCount_k__BackingField; // 0x30

		::System::Int64 GetNavigatedLocationId(::System::Int64 arg, ::System::Boolean arg2)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_GETNAVIGATEDLOCATIONID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OnAttendResultProcessFinish_b__33_5()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT__ONATTENDRESULTPROCESSFINISH_B__33_5_OFFSET))(nullptr);
		}

		::System::Void _OnAttendResultProcessFinish_b__33_1(UIFavorGrowthDirecting* arg)
		{
			((::System::Void(*)(UIFavorGrowthDirecting*, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT__ONATTENDRESULTPROCESSFINISH_B__33_1_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_AvailableLocationCheckStudentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_GET_AVAILABLELOCATIONCHECKSTUDENTCOUNT_OFFSET))(nullptr);
		}

		::System::Void RequestAttendSchedule(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_REQUESTATTENDSCHEDULE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OnAttendResultProcessFinish_b__33_6()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT__ONATTENDRESULTPROCESSFINISH_B__33_6_OFFSET))(nullptr);
		}

		::System::Boolean get_Synced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_GET_SYNCED_OFFSET))(nullptr);
		}

		::System::Void set_CachedAcademyDB(::MX::GameLogic::DBModel::AcademyDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AcademyDB*, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_SET_CACHEDACADEMYDB_OFFSET))(arg, nullptr);
		}

		::System::Void SetAttendResult(::System::Int64 arg, ::System::Boolean arg2, ::System::Int64 arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::System::Int64, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_SETATTENDRESULT_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Int64 GetLocationRank(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_GETLOCATIONRANK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindZoneVisitors(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_FINDZONEVISITORS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TotalRankSum()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_GET_TOTALRANKSUM_OFFSET))(nullptr);
		}

		::System::Void SyncAcademyLocationDBs(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_SYNCACADEMYLOCATIONDBS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::AcademyDB* arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AcademyDB*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_SYNC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::DBModel::AcademyDB* get_CachedAcademyDB()
		{
			return ((::MX::GameLogic::DBModel::AcademyDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_GET_CACHEDACADEMYDB_OFFSET))(nullptr);
		}

		Il2CppObject* GetTotalTickets()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_GETTOTALTICKETS_OFFSET))(nullptr);
		}

		::System::Void set_CachedAttendResult(AttendResult* arg)
		{
			((::System::Void(*)(AttendResult*, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_SET_CACHEDATTENDRESULT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AvailableLocationIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_GET_AVAILABLELOCATIONIDS_OFFSET))(nullptr);
		}

		::System::Int64 GetLocationExp(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_GETLOCATIONEXP_OFFSET))(arg, nullptr);
		}

		::System::Void SetAvailableLocations()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_SETAVAILABLELOCATIONS_OFFSET))(nullptr);
		}

		::System::Void _OnAttendResultProcessFinish_b__33_2(UIAcademyScheduleResult* arg)
		{
			((::System::Void(*)(UIAcademyScheduleResult*, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT__ONATTENDRESULTPROCESSFINISH_B__33_2_OFFSET))(arg, nullptr);
		}

		::System::Void OnAttendResultProcessFinish(AttendResultProcess* arg)
		{
			((::System::Void(*)(AttendResultProcess*, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_ONATTENDRESULTPROCESSFINISH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetLocationDB(::System::Int64 arg, ::MX::GameLogic::DBModel::AcademyLocationDB&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::GameLogic::DBModel::AcademyLocationDB&*, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_TRYGETLOCATIONDB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void set_AvailableLocationCheckStudentCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_SET_AVAILABLELOCATIONCHECKSTUDENTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void SyncAcademyDB(::MX::GameLogic::DBModel::AcademyDB* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AcademyDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_SYNCACADEMYDB_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetCurrencyCurrencyOverDayMax()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_GETCURRENCYCURRENCYOVERDAYMAX_OFFSET))(nullptr);
		}

		::System::Void ClearAttendResultCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_CLEARATTENDRESULTCACHE_OFFSET))(nullptr);
		}

		::System::Boolean CanAttendZoneSchecule(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_CANATTENDZONESCHECULE_OFFSET))(arg, nullptr);
		}

		::System::Void _OnAttendResultProcessFinish_b__33_0(UIAcademyLocationRankUp* arg)
		{
			((::System::Void(*)(UIAcademyLocationRankUp*, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT__ONATTENDRESULTPROCESSFINISH_B__33_0_OFFSET))(arg, nullptr);
		}

		AttendResult* get_CachedAttendResult()
		{
			return ((AttendResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_GET_CACHEDATTENDRESULT_OFFSET))(nullptr);
		}

		::System::Boolean IsZoneOpen(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT_ISZONEOPEN_OFFSET))(arg, nullptr);
		}

		::System::Void _OnAttendResultProcessFinish_b__33_4()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYINFOCOMPONENT__ONATTENDRESULTPROCESSFINISH_B__33_4_OFFSET))(nullptr);
		}

	};

