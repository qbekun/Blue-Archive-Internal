#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PRODUCTEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C3B210)
#define MX_DATA_EXCEL_PRODUCTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C3B610)
#define MX_DATA_EXCEL_PRODUCTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C3B650)
#define MX_DATA_EXCEL_PRODUCTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C3B970)
#define MX_DATA_EXCEL_PRODUCTEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C3BAE0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ProductExcelRepository_TypeDefinitionIndex = 19129;

	class ProductExcelRepository : public <>c__DisplayClass4_0
	{
	public:
		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

