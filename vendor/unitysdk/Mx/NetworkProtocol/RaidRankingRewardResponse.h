#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDRANKINGREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D280)
#define MX_NETWORKPROTOCOL_RAIDRANKINGREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4D290)
#define MX_NETWORKPROTOCOL_RAIDRANKINGREWARDRESPONSE_GET_RECEIVEDRANKINGREWARDID_OFFSET UNITYSDK_OFFSET(0xF4D2A0)
#define MX_NETWORKPROTOCOL_RAIDRANKINGREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4D2B0)
#define MX_NETWORKPROTOCOL_RAIDRANKINGREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D2C0)
#define MX_NETWORKPROTOCOL_RAIDRANKINGREWARDRESPONSE_SET_RECEIVEDRANKINGREWARDID_OFFSET UNITYSDK_OFFSET(0xF4D2D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidRankingRewardResponse_TypeDefinitionIndex = 12042;

	class RaidRankingRewardResponse : public Il2CppObject
	{
	public:
		::System::Int64 _ReceivedRankingRewardId_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDRANKINGREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDRANKINGREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ReceivedRankingRewardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDRANKINGREWARDRESPONSE_GET_RECEIVEDRANKINGREWARDID_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDRANKINGREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDRANKINGREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ReceivedRankingRewardId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDRANKINGREWARDRESPONSE_SET_RECEIVEDRANKINGREWARDID_OFFSET))(arg, nullptr);
		}

	};
}

