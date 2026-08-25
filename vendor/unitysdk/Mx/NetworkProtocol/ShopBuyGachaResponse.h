#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ConsumeResultDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }
namespace MX::GameLogic::DBModel { class AccountCurrencyDB; }

#define MX_NETWORKPROTOCOL_SHOPBUYGACHARESPONSE_SET_CONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF4E9B0)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHARESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4E9C0)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHARESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4E9D0)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHARESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4E9E0)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHARESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4E9F0)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHARESPONSE_GET_CONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF4EA00)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHARESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF4EA10)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopBuyGachaResponse_TypeDefinitionIndex = 12110;

	class ShopBuyGachaResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ConsumeResultDB* _ConsumeResultDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::System::Void set_ConsumeResultDB(::MX::GameLogic::DBModel::ConsumeResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHARESPONSE_SET_CONSUMERESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHARESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHARESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHARESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHARESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeResultDB* get_ConsumeResultDB()
		{
			return ((::MX::GameLogic::DBModel::ConsumeResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHARESPONSE_GET_CONSUMERESULTDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::AccountCurrencyDB* get_AccountCurrencyDB()
		{
			return ((::MX::GameLogic::DBModel::AccountCurrencyDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHARESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET))(nullptr);
		}

	};
}

