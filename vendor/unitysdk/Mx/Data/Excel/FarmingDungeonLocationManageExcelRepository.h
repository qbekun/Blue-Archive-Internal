#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B18A80)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B18BF0)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCELREPOSITORY_SELECT_FARMINGDUNGEONLOCATIONIDS_OFFSET UNITYSDK_OFFSET(0x1B18C30)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCELREPOSITORY_SELECT_FARMINGDUNGEONLOCATIONID_OFFSET UNITYSDK_OFFSET(0x1B19030)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCELREPOSITORY_SELECTFIRST_FARMINGDUNGEONLOCATIONID_OFFSET UNITYSDK_OFFSET(0x1B19330)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FarmingDungeonLocationManageExcelRepository_TypeDefinitionIndex = 17946;

	class FarmingDungeonLocationManageExcelRepository : public HightlightMaterialInfo
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_FarmingDungeonLocationIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCELREPOSITORY_SELECT_FARMINGDUNGEONLOCATIONIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_FarmingDungeonLocationId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCELREPOSITORY_SELECT_FARMINGDUNGEONLOCATIONID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_FarmingDungeonLocationId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCELREPOSITORY_SELECTFIRST_FARMINGDUNGEONLOCATIONID_OFFSET))(arg, arg, nullptr);
		}

	};
}

