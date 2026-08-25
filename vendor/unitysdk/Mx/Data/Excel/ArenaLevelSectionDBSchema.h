#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ARENALEVELSECTIONDBSCHEMA_GET_ARENASEASONID_OFFSET UNITYSDK_OFFSET(0x19CF090)
#define MX_DATA_EXCEL_ARENALEVELSECTIONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19CF0A0)
#define MX_DATA_EXCEL_ARENALEVELSECTIONDBSCHEMA_SET_ARENASEASONID_OFFSET UNITYSDK_OFFSET(0x19CF0B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ArenaLevelSectionDBSchema_TypeDefinitionIndex = 16638;

	class ArenaLevelSectionDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _ArenaSeasonId_k__BackingField; // 0x20

		::System::Int64 get_ArenaSeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONDBSCHEMA_GET_ARENASEASONID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ArenaSeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONDBSCHEMA_SET_ARENASEASONID_OFFSET))(arg, nullptr);
		}

	};
}

