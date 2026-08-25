#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class ShopInfoDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTSHOPREFRESHRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF448E0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSHOPREFRESHRESPONSE_GET_SHOPINFODB_OFFSET UNITYSDK_OFFSET(0xF448F0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSHOPREFRESHRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF44900)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSHOPREFRESHRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF44910)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSHOPREFRESHRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF44920)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSHOPREFRESHRESPONSE_SET_SHOPINFODB_OFFSET UNITYSDK_OFFSET(0xF44930)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentShopRefreshResponse_TypeDefinitionIndex = 11712;

	class EventContentShopRefreshResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ShopInfoDB* _ShopInfoDB_k__BackingField; // 0x58

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSHOPREFRESHRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ShopInfoDB* get_ShopInfoDB()
		{
			return ((::MX::GameLogic::DBModel::ShopInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSHOPREFRESHRESPONSE_GET_SHOPINFODB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSHOPREFRESHRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSHOPREFRESHRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSHOPREFRESHRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ShopInfoDB(::MX::GameLogic::DBModel::ShopInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ShopInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSHOPREFRESHRESPONSE_SET_SHOPINFODB_OFFSET))(arg, nullptr);
		}

	};
}

