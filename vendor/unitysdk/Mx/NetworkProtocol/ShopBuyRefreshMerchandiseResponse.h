#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountCurrencyDB; }
namespace MX::GameLogic::DBModel { class ConsumeResultDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class MailDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISERESPONSE_SET_SHOPPRODUCTDB_OFFSET UNITYSDK_OFFSET(0xF4F0C0)
#define MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4F0D0)
#define MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4F0E0)
#define MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISERESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF4F0F0)
#define MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4F100)
#define MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISERESPONSE_SET_MAILDB_OFFSET UNITYSDK_OFFSET(0xF4F110)
#define MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4F120)
#define MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISERESPONSE_GET_CONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF4F130)
#define MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISERESPONSE_GET_MAILDB_OFFSET UNITYSDK_OFFSET(0xF4F140)
#define MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISERESPONSE_GET_SHOPPRODUCTDB_OFFSET UNITYSDK_OFFSET(0xF4F150)
#define MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISERESPONSE_SET_CONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF4F160)
#define MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISERESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF4F170)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopBuyRefreshMerchandiseResponse_TypeDefinitionIndex = 12125;

	class ShopBuyRefreshMerchandiseResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::AccountCurrencyDB* _AccountCurrencyDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ConsumeResultDB* _ConsumeResultDB_k__BackingField; // 0x58
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x60
		Il2CppObject* _ShopProductDB_k__BackingField; // 0x68
		::MX::GameLogic::DBModel::MailDB* _MailDB_k__BackingField; // 0x70

		::System::Void set_ShopProductDB(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISERESPONSE_SET_SHOPPRODUCTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccountCurrencyDB(::MX::GameLogic::DBModel::AccountCurrencyDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountCurrencyDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISERESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_MailDB(::MX::GameLogic::DBModel::MailDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MailDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISERESPONSE_SET_MAILDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeResultDB* get_ConsumeResultDB()
		{
			return ((::MX::GameLogic::DBModel::ConsumeResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISERESPONSE_GET_CONSUMERESULTDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MailDB* get_MailDB()
		{
			return ((::MX::GameLogic::DBModel::MailDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISERESPONSE_GET_MAILDB_OFFSET))(nullptr);
		}

		Il2CppObject* get_ShopProductDB()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISERESPONSE_GET_SHOPPRODUCTDB_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeResultDB(::MX::GameLogic::DBModel::ConsumeResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISERESPONSE_SET_CONSUMERESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::AccountCurrencyDB* get_AccountCurrencyDB()
		{
			return ((::MX::GameLogic::DBModel::AccountCurrencyDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYREFRESHMERCHANDISERESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET))(nullptr);
		}

	};
}

