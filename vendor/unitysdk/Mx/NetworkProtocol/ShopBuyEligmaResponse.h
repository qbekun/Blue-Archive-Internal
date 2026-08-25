#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class ConsumeResultDB; }
namespace MX::GameLogic::DBModel { class ShopProductDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPBUYELIGMARESPONSE_SET_CONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF4EEC0)
#define MX_NETWORKPROTOCOL_SHOPBUYELIGMARESPONSE_GET_SHOPPRODUCTDB_OFFSET UNITYSDK_OFFSET(0xF4EED0)
#define MX_NETWORKPROTOCOL_SHOPBUYELIGMARESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4EEE0)
#define MX_NETWORKPROTOCOL_SHOPBUYELIGMARESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4EEF0)
#define MX_NETWORKPROTOCOL_SHOPBUYELIGMARESPONSE_SET_SHOPPRODUCTDB_OFFSET UNITYSDK_OFFSET(0xF4EF00)
#define MX_NETWORKPROTOCOL_SHOPBUYELIGMARESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4EF10)
#define MX_NETWORKPROTOCOL_SHOPBUYELIGMARESPONSE_GET_CONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF4EF20)
#define MX_NETWORKPROTOCOL_SHOPBUYELIGMARESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4EF30)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopBuyEligmaResponse_TypeDefinitionIndex = 12120;

	class ShopBuyEligmaResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ConsumeResultDB* _ConsumeResultDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::ShopProductDB* _ShopProductDB_k__BackingField; // 0x60

		::System::Void set_ConsumeResultDB(::MX::GameLogic::DBModel::ConsumeResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYELIGMARESPONSE_SET_CONSUMERESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ShopProductDB* get_ShopProductDB()
		{
			return ((::MX::GameLogic::DBModel::ShopProductDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYELIGMARESPONSE_GET_SHOPPRODUCTDB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYELIGMARESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYELIGMARESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_ShopProductDB(::MX::GameLogic::DBModel::ShopProductDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ShopProductDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYELIGMARESPONSE_SET_SHOPPRODUCTDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYELIGMARESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeResultDB* get_ConsumeResultDB()
		{
			return ((::MX::GameLogic::DBModel::ConsumeResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYELIGMARESPONSE_GET_CONSUMERESULTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYELIGMARESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

