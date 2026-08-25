#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_FURNITUREDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B2B8F0)
#define MX_DATA_EXCEL_FURNITUREDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B2B900)
#define MX_DATA_EXCEL_FURNITUREDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B2B910)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FurnitureDBSchema_TypeDefinitionIndex = 18018;

	class FurnitureDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

