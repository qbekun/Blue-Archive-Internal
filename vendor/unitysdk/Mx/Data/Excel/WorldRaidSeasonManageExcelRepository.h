#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCELREPOSITORY_SELECTFIRST_SEASONID_OFFSET UNITYSDK_OFFSET(0x1CCF530)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCELREPOSITORY_SELECT_SEASONID_OFFSET UNITYSDK_OFFSET(0x1CCF850)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCELREPOSITORY_SELECT_SEASONIDS_OFFSET UNITYSDK_OFFSET(0x1CCFB50)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CCFF50)
#define MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CD00C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WorldRaidSeasonManageExcelRepository_TypeDefinitionIndex = 19825;

	class WorldRaidSeasonManageExcelRepository : public ::MXUnderCover::ProcessCatchedMessage
	{
	public:
		Il2CppObject* SelectFirst_SeasonId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCELREPOSITORY_SELECTFIRST_SEASONID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_SeasonId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCELREPOSITORY_SELECT_SEASONID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_SeasonIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCELREPOSITORY_SELECT_SEASONIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSEASONMANAGEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

