#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_FIXEDECHELONSETTINGDBSCHEMA_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1B24910)
#define MX_DATA_EXCEL_FIXEDECHELONSETTINGDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B24920)
#define MX_DATA_EXCEL_FIXEDECHELONSETTINGDBSCHEMA_SET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1B24930)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FixedEchelonSettingDBSchema_TypeDefinitionIndex = 17990;

	class FixedEchelonSettingDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _FixedEchelonID_k__BackingField; // 0x20

		::System::Int64 get_FixedEchelonID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDECHELONSETTINGDBSCHEMA_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDECHELONSETTINGDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_FixedEchelonID(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDECHELONSETTINGDBSCHEMA_SET_FIXEDECHELONID_OFFSET))(arg, nullptr);
		}

	};
}

