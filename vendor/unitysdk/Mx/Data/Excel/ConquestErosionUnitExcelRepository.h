#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCELREPOSITORY_SELECT_TILEPREFABIDS_OFFSET UNITYSDK_OFFSET(0x1A580F0)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A584F0)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCELREPOSITORY_SELECTFIRST_TILEPREFABID_OFFSET UNITYSDK_OFFSET(0x1A58530)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCELREPOSITORY_SELECT_TILEPREFABID_OFFSET UNITYSDK_OFFSET(0x1A58850)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A58B50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestErosionUnitExcelRepository_TypeDefinitionIndex = 17222;

	class ConquestErosionUnitExcelRepository : public ::FlatData::ScenarioZoomType
	{
	public:
		Il2CppObject* Select_TilePrefabIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCELREPOSITORY_SELECT_TILEPREFABIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_TilePrefabId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCELREPOSITORY_SELECTFIRST_TILEPREFABID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_TilePrefabId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCELREPOSITORY_SELECT_TILEPREFABID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

