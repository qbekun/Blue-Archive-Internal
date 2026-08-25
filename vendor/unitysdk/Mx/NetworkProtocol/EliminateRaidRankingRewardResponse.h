#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF42F60)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF42F70)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF42F80)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGREWARDRESPONSE_GET_RECEIVEDRANKINGREWARDID_OFFSET UNITYSDK_OFFSET(0xF42F90)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGREWARDRESPONSE_SET_RECEIVEDRANKINGREWARDID_OFFSET UNITYSDK_OFFSET(0xF42FA0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF42FB0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EliminateRaidRankingRewardResponse_TypeDefinitionIndex = 11652;

	class EliminateRaidRankingRewardResponse : public Il2CppObject
	{
	public:
		::System::Int64 _ReceivedRankingRewardId_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ReceivedRankingRewardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGREWARDRESPONSE_GET_RECEIVEDRANKINGREWARDID_OFFSET))(nullptr);
		}

		::System::Void set_ReceivedRankingRewardId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGREWARDRESPONSE_SET_RECEIVEDRANKINGREWARDID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

	};
}

