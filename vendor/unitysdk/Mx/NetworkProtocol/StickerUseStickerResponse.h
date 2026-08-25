#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class StickerBookDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_STICKERUSESTICKERRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4FAB0)
#define MX_NETWORKPROTOCOL_STICKERUSESTICKERRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4FAC0)
#define MX_NETWORKPROTOCOL_STICKERUSESTICKERRESPONSE_GET_STICKERBOOKDB_OFFSET UNITYSDK_OFFSET(0xF4FAD0)
#define MX_NETWORKPROTOCOL_STICKERUSESTICKERRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4FAE0)
#define MX_NETWORKPROTOCOL_STICKERUSESTICKERRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4FAF0)
#define MX_NETWORKPROTOCOL_STICKERUSESTICKERRESPONSE_SET_STICKERBOOKDB_OFFSET UNITYSDK_OFFSET(0xF4FB00)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int StickerUseStickerResponse_TypeDefinitionIndex = 12153;

	class StickerUseStickerResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::StickerBookDB* _StickerBookDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERUSESTICKERRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERUSESTICKERRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::StickerBookDB* get_StickerBookDB()
		{
			return ((::MX::GameLogic::DBModel::StickerBookDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERUSESTICKERRESPONSE_GET_STICKERBOOKDB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERUSESTICKERRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERUSESTICKERRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_StickerBookDB(::MX::GameLogic::DBModel::StickerBookDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::StickerBookDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERUSESTICKERRESPONSE_SET_STICKERBOOKDB_OFFSET))(arg, nullptr);
		}

	};
}

