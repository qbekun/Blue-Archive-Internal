#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class SchoolDungeonStageExcel&; }
namespace FlatData { class EchelonType; }
namespace MX::Data::Excel { class SchoolDungeonStageExcel; }
namespace FlatData { class CurrencyTypes; }
namespace FlatData { class SchoolDungeonType; }

#define MX_DATA_SCHOOLDUNGEONDATA_SET_SCHOOLDUNGEONSTAGELIST_OFFSET UNITYSDK_OFFSET(0x193D4F0)
#define MX_DATA_SCHOOLDUNGEONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x193D500)
#define MX_DATA_SCHOOLDUNGEONDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x193D690)
#define MX_DATA_SCHOOLDUNGEONDATA_TRYGETENTERMINIMUMCOSTS_OFFSET UNITYSDK_OFFSET(0x193E9E0)
#define MX_DATA_SCHOOLDUNGEONDATA_TRYGETREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x193EA40)
#define MX_DATA_SCHOOLDUNGEONDATA_TRYGETENTERCOST_OFFSET UNITYSDK_OFFSET(0x193EAA0)
#define MX_DATA_SCHOOLDUNGEONDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x193D730)
#define MX_DATA_SCHOOLDUNGEONDATA_GET_SCHOOLDUNGEONSTAGELIST_OFFSET UNITYSDK_OFFSET(0x193EB00)
#define MX_DATA_SCHOOLDUNGEONDATA_TRYGETDUNGEONEXCEL_OFFSET UNITYSDK_OFFSET(0x193EB10)
#define MX_DATA_SCHOOLDUNGEONDATA_GETECHELONTYPEFORSCHOOLDUNGEONSTAGE_OFFSET UNITYSDK_OFFSET(0x193EB70)
#define MX_DATA_SCHOOLDUNGEONDATA_TRYGETDISPLAYEDREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x193EC20)
#define MX_DATA_SCHOOLDUNGEONDATA_GETCURRENCYTYPE_OFFSET UNITYSDK_OFFSET(0x193EC80)
#define MX_DATA_SCHOOLDUNGEONDATA_ISOPEN_OFFSET UNITYSDK_OFFSET(0x193EC90)
#define MX_DATA_SCHOOLDUNGEONDATA_FINDDUNGEONS_OFFSET UNITYSDK_OFFSET(0x193ED40)

namespace MX::Data
{
	inline static constexpr unsigned int SchoolDungeonData_TypeDefinitionIndex = 16371;

	class SchoolDungeonData : public Il2CppObject
	{
	public:
		Il2CppObject* schoolDungeonStage; // 0x28
		Il2CppObject* schoolDungeonReward; // 0x30
		Il2CppObject* displayedSchoolDungeonReward; // 0x38
		Il2CppObject* schoolDungeonCost; // 0x40
		Il2CppObject* schoolDungeonMinimumCost; // 0x48
		::Il2CppArray<::System::Object*>* _SchoolDungeonStageList_k__BackingField; // 0x50

		::System::Void set_SchoolDungeonStageList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCHOOLDUNGEONDATA_SET_SCHOOLDUNGEONSTAGELIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCHOOLDUNGEONDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCHOOLDUNGEONDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetEnterMinimumCosts(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCHOOLDUNGEONDATA_TRYGETENTERMINIMUMCOSTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetRewardParcels(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCHOOLDUNGEONDATA_TRYGETREWARDPARCELS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetEnterCost(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCHOOLDUNGEONDATA_TRYGETENTERCOST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCHOOLDUNGEONDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_SchoolDungeonStageList()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCHOOLDUNGEONDATA_GET_SCHOOLDUNGEONSTAGELIST_OFFSET))(nullptr);
		}

		::System::Boolean TryGetDungeonExcel(::System::Int64 arg, ::MX::Data::Excel::SchoolDungeonStageExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::SchoolDungeonStageExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCHOOLDUNGEONDATA_TRYGETDUNGEONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::EchelonType* GetEchelonTypeForSchoolDungeonStage(::MX::Data::Excel::SchoolDungeonStageExcel* arg)
		{
			return (return (::FlatData::EchelonType*(*)(::MX::Data::Excel::SchoolDungeonStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCHOOLDUNGEONDATA_GETECHELONTYPEFORSCHOOLDUNGEONSTAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetDisplayedRewardParcels(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCHOOLDUNGEONDATA_TRYGETDISPLAYEDREWARDPARCELS_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::CurrencyTypes* GetCurrencyType(::FlatData::SchoolDungeonType* arg)
		{
			return (return (::FlatData::CurrencyTypes*(*)(::FlatData::SchoolDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCHOOLDUNGEONDATA_GETCURRENCYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOpen(::System::DateTime* arg, ::FlatData::SchoolDungeonType* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::FlatData::SchoolDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCHOOLDUNGEONDATA_ISOPEN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* FindDungeons(::FlatData::SchoolDungeonType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::SchoolDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCHOOLDUNGEONDATA_FINDDUNGEONS_OFFSET))(arg, nullptr);
		}

	};
}

