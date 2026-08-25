#pragma once
#include "../../unitysdk.h"

namespace MX::TableBoard { class TBGBoardSaveDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDCLEARTHEMARESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF48C40)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDCLEARTHEMARESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF48C50)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDCLEARTHEMARESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF48C60)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDCLEARTHEMARESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF48C70)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDCLEARTHEMARESPONSE_SET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF48C80)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDCLEARTHEMARESPONSE_GET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF48C90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameTableBoardClearThemaResponse_TypeDefinitionIndex = 11888;

	class MiniGameTableBoardClearThemaResponse : public Il2CppObject
	{
	public:
		::MX::TableBoard::TBGBoardSaveDB* _SaveDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDCLEARTHEMARESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDCLEARTHEMARESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDCLEARTHEMARESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDCLEARTHEMARESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SaveDB(::MX::TableBoard::TBGBoardSaveDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGBoardSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDCLEARTHEMARESPONSE_SET_SAVEDB_OFFSET))(arg, nullptr);
		}

		::MX::TableBoard::TBGBoardSaveDB* get_SaveDB()
		{
			return ((::MX::TableBoard::TBGBoardSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDCLEARTHEMARESPONSE_GET_SAVEDB_OFFSET))(nullptr);
		}

	};
}

