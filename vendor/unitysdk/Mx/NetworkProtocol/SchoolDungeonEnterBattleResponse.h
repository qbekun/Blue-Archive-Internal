#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCHOOLDUNGEONENTERBATTLERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4E5F0)
#define MX_NETWORKPROTOCOL_SCHOOLDUNGEONENTERBATTLERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4E600)
#define MX_NETWORKPROTOCOL_SCHOOLDUNGEONENTERBATTLERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4E610)
#define MX_NETWORKPROTOCOL_SCHOOLDUNGEONENTERBATTLERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4E620)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int SchoolDungeonEnterBattleResponse_TypeDefinitionIndex = 12102;

	class SchoolDungeonEnterBattleResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCHOOLDUNGEONENTERBATTLERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCHOOLDUNGEONENTERBATTLERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCHOOLDUNGEONENTERBATTLERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCHOOLDUNGEONENTERBATTLERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

	};
}

