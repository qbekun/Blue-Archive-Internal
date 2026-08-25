#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ProductionStep; }

#define MX_DATA_EXCEL_CHARACTEREXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A25400)
#define MX_DATA_EXCEL_CHARACTEREXCELREPOSITORY_SELECTFIRST_MAINCOMBATSTYLEID_OFFSET UNITYSDK_OFFSET(0x1A25440)
#define MX_DATA_EXCEL_CHARACTEREXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A25760)
#define MX_DATA_EXCEL_CHARACTEREXCELREPOSITORY_SELECT_MAINCOMBATSTYLEIDS_OFFSET UNITYSDK_OFFSET(0x1A25AC0)
#define MX_DATA_EXCEL_CHARACTEREXCELREPOSITORY_SELECTFIRST_PRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x1A25ED0)
#define MX_DATA_EXCEL_CHARACTEREXCELREPOSITORY_SELECT_MAINCOMBATSTYLEID_OFFSET UNITYSDK_OFFSET(0x1A26240)
#define MX_DATA_EXCEL_CHARACTEREXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1A26550)
#define MX_DATA_EXCEL_CHARACTEREXCELREPOSITORY_SELECT_PRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x1A26850)
#define MX_DATA_EXCEL_CHARACTEREXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1A26BA0)
#define MX_DATA_EXCEL_CHARACTEREXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1A26EC0)
#define MX_DATA_EXCEL_CHARACTEREXCELREPOSITORY_SELECT_PRODUCTIONSTEPS_OFFSET UNITYSDK_OFFSET(0x1A272C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterExcelRepository_TypeDefinitionIndex = 17012;

	class CharacterExcelRepository : public ::FlatData::CurrencyOverChargeType
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_MainCombatStyleId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCELREPOSITORY_SELECTFIRST_MAINCOMBATSTYLEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_MainCombatStyleIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCELREPOSITORY_SELECT_MAINCOMBATSTYLEIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_ProductionStep(::FlatData::ProductionStep* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ProductionStep*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCELREPOSITORY_SELECTFIRST_PRODUCTIONSTEP_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_MainCombatStyleId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCELREPOSITORY_SELECT_MAINCOMBATSTYLEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ProductionStep(::FlatData::ProductionStep* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ProductionStep*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCELREPOSITORY_SELECT_PRODUCTIONSTEP_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ProductionSteps(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTEREXCELREPOSITORY_SELECT_PRODUCTIONSTEPS_OFFSET))(arg, arg, nullptr);
		}

	};
}

