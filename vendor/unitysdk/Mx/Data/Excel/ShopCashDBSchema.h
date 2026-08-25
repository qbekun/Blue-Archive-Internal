#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SHOPCASHDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C72400)
#define MX_DATA_EXCEL_SHOPCASHDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C72410)
#define MX_DATA_EXCEL_SHOPCASHDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C72420)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopCashDBSchema_TypeDefinitionIndex = 19368;

	class ShopCashDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

