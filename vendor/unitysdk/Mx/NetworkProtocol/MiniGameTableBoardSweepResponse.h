#pragma once
#include "../../unitysdk.h"

namespace MX::TableBoard { class TBGBoardSaveDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSWEEPRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF48E80)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSWEEPRESPONSE_SET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF48E90)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSWEEPRESPONSE_GET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF48EA0)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSWEEPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF48EB0)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSWEEPRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF48EC0)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSWEEPRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF48ED0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameTableBoardSweepResponse_TypeDefinitionIndex = 11894;

	class MiniGameTableBoardSweepResponse : public Il2CppObject
	{
	public:
		::MX::TableBoard::TBGBoardSaveDB* _SaveDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSWEEPRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_SaveDB(::MX::TableBoard::TBGBoardSaveDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGBoardSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSWEEPRESPONSE_SET_SAVEDB_OFFSET))(arg, nullptr);
		}

		::MX::TableBoard::TBGBoardSaveDB* get_SaveDB()
		{
			return ((::MX::TableBoard::TBGBoardSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSWEEPRESPONSE_GET_SAVEDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSWEEPRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSWEEPRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSWEEPRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

	};
}

