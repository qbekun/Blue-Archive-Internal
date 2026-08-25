#pragma once
#include "../../unitysdk.h"

namespace MX::Core::Math { class IRandomService; }
namespace FlatData { class StageDifficulty; }
namespace MX::Data { class ConquestMapExcelData&; }
namespace MX::Data { class ConquestErosionExcelData&; }
namespace MX::Data { class ConquestGroupBonusExcelData&; }
namespace FlatData { class ConquestTileType; }
namespace MX::Data { class ConquestMapExcelData; }
namespace MX::Data::Excel { class ConquestErosionUnitExcel&; }
namespace MX::Data::Excel { class ConquestGroupBuffExcel&; }
namespace MX::Data::Excel { class ConquestEventExcel&; }
namespace MX::Data::Excel { class ConquestObjectExcel&; }
namespace MX::Data::Excel { class ConquestCameraSettingExcel&; }
namespace MX::Data::Excel { class ConquestUnitExcel&; }
namespace MX::Data::Excel { class ConquestCalculateExcel&; }
namespace MX::Data { class ConquestMassErosionContainer&; }
namespace FlatData { class ConquestObjectType; }
namespace FlatData { class ConquestProgressType; }
namespace MX::Data::Excel { class ConquestProgressResourceExcel&; }
namespace MX::Data { class ConquestUnexpectedEventExcelData&; }

