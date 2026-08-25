#pragma once
#include "../../unitysdk.h"

namespace FlatData { class RoadPuzzleMapTileType; }
namespace FlatData { class RoadPuzzleVoiceCondition; }
namespace FlatData { class RoadPuzzleRailTileType; }

#define MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETREWARDEXCELBYUID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETRAILSETREWARD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETMAPTILEEXCELBYTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETALLMAPTILEEXCELLIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETMAPTILEEXCELBYUID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETADDITIONALREWARDBYUID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETALLROUNDEXCELBYEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETRAILTILEEXCELBYUID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETROUNDEXCELBYROUND_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETMAPEXCELBYGROUPID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETALLVOICEBYVOICECONDITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETRAILTILEEXCELBYTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETVOICEBYVOICECONDITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETROUNDEXCELBYUID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETROUNDEXCELBYMAPGROUPID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETMAPEXCELBYUID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETALLROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETALLRAILTILE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data
{
	inline static constexpr unsigned int IMiniGameRoadPuzzleDataRepositoryWrapper_TypeDefinitionIndex = 16219;

	class IMiniGameRoadPuzzleDataRepositoryWrapper : public Il2CppObject
	{
	public:
		::System::Boolean TryGetRewardExcelByUid(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETREWARDEXCELBYUID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetRailSetReward(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETRAILSETREWARD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetMapTileExcelByType(::FlatData::RoadPuzzleMapTileType* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::RoadPuzzleMapTileType*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETMAPTILEEXCELBYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetAllMapTileExcelList(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETALLMAPTILEEXCELLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetMapTileExcelByUid(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETMAPTILEEXCELBYUID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetAdditionalRewardByUid(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETADDITIONALREWARDBYUID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetAllRoundExcelByEventContentId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETALLROUNDEXCELBYEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetRailTileExcelByUid(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETRAILTILEEXCELBYUID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetRoundExcelByRound(::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETROUNDEXCELBYROUND_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetMapExcelByGroupId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETMAPEXCELBYGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetAllVoiceByVoiceCondition(::FlatData::RoadPuzzleVoiceCondition* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::RoadPuzzleVoiceCondition*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETALLVOICEBYVOICECONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetRailTileExcelByType(::FlatData::RoadPuzzleRailTileType* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::RoadPuzzleRailTileType*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETRAILTILEEXCELBYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetInfoExcel(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETINFOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetVoiceByVoiceCondition(::FlatData::RoadPuzzleVoiceCondition* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::RoadPuzzleVoiceCondition*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETVOICEBYVOICECONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetRoundExcelByUid(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETROUNDEXCELBYUID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetRoundExcelByMapGroupId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETROUNDEXCELBYMAPGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetMapExcelByUid(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETMAPEXCELBYUID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetAllRoundExcel(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETALLROUNDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetAllRailTile(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IMINIGAMEROADPUZZLEDATAREPOSITORYWRAPPER_TRYGETALLRAILTILE_OFFSET))(arg, nullptr);
		}

	};
}

