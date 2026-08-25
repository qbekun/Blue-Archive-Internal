#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_UNDERCOVERSTAGEDBSCHEMA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CAD890)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEDBSCHEMA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CAD8A0)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CAD8B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int UnderCoverStageDBSchema_TypeDefinitionIndex = 19660;

	class UnderCoverStageDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _GroupId_k__BackingField; // 0x20

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEDBSCHEMA_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEDBSCHEMA_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

