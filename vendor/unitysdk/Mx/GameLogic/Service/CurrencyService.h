#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Parcel { class CurrencySnapshot; }
namespace MX::GameLogic::DBModel { class AccountCurrencyDB; }
namespace MX::GameLogic::Parcel { class CurrencyTransaction; }
namespace FlatData { class CurrencyTypes; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_CURRENTVALUEWITHAUTOCHARGE_OFFSET UNITYSDK_OFFSET(0xF9D950)
#define MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_CURRENTVALUEWITHDAILYREFILL_OFFSET UNITYSDK_OFFSET(0xF9DB60)
#define MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_CALCREFILLCOUNT_OFFSET UNITYSDK_OFFSET(0xF9DC70)
#define MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_CURRENTCURRENCYSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xF9E2B0)
#define MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_MAKELOCALUPDATE_OFFSET UNITYSDK_OFFSET(0xF9E320)
#define MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_GETCURRENTCURRENCYVALUES_OFFSET UNITYSDK_OFFSET(0xF9E530)
#define MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_GETMAXCHARGEANDREFILL_OFFSET UNITYSDK_OFFSET(0xF9ECA0)
#define MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_CALCDELTACURRENCY_OFFSET UNITYSDK_OFFSET(0xF9F3A0)
#define MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_CALCDELTAVALUE_OFFSET UNITYSDK_OFFSET(0xF9F5D0)
#define MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_CALCCURRENCYVALUESAFTERREWARD_OFFSET UNITYSDK_OFFSET(0xF9F670)
#define MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_GETCURRENCYVALUESAFTERPAYCOST_OFFSET UNITYSDK_OFFSET(0xF9FBA0)
#define MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_CALCREFUNDAMOUNT_OFFSET UNITYSDK_OFFSET(0xF98930)
#define MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_CALCREFUNDAMOUNTBYSUBEVENT_OFFSET UNITYSDK_OFFSET(0xF98A50)
#define MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_GETEXPIREDTICKETCURRENCY_OFFSET UNITYSDK_OFFSET(0xFA01A0)
#define MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_EXPIREDCHANGECURRENCY_OFFSET UNITYSDK_OFFSET(0xFA0650)
#define MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_EXPIREDCHANGECURRENCY_OFFSET UNITYSDK_OFFSET(0xFA08A0)
#define MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_DIVIDEANDFILLLIMIT_OFFSET UNITYSDK_OFFSET(0xFA09C0)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int CurrencyService_TypeDefinitionIndex = 12311;

	class CurrencyService : public Il2CppObject
	{
	public:
		::System::Int64 CurrentValueWithAutoCharge(::System::Int64 arg, ::System::DateTime* arg2, ::System::DateTime* arg3, ::System::Int32 arg4, ::System::Int32 arg5, ::System::Int64 arg6, ::System::Int64 arg7)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::DateTime*, ::System::DateTime*, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_CURRENTVALUEWITHAUTOCHARGE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Int64 CurrentValueWithDailyRefill(::System::Int64 arg, ::System::DateTime* arg2, ::System::DateTime* arg3, Il2CppObject* arg4, ::System::Int64 arg5, ::System::Int64 arg6, ::System::Int64 arg7)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::DateTime*, ::System::DateTime*, Il2CppObject*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_CURRENTVALUEWITHDAILYREFILL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Int32 CalcRefillCount(::System::DateTime* arg, ::System::DateTime* arg2, Il2CppObject* arg3)
		{
			return ((::System::Int32(*)(::System::DateTime*, ::System::DateTime*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_CALCREFILLCOUNT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::Parcel::CurrencySnapshot* CurrentCurrencySnapshot(::MX::GameLogic::DBModel::AccountCurrencyDB* arg, ::System::DateTime* arg2)
		{
			return ((::MX::GameLogic::Parcel::CurrencySnapshot*(*)(::MX::GameLogic::DBModel::AccountCurrencyDB*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_CURRENTCURRENCYSNAPSHOT_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::AccountCurrencyDB* MakeLocalUpdate(::MX::GameLogic::DBModel::AccountCurrencyDB* arg, ::System::DateTime* arg2)
		{
			return ((::MX::GameLogic::DBModel::AccountCurrencyDB*(*)(::MX::GameLogic::DBModel::AccountCurrencyDB*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_MAKELOCALUPDATE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetCurrentCurrencyValues(::MX::GameLogic::DBModel::AccountCurrencyDB* arg, ::System::DateTime* arg2)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::DBModel::AccountCurrencyDB*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_GETCURRENTCURRENCYVALUES_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetMaxChargeAndRefill(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_GETMAXCHARGEANDREFILL_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* CalcDeltaCurrency(::MX::GameLogic::Parcel::CurrencySnapshot* arg, ::MX::GameLogic::DBModel::AccountCurrencyDB* arg2)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::Parcel::CurrencySnapshot*, ::MX::GameLogic::DBModel::AccountCurrencyDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_CALCDELTACURRENCY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 CalcDeltaValue(::MX::GameLogic::Parcel::CurrencySnapshot* arg, ::MX::GameLogic::Parcel::CurrencyTransaction* arg2, ::FlatData::CurrencyTypes* arg3)
		{
			return ((::System::Int64(*)(::MX::GameLogic::Parcel::CurrencySnapshot*, ::MX::GameLogic::Parcel::CurrencyTransaction*, ::FlatData::CurrencyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_CALCDELTAVALUE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void CalcCurrencyValuesAfterReward(Il2CppObject* arg, ::MX::GameLogic::Parcel::CurrencyTransaction* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::GameLogic::Parcel::CurrencyTransaction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_CALCCURRENCYVALUESAFTERREWARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void GetCurrencyValuesAfterPayCost(Il2CppObject* arg, ::MX::GameLogic::Parcel::CurrencyTransaction* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::GameLogic::Parcel::CurrencyTransaction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_GETCURRENCYVALUESAFTERPAYCOST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 CalcRefundAmount(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_CALCREFUNDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 CalcRefundAmountBySubEvent(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_CALCREFUNDAMOUNTBYSUBEVENT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetExpiredTicketCurrency(::MX::GameLogic::DBModel::AccountCurrencyDB* arg, ::System::DateTime* arg2)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::DBModel::AccountCurrencyDB*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_GETEXPIREDTICKETCURRENCY_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* ExpiredChangeCurrency(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_EXPIREDCHANGECURRENCY_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* ExpiredChangeCurrency(::FlatData::CurrencyTypes* arg, ::System::Int64 arg2)
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::FlatData::CurrencyTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_EXPIREDCHANGECURRENCY_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DivideAndFillLimit(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CURRENCYSERVICE_DIVIDEANDFILLLIMIT_OFFSET))(arg, nullptr);
		}

	};
}

