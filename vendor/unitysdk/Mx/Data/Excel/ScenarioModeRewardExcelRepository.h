#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCELREPOSITORY_SELECTFIRST_SCENARIOMODEREWARDID_OFFSET UNITYSDK_OFFSET(0x1C62D00)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C63020)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCELREPOSITORY_SELECT_SCENARIOMODEREWARDID_OFFSET UNITYSDK_OFFSET(0x1C63060)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C63360)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCELREPOSITORY_SELECT_SCENARIOMODEREWARDIDS_OFFSET UNITYSDK_OFFSET(0x1C634D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioModeRewardExcelRepository_TypeDefinitionIndex = 19303;

	class ScenarioModeRewardExcelRepository : public <>c__DisplayClass15_0
	{
	public:
		Il2CppObject* SelectFirst_ScenarioModeRewardId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCELREPOSITORY_SELECTFIRST_SCENARIOMODEREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_ScenarioModeRewardId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCELREPOSITORY_SELECT_SCENARIOMODEREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_ScenarioModeRewardIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCELREPOSITORY_SELECT_SCENARIOMODEREWARDIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

