#pragma once
#include "../../unitysdk.h"

namespace MX::TableBoard { class TBGBoardSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSYNCRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF48880)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSYNCRESPONSE_GET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF48890)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSYNCRESPONSE_SET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF488A0)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSYNCRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF488B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameTableBoardSyncResponse_TypeDefinitionIndex = 11880;

	class MiniGameTableBoardSyncResponse : public Il2CppObject
	{
	public:
		::MX::TableBoard::TBGBoardSaveDB* _SaveDB_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSYNCRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::TableBoard::TBGBoardSaveDB* get_SaveDB()
		{
			return ((::MX::TableBoard::TBGBoardSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSYNCRESPONSE_GET_SAVEDB_OFFSET))(nullptr);
		}

		::System::Void set_SaveDB(::MX::TableBoard::TBGBoardSaveDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGBoardSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSYNCRESPONSE_SET_SAVEDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSYNCRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

