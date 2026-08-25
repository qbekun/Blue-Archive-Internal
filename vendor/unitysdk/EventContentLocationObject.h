#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentLocationDB; }
class AttendResult;
class UIFavorGrowthDirecting;
class UIAcademyLocationRankUp;
namespace MX::Data { class EventContentSeasonInfo; }
class AttendResultProcess;

#define EVENTCONTENTLOCATIONOBJECT__ONATTENDRESULTPROCESSFINISH_B__25_1_OFFSET UNITYSDK_OFFSET(0x1D104B0)
#define EVENTCONTENTLOCATIONOBJECT_SET_EVENTCONTENTLOCATION_OFFSET UNITYSDK_OFFSET(0x1D10550)
#define EVENTCONTENTLOCATIONOBJECT__ONATTENDRESULTPROCESSFINISH_B__25_4_OFFSET UNITYSDK_OFFSET(0x1D10560)
#define EVENTCONTENTLOCATIONOBJECT__ONATTENDRESULTPROCESSFINISH_B__25_7_OFFSET UNITYSDK_OFFSET(0x1D10910)
#define EVENTCONTENTLOCATIONOBJECT_GET_CACHEDATTENDRESULT_OFFSET UNITYSDK_OFFSET(0x1D10CF0)
#define EVENTCONTENTLOCATIONOBJECT_SETATTENDRESULT_OFFSET UNITYSDK_OFFSET(0x1D10D00)
#define EVENTCONTENTLOCATIONOBJECT_GET_ORIGINALLOCATIONID_OFFSET UNITYSDK_OFFSET(0x1D11020)
#define EVENTCONTENTLOCATIONOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1D11030)
#define EVENTCONTENTLOCATIONOBJECT__ONATTENDRESULTPROCESSFINISH_B__25_0_OFFSET UNITYSDK_OFFSET(0x1D11040)
#define EVENTCONTENTLOCATIONOBJECT_CO_REQUESTEVENTCONTENTLOCATIONGETINFO_OFFSET UNITYSDK_OFFSET(0x1D11200)
#define EVENTCONTENTLOCATIONOBJECT_SET_CACHEDATTENDRESULT_OFFSET UNITYSDK_OFFSET(0x1D112B0)
#define EVENTCONTENTLOCATIONOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D112C0)
#define EVENTCONTENTLOCATIONOBJECT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D112D0)
#define EVENTCONTENTLOCATIONOBJECT_ONATTENDRESULTPROCESSFINISH_OFFSET UNITYSDK_OFFSET(0x1D10570)
#define EVENTCONTENTLOCATIONOBJECT__ONATTENDRESULTPROCESSFINISH_G__CLOSEOPENEDPOPUPS|25_2_OFFSET UNITYSDK_OFFSET(0x1D10B50)
#define EVENTCONTENTLOCATIONOBJECT_GET_EVENTCONTENTLOCATION_OFFSET UNITYSDK_OFFSET(0x1D11320)
#define EVENTCONTENTLOCATIONOBJECT_CLEARATTENDRESULTCACHE_OFFSET UNITYSDK_OFFSET(0x1D10CD0)
#define EVENTCONTENTLOCATIONOBJECT_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1D11330)
#define EVENTCONTENTLOCATIONOBJECT_REQUESTEVENTCONTENTLOCATIONATTEDSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1D11340)
#define EVENTCONTENTLOCATIONOBJECT_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1D11540)
#define EVENTCONTENTLOCATIONOBJECT_ISZONEOPEN_OFFSET UNITYSDK_OFFSET(0x1D11550)
#define EVENTCONTENTLOCATIONOBJECT__ONATTENDRESULTPROCESSFINISH_B__25_5_OFFSET UNITYSDK_OFFSET(0x1D11610)
#define EVENTCONTENTLOCATIONOBJECT_SET_ORIGINALLOCATIONID_OFFSET UNITYSDK_OFFSET(0x1D11620)

	inline static constexpr unsigned int EventContentLocationObject_TypeDefinitionIndex = 1619;

	class EventContentLocationObject : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentLocationDB* _EventContentLocation_k__BackingField; // 0x10
		::System::Int64 _EventContentId_k__BackingField; // 0x18
		::System::Int64 _OriginalLocationId_k__BackingField; // 0x20
		AttendResult* _CachedAttendResult_k__BackingField; // 0x28

		::System::Void _OnAttendResultProcessFinish_b__25_1(UIFavorGrowthDirecting* arg)
		{
			((::System::Void(*)(UIFavorGrowthDirecting*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONOBJECT__ONATTENDRESULTPROCESSFINISH_B__25_1_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentLocation(::MX::GameLogic::DBModel::EventContentLocationDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentLocationDB*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONOBJECT_SET_EVENTCONTENTLOCATION_OFFSET))(arg, nullptr);
		}

		::System::Void _OnAttendResultProcessFinish_b__25_4()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONOBJECT__ONATTENDRESULTPROCESSFINISH_B__25_4_OFFSET))(nullptr);
		}

		::System::Void _OnAttendResultProcessFinish_b__25_7()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONOBJECT__ONATTENDRESULTPROCESSFINISH_B__25_7_OFFSET))(nullptr);
		}

		AttendResult* get_CachedAttendResult()
		{
			return ((AttendResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONOBJECT_GET_CACHEDATTENDRESULT_OFFSET))(nullptr);
		}

		::System::Void SetAttendResult(::System::Int64 arg, ::System::Int64 arg2, ::System::Boolean arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6, Il2CppObject* arg7, ::System::Boolean arg8, Il2CppObject* arg9)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Boolean, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONOBJECT_SETATTENDRESULT_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Int64 get_OriginalLocationId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONOBJECT_GET_ORIGINALLOCATIONID_OFFSET))(nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::EventContentLocationDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentLocationDB*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void _OnAttendResultProcessFinish_b__25_0(UIAcademyLocationRankUp* arg)
		{
			((::System::Void(*)(UIAcademyLocationRankUp*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONOBJECT__ONATTENDRESULTPROCESSFINISH_B__25_0_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_RequestEventContentLocationGetInfo(::MX::Data::EventContentSeasonInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONOBJECT_CO_REQUESTEVENTCONTENTLOCATIONGETINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_CachedAttendResult(AttendResult* arg)
		{
			((::System::Void(*)(AttendResult*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONOBJECT_SET_CACHEDATTENDRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONOBJECT_CLEAR_OFFSET))(nullptr);
		}

		::System::Void OnAttendResultProcessFinish(AttendResultProcess* arg)
		{
			((::System::Void(*)(AttendResultProcess*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONOBJECT_ONATTENDRESULTPROCESSFINISH_OFFSET))(arg, nullptr);
		}

		::System::Void _OnAttendResultProcessFinish_g__CloseOpenedPopups|25_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONOBJECT__ONATTENDRESULTPROCESSFINISH_G__CLOSEOPENEDPOPUPS|25_2_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EventContentLocationDB* get_EventContentLocation()
		{
			return ((::MX::GameLogic::DBModel::EventContentLocationDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONOBJECT_GET_EVENTCONTENTLOCATION_OFFSET))(nullptr);
		}

		::System::Void ClearAttendResultCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONOBJECT_CLEARATTENDRESULTCACHE_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONOBJECT_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void RequestEventContentLocationAttedSchedule(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONOBJECT_REQUESTEVENTCONTENTLOCATIONATTEDSCHEDULE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONOBJECT_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean IsZoneOpen(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONOBJECT_ISZONEOPEN_OFFSET))(arg, nullptr);
		}

		::System::Void _OnAttendResultProcessFinish_b__25_5()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONOBJECT__ONATTENDRESULTPROCESSFINISH_B__25_5_OFFSET))(nullptr);
		}

		::System::Void set_OriginalLocationId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONOBJECT_SET_ORIGINALLOCATIONID_OFFSET))(arg, nullptr);
		}

	};

