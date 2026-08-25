#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class MissionInfo; }
namespace MX::Data::Excel { class GuideMissionExcel&; }
namespace MX::Data::Excel { class GuideMissionSeasonExcel&; }
namespace MX::Data { class GuideMissionSeasonInfo&; }
namespace MX::Data { class GuideMissionSeasonInfo; }
namespace FlatData { class MissionCompleteConditionType; }
namespace MX::Data { class MissionInfo&; }
namespace MX::Data { class GuideMissionOpenStageConditionInfo&; }
namespace MX::Data { class GuideMissionInfo; }
namespace MX::GameLogic::DBModel { class GuideMissionSeasonDB; }

#define MX_DATA_MISSIONDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x19135E0)
#define MX_DATA_MISSIONDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x1913680)
#define MX_DATA_MISSIONDATA_PREPROCESSCOMMON_OFFSET UNITYSDK_OFFSET(0x19147A0)
#define MX_DATA_MISSIONDATA_GETUNRESOLVEDTOTALMISSIONINFOS_OFFSET UNITYSDK_OFFSET(0x1916E90)
#define MX_DATA_MISSIONDATA_GETTOTALMISSIONINFOS_OFFSET UNITYSDK_OFFSET(0x1916EE0)
#define MX_DATA_MISSIONDATA_GETALLMISSIONS_OFFSET UNITYSDK_OFFSET(0x19170E0)
#define MX_DATA_MISSIONDATA_GETALLMISSIONSNORESOLVE_OFFSET UNITYSDK_OFFSET(0x19172E0)
#define MX_DATA_MISSIONDATA_GETALLGENERALMISSION_OFFSET UNITYSDK_OFFSET(0x1917330)
#define MX_DATA_MISSIONDATA_GET_ALLDAILYSUDDENMISSION_OFFSET UNITYSDK_OFFSET(0x1917470)
#define MX_DATA_MISSIONDATA_SET_ALLDAILYSUDDENMISSION_OFFSET UNITYSDK_OFFSET(0x1917480)
#define MX_DATA_MISSIONDATA_GET_ALLGUIDEMISSION_OFFSET UNITYSDK_OFFSET(0x1917490)
#define MX_DATA_MISSIONDATA_SET_ALLGUIDEMISSION_OFFSET UNITYSDK_OFFSET(0x19174A0)
#define MX_DATA_MISSIONDATA_GET_GUIDEMISSIONSEASONINFOS_OFFSET UNITYSDK_OFFSET(0x19174B0)
#define MX_DATA_MISSIONDATA_GETUNRESOLVED_OFFSET UNITYSDK_OFFSET(0x1917500)
#define MX_DATA_MISSIONDATA_GET_OFFSET UNITYSDK_OFFSET(0x1917580)
#define MX_DATA_MISSIONDATA_GETWITHOUTRESOLVE_OFFSET UNITYSDK_OFFSET(0x1917620)
#define MX_DATA_MISSIONDATA_GETGUIDEMISSIONDAYS_OFFSET UNITYSDK_OFFSET(0x1917690)
#define MX_DATA_MISSIONDATA_GETGUIDESEASONREWARDS_OFFSET UNITYSDK_OFFSET(0x1917880)
#define MX_DATA_MISSIONDATA_TRYGETGUIDEMISSION_OFFSET UNITYSDK_OFFSET(0x1917A40)
#define MX_DATA_MISSIONDATA_TRYGETGUIDESEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1917AA0)
#define MX_DATA_MISSIONDATA_TRYGETGUIDESEASON_OFFSET UNITYSDK_OFFSET(0x1917B00)
#define MX_DATA_MISSIONDATA_GETGUIDESEASON_OFFSET UNITYSDK_OFFSET(0x1917B60)
#define MX_DATA_MISSIONDATA_FINDNEXTGUIDESEASON_OFFSET UNITYSDK_OFFSET(0x1917BD0)
#define MX_DATA_MISSIONDATA_GETMISSIONINFOSBYCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1917CC0)
#define MX_DATA_MISSIONDATA_TRYGETMISSIONINFOFROMENTIREMISSION_OFFSET UNITYSDK_OFFSET(0x1917DC0)
#define MX_DATA_MISSIONDATA_TRYGETGUIDEMISSIONOPENSTAGECONDITIONINFO_OFFSET UNITYSDK_OFFSET(0x1917E50)
#define MX_DATA_MISSIONDATA_GETGUIDEMISSIONSBYSEASON_OFFSET UNITYSDK_OFFSET(0x1917EF0)
#define MX_DATA_MISSIONDATA_CHECKGUIDEMISSIONTABACCESSIBLE_OFFSET UNITYSDK_OFFSET(0x1917FC0)
#define MX_DATA_MISSIONDATA_CHECKGUIDEMISSIONTABACCESSIBLE_OFFSET UNITYSDK_OFFSET(0x1918000)
#define MX_DATA_MISSIONDATA_CHECKGUIDEMISSIONTABACCESSIBLE_OFFSET UNITYSDK_OFFSET(0x1918180)
#define MX_DATA_MISSIONDATA_TRYGETNEXTMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x1918520)
#define MX_DATA_MISSIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19185B0)

namespace MX::Data
{
	inline static constexpr unsigned int MissionData_TypeDefinitionIndex = 16267;

