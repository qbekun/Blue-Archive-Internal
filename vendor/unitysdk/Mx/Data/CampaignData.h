#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class StrategyObjectData&; }
namespace FlatData { class StageDifficulty; }
namespace FlatData { class ContentType; }
namespace MX::Data::Excel { class CampaignUnitExcel&; }
namespace MX::Data { class CampaignStageInfo; }
namespace MX::Data { class CampaignStageInfo&; }
namespace MX::Data { class FixedStrategyInfo; }
namespace MX::Data { class CampaignChapterInfo; }
namespace MX::Data::Excel { class CampaignStrategyObjectExcel&; }

#define MX_DATA_CAMPAIGNDATA_CONTAINSCHAPTER_OFFSET UNITYSDK_OFFSET(0x18820D0)
#define MX_DATA_CAMPAIGNDATA_GETSTRATEGYBUFF_OFFSET UNITYSDK_OFFSET(0x1882120)
#define MX_DATA_CAMPAIGNDATA_TRYGETSTRATEGYOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x18821F0)
#define MX_DATA_CAMPAIGNDATA_GETCHAPTERSTARCOUNT_OFFSET UNITYSDK_OFFSET(0x1882250)
#define MX_DATA_CAMPAIGNDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x18823A0)
#define MX_DATA_CAMPAIGNDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1884D20)
#define MX_DATA_CAMPAIGNDATA_GETSTAGEREWARD_OFFSET UNITYSDK_OFFSET(0x1884F50)
#define MX_DATA_CAMPAIGNDATA_GETSTRATEGYOBJECTALL_OFFSET UNITYSDK_OFFSET(0x1884FD0)
#define MX_DATA_CAMPAIGNDATA_NEXTCHAPTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1885030)
#define MX_DATA_CAMPAIGNDATA_GETSTAGECOUNTWITHCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1885130)
#define MX_DATA_CAMPAIGNDATA_TRYGETUNIT_OFFSET UNITYSDK_OFFSET(0x1885300)
#define MX_DATA_CAMPAIGNDATA_GETNEXTMAINNORMALSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x1885360)
#define MX_DATA_CAMPAIGNDATA_GET_ALLUNITS_OFFSET UNITYSDK_OFFSET(0x1885660)
#define MX_DATA_CAMPAIGNDATA_GETSTRATEGYOBJECT_OFFSET UNITYSDK_OFFSET(0x18856B0)
#define MX_DATA_CAMPAIGNDATA_GETCHAPTERREWARD_OFFSET UNITYSDK_OFFSET(0x1885780)
#define MX_DATA_CAMPAIGNDATA_GETSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x1885830)
#define MX_DATA_CAMPAIGNDATA_GETALLSTAGE_OFFSET UNITYSDK_OFFSET(0x18858A0)
#define MX_DATA_CAMPAIGNDATA_GETPARCELTOOLTIPDATA_OFFSET UNITYSDK_OFFSET(0x1885B10)
#define MX_DATA_CAMPAIGNDATA_GETSTAGE_OFFSET UNITYSDK_OFFSET(0x18860C0)
#define MX_DATA_CAMPAIGNDATA_PREVIOUSCHAPTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1886170)
#define MX_DATA_CAMPAIGNDATA_GET_RAWDATAPATH_OFFSET UNITYSDK_OFFSET(0x1886250)
#define MX_DATA_CAMPAIGNDATA_GETCHAPTER_OFFSET UNITYSDK_OFFSET(0x1886260)
#define MX_DATA_CAMPAIGNDATA_GETALLSTAGEREWARD_OFFSET UNITYSDK_OFFSET(0x1886310)
#define MX_DATA_CAMPAIGNDATA_GETINFORMATIONPAGE_OFFSET UNITYSDK_OFFSET(0x18866C0)
#define MX_DATA_CAMPAIGNDATA_TRYSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x1886780)
#define MX_DATA_CAMPAIGNDATA_GETCHAPTERIDALL_OFFSET UNITYSDK_OFFSET(0x18867E0)
#define MX_DATA_CAMPAIGNDATA_GETNEXTNORMALSTAGEINFO2_OFFSET UNITYSDK_OFFSET(0x18867F0)
#define MX_DATA_CAMPAIGNDATA_GETUNIT_OFFSET UNITYSDK_OFFSET(0x1886A20)
#define MX_DATA_CAMPAIGNDATA_GETFIXEDSTRATEGYINFO_OFFSET UNITYSDK_OFFSET(0x1886AF0)
#define MX_DATA_CAMPAIGNDATA_GETFIRSTSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x1886B60)
#define MX_DATA_CAMPAIGNDATA_GETCHAPTERINFO_OFFSET UNITYSDK_OFFSET(0x1882330)
#define MX_DATA_CAMPAIGNDATA_SET_RAWDATAPATH_OFFSET UNITYSDK_OFFSET(0x1886BB0)
#define MX_DATA_CAMPAIGNDATA_PREPROCESSCOMMON_OFFSET UNITYSDK_OFFSET(0x1886BD0)
#define MX_DATA_CAMPAIGNDATA_GET_ALLCHAPTERS_OFFSET UNITYSDK_OFFSET(0x1887FA0)
#define MX_DATA_CAMPAIGNDATA_GETPREVIOUSSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x1887FF0)
#define MX_DATA_CAMPAIGNDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1888230)
#define MX_DATA_CAMPAIGNDATA_TRYGETSTRATEGYOBJECT_OFFSET UNITYSDK_OFFSET(0x1888670)
#define MX_DATA_CAMPAIGNDATA_GETNEXTSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x1888740)

