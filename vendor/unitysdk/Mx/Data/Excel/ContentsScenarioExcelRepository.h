#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1A71C90)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A71F90)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1A72100)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A72420)
#define MX_DATA_EXCEL_CONTENTSSCENARIOEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1A72460)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ContentsScenarioExcelRepository_TypeDefinitionIndex = 17336;

	class ContentsScenarioExcelRepository : public ::FlatData::ShopFreeRecruitType
	{
	public:
		Il2CppObject* Select_Id(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSCENARIOEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