#define MX_DATA_CONQUESTDATA_TRYGETCONQUESTMAPEXCELDATA_OFFSET UNITYSDK_OFFSET(0x18A4F30)
#define MX_DATA_CONQUESTDATA_TRYGETEROSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x18A5080)
#define MX_DATA_CONQUESTDATA_TRYGETCONQUESTGROUPBONUS_OFFSET UNITYSDK_OFFSET(0x18A50E0)
#define MX_DATA_CONQUESTDATA_GET_RANDOM_OFFSET UNITYSDK_OFFSET(0x18A5140)
#define MX_DATA_CONQUESTDATA_GETALLCONQUESTEVENTEXCELS_OFFSET UNITYSDK_OFFSET(0x18A5150)
#define MX_DATA_CONQUESTDATA_GETALLUNIT_OFFSET UNITYSDK_OFFSET(0x18A51A0)
#define MX_DATA_CONQUESTDATA_SET_RAWDATAPATH_OFFSET UNITYSDK_OFFSET(0x18A51F0)
#define MX_DATA_CONQUESTDATA_TRYGETPARENTEVENTID_OFFSET UNITYSDK_OFFSET(0x18A5210)
#define MX_DATA_CONQUESTDATA_GETCONQUESTTILEBYTILETYPE_OFFSET UNITYSDK_OFFSET(0x18A5400)
#define MX_DATA_CONQUESTDATA_GETALLCONQUESTOBJECT_OFFSET UNITYSDK_OFFSET(0x18A55C0)
#define MX_DATA_CONQUESTDATA_GETDIFFICULTYTOMAPEXCELDATA_OFFSET UNITYSDK_OFFSET(0x18A5620)
#define MX_DATA_CONQUESTDATA_GET_RAWDATAPATH_OFFSET UNITYSDK_OFFSET(0x18A5950)
#define MX_DATA_CONQUESTDATA_TRYGETFIRSTSTEPMAPEXCELONSAMEMAP_OFFSET UNITYSDK_OFFSET(0x18A5960)
#define MX_DATA_CONQUESTDATA_GETALLCONQUESTTILE_OFFSET UNITYSDK_OFFSET(0x18A5BE0)
#define MX_DATA_CONQUESTDATA_GETCONQUESTOBJECT_OFFSET UNITYSDK_OFFSET(0x18A5C40)
#define MX_DATA_CONQUESTDATA_SETEXCELSTOCONQUESTMAPDATA_OFFSET UNITYSDK_OFFSET(0x18A5CF0)
#define MX_DATA_CONQUESTDATA_TRYGETEROSIONUNITEXCEL_OFFSET UNITYSDK_OFFSET(0x18A6310)
#define MX_DATA_CONQUESTDATA_TRYGETNEXTSTEPMAPEXCELONSAMEMAP_OFFSET UNITYSDK_OFFSET(0x18A6370)
#define MX_DATA_CONQUESTDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x18A6570)
#define MX_DATA_CONQUESTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18AB190)
#define MX_DATA_CONQUESTDATA_TRYGETCONQUESTMAPEXCEL_OFFSET UNITYSDK_OFFSET(0x18A64B0)
#define MX_DATA_CONQUESTDATA_TRYGETCONQUESTGROUPBUFF_OFFSET UNITYSDK_OFFSET(0x18AB960)
#define MX_DATA_CONQUESTDATA_TRYGETEROSIONUNITROTATION_OFFSET UNITYSDK_OFFSET(0x18AB9C0)
#define MX_DATA_CONQUESTDATA_TRYGETCONQUESTEVENTEXCEL_OFFSET UNITYSDK_OFFSET(0x18ABAD0)
#define MX_DATA_CONQUESTDATA_TRYGETCONQUESTGROUPBUFFBYCONQUESTUNIT_OFFSET UNITYSDK_OFFSET(0x18ABB30)
#define MX_DATA_CONQUESTDATA_HASCONQUESTTILEEXCEL_OFFSET UNITYSDK_OFFSET(0x18ABC50)
#define MX_DATA_CONQUESTDATA_TRYGETCONQUESTOBJECTEXCEL_OFFSET UNITYSDK_OFFSET(0x18ABCA0)
#define MX_DATA_CONQUESTDATA_TRYGETINDIVIDUALEROSIONEXCEL_OFFSET UNITYSDK_OFFSET(0x18ABD00)
#define MX_DATA_CONQUESTDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18ABDA0)
#define MX_DATA_CONQUESTDATA_TRYGETPLAYGUIDE_OFFSET UNITYSDK_OFFSET(0x18ABF80)
#define MX_DATA_CONQUESTDATA_GETCONQUESTTILEEXCEL_OFFSET UNITYSDK_OFFSET(0x18ABFE0)
#define MX_DATA_CONQUESTDATA_TRYGETCONQUESTCAMERASETTINGDATA_OFFSET UNITYSDK_OFFSET(0x18AC090)
#define MX_DATA_CONQUESTDATA_GETUNIT_OFFSET UNITYSDK_OFFSET(0x18AC0F0)
#define MX_DATA_CONQUESTDATA_TRYGETCONQUESTUNITEXCELBYEROSIONID_OFFSET UNITYSDK_OFFSET(0x18AC1A0)
#define MX_DATA_CONQUESTDATA_TRYGETCALCULATEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x18AC2F0)
#define MX_DATA_CONQUESTDATA_GETALLCONQUESTCALCULATEEXCELS_OFFSET UNITYSDK_OFFSET(0x18AC350)
#define MX_DATA_CONQUESTDATA_TRYGETCONQUESTDISPLAYEDSTAGEREWARDPARCELINFO_OFFSET UNITYSDK_OFFSET(0x18AC3A0)
#define MX_DATA_CONQUESTDATA_TRYGETUNITEXCEL_OFFSET UNITYSDK_OFFSET(0x18ABBF0)
#define MX_DATA_CONQUESTDATA_TRYGETMASSEROSIONEXCELBYEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18AC7E0)
#define MX_DATA_CONQUESTDATA_TRYGETALLCONQUESTMAPEXCELDATA_OFFSET UNITYSDK_OFFSET(0x18AC840)
#define MX_DATA_CONQUESTDATA_TRYGETCONQUESTOBJECTEXCELBYMULTIKEY_OFFSET UNITYSDK_OFFSET(0x18AC8A0)
#define MX_DATA_CONQUESTDATA_TRYGETCONQUESTREWARDEXCELLIST_OFFSET UNITYSDK_OFFSET(0x18AC780)
#define MX_DATA_CONQUESTDATA_TRYGETCONQUESTPROGRESSRESOURCE_OFFSET UNITYSDK_OFFSET(0x18AC950)
#define MX_DATA_CONQUESTDATA_TRYGETUNEXPECTEDENEMYEXCEL_OFFSET UNITYSDK_OFFSET(0x18ACAE0)
#define MX_DATA_CONQUESTDATA_PREPROCESSCOMMON_OFFSET UNITYSDK_OFFSET(0x18ACB40)
#define MX_DATA_CONQUESTDATA_ISCONQUESTMAINSTORYORPERMENANT_OFFSET UNITYSDK_OFFSET(0x18AD380)

namespace MX::Data
{
	inline static constexpr unsigned int ConquestData_TypeDefinitionIndex = 16030;

