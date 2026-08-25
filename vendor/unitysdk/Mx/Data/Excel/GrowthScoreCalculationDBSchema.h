#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class GrowthFactor; }

#define MX_DATA_EXCEL_GROWTHSCORECALCULATIONDBSCHEMA_GET_INCLUDEGROWTHFACTOR_OFFSET UNITYSDK_OFFSET(0x1B44250)
#define MX_DATA_EXCEL_GROWTHSCORECALCULATIONDBSCHEMA_SET_INCLUDEGROWTHFACTOR_OFFSET UNITYSDK_OFFSET(0x1B44260)
#define MX_DATA_EXCEL_GROWTHSCORECALCULATIONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B44270)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GrowthScoreCalculationDBSchema_TypeDefinitionIndex = 18136;

	class GrowthScoreCalculationDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::GrowthFactor* _IncludeGrowthFactor_k__BackingField; // 0x20

		::FlatData::GrowthFactor* get_IncludeGrowthFactor()
		{
			return (return (::FlatData::GrowthFactor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROWTHSCORECALCULATIONDBSCHEMA_GET_INCLUDEGROWTHFACTOR_OFFSET))(nullptr);
		}

		::System::Void set_IncludeGrowthFactor(::FlatData::GrowthFactor* arg)
		{
			((::System::Void(*)(::FlatData::GrowthFactor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROWTHSCORECALCULATIONDBSCHEMA_SET_INCLUDEGROWTHFACTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROWTHSCORECALCULATIONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

