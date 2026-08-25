#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E2E0)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEDBSCHEMA_SET_ENTERCOSTREDUCEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A6E2F0)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEDBSCHEMA_GET_ENTERCOSTREDUCEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A6E300)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ContentEnterCostReduceDBSchema_TypeDefinitionIndex = 17310;

	class ContentEnterCostReduceDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EnterCostReduceGroupId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EnterCostReduceGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEDBSCHEMA_SET_ENTERCOSTREDUCEGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EnterCostReduceGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEDBSCHEMA_GET_ENTERCOSTREDUCEGROUPID_OFFSET))(nullptr);
		}

	};
}

