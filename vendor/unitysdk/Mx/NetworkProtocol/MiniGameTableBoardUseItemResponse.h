#pragma once
#include "../../unitysdk.h"

namespace MX::TableBoard { class TBGPlayerDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDUSEITEMRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF48D40)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDUSEITEMRESPONSE_SET_PLAYERDB_OFFSET UNITYSDK_OFFSET(0xF48D50)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDUSEITEMRESPONSE_GET_PLAYERDB_OFFSET UNITYSDK_OFFSET(0xF48D60)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDUSEITEMRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF48D70)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameTableBoardUseItemResponse_TypeDefinitionIndex = 11890;

	class MiniGameTableBoardUseItemResponse : public Il2CppObject
	{
	public:
		::MX::TableBoard::TBGPlayerDB* _PlayerDB_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDUSEITEMRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_PlayerDB(::MX::TableBoard::TBGPlayerDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGPlayerDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDUSEITEMRESPONSE_SET_PLAYERDB_OFFSET))(arg, nullptr);
		}

		::MX::TableBoard::TBGPlayerDB* get_PlayerDB()
		{
			return ((::MX::TableBoard::TBGPlayerDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDUSEITEMRESPONSE_GET_PLAYERDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDUSEITEMRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

