#pragma once
#include "../../unitysdk.h"

namespace MX::TableBoard { class TBGBoardSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVETHEMARESPONSE_SET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF48BA0)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVETHEMARESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF48BB0)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVETHEMARESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF48BC0)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVETHEMARESPONSE_GET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF48BD0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameTableBoardMoveThemaResponse_TypeDefinitionIndex = 11886;

	class MiniGameTableBoardMoveThemaResponse : public Il2CppObject
	{
	public:
		::MX::TableBoard::TBGBoardSaveDB* _SaveDB_k__BackingField; // 0x50

		::System::Void set_SaveDB(::MX::TableBoard::TBGBoardSaveDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGBoardSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVETHEMARESPONSE_SET_SAVEDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVETHEMARESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVETHEMARESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::TableBoard::TBGBoardSaveDB* get_SaveDB()
		{
			return ((::MX::TableBoard::TBGBoardSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVETHEMARESPONSE_GET_SAVEDB_OFFSET))(nullptr);
		}

	};
}

