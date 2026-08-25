#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C40590)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPDBSCHEMA_GET_PRODUCTSELECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1C405A0)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPDBSCHEMA_SET_PRODUCTSELECTIONGROUPCOMPONENTID_OFFSET UNITYSDK_OFFSET(0x1C405B0)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPDBSCHEMA_SET_PRODUCTSELECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1C405C0)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPDBSCHEMA_GET_PRODUCTSELECTIONGROUPCOMPONENTID_OFFSET UNITYSDK_OFFSET(0x1C405D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ProductSelectionGroupDBSchema_TypeDefinitionIndex = 19145;

	class ProductSelectionGroupDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _ProductSelectionGroupId_k__BackingField; // 0x20
		::System::Int64 _ProductSelectionGroupComponentId_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_ProductSelectionGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPDBSCHEMA_GET_PRODUCTSELECTIONGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_ProductSelectionGroupComponentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPDBSCHEMA_SET_PRODUCTSELECTIONGROUPCOMPONENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ProductSelectionGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPDBSCHEMA_SET_PRODUCTSELECTIONGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ProductSelectionGroupComponentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPDBSCHEMA_GET_PRODUCTSELECTIONGROUPCOMPONENTID_OFFSET))(nullptr);
		}

	};
}

