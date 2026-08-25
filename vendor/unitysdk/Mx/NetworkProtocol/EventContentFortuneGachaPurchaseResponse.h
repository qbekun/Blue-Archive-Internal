#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTFORTUNEGACHAPURCHASERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF45A10)
#define MX_NETWORKPROTOCOL_EVENTCONTENTFORTUNEGACHAPURCHASERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF45A20)
#define MX_NETWORKPROTOCOL_EVENTCONTENTFORTUNEGACHAPURCHASERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF45A30)
#define MX_NETWORKPROTOCOL_EVENTCONTENTFORTUNEGACHAPURCHASERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF45A40)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentFortuneGachaPurchaseResponse_TypeDefinitionIndex = 11752;

	class EventContentFortuneGachaPurchaseResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::System::Int64 FortuneGachaShopUniqueId; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTFORTUNEGACHAPURCHASERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTFORTUNEGACHAPURCHASERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTFORTUNEGACHAPURCHASERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTFORTUNEGACHAPURCHASERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

	};
}