	class ConquestData : public Il2CppObject
	{
	public:
		::MX::Core::Math::IRandomService* _random_k__BackingField; // 0x28
		Il2CppObject* conquestTileDictionary; // 0x30
		Il2CppObject* conquestTileDictByTileType; // 0x38
		Il2CppObject* conquestUnitDictionary; // 0x40
		Il2CppObject* conquestObjectDictionary; // 0x48
		Il2CppObject* conquestObjectDictByMultiKey; // 0x50
		Il2CppObject* conquestObjectDictByEventId; // 0x58
		Il2CppObject* calculateRewardDictionary; // 0x60
		Il2CppObject* erosionDictionary; // 0x68
		Il2CppObject* individualErosionDictionary; // 0x70
		Il2CppObject* massErosionContainerDictByEventContentId; // 0x78
		Il2CppObject* erosionUnitExcelByTilePresetId; // 0x80
		Il2CppObject* unexpectedEnemyDictionary; // 0x88
		Il2CppObject* mainStoryEventContentIds; // 0x90
		Il2CppObject* conquestMapDictionary; // 0x98
		Il2CppObject* conquestMapExcelDataDictionary; // 0xA0
		Il2CppObject* conquestMapExcelDataByMultiKey; // 0xA8
		Il2CppObject* conquestCameraSettingDictionary; // 0xB0
		Il2CppObject* conquestEventDictionary; // 0xB8
		Il2CppObject* conquestGroupBonusDictionary; // 0xC0
		Il2CppObject* conquestGroupBuffDictionary; // 0xC8
		Il2CppObject* conquestProgressResourceListDict; // 0xD0
		Il2CppObject* playGuideExcelDic; // 0xD8
		Il2CppObject* conquestRewardExcelDict; // 0xE0
		::System::String* _RawDataPath_k__BackingField; // 0xE8

		::System::Boolean TryGetConquestMapExcelData(::System::Int64 arg, ::FlatData::StageDifficulty* arg, ::MX::Data::ConquestMapExcelData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::FlatData::StageDifficulty*, ::MX::Data::ConquestMapExcelData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETCONQUESTMAPEXCELDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetErosionExcel(::System::Int64 arg, ::MX::Data::ConquestErosionExcelData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::ConquestErosionExcelData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETEROSIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetConquestGroupBonus(::System::Int64 arg, ::MX::Data::ConquestGroupBonusExcelData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::ConquestGroupBonusExcelData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETCONQUESTGROUPBONUS_OFFSET))(arg, arg, nullptr);
		}

		::MX::Core::Math::IRandomService* get_random()
		{
			return (return (::MX::Core::Math::IRandomService*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_GET_RANDOM_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllConquestEventExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_GETALLCONQUESTEVENTEXCELS_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllUnit()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_GETALLUNIT_OFFSET))(nullptr);
		}

		::System::Void set_RawDataPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_SET_RAWDATAPATH_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetParentEventId(::System::Int64 arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETPARENTEVENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetConquestTileByTileType(::System::Int64 arg, ::FlatData::ConquestTileType* arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::ConquestTileType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_GETCONQUESTTILEBYTILETYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetAllConquestObject()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_GETALLCONQUESTOBJECT_OFFSET))(nullptr);
		}

