#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class CurrencyExcel&; }
namespace FlatData { class CurrencyTypes; }
namespace MX::GameLogic::Parcel { class ParcelInfo&; }

#define MX_DATA_CURRENCYDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18B45F0)
#define MX_DATA_CURRENCYDATA_PREPAREINITIALIZEDATA_OFFSET UNITYSDK_OFFSET(0x18B4690)
#define MX_DATA_CURRENCYDATA_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x18B51F0)
#define MX_DATA_CURRENCYDATA_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x18B5390)
#define MX_DATA_CURRENCYDATA_GETCURRENCYSPRITENAME_OFFSET UNITYSDK_OFFSET(0x18B53F0)
#define MX_DATA_CURRENCYDATA_GETCURRENCYTEXTURENAME_OFFSET UNITYSDK_OFFSET(0x18B54A0)
#define MX_DATA_CURRENCYDATA_GETCURRENCYCURRENCYOVERDAYMAX_OFFSET UNITYSDK_OFFSET(0x18B5550)
#define MX_DATA_CURRENCYDATA_GETCURRENTCURRENCYWITHCHARGELIMIT_OFFSET UNITYSDK_OFFSET(0x18B5780)
#define MX_DATA_CURRENCYDATA_GET_IDS_OFFSET UNITYSDK_OFFSET(0x18B5900)
#define MX_DATA_CURRENCYDATA_TRYGETCONTENTENTERCOSTREDUCEINFOS_OFFSET UNITYSDK_OFFSET(0x18B5A40)
#define MX_DATA_CURRENCYDATA_TRYGETEXPIRATIONDATETIME_OFFSET UNITYSDK_OFFSET(0x18B5AA0)
#define MX_DATA_CURRENCYDATA_TRYGETEXPIRYCHANGEPARCELINFO_OFFSET UNITYSDK_OFFSET(0x18B5B00)
#define MX_DATA_CURRENCYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18B5B60)

namespace MX::Data
{
	inline static constexpr unsigned int CurrencyData_TypeDefinitionIndex = 16046;

	class CurrencyData : public Il2CppObject
	{
	public:
		Il2CppObject* dictionaryByType; // 0x28
		Il2CppObject* expirationDateTimeByType; // 0x30
		Il2CppObject* expiryChangeParcelByType; // 0x38
		Il2CppObject* enterCostReduceExcels; // 0x40
		Il2CppObject* enterCostReduceInfoDic; // 0x48

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CURRENCYDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void PrepareInitializeData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CURRENCYDATA_PREPAREINITIALIZEDATA_OFFSET))(nullptr);
		}

		::System::Boolean TryGetValue(::System::Int64 arg, ::MX::Data::Excel::CurrencyExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::CurrencyExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CURRENCYDATA_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(::FlatData::CurrencyTypes* arg, ::MX::Data::Excel::CurrencyExcel&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::CurrencyTypes*, ::MX::Data::Excel::CurrencyExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CURRENCYDATA_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetCurrencySpriteName(::FlatData::CurrencyTypes* arg)
		{
			return (return (::System::String*(*)(::FlatData::CurrencyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CURRENCYDATA_GETCURRENCYSPRITENAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetCurrencyTextureName(::FlatData::CurrencyTypes* arg)
		{
			return (return (::System::String*(*)(::FlatData::CurrencyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CURRENCYDATA_GETCURRENCYTEXTURENAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetCurrencyCurrencyOverDayMax(::FlatData::CurrencyTypes* arg)
		{
			return (return (::System::String*(*)(::FlatData::CurrencyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CURRENCYDATA_GETCURRENCYCURRENCYOVERDAYMAX_OFFSET))(arg, nullptr);
		}

		::System::String* GetCurrentCurrencyWithChargeLimit(::FlatData::CurrencyTypes* arg)
		{
			return (return (::System::String*(*)(::FlatData::CurrencyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CURRENCYDATA_GETCURRENTCURRENCYWITHCHARGELIMIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Ids()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CURRENCYDATA_GET_IDS_OFFSET))(nullptr);
		}

		::System::Boolean TryGetContentEnterCostReduceInfos(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CURRENCYDATA_TRYGETCONTENTENTERCOSTREDUCEINFOS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetExpirationDateTime(::FlatData::CurrencyTypes* arg, ::System::DateTime&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::CurrencyTypes*, ::System::DateTime&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CURRENCYDATA_TRYGETEXPIRATIONDATETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetExpiryChangeParcelInfo(::FlatData::CurrencyTypes* arg, ::MX::GameLogic::Parcel::ParcelInfo&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::CurrencyTypes*, ::MX::GameLogic::Parcel::ParcelInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CURRENCYDATA_TRYGETEXPIRYCHANGEPARCELINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CURRENCYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

