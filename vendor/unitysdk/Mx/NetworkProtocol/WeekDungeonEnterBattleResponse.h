#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF50460)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLERESPONSE_GET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0xF50470)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50480)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50490)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF504A0)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLERESPONSE_SET_SEED_OFFSET UNITYSDK_OFFSET(0xF504B0)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLERESPONSE_SET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0xF504C0)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLERESPONSE_GET_SEED_OFFSET UNITYSDK_OFFSET(0xF504D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WeekDungeonEnterBattleResponse_TypeDefinitionIndex = 12180;

	class WeekDungeonEnterBattleResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::System::Int32 _Seed_k__BackingField; // 0x58
		::System::Int32 _Sequence_k__BackingField; // 0x5C

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Sequence()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLERESPONSE_GET_SEQUENCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_Seed(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLERESPONSE_SET_SEED_OFFSET))(arg, nullptr);
		}

		::System::Void set_Sequence(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLERESPONSE_SET_SEQUENCE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Seed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLERESPONSE_GET_SEED_OFFSET))(nullptr);
		}

	};
}

