#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEDBSCHEMA_SET_GACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1B37350)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B37360)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEDBSCHEMA_GET_GACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1B37370)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B37380)
#define MX_DATA_EXCEL_GACHAELEMENTRECURSIVEDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B37390)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GachaElementRecursiveDBSchema_TypeDefinitionIndex = 18084;

	class GachaElementRecursiveDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _ID_k__BackingField; // 0x20
		::System::Int64 _GachaGroupID_k__BackingField; // 0x28

		::System::Void set_GachaGroupID(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEDBSCHEMA_SET_GACHAGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_GachaGroupID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEDBSCHEMA_GET_GACHAGROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ID(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTRECURSIVEDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

