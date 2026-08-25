#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PRODUCTSELECTDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C3F130)
#define MX_DATA_EXCEL_PRODUCTSELECTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C3F140)
#define MX_DATA_EXCEL_PRODUCTSELECTDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C3F150)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ProductSelectDBSchema_TypeDefinitionIndex = 19138;

	class ProductSelectDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

