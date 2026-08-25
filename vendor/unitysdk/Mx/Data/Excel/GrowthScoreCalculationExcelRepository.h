#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class GrowthFactor; }

#define MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCELREPOSITORY_SELECT_INCLUDEGROWTHFACTOR_OFFSET UNITYSDK_OFFSET(0x1B44280)
#define MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B445C0)
#define MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCELREPOSITORY_SELECT_INCLUDEGROWTHFACTORS_OFFSET UNITYSDK_OFFSET(0x1B44730)
#define MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCELREPOSITORY_SELECTFIRST_INCLUDEGROWTHFACTOR_OFFSET UNITYSDK_OFFSET(0x1B44B20)
#define MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B44E70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GrowthScoreCalculationExcelRepository_TypeDefinitionIndex = 18141;

	class GrowthScoreCalculationExcelRepository : public ::MXUnderCover::UCSaveActionButtonTrigger
	{
	public:
		Il2CppObject* Select_IncludeGrowthFactor(::FlatData::GrowthFactor* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::GrowthFactor*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCELREPOSITORY_SELECT_INCLUDEGROWTHFACTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_IncludeGrowthFactors(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCELREPOSITORY_SELECT_INCLUDEGROWTHFACTORS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_IncludeGrowthFactor(::FlatData::GrowthFactor* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::GrowthFactor*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCELREPOSITORY_SELECTFIRST_INCLUDEGROWTHFACTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROWTHSCORECALCULATIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

