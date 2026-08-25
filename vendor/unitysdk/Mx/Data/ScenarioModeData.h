#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class ScenarioModeExcel; }
namespace MX::Data::Excel { class ScenarioModeExcel&; }
namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeSubTypes; }
namespace FlatData { class ScenarioModeReplayTypes; }
namespace FlatData { class Club; }

#define MX_DATA_SCENARIOMODEDATA_GET_EVENTCONQUESTCONDITIONS_OFFSET UNITYSDK_OFFSET(0x1934FA0)
#define MX_DATA_SCENARIOMODEDATA_GET_EVENTCONTENTIDTOWORLDRAIDBOSSIDS_OFFSET UNITYSDK_OFFSET(0x1934FB0)
#define MX_DATA_SCENARIOMODEDATA_GET_SCENARIOMODEEXCELS_OFFSET UNITYSDK_OFFSET(0x1934FC0)
#define MX_DATA_SCENARIOMODEDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1935010)
#define MX_DATA_SCENARIOMODEDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x19350E0)
#define MX_DATA_SCENARIOMODEDATA_GETSCENARIOMODE_OFFSET UNITYSDK_OFFSET(0x19363D0)
#define MX_DATA_SCENARIOMODEDATA_TRYGETMODEEXCEL_OFFSET UNITYSDK_OFFSET(0x1936400)
#define MX_DATA_SCENARIOMODEDATA_GETMODEEXCELS_OFFSET UNITYSDK_OFFSET(0x1936420)
#define MX_DATA_SCENARIOMODEDATA_TRYGETREWARDINFOS_OFFSET UNITYSDK_OFFSET(0x1936520)
#define MX_DATA_SCENARIOMODEDATA_TRYGETREWARDS_OFFSET UNITYSDK_OFFSET(0x19366B0)
#define MX_DATA_SCENARIOMODEDATA_TRYGETDISPLAYEDREWARDS_OFFSET UNITYSDK_OFFSET(0x1936840)
#define MX_DATA_SCENARIOMODEDATA_GET_MODEEXCELS_OFFSET UNITYSDK_OFFSET(0x1936B00)
#define MX_DATA_SCENARIOMODEDATA_GETEXCELS_OFFSET UNITYSDK_OFFSET(0x1936C30)
#define MX_DATA_SCENARIOMODEDATA_GETEXCELS_OFFSET UNITYSDK_OFFSET(0x1936FA0)
#define MX_DATA_SCENARIOMODEDATA_GETEXCELS_OFFSET UNITYSDK_OFFSET(0x1937300)
#define MX_DATA_SCENARIOMODEDATA_GETEXCELS_OFFSET UNITYSDK_OFFSET(0x1937680)
#define MX_DATA_SCENARIOMODEDATA_GETEXCELS_OFFSET UNITYSDK_OFFSET(0x19379C0)
#define MX_DATA_SCENARIOMODEDATA_GETEXCELS_OFFSET UNITYSDK_OFFSET(0x1937C40)
#define MX_DATA_SCENARIOMODEDATA_GETEXCELS_OFFSET UNITYSDK_OFFSET(0x1937D40)
#define MX_DATA_SCENARIOMODEDATA_GETVOLUMEIDS_OFFSET UNITYSDK_OFFSET(0x1937E50)
#define MX_DATA_SCENARIOMODEDATA_GETFIRSTEPISODE_OFFSET UNITYSDK_OFFSET(0x1937FB0)
#define MX_DATA_SCENARIOMODEDATA_GETFIRSTEPISODE_OFFSET UNITYSDK_OFFSET(0x1938330)
#define MX_DATA_SCENARIOMODEDATA_GETFIRSTEPISODE_OFFSET UNITYSDK_OFFSET(0x1938530)
#define MX_DATA_SCENARIOMODEDATA_GETFIRSTEPISODE_OFFSET UNITYSDK_OFFSET(0x19388C0)
#define MX_DATA_SCENARIOMODEDATA_GETLASTEPISODE_OFFSET UNITYSDK_OFFSET(0x1938AD0)
#define MX_DATA_SCENARIOMODEDATA_GETLASTEPISODE_OFFSET UNITYSDK_OFFSET(0x1938C70)
#define MX_DATA_SCENARIOMODEDATA_GETCHAPTERIDS_OFFSET UNITYSDK_OFFSET(0x1938E20)
#define MX_DATA_SCENARIOMODEDATA_GETMODEIDS_OFFSET UNITYSDK_OFFSET(0x1939040)
#define MX_DATA_SCENARIOMODEDATA_GETMODEIDS_OFFSET UNITYSDK_OFFSET(0x1939240)
#define MX_DATA_SCENARIOMODEDATA_HASHIDDENORNOTOPENEDMODEID_OFFSET UNITYSDK_OFFSET(0x1939450)
#define MX_DATA_SCENARIOMODEDATA_GETCLUBBYVOLUMEID_OFFSET UNITYSDK_OFFSET(0x1939570)
#define MX_DATA_SCENARIOMODEDATA_GETNEXTCHAPTERID_OFFSET UNITYSDK_OFFSET(0x19396D0)
#define MX_DATA_SCENARIOMODEDATA_GETNEXTCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1939850)
#define MX_DATA_SCENARIOMODEDATA_GETPREVCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1939C00)
#define MX_DATA_SCENARIOMODEDATA_GETPREVCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1939D80)
#define MX_DATA_SCENARIOMODEDATA_GETLASTCHAPTERBYMODEID_OFFSET UNITYSDK_OFFSET(0x1939F10)
#define MX_DATA_SCENARIOMODEDATA_GETLASTCHAPTERBYMODEID_OFFSET UNITYSDK_OFFSET(0x193A0F0)
#define MX_DATA_SCENARIOMODEDATA_ISVOLUMEOPEN_OFFSET UNITYSDK_OFFSET(0x193A2F0)
#define MX_DATA_SCENARIOMODEDATA_ISMODEOPEN_OFFSET UNITYSDK_OFFSET(0x193A530)
#define MX_DATA_SCENARIOMODEDATA_HASVOLUME_OFFSET UNITYSDK_OFFSET(0x193A5E0)
#define MX_DATA_SCENARIOMODEDATA_GETFIRSTMAINSCENARIOGROUPS_OFFSET UNITYSDK_OFFSET(0x193A6F0)
#define MX_DATA_SCENARIOMODEDATA_TRYGETSCENARIOMODEEXCELSWHENSTAGESELECT_OFFSET UNITYSDK_OFFSET(0x193A970)
#define MX_DATA_SCENARIOMODEDATA_GETEPISODELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x193AB50)
#define MX_DATA_SCENARIOMODEDATA_TRYGETLOFVOLUMEID_OFFSET UNITYSDK_OFFSET(0x193AFF0)
#define MX_DATA_SCENARIOMODEDATA_TRYGETCOLLECTIONINFOS_OFFSET UNITYSDK_OFFSET(0x193B1C0)
#define MX_DATA_SCENARIOMODEDATA_TRYGETCOLLECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x193B220)
#define MX_DATA_SCENARIOMODEDATA_GETCHAPTERIDS_OFFSET UNITYSDK_OFFSET(0x19399E0)
#define MX_DATA_SCENARIOMODEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x193B290)
#define MX_DATA_SCENARIOMODEDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x193B490)

