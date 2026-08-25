#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ProductionStep; }

#define MX_DATA_EXCEL_CHARACTERDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A25390)
#define MX_DATA_EXCEL_CHARACTERDBSCHEMA_GET_PRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x1A253A0)
#define MX_DATA_EXCEL_CHARACTERDBSCHEMA_SET_MAINCOMBATSTYLEID_OFFSET UNITYSDK_OFFSET(0x1A253B0)
#define MX_DATA_EXCEL_CHARACTERDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1A253C0)
#define MX_DATA_EXCEL_CHARACTERDBSCHEMA_GET_MAINCOMBATSTYLEID_OFFSET UNITYSDK_OFFSET(0x1A253D0)
#define MX_DATA_EXCEL_CHARACTERDBSCHEMA_SET_PRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x1A253E0)
#define MX_DATA_EXCEL_CHARACTERDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A253F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterDBSchema_TypeDefinitionIndex = 17001;

	class CharacterDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20
		::FlatData::ProductionStep* _ProductionStep_k__BackingField; // 0x28
		::System::Int64 _MainCombatStyleId_k__BackingField; // 0x30

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::ProductionStep* get_ProductionStep()
		{
			return (return (::FlatData::ProductionStep*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDBSCHEMA_GET_PRODUCTIONSTEP_OFFSET))(nullptr);
		}

		::System::Void set_MainCombatStyleId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDBSCHEMA_SET_MAINCOMBATSTYLEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MainCombatStyleId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDBSCHEMA_GET_MAINCOMBATSTYLEID_OFFSET))(nullptr);
		}

		::System::Void set_ProductionStep(::FlatData::ProductionStep* arg)
		{
			((::System::Void(*)(::FlatData::ProductionStep*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDBSCHEMA_SET_PRODUCTIONSTEP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

