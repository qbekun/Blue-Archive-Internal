#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CONQUESTUNITEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1A6D000)
#define MX_DATA_EXCEL_CONQUESTUNITEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1A6D300)
#define MX_DATA_EXCEL_CONQUESTUNITEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1A6D700)
#define MX_DATA_EXCEL_CONQUESTUNITEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A6DA20)
#define MX_DATA_EXCEL_CONQUESTUNITEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A6DA60)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestUnitExcelRepository_TypeDefinitionIndex = 17308;

	class ConquestUnitExcelRepository : public ::FlatData::ProductCategory
	{
	public:
		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

