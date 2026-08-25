#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_FORMATIONLOCATIONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B285F0)
#define MX_DATA_EXCEL_FORMATIONLOCATIONDBSCHEMA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B28600)
#define MX_DATA_EXCEL_FORMATIONLOCATIONDBSCHEMA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B28610)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FormationLocationDBSchema_TypeDefinitionIndex = 18011;

	class FormationLocationDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _GroupID_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_GroupID(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONDBSCHEMA_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONDBSCHEMA_GET_GROUPID_OFFSET))(nullptr);
		}

	};
}

