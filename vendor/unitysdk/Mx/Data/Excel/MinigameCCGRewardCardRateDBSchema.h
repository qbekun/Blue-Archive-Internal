#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEDBSCHEMA_SET_RARITYGROUPID_OFFSET UNITYSDK_OFFSET(0x1BA0760)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BA0770)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEDBSCHEMA_GET_RARITYGROUPID_OFFSET UNITYSDK_OFFSET(0x1BA0780)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGRewardCardRateDBSchema_TypeDefinitionIndex = 18538;

	class MinigameCCGRewardCardRateDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _RarityGroupId_k__BackingField; // 0x20

		::System::Void set_RarityGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEDBSCHEMA_SET_RARITYGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_RarityGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEDBSCHEMA_GET_RARITYGROUPID_OFFSET))(nullptr);
		}

	};
}