namespace MX::Data
{
	inline static constexpr unsigned int ScenarioModeData_TypeDefinitionIndex = 16365;

	class ScenarioModeData : public Il2CppObject
	{
	public:
		ExposedTimeFilteredScenarioModeDictionary* scenarioModeExcelDictionary; // 0x28
		Il2CppObject* scenarioModeRewardDictionary; // 0x30
		Il2CppObject* eventConquestConditions; // 0x38
		Il2CppObject* eventContentIdToWorldRaidBossIds; // 0x40
		Il2CppObject* LofVolumeId; // 0x48
		Il2CppObject* collectionDic; // 0x58
		Il2CppObject* modeIdByCollectionGroupId; // 0x60
		Il2CppObject* MainScenarioSubTypes; // 0x0

		Il2CppObject* get_EventConquestConditions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GET_EVENTCONQUESTCONDITIONS_OFFSET))(nullptr);
		}

		Il2CppObject* get_EventContentIdToWorldRaidBossIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GET_EVENTCONTENTIDTOWORLDRAIDBOSSIDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_ScenarioModeExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GET_SCENARIOMODEEXCELS_OFFSET))(nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ScenarioModeExcel* GetScenarioMode(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::ScenarioModeExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETSCENARIOMODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetModeExcel(::System::Int64 arg, ::MX::Data::Excel::ScenarioModeExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::ScenarioModeExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_TRYGETMODEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetModeExcels(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETMODEEXCELS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetRewardInfos(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_TRYGETREWARDINFOS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetRewards(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_TRYGETREWARDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetDisplayedRewards(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_TRYGETDISPLAYEDREWARDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_ModeExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GET_MODEEXCELS_OFFSET))(nullptr);
		}

		Il2CppObject* GetExcels(::FlatData::ScenarioModeTypes* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ScenarioModeTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETEXCELS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetExcels(::FlatData::ScenarioModeSubTypes* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ScenarioModeSubTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETEXCELS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetExcels(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETEXCELS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetExcels(::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ScenarioModeTypes*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETEXCELS_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetExcels(::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ScenarioModeTypes*, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETEXCELS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetExcels(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETEXCELS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetExcels(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETEXCELS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetVolumeIds(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeReplayTypes* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeReplayTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETVOLUMEIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetFirstEpisode(::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg, ::System::DateTime* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ScenarioModeTypes*, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETFIRSTEPISODE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetFirstEpisode(::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ScenarioModeTypes*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETFIRSTEPISODE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetFirstEpisode(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg, ::System::Int64 arg, ::System::DateTime* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETFIRSTEPISODE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetFirstEpisode(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETFIRSTEPISODE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetLastEpisode(::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg, ::System::DateTime* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ScenarioModeTypes*, ::System::Int64, ::System::DateTime*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETLASTEPISODE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetLastEpisode(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg, ::System::Int64 arg, ::System::DateTime* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::System::Int64, ::System::DateTime*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETLASTEPISODE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetChapterIds(::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg, ::System::DateTime* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ScenarioModeTypes*, ::System::Int64, ::System::DateTime*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETCHAPTERIDS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetModeIds(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeReplayTypes* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeReplayTypes*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETMODEIDS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetModeIds(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg, ::FlatData::ScenarioModeReplayTypes* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::FlatData::ScenarioModeReplayTypes*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETMODEIDS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean HasHiddenOrNotOpenedModeId(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeReplayTypes* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeReplayTypes*, ::System::Int64, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_HASHIDDENORNOTOPENEDMODEID_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::FlatData::Club* GetClubByVolumeId(::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg)
		{
			return (return (::FlatData::Club*(*)(::FlatData::ScenarioModeTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETCLUBBYVOLUMEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetNextChapterId(::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::DateTime* arg)
		{
			return (return (::System::Int64(*)(::FlatData::ScenarioModeTypes*, ::System::Int64, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETNEXTCHAPTERID_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int64 GetNextChapterId(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::DateTime* arg)
		{
			return (return (::System::Int64(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::System::Int64, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETNEXTCHAPTERID_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int64 GetPrevChapterId(::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::DateTime* arg)
		{
			return (return (::System::Int64(*)(::FlatData::ScenarioModeTypes*, ::System::Int64, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETPREVCHAPTERID_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int64 GetPrevChapterId(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::DateTime* arg)
		{
			return (return (::System::Int64(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::System::Int64, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETPREVCHAPTERID_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int64 GetLastChapterByModeId(::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg, Il2CppObject* arg, ::System::DateTime* arg)
		{
			return (return (::System::Int64(*)(::FlatData::ScenarioModeTypes*, ::System::Int64, Il2CppObject*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETLASTCHAPTERBYMODEID_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int64 GetLastChapterByModeId(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg, ::System::Int64 arg, Il2CppObject* arg, ::System::DateTime* arg)
		{
			return (return (::System::Int64(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::System::Int64, Il2CppObject*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETLASTCHAPTERBYMODEID_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsVolumeOpen(::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg, ::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ScenarioModeTypes*, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_ISVOLUMEOPEN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsModeOpen(::System::Int64 arg, ::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_ISMODEOPEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasVolume(::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ScenarioModeTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_HASVOLUME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetFirstMainScenarioGroups()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETFIRSTMAINSCENARIOGROUPS_OFFSET))(nullptr);
		}

		::System::Boolean TryGetScenarioModeExcelsWhenStageSelect(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_TRYGETSCENARIOMODEEXCELSWHENSTAGESELECT_OFFSET))(arg, nullptr);
		}

		::System::String* GetEpisodeLocalizeKey(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETEPISODELOCALIZEKEY_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetLofVolumeId(::FlatData::ScenarioModeSubTypes* arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ScenarioModeSubTypes*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_TRYGETLOFVOLUMEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetCollectionInfos(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_TRYGETCOLLECTIONINFOS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetCollectionGroupId(::System::Int64 arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_TRYGETCOLLECTIONGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetChapterIds(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg, ::System::Int64 arg, ::System::DateTime* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::System::Int64, ::System::DateTime*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_GETCHAPTERIDS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEDATA_.CCTOR_OFFSET))(nullptr);
		}

	};
}