namespace MX::Data
{
	inline static constexpr unsigned int CampaignData_TypeDefinitionIndex = 15990;

	class CampaignData : public Il2CppObject
	{
	public:
		Il2CppObject* chapterDictionary; // 0x28
		Il2CppObject* chapterRewardDictionary; // 0x30
		Il2CppObject* stageDictionary; // 0x38
		Il2CppObject* stageRewardDictionary; // 0x40
		Il2CppObject* unitDictionary; // 0x48
		Il2CppObject* strategyObjectDictionary; // 0x50
		Il2CppObject* strategyBuffDefineDictionary; // 0x58
		Il2CppObject* informationDictionary; // 0x60
		Il2CppObject* chapterInfoDictionary; // 0x68
		Il2CppObject* stageInfoDictionary; // 0x70
		Il2CppObject* strategyObjectDataDictionary; // 0x78
		Il2CppObject* fixedStrategyInfoDict; // 0x80
		::System::String* _RawDataPath_k__BackingField; // 0x88
		Il2CppObject* ChapterUniqueIds; // 0x90

		::System::Boolean ContainsChapter(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_CONTAINSCHAPTER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetStrategyBuff(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GETSTRATEGYBUFF_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetStrategyObjectData(::System::Int64 arg, ::MX::Data::StrategyObjectData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::StrategyObjectData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_TRYGETSTRATEGYOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetChapterStarCount(::System::Int64 arg, ::FlatData::StageDifficulty* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GETCHAPTERSTARCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		Il2CppObject* GetStageReward(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GETSTAGEREWARD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetStrategyObjectAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GETSTRATEGYOBJECTALL_OFFSET))(nullptr);
		}

		::System::Int64 NextChapterUniqueId(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_NEXTCHAPTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetStageCountWithContentType(::System::Int64 arg, ::FlatData::StageDifficulty* arg, ::FlatData::ContentType* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::FlatData::StageDifficulty*, ::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GETSTAGECOUNTWITHCONTENTTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetUnit(::System::Int64 arg, ::MX::Data::Excel::CampaignUnitExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::CampaignUnitExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_TRYGETUNIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::CampaignStageInfo* GetNextMainNormalStageInfo(::System::Int64 arg)
		{
			return (return (::MX::Data::CampaignStageInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GETNEXTMAINNORMALSTAGEINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AllUnits()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GET_ALLUNITS_OFFSET))(nullptr);
		}

		Il2CppObject* GetStrategyObject(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GETSTRATEGYOBJECT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetChapterReward(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GETCHAPTERREWARD_OFFSET))(arg, nullptr);
		}

		::MX::Data::CampaignStageInfo* GetStageInfo(::System::Int64 arg)
		{
			return (return (::MX::Data::CampaignStageInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GETSTAGEINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAllStage()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GETALLSTAGE_OFFSET))(nullptr);
		}

		::System::Void GetParcelTooltipData(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GETPARCELTOOLTIPDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetStage(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GETSTAGE_OFFSET))(arg, nullptr);
		}

		::System::Int64 PreviousChapterUniqueId(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_PREVIOUSCHAPTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::String* get_RawDataPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GET_RAWDATAPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetChapter(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GETCHAPTER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAllStageReward()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GETALLSTAGEREWARD_OFFSET))(nullptr);
		}

		Il2CppObject* GetInformationPage(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GETINFORMATIONPAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryStageInfo(::System::Int64 arg, ::MX::Data::CampaignStageInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::CampaignStageInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_TRYSTAGEINFO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetChapterIdAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GETCHAPTERIDALL_OFFSET))(nullptr);
		}

		::MX::Data::CampaignStageInfo* GetNextNormalStageInfo2(Il2CppObject* arg)
		{
			return (return (::MX::Data::CampaignStageInfo*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GETNEXTNORMALSTAGEINFO2_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetUnit(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GETUNIT_OFFSET))(arg, nullptr);
		}

		::MX::Data::FixedStrategyInfo* GetFixedStrategyInfo(::System::Int64 arg)
		{
			return (return (::MX::Data::FixedStrategyInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GETFIXEDSTRATEGYINFO_OFFSET))(arg, nullptr);
		}

		::MX::Data::CampaignStageInfo* GetFirstStageInfo()
		{
			return (return (::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GETFIRSTSTAGEINFO_OFFSET))(nullptr);
		}

		::MX::Data::CampaignChapterInfo* GetChapterInfo(::System::Int64 arg)
		{
			return (return (::MX::Data::CampaignChapterInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GETCHAPTERINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_RawDataPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_SET_RAWDATAPATH_OFFSET))(str, nullptr);
		}

		::System::Void PreprocessCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_PREPROCESSCOMMON_OFFSET))(nullptr);
		}

		Il2CppObject* get_AllChapters()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GET_ALLCHAPTERS_OFFSET))(nullptr);
		}

		::MX::Data::CampaignStageInfo* GetPreviousStageInfo(::System::Int64 arg)
		{
			return (return (::MX::Data::CampaignStageInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GETPREVIOUSSTAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetStrategyObject(::System::Int64 arg, ::MX::Data::Excel::CampaignStrategyObjectExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::CampaignStrategyObjectExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_TRYGETSTRATEGYOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::CampaignStageInfo* GetNextStageInfo(::System::Int64 arg)
		{
			return (return (::MX::Data::CampaignStageInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNDATA_GETNEXTSTAGEINFO_OFFSET))(arg, nullptr);
		}

	};
}

