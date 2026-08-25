#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CurrencyExcel; }
namespace FlatData { class CurrencyTypes; }
namespace FlatData { class Rarity; }
namespace FlatData { class CurrencyOverChargeType; }
namespace FlatData { class CurrencyAdditionalChargeType; }
namespace FlatData { class DailyRefillType; }
namespace FlatData { class ParcelType; }
namespace FlatData { class PeriodType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CURRENCYEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A7A410)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GETROOTASCURRENCYEXCEL_OFFSET UNITYSDK_OFFSET(0x1A7A420)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GETROOTASCURRENCYEXCEL_OFFSET UNITYSDK_OFFSET(0x1A7A480)
#define MX_DATA_EXCEL_CURRENCYEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A7A510)
#define MX_DATA_EXCEL_CURRENCYEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A7A4E0)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A7A530)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1A7A580)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GET_CURRENCYTYPE_OFFSET UNITYSDK_OFFSET(0x1A7A5D0)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GET_CURRENCYNAME_OFFSET UNITYSDK_OFFSET(0x1A7A620)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GETCURRENCYNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A7A660)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GET_ICON_OFFSET UNITYSDK_OFFSET(0x1A7A680)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GETICONBYTES_OFFSET UNITYSDK_OFFSET(0x1A7A6C0)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1A7A6E0)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GET_AUTOCHARGEMSC_OFFSET UNITYSDK_OFFSET(0x1A7A730)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GET_AUTOCHARGEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A7A780)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GET_CURRENCYOVERCHARGETYPE_OFFSET UNITYSDK_OFFSET(0x1A7A7D0)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GET_CURRENCYADDITIONALCHARGETYPE_OFFSET UNITYSDK_OFFSET(0x1A7A820)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GET_CHARGELIMIT_OFFSET UNITYSDK_OFFSET(0x1A7A870)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GET_OVERCHARGELIMIT_OFFSET UNITYSDK_OFFSET(0x1A7A8C0)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GET_SPRITENAME_OFFSET UNITYSDK_OFFSET(0x1A7A910)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GETSPRITENAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A7A950)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GET_DAILYREFILLTYPE_OFFSET UNITYSDK_OFFSET(0x1A7A970)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GET_DAILYREFILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A7A9C0)
#define MX_DATA_EXCEL_CURRENCYEXCEL_DAILYREFILLTIME_OFFSET UNITYSDK_OFFSET(0x1A7AA10)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GET_DAILYREFILLTIMELENGTH_OFFSET UNITYSDK_OFFSET(0x1A7AA70)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GETDAILYREFILLTIMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A7AAB0)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GET_EXPIRATIONDATETIME_OFFSET UNITYSDK_OFFSET(0x1A7AAD0)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GETEXPIRATIONDATETIMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A7AB10)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GET_EXPIRATIONNOTIFYDATEIN_OFFSET UNITYSDK_OFFSET(0x1A7AB30)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GET_EXPIRYCHANGEPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A7AB80)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GET_EXPIRYCHANGEID_OFFSET UNITYSDK_OFFSET(0x1A7ABD0)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GET_EXPIRYCHANGEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A7AC20)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GET_RESETTYPE_OFFSET UNITYSDK_OFFSET(0x1A7AC70)
#define MX_DATA_EXCEL_CURRENCYEXCEL_GET_RESETAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A7ACC0)
#define MX_DATA_EXCEL_CURRENCYEXCEL_CREATECURRENCYEXCEL_OFFSET UNITYSDK_OFFSET(0x1A7AD10)
#define MX_DATA_EXCEL_CURRENCYEXCEL_STARTCURRENCYEXCEL_OFFSET UNITYSDK_OFFSET(0x1A7B590)
#define MX_DATA_EXCEL_CURRENCYEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A7B210)
#define MX_DATA_EXCEL_CURRENCYEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1A7B510)
#define MX_DATA_EXCEL_CURRENCYEXCEL_ADDCURRENCYTYPE_OFFSET UNITYSDK_OFFSET(0x1A7B4E0)
#define MX_DATA_EXCEL_CURRENCYEXCEL_ADDCURRENCYNAME_OFFSET UNITYSDK_OFFSET(0x1A7B4B0)
#define MX_DATA_EXCEL_CURRENCYEXCEL_ADDICON_OFFSET UNITYSDK_OFFSET(0x1A7B480)
#define MX_DATA_EXCEL_CURRENCYEXCEL_ADDRARITY_OFFSET UNITYSDK_OFFSET(0x1A7B450)
#define MX_DATA_EXCEL_CURRENCYEXCEL_ADDAUTOCHARGEMSC_OFFSET UNITYSDK_OFFSET(0x1A7B420)
#define MX_DATA_EXCEL_CURRENCYEXCEL_ADDAUTOCHARGEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A7B3F0)
#define MX_DATA_EXCEL_CURRENCYEXCEL_ADDCURRENCYOVERCHARGETYPE_OFFSET UNITYSDK_OFFSET(0x1A7B3C0)
#define MX_DATA_EXCEL_CURRENCYEXCEL_ADDCURRENCYADDITIONALCHARGETYPE_OFFSET UNITYSDK_OFFSET(0x1A7B390)
#define MX_DATA_EXCEL_CURRENCYEXCEL_ADDCHARGELIMIT_OFFSET UNITYSDK_OFFSET(0x1A7B1E0)
#define MX_DATA_EXCEL_CURRENCYEXCEL_ADDOVERCHARGELIMIT_OFFSET UNITYSDK_OFFSET(0x1A7B1B0)
#define MX_DATA_EXCEL_CURRENCYEXCEL_ADDSPRITENAME_OFFSET UNITYSDK_OFFSET(0x1A7B360)
#define MX_DATA_EXCEL_CURRENCYEXCEL_ADDDAILYREFILLTYPE_OFFSET UNITYSDK_OFFSET(0x1A7B330)
#define MX_DATA_EXCEL_CURRENCYEXCEL_ADDDAILYREFILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A7B180)
#define MX_DATA_EXCEL_CURRENCYEXCEL_ADDDAILYREFILLTIME_OFFSET UNITYSDK_OFFSET(0x1A7B300)
#define MX_DATA_EXCEL_CURRENCYEXCEL_CREATEDAILYREFILLTIMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A7B5B0)
#define MX_DATA_EXCEL_CURRENCYEXCEL_STARTDAILYREFILLTIMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A7B640)
#define MX_DATA_EXCEL_CURRENCYEXCEL_ADDEXPIRATIONDATETIME_OFFSET UNITYSDK_OFFSET(0x1A7B2D0)
#define MX_DATA_EXCEL_CURRENCYEXCEL_ADDEXPIRATIONNOTIFYDATEIN_OFFSET UNITYSDK_OFFSET(0x1A7B2A0)
#define MX_DATA_EXCEL_CURRENCYEXCEL_ADDEXPIRYCHANGEPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A7B270)
#define MX_DATA_EXCEL_CURRENCYEXCEL_ADDEXPIRYCHANGEID_OFFSET UNITYSDK_OFFSET(0x1A7B150)
#define MX_DATA_EXCEL_CURRENCYEXCEL_ADDEXPIRYCHANGEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A7B120)
#define MX_DATA_EXCEL_CURRENCYEXCEL_ADDRESETTYPE_OFFSET UNITYSDK_OFFSET(0x1A7B240)
#define MX_DATA_EXCEL_CURRENCYEXCEL_ADDRESETAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A7B0F0)
#define MX_DATA_EXCEL_CURRENCYEXCEL_ENDCURRENCYEXCEL_OFFSET UNITYSDK_OFFSET(0x1A7B540)
#define MX_DATA_EXCEL_CURRENCYEXCEL_FINISHCURRENCYEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A7B680)
#define MX_DATA_EXCEL_CURRENCYEXCEL_FINISHSIZEPREFIXEDCURRENCYEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A7B6A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CurrencyExcel_TypeDefinitionIndex = 17364;

	class CurrencyExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CurrencyExcel* GetRootAsCurrencyExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CurrencyExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GETROOTASCURRENCYEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CurrencyExcel* GetRootAsCurrencyExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CurrencyExcel* arg)
		{
			return (return (::MX::Data::Excel::CurrencyExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CurrencyExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GETROOTASCURRENCYEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CurrencyExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CurrencyExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_ID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::FlatData::CurrencyTypes* get_CurrencyType()
		{
			return (return (::FlatData::CurrencyTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GET_CURRENCYTYPE_OFFSET))(nullptr);
		}

		::System::String* get_CurrencyName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GET_CURRENCYNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetCurrencyNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GETCURRENCYNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_Icon()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GET_ICON_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GETICONBYTES_OFFSET))(nullptr);
		}

		::FlatData::Rarity* get_Rarity()
		{
			return (return (::FlatData::Rarity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GET_RARITY_OFFSET))(nullptr);
		}

		::System::Int32 get_AutoChargeMsc()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GET_AUTOCHARGEMSC_OFFSET))(nullptr);
		}

		::System::Int32 get_AutoChargeAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GET_AUTOCHARGEAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::CurrencyOverChargeType* get_CurrencyOverChargeType()
		{
			return (return (::FlatData::CurrencyOverChargeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GET_CURRENCYOVERCHARGETYPE_OFFSET))(nullptr);
		}

		::FlatData::CurrencyAdditionalChargeType* get_CurrencyAdditionalChargeType()
		{
			return (return (::FlatData::CurrencyAdditionalChargeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GET_CURRENCYADDITIONALCHARGETYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ChargeLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GET_CHARGELIMIT_OFFSET))(nullptr);
		}

		::System::Int64 get_OverChargeLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GET_OVERCHARGELIMIT_OFFSET))(nullptr);
		}

		::System::String* get_SpriteName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GET_SPRITENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetSpriteNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GETSPRITENAMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::DailyRefillType* get_DailyRefillType()
		{
			return (return (::FlatData::DailyRefillType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GET_DAILYREFILLTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_DailyRefillAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GET_DAILYREFILLAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 DailyRefillTime(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_DAILYREFILLTIME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DailyRefillTimeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GET_DAILYREFILLTIMELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetDailyRefillTimeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GETDAILYREFILLTIMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ExpirationDateTime()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GET_EXPIRATIONDATETIME_OFFSET))(nullptr);
		}

		Il2CppObject* GetExpirationDateTimeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GETEXPIRATIONDATETIMEBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_ExpirationNotifyDateIn()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GET_EXPIRATIONNOTIFYDATEIN_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ExpiryChangeParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GET_EXPIRYCHANGEPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ExpiryChangeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GET_EXPIRYCHANGEID_OFFSET))(nullptr);
		}

		::System::Int64 get_ExpiryChangeAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GET_EXPIRYCHANGEAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::PeriodType* get_ResetType()
		{
			return (return (::FlatData::PeriodType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GET_RESETTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ResetAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_GET_RESETAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCurrencyExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatData::CurrencyTypes* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::Rarity* arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatData::CurrencyOverChargeType* arg, ::FlatData::CurrencyAdditionalChargeType* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatData::DailyRefillType* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::PeriodType* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::UInt32, ::FlatData::CurrencyTypes*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::Rarity*, ::System::Int32, ::System::Int32, ::FlatData::CurrencyOverChargeType*, ::FlatData::CurrencyAdditionalChargeType*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatData::DailyRefillType*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::System::Int32, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::FlatData::PeriodType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_CREATECURRENCYEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCurrencyExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_STARTCURRENCYEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCurrencyType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CurrencyTypes* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CurrencyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_ADDCURRENCYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCurrencyName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_ADDCURRENCYNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIcon(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_ADDICON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRarity(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Rarity* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_ADDRARITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAutoChargeMsc(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_ADDAUTOCHARGEMSC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAutoChargeAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_ADDAUTOCHARGEAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCurrencyOverChargeType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CurrencyOverChargeType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CurrencyOverChargeType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_ADDCURRENCYOVERCHARGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCurrencyAdditionalChargeType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CurrencyAdditionalChargeType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CurrencyAdditionalChargeType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_ADDCURRENCYADDITIONALCHARGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddChargeLimit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_ADDCHARGELIMIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOverChargeLimit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_ADDOVERCHARGELIMIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpriteName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_ADDSPRITENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDailyRefillType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DailyRefillType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DailyRefillType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_ADDDAILYREFILLTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDailyRefillAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_ADDDAILYREFILLAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDailyRefillTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_ADDDAILYREFILLTIME_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDailyRefillTimeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_CREATEDAILYREFILLTIMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartDailyRefillTimeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_STARTDAILYREFILLTIMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExpirationDateTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_ADDEXPIRATIONDATETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExpirationNotifyDateIn(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_ADDEXPIRATIONNOTIFYDATEIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExpiryChangeParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_ADDEXPIRYCHANGEPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExpiryChangeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_ADDEXPIRYCHANGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExpiryChangeAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_ADDEXPIRYCHANGEAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddResetType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::PeriodType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::PeriodType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_ADDRESETTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddResetAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_ADDRESETAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCurrencyExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_ENDCURRENCYEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCurrencyExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_FINISHCURRENCYEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCurrencyExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYEXCEL_FINISHSIZEPREFIXEDCURRENCYEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

