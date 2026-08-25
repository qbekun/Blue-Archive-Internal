#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class StickerBookDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_STICKERLOBBYRESPONSE_SET_STICKERBOOKDB_OFFSET UNITYSDK_OFFSET(0xF4FA10)
#define MX_NETWORKPROTOCOL_STICKERLOBBYRESPONSE_GET_RECEIVEDSTICKERDBS_OFFSET UNITYSDK_OFFSET(0xF4FA20)
#define MX_NETWORKPROTOCOL_STICKERLOBBYRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4FA30)
#define MX_NETWORKPROTOCOL_STICKERLOBBYRESPONSE_SET_RECEIVEDSTICKERDBS_OFFSET UNITYSDK_OFFSET(0xF4FA40)
#define MX_NETWORKPROTOCOL_STICKERLOBBYRESPONSE_GET_STICKERBOOKDB_OFFSET UNITYSDK_OFFSET(0xF4FA50)
#define MX_NETWORKPROTOCOL_STICKERLOBBYRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4FA60)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int StickerLobbyResponse_TypeDefinitionIndex = 12151;

	class StickerLobbyResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _ReceivedStickerDBs_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::StickerBookDB* _StickerBookDB_k__BackingField; // 0x58

		::System::Void set_StickerBookDB(::MX::GameLogic::DBModel::StickerBookDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::StickerBookDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERLOBBYRESPONSE_SET_STICKERBOOKDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ReceivedStickerDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERLOBBYRESPONSE_GET_RECEIVEDSTICKERDBS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERLOBBYRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ReceivedStickerDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERLOBBYRESPONSE_SET_RECEIVEDSTICKERDBS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::StickerBookDB* get_StickerBookDB()
		{
			return ((::MX::GameLogic::DBModel::StickerBookDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERLOBBYRESPONSE_GET_STICKERBOOKDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERLOBBYRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

