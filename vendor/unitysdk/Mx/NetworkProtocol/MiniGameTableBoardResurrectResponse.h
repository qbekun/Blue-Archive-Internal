#pragma once
#include "../../unitysdk.h"

namespace MX::TableBoard { class TBGPlayerDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDRESURRECTRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF48DC0)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDRESURRECTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF48DD0)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDRESURRECTRESPONSE_SET_PLAYERDB_OFFSET UNITYSDK_OFFSET(0xF48DE0)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDRESURRECTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF48DF0)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDRESURRECTRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF48E00)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDRESURRECTRESPONSE_GET_PLAYERDB_OFFSET UNITYSDK_OFFSET(0xF48E10)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameTableBoardResurrectResponse_TypeDefinitionIndex = 11892;

	class MiniGameTableBoardResurrectResponse : public Il2CppObject
	{
	public:
		::MX::TableBoard::TBGPlayerDB* _PlayerDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDRESURRECTRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDRESURRECTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_PlayerDB(::MX::TableBoard::TBGPlayerDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGPlayerDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDRESURRECTRESPONSE_SET_PLAYERDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDRESURRECTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDRESURRECTRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::TableBoard::TBGPlayerDB* get_PlayerDB()
		{
			return ((::MX::TableBoard::TBGPlayerDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDRESURRECTRESPONSE_GET_PLAYERDB_OFFSET))(nullptr);
		}

	};
}

