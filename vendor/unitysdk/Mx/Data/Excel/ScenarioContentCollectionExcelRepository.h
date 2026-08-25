#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C5D6B0)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C5DAB0)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C5DDD0)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C5DF40)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C5E240)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioContentCollectionExcelRepository_TypeDefinitionIndex = 19282;

	class ScenarioContentCollectionExcelRepository : public ::MXUnderCover::UCNPCModel
	{
	public:
		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

