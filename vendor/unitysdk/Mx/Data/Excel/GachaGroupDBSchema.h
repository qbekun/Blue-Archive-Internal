#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_GACHAGROUPDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B390F0)
#define MX_DATA_EXCEL_GACHAGROUPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B39100)
#define MX_DATA_EXCEL_GACHAGROUPDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B39110)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GachaGroupDBSchema_TypeDefinitionIndex = 18094;

	class GachaGroupDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _ID_k__BackingField; // 0x20

		::System::Int64 get_ID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ID(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