	class MissionData : public Il2CppObject
	{
	public:
		Il2CppObject* missionInfoDictionary; // 0x28
		Il2CppObject* allMissionInfoDictionary; // 0x30
		Il2CppObject* missionExcelDictionary; // 0x38
		Il2CppObject* guideMissionExcelDictionary; // 0x40
		Il2CppObject* guideMissionSeasonInfoDictionary; // 0x48
		Il2CppObject* guideMissionSeasonExcelDictionary; // 0x50
		Il2CppObject* guideMissionOpenStageConditionInfoDictionary; // 0x58
		Il2CppObject* nextMissionIdDict; // 0x60
		Il2CppObject* _AllDailySuddenMission_k__BackingField; // 0x68
		Il2CppObject* _AllGuideMission_k__BackingField; // 0x70

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Void PreprocessCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_PREPROCESSCOMMON_OFFSET))(nullptr);
		}

		Il2CppObject* GetUnresolvedTotalMissionInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_GETUNRESOLVEDTOTALMISSIONINFOS_OFFSET))(nullptr);
		}

		Il2CppObject* GetTotalMissionInfos(::System::DateTime* arg)
		{
			return (return (Il2CppObject*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_GETTOTALMISSIONINFOS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAllMissions(::System::DateTime* arg)
		{
			return (return (Il2CppObject*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_GETALLMISSIONS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAllMissionsNoResolve()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_GETALLMISSIONSNORESOLVE_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllGeneralMission(::System::DateTime* arg)
		{
			return (return (Il2CppObject*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_GETALLGENERALMISSION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AllDailySuddenMission()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_GET_ALLDAILYSUDDENMISSION_OFFSET))(nullptr);
		}

		::System::Void set_AllDailySuddenMission(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_SET_ALLDAILYSUDDENMISSION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AllGuideMission()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_GET_ALLGUIDEMISSION_OFFSET))(nullptr);
		}

		::System::Void set_AllGuideMission(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_SET_ALLGUIDEMISSION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_GuideMissionSeasonInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_GET_GUIDEMISSIONSEASONINFOS_OFFSET))(nullptr);
		}

		::MX::Data::MissionInfo* GetUnresolved(::System::Int64 arg)
		{
			return (return (::MX::Data::MissionInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_GETUNRESOLVED_OFFSET))(arg, nullptr);
		}

		::MX::Data::MissionInfo* Get(::System::DateTime* arg, ::System::Int64 arg)
		{
			return (return (::MX::Data::MissionInfo*(*)(::System::DateTime*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_GET_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::MissionInfo* GetWithoutResolve(::System::Int64 arg)
		{
			return (return (::MX::Data::MissionInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_GETWITHOUTRESOLVE_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetGuideMissionDays(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_GETGUIDEMISSIONDAYS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetGuideSeasonRewards(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_GETGUIDESEASONREWARDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetGuideMission(::System::Int64 arg, ::MX::Data::Excel::GuideMissionExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::GuideMissionExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_TRYGETGUIDEMISSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetGuideSeasonExcel(::System::Int64 arg, ::MX::Data::Excel::GuideMissionSeasonExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::GuideMissionSeasonExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_TRYGETGUIDESEASONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetGuideSeason(::System::Int64 arg, ::MX::Data::GuideMissionSeasonInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::GuideMissionSeasonInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_TRYGETGUIDESEASON_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::GuideMissionSeasonInfo* GetGuideSeason(::System::Int64 arg)
		{
			return (return (::MX::Data::GuideMissionSeasonInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_GETGUIDESEASON_OFFSET))(arg, nullptr);
		}

		::MX::Data::GuideMissionSeasonInfo* FindNextGuideSeason(::System::Int64 arg)
		{
			return (return (::MX::Data::GuideMissionSeasonInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_FINDNEXTGUIDESEASON_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetMissionInfosByConditionType(::System::DateTime* arg, ::FlatData::MissionCompleteConditionType* arg)
		{
			return (return (Il2CppObject*(*)(::System::DateTime*, ::FlatData::MissionCompleteConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_GETMISSIONINFOSBYCONDITIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetMissionInfoFromEntireMission(::System::DateTime* arg, ::System::Int64 arg, ::MX::Data::MissionInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::System::Int64, ::MX::Data::MissionInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_TRYGETMISSIONINFOFROMENTIREMISSION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetGuideMissionOpenStageConditionInfo(::System::Int64 arg, ::System::Int32 arg, ::MX::Data::GuideMissionOpenStageConditionInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int32, ::MX::Data::GuideMissionOpenStageConditionInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_TRYGETGUIDEMISSIONOPENSTAGECONDITIONINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetGuideMissionsBySeason(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_GETGUIDEMISSIONSBYSEASON_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckGuideMissionTabAccessible(::MX::Data::GuideMissionInfo* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::GuideMissionInfo*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_CHECKGUIDEMISSIONTABACCESSIBLE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CheckGuideMissionTabAccessible(::System::Int64 arg, ::System::Int32 arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int32, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_CHECKGUIDEMISSIONTABACCESSIBLE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CheckGuideMissionTabAccessible(::System::Int32 arg, ::MX::Data::GuideMissionSeasonInfo* arg, ::MX::GameLogic::DBModel::GuideMissionSeasonDB* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::MX::Data::GuideMissionSeasonInfo*, ::MX::GameLogic::DBModel::GuideMissionSeasonDB*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_CHECKGUIDEMISSIONTABACCESSIBLE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetNextMissionIds(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_TRYGETNEXTMISSIONIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

