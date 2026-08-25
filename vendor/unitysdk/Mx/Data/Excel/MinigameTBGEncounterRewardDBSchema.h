#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C05740)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDDBSCHEMA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C05750)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDDBSCHEMA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C05760)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameTBGEncounterRewardDBSchema_TypeDefinitionIndex = 18881;

	class MinigameTBGEncounterRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _GroupId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDDBSCHEMA_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTERREWARDDBSCHEMA_SET_GROUPID_OFFSET))(arg, nullptr);
		}

	};
}

