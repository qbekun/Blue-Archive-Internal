#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A87D30)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x1A88050)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A88450)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A88490)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A88790)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EliminateRaidStageRewardExcelRepository_TypeDefinitionIndex = 17419;

	class EliminateRaidStageRewardExcelRepository : public ::FlatData::AccountState
	{
	public:
		Il2CppObject* SelectFirst_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCELREPOSITORY_SELECT_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