		Il2CppObject* GetDifficultyToMapExcelData(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_GETDIFFICULTYTOMAPEXCELDATA_OFFSET))(arg, nullptr);
		}

		::System::String* get_RawDataPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_GET_RAWDATAPATH_OFFSET))(nullptr);
		}

		::System::Boolean TryGetFirstStepMapExcelOnSameMap(::MX::Data::ConquestMapExcelData* arg, ::MX::Data::ConquestMapExcelData&* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::ConquestMapExcelData*, ::MX::Data::ConquestMapExcelData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETFIRSTSTEPMAPEXCELONSAMEMAP_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetAllConquestTile()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_GETALLCONQUESTTILE_OFFSET))(nullptr);
		}

		Il2CppObject* GetConquestObject(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_GETCONQUESTOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void SetExcelsToConquestMapData(::MX::Data::ConquestMapExcelData* arg)
		{
			((::System::Void(*)(::MX::Data::ConquestMapExcelData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_SETEXCELSTOCONQUESTMAPDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetErosionUnitExcel(::System::Int64 arg, ::MX::Data::Excel::ConquestErosionUnitExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::ConquestErosionUnitExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETEROSIONUNITEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetNextStepMapExcelOnSameMap(::System::Int64 arg, ::FlatData::StageDifficulty* arg, ::System::String* str, ::System::Int32 arg, ::MX::Data::ConquestMapExcelData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::FlatData::StageDifficulty*, ::System::String*, ::System::Int32, ::MX::Data::ConquestMapExcelData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETNEXTSTEPMAPEXCELONSAMEMAP_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetConquestMapExcel(::System::Int64 arg, ::FlatData::StageDifficulty* arg, ::System::Int32 arg, ::MX::Data::ConquestMapExcelData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::FlatData::StageDifficulty*, ::System::Int32, ::MX::Data::ConquestMapExcelData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETCONQUESTMAPEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetConquestGroupBuff(::System::Int64 arg, ::MX::Data::Excel::ConquestGroupBuffExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::ConquestGroupBuffExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETCONQUESTGROUPBUFF_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetErosionUnitRotation(::System::Int64 arg, ::System::Int64 arg, float&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, float&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETEROSIONUNITROTATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetConquestEventExcel(::System::Int64 arg, ::MX::Data::Excel::ConquestEventExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::ConquestEventExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETCONQUESTEVENTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetConquestGroupBuffByConquestUnit(::System::Int64 arg, ::MX::Data::Excel::ConquestGroupBuffExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::ConquestGroupBuffExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETCONQUESTGROUPBUFFBYCONQUESTUNIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasConquestTileExcel(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_HASCONQUESTTILEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetConquestObjectExcel(::System::Int64 arg, ::MX::Data::Excel::ConquestObjectExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::ConquestObjectExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETCONQUESTOBJECTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetIndividualErosionExcel(::System::Int64 arg, ::System::Int32 arg, ::MX::Data::ConquestErosionExcelData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int32, ::MX::Data::ConquestErosionExcelData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETINDIVIDUALEROSIONEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetPlayGuide(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETPLAYGUIDE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetConquestTileExcel(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_GETCONQUESTTILEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetConquestCameraSettingData(::System::Int64 arg, ::MX::Data::Excel::ConquestCameraSettingExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::ConquestCameraSettingExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETCONQUESTCAMERASETTINGDATA_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetUnit(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_GETUNIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetConquestUnitExcelByErosionId(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::Excel::ConquestUnitExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::Excel::ConquestUnitExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETCONQUESTUNITEXCELBYEROSIONID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetCalculateRewardExcel(::System::Int64 arg, ::MX::Data::Excel::ConquestCalculateExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::ConquestCalculateExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETCALCULATEREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetAllConquestCalculateExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_GETALLCONQUESTCALCULATEEXCELS_OFFSET))(nullptr);
		}

		::System::Boolean TryGetConquestDisplayedStageRewardParcelInfo(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETCONQUESTDISPLAYEDSTAGEREWARDPARCELINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetUnitExcel(::System::Int64 arg, ::MX::Data::Excel::ConquestUnitExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::ConquestUnitExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETUNITEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetMassErosionExcelByEventContentId(::System::Int64 arg, ::MX::Data::ConquestMassErosionContainer&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::ConquestMassErosionContainer&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETMASSEROSIONEXCELBYEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetAllConquestMapExcelData(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETALLCONQUESTMAPEXCELDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetConquestObjectExcelByMultiKey(::System::Int64 arg, ::FlatData::ConquestObjectType* arg, ::System::Int32 arg, ::MX::Data::Excel::ConquestObjectExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::FlatData::ConquestObjectType*, ::System::Int32, ::MX::Data::Excel::ConquestObjectExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETCONQUESTOBJECTEXCELBYMULTIKEY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetConquestRewardExcelList(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETCONQUESTREWARDEXCELLIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetConquestProgressResource(::System::Int64 arg, ::FlatData::ConquestProgressType* arg, ::MX::Data::Excel::ConquestProgressResourceExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::FlatData::ConquestProgressType*, ::MX::Data::Excel::ConquestProgressResourceExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETCONQUESTPROGRESSRESOURCE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetUnexpectedEnemyExcel(::System::Int64 arg, ::MX::Data::ConquestUnexpectedEventExcelData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::ConquestUnexpectedEventExcelData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_TRYGETUNEXPECTEDENEMYEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PreprocessCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_PREPROCESSCOMMON_OFFSET))(nullptr);
		}

		::System::Boolean IsConquestMainStoryOrPermenant(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTDATA_ISCONQUESTMAINSTORYORPERMENANT_OFFSET))(arg, nullptr);
		}

	};
}

