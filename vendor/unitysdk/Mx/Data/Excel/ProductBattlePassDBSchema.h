#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PRODUCTBATTLEPASSDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C346C0)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C346D0)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C346E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ProductBattlePassDBSchema_TypeDefinitionIndex = 19093;

	class ProductBattlePassDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

