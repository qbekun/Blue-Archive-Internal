#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class StickerBookDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_STICKERLOGINRESPONSE_GET_STICKERBOOKDB_OFFSET UNITYSDK_OFFSET(0xF4F990)
#define MX_NETWORKPROTOCOL_STICKERLOGINRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4F9A0)
#define MX_NETWORKPROTOCOL_STICKERLOGINRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4F9B0)
#define MX_NETWORKPROTOCOL_STICKERLOGINRESPONSE_SET_STICKERBOOKDB_OFFSET UNITYSDK_OFFSET(0xF4F9C0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int StickerLoginResponse_TypeDefinitionIndex = 12149;

	class StickerLoginResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::StickerBookDB* _StickerBookDB_k__BackingField; // 0x50

		::MX::GameLogic::DBModel::StickerBookDB* get_StickerBookDB()
		{
			return ((::MX::GameLogic::DBModel::StickerBookDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERLOGINRESPONSE_GET_STICKERBOOKDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERLOGINRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERLOGINRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_StickerBookDB(::MX::GameLogic::DBModel::StickerBookDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::StickerBookDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERLOGINRESPONSE_SET_STICKERBOOKDB_OFFSET))(arg, nullptr);
		}

	};
}

