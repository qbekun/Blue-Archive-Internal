#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C405E0)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCELREPOSITORY_SELECTFIRST_PRODUCTSELECTIONGROUPID_PRODUCTSELECTIONGROUPCOMPONENTID_OFFSET UNITYSDK_OFFSET(0x1C40750)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCELREPOSITORY_SELECT_PRODUCTSELECTIONGROUPID_PRODUCTSELECTIONGROUPCOMPONENTID_OFFSET UNITYSDK_OFFSET(0x1C40B50)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCELREPOSITORY_SELECT_PRODUCTSELECTIONGROUPID_PRODUCTSELECTIONGROUPCOMPONENTID_OFFSET UNITYSDK_OFFSET(0x1C40F30)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C414D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ProductSelectionGroupExcelRepository_TypeDefinitionIndex = 19150;

	class ProductSelectionGroupExcelRepository : public ::MXUnderCover::ItemContainerAsset
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_ProductSelectionGroupId_ProductSelectionGroupComponentId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCELREPOSITORY_SELECTFIRST_PRODUCTSELECTIONGROUPID_PRODUCTSELECTIONGROUPCOMPONENTID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_ProductSelectionGroupId_ProductSelectionGroupComponentId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCELREPOSITORY_SELECT_PRODUCTSELECTIONGROUPID_PRODUCTSELECTIONGROUPCOMPONENTID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_ProductSelectionGroupId_ProductSelectionGroupComponentId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCELREPOSITORY_SELECT_PRODUCTSELECTIONGROUPID_PRODUCTSELECTIONGROUPCOMPONENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

