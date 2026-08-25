#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C37270)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C37670)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C377E0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C37AE0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C37B20)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ProductDailyRecordInfoExcelRepository_TypeDefinitionIndex = 19112;

	class ProductDailyRecordInfoExcelRepository : public <>c__DisplayClass2_0
	{
	public:
		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

