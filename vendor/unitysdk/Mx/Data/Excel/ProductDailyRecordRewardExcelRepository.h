#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C388B0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C38B10)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C38E30)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C39130)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCELREPOSITORY_SELECTFIRST_ID_DAY_OFFSET UNITYSDK_OFFSET(0x1C39530)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCELREPOSITORY_SELECT_ID_DAY_OFFSET UNITYSDK_OFFSET(0x1C39930)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCELREPOSITORY_SELECT_ID_DAY_OFFSET UNITYSDK_OFFSET(0x1C39D10)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C3A2B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ProductDailyRecordRewardExcelRepository_TypeDefinitionIndex = 19122;

	class ProductDailyRecordRewardExcelRepository : public <>c__DisplayClass3_0
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id_Day(::System::Int64 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCELREPOSITORY_SELECTFIRST_ID_DAY_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_Id_Day(::System::Int64 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCELREPOSITORY_SELECT_ID_DAY_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_Id_Day(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCELREPOSITORY_SELECT_ID_DAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

