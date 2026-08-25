#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountCurrencyDB; }
namespace MX::GameLogic::DBModel { class ConsumeResultDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class MailDB; }
namespace MX::GameLogic::DBModel { class ShopProductDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISERESPONSE_GET_MAILDB_OFFSET UNITYSDK_OFFSET(0xF4E890)
#define MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4E8A0)
#define MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4E8B0)
#define MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISERESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF4E8C0)
#define MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4E8D0)
#define MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISERESPONSE_SET_MAILDB_OFFSET UNITYSDK_OFFSET(0xF4E8E0)
#define MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISERESPONSE_GET_SHOPPRODUCTDB_OFFSET UNITYSDK_OFFSET(0xF4E8F0)
#define MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISERESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF4E900)
#define MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISERESPONSE_GET_CONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF4E910)
#define MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISERESPONSE_SET_SHOPPRODUCTDB_OFFSET UNITYSDK_OFFSET(0xF4E920)
#define MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4E930)
#define MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISERESPONSE_SET_CONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF4E940)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopBuyMerchandiseResponse_TypeDefinitionIndex = 12108;

	class ShopBuyMerchandiseResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::AccountCurrencyDB* _AccountCurrencyDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ConsumeResultDB* _ConsumeResultDB_k__BackingField; // 0x58
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x60
		::MX::GameLogic::DBModel::MailDB* _MailDB_k__BackingField; // 0x68
		::MX::GameLogic::DBModel::ShopProductDB* _ShopProductDB_k__BackingField; // 0x70

		::MX::GameLogic::DBModel::MailDB* get_MailDB()
		{
			return ((::MX::GameLogic::DBModel::MailDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISERESPONSE_GET_MAILDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccountCurrencyDB(::MX::GameLogic::DBModel::AccountCurrencyDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountCurrencyDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISERESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_MailDB(::MX::GameLogic::DBModel::MailDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MailDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISERESPONSE_SET_MAILDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ShopProductDB* get_ShopProductDB()
		{
			return ((::MX::GameLogic::DBModel::ShopProductDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISERESPONSE_GET_SHOPPRODUCTDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::AccountCurrencyDB* get_AccountCurrencyDB()
		{
			return ((::MX::GameLogic::DBModel::AccountCurrencyDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISERESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeResultDB* get_ConsumeResultDB()
		{
			return ((::MX::GameLogic::DBModel::ConsumeResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISERESPONSE_GET_CONSUMERESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_ShopProductDB(::MX::GameLogic::DBModel::ShopProductDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ShopProductDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISERESPONSE_SET_SHOPPRODUCTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeResultDB(::MX::GameLogic::DBModel::ConsumeResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYMERCHANDISERESPONSE_SET_CONSUMERESULTDB_OFFSET))(arg, nullptr);
		}

	};
}

