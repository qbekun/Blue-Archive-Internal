#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CONQUESTEROSIONUNITDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A580C0)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITDBSCHEMA_GET_TILEPREFABID_OFFSET UNITYSDK_OFFSET(0x1A580D0)
#define MX_DATA_EXCEL_CONQUESTEROSIONUNITDBSCHEMA_SET_TILEPREFABID_OFFSET UNITYSDK_OFFSET(0x1A580E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestErosionUnitDBSchema_TypeDefinitionIndex = 17217;

	class ConquestErosionUnitDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _TilePrefabId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_TilePrefabId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITDBSCHEMA_GET_TILEPREFABID_OFFSET))(nullptr);
		}

		::System::Void set_TilePrefabId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONUNITDBSCHEMA_SET_TILEPREFABID_OFFSET))(arg, nullptr);
		}

	};
}

