#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_GACHAELEMENTDBSCHEMA_GET_GACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1B35320)
#define MX_DATA_EXCEL_GACHAELEMENTDBSCHEMA_SET_GACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1B35330)
#define MX_DATA_EXCEL_GACHAELEMENTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B35340)
#define MX_DATA_EXCEL_GACHAELEMENTDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B35350)
#define MX_DATA_EXCEL_GACHAELEMENTDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B35360)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GachaElementDBSchema_TypeDefinitionIndex = 18074;

	class GachaElementDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _ID_k__BackingField; // 0x20
		::System::Int64 _GachaGroupID_k__BackingField; // 0x28

		::System::Int64 get_GachaGroupID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTDBSCHEMA_GET_GACHAGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_GachaGroupID(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTDBSCHEMA_SET_GACHAGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_ID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_ID(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

