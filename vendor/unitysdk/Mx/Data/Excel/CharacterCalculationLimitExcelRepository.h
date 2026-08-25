#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class TacticEntityType; }
namespace FlatData { class BattleCalculationStat; }

#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A0C9D0)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCELREPOSITORY_SELECTFIRST_TACTICENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x1A0CC30)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCELREPOSITORY_SELECT_TACTICENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x1A0CF90)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCELREPOSITORY_SELECT_TACTICENTITYTYPES_OFFSET UNITYSDK_OFFSET(0x1A0D2E0)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCELREPOSITORY_SELECTFIRST_TACTICENTITYTYPE_CALCULATIONVALUE_OFFSET UNITYSDK_OFFSET(0x1A0D6E0)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCELREPOSITORY_SELECT_TACTICENTITYTYPE_CALCULATIONVALUE_OFFSET UNITYSDK_OFFSET(0x1A0DB60)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCELREPOSITORY_SELECT_TACTICENTITYTYPE_CALCULATIONVALUE_OFFSET UNITYSDK_OFFSET(0x1A0DFD0)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A0E570)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterCalculationLimitExcelRepository_TypeDefinitionIndex = 16933;

	class CharacterCalculationLimitExcelRepository : public ::FlatData::ConditionType
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_TacticEntityType(::FlatData::TacticEntityType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::TacticEntityType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCELREPOSITORY_SELECTFIRST_TACTICENTITYTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_TacticEntityType(::FlatData::TacticEntityType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::TacticEntityType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCELREPOSITORY_SELECT_TACTICENTITYTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_TacticEntityTypes(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCELREPOSITORY_SELECT_TACTICENTITYTYPES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_TacticEntityType_CalculationValue(::FlatData::TacticEntityType* arg, ::FlatData::BattleCalculationStat* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::TacticEntityType*, ::FlatData::BattleCalculationStat*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCELREPOSITORY_SELECTFIRST_TACTICENTITYTYPE_CALCULATIONVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_TacticEntityType_CalculationValue(::FlatData::TacticEntityType* arg, ::FlatData::BattleCalculationStat* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::TacticEntityType*, ::FlatData::BattleCalculationStat*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCELREPOSITORY_SELECT_TACTICENTITYTYPE_CALCULATIONVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_TacticEntityType_CalculationValue(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCELREPOSITORY_SELECT_TACTICENTITYTYPE_CALCULATIONVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

