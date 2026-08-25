#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERDBSCHEMA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C02BB0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C02BC0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERDBSCHEMA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C02BD0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameTBGEncounterDBSchema_TypeDefinitionIndex = 18867;

	class MinigameTBGEncounterDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x20

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERDBSCHEMA_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERDBSCHEMA_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

	};
}

