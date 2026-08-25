#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StageTopography; }
namespace FlatData { class TerrainAdaptationStat; }

#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C9E960)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCELREPOSITORY_SELECTFIRST_TERRAINADAPTATION_OFFSET UNITYSDK_OFFSET(0x1C9EBC0)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCELREPOSITORY_SELECT_TERRAINADAPTATION_OFFSET UNITYSDK_OFFSET(0x1C9EF10)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCELREPOSITORY_SELECT_TERRAINADAPTATIONS_OFFSET UNITYSDK_OFFSET(0x1C9F250)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCELREPOSITORY_SELECTFIRST_TERRAINADAPTATION_TERRAINADAPTATIONSTAT_OFFSET UNITYSDK_OFFSET(0x1C9F640)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCELREPOSITORY_SELECT_TERRAINADAPTATION_TERRAINADAPTATIONSTAT_OFFSET UNITYSDK_OFFSET(0x1C9FAB0)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCELREPOSITORY_SELECT_TERRAINADAPTATION_TERRAINADAPTATIONSTAT_OFFSET UNITYSDK_OFFSET(0x1C9FF10)
#define MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CA04A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TerrainAdaptationFactorExcelRepository_TypeDefinitionIndex = 19595;

	class TerrainAdaptationFactorExcelRepository : public ShadowCoordModifierBackup
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_TerrainAdaptation(::FlatData::StageTopography* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::StageTopography*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCELREPOSITORY_SELECTFIRST_TERRAINADAPTATION_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_TerrainAdaptation(::FlatData::StageTopography* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::StageTopography*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCELREPOSITORY_SELECT_TERRAINADAPTATION_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_TerrainAdaptations(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCELREPOSITORY_SELECT_TERRAINADAPTATIONS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_TerrainAdaptation_TerrainAdaptationStat(::FlatData::StageTopography* arg, ::FlatData::TerrainAdaptationStat* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::StageTopography*, ::FlatData::TerrainAdaptationStat*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCELREPOSITORY_SELECTFIRST_TERRAINADAPTATION_TERRAINADAPTATIONSTAT_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_TerrainAdaptation_TerrainAdaptationStat(::FlatData::StageTopography* arg, ::FlatData::TerrainAdaptationStat* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::StageTopography*, ::FlatData::TerrainAdaptationStat*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCELREPOSITORY_SELECT_TERRAINADAPTATION_TERRAINADAPTATIONSTAT_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_TerrainAdaptation_TerrainAdaptationStat(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCELREPOSITORY_SELECT_TERRAINADAPTATION_TERRAINADAPTATIONSTAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TERRAINADAPTATIONFACTOREXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

