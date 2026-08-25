#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class CardShopElementDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPPURCHASERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF45110)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPPURCHASERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF45120)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPPURCHASERESPONSE_SET_CARDSHOPPURCHASEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF45130)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPPURCHASERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF45140)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPPURCHASERESPONSE_GET_CARDSHOPPURCHASEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF45150)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPPURCHASERESPONSE_GET_CARDSHOPELEMENTDB_OFFSET UNITYSDK_OFFSET(0xF45160)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPPURCHASERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF45170)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPPURCHASERESPONSE_SET_CARDSHOPELEMENTDB_OFFSET UNITYSDK_OFFSET(0xF45180)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentCardShopPurchaseResponse_TypeDefinitionIndex = 11728;

	class EventContentCardShopPurchaseResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::CardShopElementDB* _CardShopElementDB_k__BackingField; // 0x58
		Il2CppObject* _CardShopPurchaseHistoryDBs_k__BackingField; // 0x60

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPPURCHASERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPPURCHASERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CardShopPurchaseHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPPURCHASERESPONSE_SET_CARDSHOPPURCHASEHISTORYDBS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPPURCHASERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		Il2CppObject* get_CardShopPurchaseHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPPURCHASERESPONSE_GET_CARDSHOPPURCHASEHISTORYDBS_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CardShopElementDB* get_CardShopElementDB()
		{
			return ((::MX::GameLogic::DBModel::CardShopElementDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPPURCHASERESPONSE_GET_CARDSHOPELEMENTDB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPPURCHASERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_CardShopElementDB(::MX::GameLogic::DBModel::CardShopElementDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CardShopElementDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPPURCHASERESPONSE_SET_CARDSHOPELEMENTDB_OFFSET))(arg, nullptr);
		}

	};
}

