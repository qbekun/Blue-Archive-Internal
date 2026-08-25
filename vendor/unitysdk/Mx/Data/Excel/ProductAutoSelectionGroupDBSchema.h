#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C32980)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPDBSCHEMA_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C32990)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPDBSCHEMA_GET_PRODUCTAUTOSELECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1C329A0)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPDBSCHEMA_SET_PRODUCTAUTOSELECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1C329B0)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPDBSCHEMA_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C329C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ProductAutoSelectionGroupDBSchema_TypeDefinitionIndex = 19086;

	class ProductAutoSelectionGroupDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _ProductAutoSelectionGroupId_k__BackingField; // 0x20
		::System::Int64 _CharacterId_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPDBSCHEMA_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ProductAutoSelectionGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPDBSCHEMA_GET_PRODUCTAUTOSELECTIONGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_ProductAutoSelectionGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPDBSCHEMA_SET_PRODUCTAUTOSELECTIONGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPDBSCHEMA_GET_CHARACTERID_OFFSET))(nullptr);
		}

	};
}

