#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class RaidGiveUpDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDGIVEUPRESPONSE_GET_RAIDGIVEUPDB_OFFSET UNITYSDK_OFFSET(0xF4D020)
#define MX_NETWORKPROTOCOL_RAIDGIVEUPRESPONSE_GET_TIER_OFFSET UNITYSDK_OFFSET(0xF4D030)
#define MX_NETWORKPROTOCOL_RAIDGIVEUPRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4D040)
#define MX_NETWORKPROTOCOL_RAIDGIVEUPRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D050)
#define MX_NETWORKPROTOCOL_RAIDGIVEUPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D060)
#define MX_NETWORKPROTOCOL_RAIDGIVEUPRESPONSE_SET_RAIDGIVEUPDB_OFFSET UNITYSDK_OFFSET(0xF4D070)
#define MX_NETWORKPROTOCOL_RAIDGIVEUPRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4D080)
#define MX_NETWORKPROTOCOL_RAIDGIVEUPRESPONSE_SET_TIER_OFFSET UNITYSDK_OFFSET(0xF4D090)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidGiveUpResponse_TypeDefinitionIndex = 12034;

	class RaidGiveUpResponse : public Il2CppObject
	{
	public:
		::System::Int32 _Tier_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::RaidGiveUpDB* _RaidGiveUpDB_k__BackingField; // 0x58
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x60

		::MX::GameLogic::DBModel::RaidGiveUpDB* get_RaidGiveUpDB()
		{
			return ((::MX::GameLogic::DBModel::RaidGiveUpDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDGIVEUPRESPONSE_GET_RAIDGIVEUPDB_OFFSET))(nullptr);
		}

		::System::Int32 get_Tier()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDGIVEUPRESPONSE_GET_TIER_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDGIVEUPRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDGIVEUPRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDGIVEUPRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_RaidGiveUpDB(::MX::GameLogic::DBModel::RaidGiveUpDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidGiveUpDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDGIVEUPRESPONSE_SET_RAIDGIVEUPDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDGIVEUPRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_Tier(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDGIVEUPRESPONSE_SET_TIER_OFFSET))(arg, nullptr);
		}

	};
}

