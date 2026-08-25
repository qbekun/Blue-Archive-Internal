#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ARENASEASONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19D6FB0)
#define MX_DATA_EXCEL_ARENASEASONDBSCHEMA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D6FC0)
#define MX_DATA_EXCEL_ARENASEASONDBSCHEMA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D6FD0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ArenaSeasonDBSchema_TypeDefinitionIndex = 16676;

	class ArenaSeasonDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONDBSCHEMA_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONDBSCHEMA_GET_UNIQUEID_OFFSET))(nullptr);
		}

	};
}

