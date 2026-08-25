#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Parcel { class CurrencySnapshot; }

#define MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_GET_ACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0xFE13D0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_SET_ACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0xFE13E0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_GET_ACADEMYLOCATIONRANKSUM_OFFSET UNITYSDK_OFFSET(0xFE13F0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_SET_ACADEMYLOCATIONRANKSUM_OFFSET UNITYSDK_OFFSET(0xFE1400)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_GET_CURRENCYDICT_OFFSET UNITYSDK_OFFSET(0xFE1410)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_SET_CURRENCYDICT_OFFSET UNITYSDK_OFFSET(0xFE1420)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_SHOULDSERIALIZECURRENCYDICT_OFFSET UNITYSDK_OFFSET(0xFE1430)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_GET_UPDATETIMEDICT_OFFSET UNITYSDK_OFFSET(0xFE1470)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_SET_UPDATETIMEDICT_OFFSET UNITYSDK_OFFSET(0xFE1480)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_SHOULDSERIALIZEUPDATETIMEDICT_OFFSET UNITYSDK_OFFSET(0xFE1490)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_CREATESNAPSHOT_OFFSET UNITYSDK_OFFSET(0xFE14D0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE1530)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE1600)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int AccountCurrencyDB_TypeDefinitionIndex = 12472;

	class AccountCurrencyDB : public Il2CppObject
	{
	public:
		::System::Int64 _AccountLevel_k__BackingField; // 0x10
		::System::Int64 _AcademyLocationRankSum_k__BackingField; // 0x18
		Il2CppObject* _CurrencyDict_k__BackingField; // 0x20
		Il2CppObject* _UpdateTimeDict_k__BackingField; // 0x28

		::System::Int64 get_AccountLevel()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_GET_ACCOUNTLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_AccountLevel(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_SET_ACCOUNTLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AcademyLocationRankSum()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_GET_ACADEMYLOCATIONRANKSUM_OFFSET))(nullptr);
		}

		::System::Void set_AcademyLocationRankSum(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_SET_ACADEMYLOCATIONRANKSUM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CurrencyDict()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_GET_CURRENCYDICT_OFFSET))(nullptr);
		}

		::System::Void set_CurrencyDict(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_SET_CURRENCYDICT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeCurrencyDict()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_SHOULDSERIALIZECURRENCYDICT_OFFSET))(nullptr);
		}

		Il2CppObject* get_UpdateTimeDict()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_GET_UPDATETIMEDICT_OFFSET))(nullptr);
		}

		::System::Void set_UpdateTimeDict(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_SET_UPDATETIMEDICT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeUpdateTimeDict()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_SHOULDSERIALIZEUPDATETIMEDICT_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::CurrencySnapshot* CreateSnapshot(::System::DateTime* arg)
		{
			return ((::MX::GameLogic::Parcel::CurrencySnapshot*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_CREATESNAPSHOT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTCURRENCYDB_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

