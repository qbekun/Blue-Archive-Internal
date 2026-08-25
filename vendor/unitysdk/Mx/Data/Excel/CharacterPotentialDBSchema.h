#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class PotentialStatBonusRateType; }

#define MX_DATA_EXCEL_CHARACTERPOTENTIALDBSCHEMA_GET_POTENTIALSTATBONUSRATETYPE_OFFSET UNITYSDK_OFFSET(0x1A2E5D0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALDBSCHEMA_SET_POTENTIALSTATBONUSRATETYPE_OFFSET UNITYSDK_OFFSET(0x1A2E5E0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A2E5F0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1A2E600)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A2E610)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterPotentialDBSchema_TypeDefinitionIndex = 17049;

	class CharacterPotentialDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20
		::FlatData::PotentialStatBonusRateType* _PotentialStatBonusRateType_k__BackingField; // 0x28

		::FlatData::PotentialStatBonusRateType* get_PotentialStatBonusRateType()
		{
			return (return (::FlatData::PotentialStatBonusRateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALDBSCHEMA_GET_POTENTIALSTATBONUSRATETYPE_OFFSET))(nullptr);
		}

		::System::Void set_PotentialStatBonusRateType(::FlatData::PotentialStatBonusRateType* arg)
		{
			((::System::Void(*)(::FlatData::PotentialStatBonusRateType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALDBSCHEMA_SET_POTENTIALSTATBONUSRATETYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

	};
}

