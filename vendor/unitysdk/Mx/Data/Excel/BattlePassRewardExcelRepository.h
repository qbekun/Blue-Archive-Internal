#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19EB3F0)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x19EB750)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x19EBA70)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x19EBD70)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCELREPOSITORY_SELECTFIRST_REWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x19EC170)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCELREPOSITORY_SELECT_REWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x19EC490)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCELREPOSITORY_SELECT_REWARDGROUPIDS_OFFSET UNITYSDK_OFFSET(0x19EC7A0)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCELREPOSITORY_SELECTFIRST_REWARDGROUPID_LEVEL_OFFSET UNITYSDK_OFFSET(0x19ECBB0)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCELREPOSITORY_SELECT_REWARDGROUPID_LEVEL_OFFSET UNITYSDK_OFFSET(0x19ECFB0)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCELREPOSITORY_SELECT_REWARDGROUPID_LEVEL_OFFSET UNITYSDK_OFFSET(0x19ED390)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19ED930)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BattlePassRewardExcelRepository_TypeDefinitionIndex = 16787;

	class BattlePassRewardExcelRepository : public ::FlatData::TBGTileType
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_RewardGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCELREPOSITORY_SELECTFIRST_REWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_RewardGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCELREPOSITORY_SELECT_REWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_RewardGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCELREPOSITORY_SELECT_REWARDGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_RewardGroupId_Level(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCELREPOSITORY_SELECTFIRST_REWARDGROUPID_LEVEL_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_RewardGroupId_Level(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCELREPOSITORY_SELECT_REWARDGROUPID_LEVEL_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_RewardGroupId_Level(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCELREPOSITORY_SELECT_REWARDGROUPID_LEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

