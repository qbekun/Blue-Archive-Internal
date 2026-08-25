#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class TacticEntityType; }
namespace FlatData { class BattleCalculationStat; }

#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A0C980)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITDBSCHEMA_SET_TACTICENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x1A0C990)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITDBSCHEMA_GET_CALCULATIONVALUE_OFFSET UNITYSDK_OFFSET(0x1A0C9A0)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITDBSCHEMA_GET_TACTICENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x1A0C9B0)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITDBSCHEMA_SET_CALCULATIONVALUE_OFFSET UNITYSDK_OFFSET(0x1A0C9C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterCalculationLimitDBSchema_TypeDefinitionIndex = 16925;

	class CharacterCalculationLimitDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::TacticEntityType* _TacticEntityType_k__BackingField; // 0x20
		::FlatData::BattleCalculationStat* _CalculationValue_k__BackingField; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_TacticEntityType(::FlatData::TacticEntityType* arg)
		{
			((::System::Void(*)(::FlatData::TacticEntityType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITDBSCHEMA_SET_TACTICENTITYTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::BattleCalculationStat* get_CalculationValue()
		{
			return (return (::FlatData::BattleCalculationStat*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITDBSCHEMA_GET_CALCULATIONVALUE_OFFSET))(nullptr);
		}

		::FlatData::TacticEntityType* get_TacticEntityType()
		{
			return (return (::FlatData::TacticEntityType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITDBSCHEMA_GET_TACTICENTITYTYPE_OFFSET))(nullptr);
		}

		::System::Void set_CalculationValue(::FlatData::BattleCalculationStat* arg)
		{
			((::System::Void(*)(::FlatData::BattleCalculationStat*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITDBSCHEMA_SET_CALCULATIONVALUE_OFFSET))(arg, nullptr);
		}

	};
}

