#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_RAIDSTAGEDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C4A9E0)
#define MX_DATA_EXCEL_RAIDSTAGEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A9F0)
#define MX_DATA_EXCEL_RAIDSTAGEDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C4AA00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RaidStageDBSchema_TypeDefinitionIndex = 19183;

	class RaidStageDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

	};
}

