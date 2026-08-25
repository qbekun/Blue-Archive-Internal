#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PRODUCTSELECTEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C3F160)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C3F460)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C3F4A0)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C3F8A0)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C3FA10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ProductSelectExcelRepository_TypeDefinitionIndex = 19143;

	class ProductSelectExcelRepository : public <>c
	{
	public:
		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

