#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PRODUCTMONTHLYDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C3D3E0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C3D3F0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C3D400)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ProductMonthlyDBSchema_TypeDefinitionIndex = 19131;

	class ProductMonthlyDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

	};
}

