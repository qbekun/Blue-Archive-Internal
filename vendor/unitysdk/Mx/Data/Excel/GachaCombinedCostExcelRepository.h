#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B30730)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x1B308A0)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B30CA0)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B30CE0)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B31000)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GachaCombinedCostExcelRepository_TypeDefinitionIndex = 18051;

	class GachaCombinedCostExcelRepository : public ::MXUnderCover::EventBlackboardRuntime
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_GroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCELREPOSITORY_SELECT_GROUPID_OFFSET))(arg, arg, nullptr);
		}

	};
}

