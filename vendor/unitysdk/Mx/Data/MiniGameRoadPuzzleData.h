#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class IMiniGameRoadPuzzleDataRepositoryWrapper; }
namespace FlatData { class RoadPuzzleVoiceCondition; }
namespace FlatData { class RoadPuzzleRailTileType; }
namespace FlatData { class RoadPuzzleMapTileType; }

#define MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETALLROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1904E40)
#define MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETVOICEBYVOICECONDITION_OFFSET UNITYSDK_OFFSET(0x1904EF0)
#define MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETMAPEXCELBYUID_OFFSET UNITYSDK_OFFSET(0x1904FA0)
#define MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETMAPEXCELBYGROUPID_OFFSET UNITYSDK_OFFSET(0x1905050)
#define MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETRAILTILEEXCELBYTYPE_OFFSET UNITYSDK_OFFSET(0x1905100)
#define MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETALLROUNDEXCELBYEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x19051B0)
#define MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETROUNDEXCELBYROUND_OFFSET UNITYSDK_OFFSET(0x1905260)
#define MX_DATA_MINIGAMEROADPUZZLEDATA_SET_RAWDATAPATH_OFFSET UNITYSDK_OFFSET(0x1905310)
#define MX_DATA_MINIGAMEROADPUZZLEDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1905320)
#define MX_DATA_MINIGAMEROADPUZZLEDATA_GET_RAWDATAPATH_OFFSET UNITYSDK_OFFSET(0x19054D0)
#define MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x19054E0)
#define MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETADDITIONALREWARDBYUID_OFFSET UNITYSDK_OFFSET(0x1905590)
#define MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETALLVOICEBYVOICECONDITION_OFFSET UNITYSDK_OFFSET(0x1905640)
#define MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETROUNDEXCELBYMAPGROUPID_OFFSET UNITYSDK_OFFSET(0x19056F0)
#define MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETREWARDEXCELBYUID_OFFSET UNITYSDK_OFFSET(0x19057A0)
#define MX_DATA_MINIGAMEROADPUZZLEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1905850)
#define MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETMAPTILEEXCELBYUID_OFFSET UNITYSDK_OFFSET(0x1905860)
#define MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETRAILTILEEXCELBYUID_OFFSET UNITYSDK_OFFSET(0x1905910)
#define MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETALLMAPTILEEXCELLIST_OFFSET UNITYSDK_OFFSET(0x19059C0)
#define MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETROUNDEXCELBYUID_OFFSET UNITYSDK_OFFSET(0x1905A70)
#define MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETMAPTILEEXCELBYTYPE_OFFSET UNITYSDK_OFFSET(0x1905B20)
#define MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETALLRAILTILEEXCELLIST_OFFSET UNITYSDK_OFFSET(0x1905BD0)
#define MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETRAILSETREWARDBYUID_OFFSET UNITYSDK_OFFSET(0x1905C80)

namespace MX::Data
{
	inline static constexpr unsigned int MiniGameRoadPuzzleData_TypeDefinitionIndex = 16218;

	class MiniGameRoadPuzzleData : public Il2CppObject
	{
	public:
		::MX::Data::IMiniGameRoadPuzzleDataRepositoryWrapper* dataRepositoryWrapper; // 0x28
		::System::String* _RawDataPath_k__BackingField; // 0x30

		::System::Boolean TryGetAllRoundExcel(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETALLROUNDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetVoiceByVoiceCondition(::FlatData::RoadPuzzleVoiceCondition* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::RoadPuzzleVoiceCondition*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETVOICEBYVOICECONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetMapExcelByUid(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETMAPEXCELBYUID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetMapExcelByGroupID(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETMAPEXCELBYGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetRailTileExcelByType(::FlatData::RoadPuzzleRailTileType* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::RoadPuzzleRailTileType*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETRAILTILEEXCELBYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetAllRoundExcelByEventContentId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETALLROUNDEXCELBYEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetRoundExcelByRound(::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETROUNDEXCELBYROUND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_RawDataPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATA_SET_RAWDATAPATH_OFFSET))(str, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::String* get_RawDataPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATA_GET_RAWDATAPATH_OFFSET))(nullptr);
		}

		::System::Boolean TryGetInfoExcel(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETINFOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetAdditionalRewardByUid(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETADDITIONALREWARDBYUID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetAllVoiceByVoiceCondition(::FlatData::RoadPuzzleVoiceCondition* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::RoadPuzzleVoiceCondition*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETALLVOICEBYVOICECONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetRoundExcelByMapGroupId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETROUNDEXCELBYMAPGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetRewardExcelByUid(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETREWARDEXCELBYUID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetMapTileExcelByUid(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETMAPTILEEXCELBYUID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetRailTileExcelByUid(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETRAILTILEEXCELBYUID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetAllMapTileExcelList(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETALLMAPTILEEXCELLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetRoundExcelByUid(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETROUNDEXCELBYUID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetMapTileExcelByType(::FlatData::RoadPuzzleMapTileType* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::RoadPuzzleMapTileType*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETMAPTILEEXCELBYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetAllRailTileExcelList(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETALLRAILTILEEXCELLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetRailSetRewardByUid(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATA_TRYGETRAILSETREWARDBYUID_OFFSET))(arg, arg, nullptr);
		}

	};
}

