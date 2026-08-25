#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C174E0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCELREPOSITORY_SELECTFIRST_SEASONID_OFFSET UNITYSDK_OFFSET(0x1C17520)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C17840)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCELREPOSITORY_SELECT_SEASONIDS_OFFSET UNITYSDK_OFFSET(0x1C179B0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCELREPOSITORY_SELECT_SEASONID_OFFSET UNITYSDK_OFFSET(0x1C17DB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MultiFloorRaidSeasonManageExcelRepository_TypeDefinitionIndex = 18963;

	class MultiFloorRaidSeasonManageExcelRepository : public <co_InternalInvoke>d__1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_SeasonId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCELREPOSITORY_SELECTFIRST_SEASONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_SeasonIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCELREPOSITORY_SELECT_SEASONIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_SeasonId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSEASONMANAGEEXCELREPOSITORY_SELECT_SEASONID_OFFSET))(arg, arg, nullptr);
		}

	};
}

