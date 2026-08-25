#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTDBSCHEMA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x19E3B50)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19E3B60)
#define MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTDBSCHEMA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x19E3B70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BattlePassFlavorTextDBSchema_TypeDefinitionIndex = 16742;

	class BattlePassFlavorTextDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _GroupId_k__BackingField; // 0x20

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTDBSCHEMA_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSFLAVORTEXTDBSCHEMA_GET_GROUPID_OFFSET))(nullptr);
		}

	};
}

