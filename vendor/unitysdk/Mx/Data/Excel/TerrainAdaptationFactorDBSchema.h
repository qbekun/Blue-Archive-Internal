#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StageTopography; }
namespace FlatData { class TerrainAdaptationStat; }

#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTORDBSCHEMA_SET_TERRAINADAPTATION_OFFSET UNITYSDK_OFFSET(0x1C9E910)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTORDBSCHEMA_SET_TERRAINADAPTATIONSTAT_OFFSET UNITYSDK_OFFSET(0x1C9E920)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTORDBSCHEMA_GET_TERRAINADAPTATIONSTAT_OFFSET UNITYSDK_OFFSET(0x1C9E930)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTORDBSCHEMA_GET_TERRAINADAPTATION_OFFSET UNITYSDK_OFFSET(0x1C9E940)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTORDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E950)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TerrainAdaptationFactorDBSchema_TypeDefinitionIndex = 19587;

	class TerrainAdaptationFactorDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::StageTopography* _TerrainAdaptation_k__BackingField; // 0x20
		::FlatData::TerrainAdaptationStat* _TerrainAdaptationStat_k__BackingField; // 0x24

		::System::Void set_TerrainAdaptation(::FlatData::StageTopography* arg)
		{
			((::System::Void(*)(::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTORDBSCHEMA_SET_TERRAINADAPTATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_TerrainAdaptationStat(::FlatData::TerrainAdaptationStat* arg)
		{
			((::System::Void(*)(::FlatData::TerrainAdaptationStat*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTORDBSCHEMA_SET_TERRAINADAPTATIONSTAT_OFFSET))(arg, nullptr);
		}

		::FlatData::TerrainAdaptationStat* get_TerrainAdaptationStat()
		{
			return (return (::FlatData::TerrainAdaptationStat*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTORDBSCHEMA_GET_TERRAINADAPTATIONSTAT_OFFSET))(nullptr);
		}

		::FlatData::StageTopography* get_TerrainAdaptation()
		{
			return (return (::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTORDBSCHEMA_GET_TERRAINADAPTATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTORDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

