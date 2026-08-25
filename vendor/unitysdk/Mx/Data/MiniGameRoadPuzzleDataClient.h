#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class MiniGameRoadPuzzleData; }
namespace FlatData { class RoadPuzzleRailTileType; }
namespace FlatData { class RoadPuzzleVoiceCondition; }
namespace FlatData { class RoadPuzzleMapTileType; }

#define MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETMAPEXCELBYUID_OFFSET UNITYSDK_OFFSET(0x1905D30)
#define MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETALLRAILTILE_OFFSET UNITYSDK_OFFSET(0x1905E70)
#define MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETRAILTILEEXCELBYTYPE_OFFSET UNITYSDK_OFFSET(0x1905F20)
#define MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETALLVOICEBYVOICECONDITION_OFFSET UNITYSDK_OFFSET(0x1906060)
#define MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETVOICEBYVOICECONDITION_OFFSET UNITYSDK_OFFSET(0x1906130)
#define MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETALLROUNDEXCELBYEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1906270)
#define MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETALLROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1906330)
#define MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETROUNDEXCELBYMAPGROUPID_OFFSET UNITYSDK_OFFSET(0x19063E0)
#define MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETRAILSETREWARD_OFFSET UNITYSDK_OFFSET(0x1906520)
#define MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETREWARDEXCELBYUID_OFFSET UNITYSDK_OFFSET(0x1906660)
#define MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x19054A0)
#define MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETADDITIONALREWARDBYUID_OFFSET UNITYSDK_OFFSET(0x19067A0)
#define MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETRAILTILEEXCELBYUID_OFFSET UNITYSDK_OFFSET(0x19068E0)
#define MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETALLMAPTILEEXCELLIST_OFFSET UNITYSDK_OFFSET(0x1906A20)
#define MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETROUNDEXCELBYUID_OFFSET UNITYSDK_OFFSET(0x1906AD0)
#define MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETMAPTILEEXCELBYTYPE_OFFSET UNITYSDK_OFFSET(0x1906C10)
#define MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETROUNDEXCELBYROUND_OFFSET UNITYSDK_OFFSET(0x1906D50)
#define MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETMAPEXCELBYGROUPID_OFFSET UNITYSDK_OFFSET(0x1906E90)
#define MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1906FD0)
#define MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETMAPTILEEXCELBYUID_OFFSET UNITYSDK_OFFSET(0x1907110)

namespace MX::Data
{
	inline static constexpr unsigned int MiniGameRoadPuzzleDataClient_TypeDefinitionIndex = 16220;

	class MiniGameRoadPuzzleDataClient : public Il2CppObject
	{
	public:
		::MX::Data::MiniGameRoadPuzzleData* data; // 0x10

		::System::Boolean TryGetMapExcelByUid(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETMAPEXCELBYUID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetAllRailTile(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETALLRAILTILE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetRailTileExcelByType(::FlatData::RoadPuzzleRailTileType* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::RoadPuzzleRailTileType*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETRAILTILEEXCELBYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetAllVoiceByVoiceCondition(::FlatData::RoadPuzzleVoiceCondition* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::RoadPuzzleVoiceCondition*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETALLVOICEBYVOICECONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetVoiceByVoiceCondition(::FlatData::RoadPuzzleVoiceCondition* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::RoadPuzzleVoiceCondition*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETVOICEBYVOICECONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetAllRoundExcelByEventContentId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETALLROUNDEXCELBYEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetAllRoundExcel(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETALLROUNDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetRoundExcelByMapGroupId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETROUNDEXCELBYMAPGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetRailSetReward(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETRAILSETREWARD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetRewardExcelByUid(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETREWARDEXCELBYUID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::MiniGameRoadPuzzleData* arg)
		{
			((::System::Void(*)(::MX::Data::MiniGameRoadPuzzleData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetAdditionalRewardByUid(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETADDITIONALREWARDBYUID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetRailTileExcelByUid(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETRAILTILEEXCELBYUID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetAllMapTileExcelList(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETALLMAPTILEEXCELLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetRoundExcelByUid(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETROUNDEXCELBYUID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetMapTileExcelByType(::FlatData::RoadPuzzleMapTileType* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::RoadPuzzleMapTileType*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETMAPTILEEXCELBYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetRoundExcelByRound(::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETROUNDEXCELBYROUND_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetMapExcelByGroupId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETMAPEXCELBYGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetInfoExcel(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETINFOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetMapTileExcelByUid(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEROADPUZZLEDATACLIENT_TRYGETMAPTILEEXCELBYUID_OFFSET))(arg, arg, nullptr);
		}

	};
}

