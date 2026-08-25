#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class PotentialStatBonusRateType; }

#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A2E620)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1A2E880)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1A2EBA0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1A2EEA0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCELREPOSITORY_SELECTFIRST_ID_POTENTIALSTATBONUSRATETYPE_OFFSET UNITYSDK_OFFSET(0x1A2F2A0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCELREPOSITORY_SELECT_ID_POTENTIALSTATBONUSRATETYPE_OFFSET UNITYSDK_OFFSET(0x1A2F6E0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCELREPOSITORY_SELECT_ID_POTENTIALSTATBONUSRATETYPE_OFFSET UNITYSDK_OFFSET(0x1A2FB10)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A300B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterPotentialExcelRepository_TypeDefinitionIndex = 17057;

	class CharacterPotentialExcelRepository : public ::FlatData::DailyRefillType
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id_PotentialStatBonusRateType(::System::Int64 arg, ::FlatData::PotentialStatBonusRateType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::PotentialStatBonusRateType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCELREPOSITORY_SELECTFIRST_ID_POTENTIALSTATBONUSRATETYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_Id_PotentialStatBonusRateType(::System::Int64 arg, ::FlatData::PotentialStatBonusRateType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::PotentialStatBonusRateType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCELREPOSITORY_SELECT_ID_POTENTIALSTATBONUSRATETYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_Id_PotentialStatBonusRateType(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCELREPOSITORY_SELECT_ID_POTENTIALSTATBONUSRATETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

