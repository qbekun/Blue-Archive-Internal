#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountCurrencyDB; }
namespace MX::GameLogic::DBModel { class MonthlyProductPurchaseDB; }
namespace FlatData { class ContentType; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define ACCOUNTCURRENCYINFO_GET_DBCACHE_OFFSET UNITYSDK_OFFSET(0x181C760)
#define ACCOUNTCURRENCYINFO_SET_DBCACHE_OFFSET UNITYSDK_OFFSET(0x181C770)
#define ACCOUNTCURRENCYINFO_GET_EXPIRED_OFFSET UNITYSDK_OFFSET(0x181C780)
#define ACCOUNTCURRENCYINFO_SET_EXPIRED_OFFSET UNITYSDK_OFFSET(0x181C790)
#define ACCOUNTCURRENCYINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x181C7A0)
#define ACCOUNTCURRENCYINFO_SYNCCURRENCY_OFFSET UNITYSDK_OFFSET(0x181C7C0)
#define ACCOUNTCURRENCYINFO_SETMONTHLYPRODUCTREDUCE_OFFSET UNITYSDK_OFFSET(0x181C890)
#define ACCOUNTCURRENCYINFO_SETMONTHLYPRODUCTREDUCE_OFFSET UNITYSDK_OFFSET(0x181CA40)
#define ACCOUNTCURRENCYINFO_ADDORREPLACEMONTHLYPRODUCTREDUCE_OFFSET UNITYSDK_OFFSET(0x181CD40)
#define ACCOUNTCURRENCYINFO_GETMONTHLYPRODUCTREDUCEAMOUNT_OFFSET UNITYSDK_OFFSET(0x181CD50)
#define ACCOUNTCURRENCYINFO_GETSHORTEXPIRED_OFFSET UNITYSDK_OFFSET(0x181D0B0)
#define ACCOUNTCURRENCYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x181D5E0)

	inline static constexpr unsigned int AccountCurrencyInfo_TypeDefinitionIndex = 1280;

	class AccountCurrencyInfo : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::AccountCurrencyDB* _DBCache_k__BackingField; // 0x10
		Il2CppObject* costReduceInfoList; // 0x18
		Il2CppObject* _Expired_k__BackingField; // 0x20

		::MX::GameLogic::DBModel::AccountCurrencyDB* get_DBCache()
		{
			return ((::MX::GameLogic::DBModel::AccountCurrencyDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCURRENCYINFO_GET_DBCACHE_OFFSET))(nullptr);
		}

		::System::Void set_DBCache(::MX::GameLogic::DBModel::AccountCurrencyDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountCurrencyDB*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCURRENCYINFO_SET_DBCACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Expired()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCURRENCYINFO_GET_EXPIRED_OFFSET))(nullptr);
		}

		::System::Void set_Expired(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCURRENCYINFO_SET_EXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCURRENCYINFO_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void SyncCurrency(::MX::GameLogic::DBModel::AccountCurrencyDB* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountCurrencyDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCURRENCYINFO_SYNCCURRENCY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetMonthlyProductReduce(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCURRENCYINFO_SETMONTHLYPRODUCTREDUCE_OFFSET))(arg, nullptr);
		}

		::System::Void SetMonthlyProductReduce(::MX::GameLogic::DBModel::MonthlyProductPurchaseDB* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MonthlyProductPurchaseDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCURRENCYINFO_SETMONTHLYPRODUCTREDUCE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddOrReplaceMonthlyProductReduce(::MX::GameLogic::DBModel::MonthlyProductPurchaseDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MonthlyProductPurchaseDB*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCURRENCYINFO_ADDORREPLACEMONTHLYPRODUCTREDUCE_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetMonthlyProductReduceAmount(::FlatData::ContentType* arg, ::System::Int64 arg2, ::MX::GameLogic::Parcel::ParcelInfo* arg3)
		{
			return ((::System::Int64(*)(::FlatData::ContentType*, ::System::Int64, ::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCURRENCYINFO_GETMONTHLYPRODUCTREDUCEAMOUNT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetShortExpired()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCURRENCYINFO_GETSHORTEXPIRED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCURRENCYINFO_.CTOR_OFFSET))(nullptr);
		}

	};

