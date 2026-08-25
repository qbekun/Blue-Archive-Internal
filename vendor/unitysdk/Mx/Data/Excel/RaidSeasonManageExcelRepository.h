#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C456D0)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCELREPOSITORY_SELECT_SEASONIDS_OFFSET UNITYSDK_OFFSET(0x1C45710)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCELREPOSITORY_SELECTFIRST_SEASONID_OFFSET UNITYSDK_OFFSET(0x1C45B10)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCELREPOSITORY_SELECT_SEASONID_OFFSET UNITYSDK_OFFSET(0x1C45E30)
#define MX_DATA_EXCEL_RAIDSEASONMANAGEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C46130)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RaidSeasonManageExcelRepository_TypeDefinitionIndex = 19171;

	class RaidSeasonManageExcelRepository : public UIItemQuickSlotBindType
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_SeasonIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCELREPOSITORY_SELECT_SEASONIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_SeasonId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCELREPOSITORY_SELECTFIRST_SEASONID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_SeasonId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCELREPOSITORY_SELECT_SEASONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSEASONMANAGEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

