#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCELREPOSITORY_SELECT_SEASONID_OFFSET UNITYSDK_OFFSET(0x1A82650)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCELREPOSITORY_SELECT_SEASONIDS_OFFSET UNITYSDK_OFFSET(0x1A82950)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCELREPOSITORY_SELECTFIRST_SEASONID_OFFSET UNITYSDK_OFFSET(0x1A82D50)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A83070)
#define MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A831E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EliminateRaidSeasonManageExcelRepository_TypeDefinitionIndex = 17398;

	class EliminateRaidSeasonManageExcelRepository : public ::FlatData::ProductSelectSubType
	{
	public:
		Il2CppObject* Select_SeasonId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCELREPOSITORY_SELECT_SEASONID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_SeasonIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCELREPOSITORY_SELECT_SEASONIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_SeasonId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCELREPOSITORY_SELECTFIRST_SEASONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSEASONMANAGEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

