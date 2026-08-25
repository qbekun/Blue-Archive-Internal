#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19E2920)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCELREPOSITORY_SELECTFIRST_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x19E2960)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCELREPOSITORY_SELECT_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x19E2C80)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCELREPOSITORY_SELECT_BATTLEPASSIDS_OFFSET UNITYSDK_OFFSET(0x19E2F80)
#define MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19E3380)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BattlePassExpLimitExcelRepository_TypeDefinitionIndex = 16740;

	class BattlePassExpLimitExcelRepository : public ::FlatData::Geas
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_BattlePassId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCELREPOSITORY_SELECTFIRST_BATTLEPASSID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_BattlePassId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCELREPOSITORY_SELECT_BATTLEPASSID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_BattlePassIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCELREPOSITORY_SELECT_BATTLEPASSIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSEXPLIMITEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

