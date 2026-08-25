#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4D100)
#define MX_NETWORKPROTOCOL_RAIDREWARDRESPONSE_GET_RANKINGPOINT_OFFSET UNITYSDK_OFFSET(0xF4D110)
#define MX_NETWORKPROTOCOL_RAIDREWARDRESPONSE_SET_BESTRANKINGPOINT_OFFSET UNITYSDK_OFFSET(0xF4D120)
#define MX_NETWORKPROTOCOL_RAIDREWARDRESPONSE_SET_RANKINGPOINT_OFFSET UNITYSDK_OFFSET(0xF4D130)
#define MX_NETWORKPROTOCOL_RAIDREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D140)
#define MX_NETWORKPROTOCOL_RAIDREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4D150)
#define MX_NETWORKPROTOCOL_RAIDREWARDRESPONSE_GET_BESTRANKINGPOINT_OFFSET UNITYSDK_OFFSET(0xF4D160)
#define MX_NETWORKPROTOCOL_RAIDREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D170)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidRewardResponse_TypeDefinitionIndex = 12036;

	class RaidRewardResponse : public Il2CppObject
	{
	public:
		::System::Int64 _RankingPoint_k__BackingField; // 0x50
		::System::Int64 _BestRankingPoint_k__BackingField; // 0x58
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x60

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Int64 get_RankingPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDREWARDRESPONSE_GET_RANKINGPOINT_OFFSET))(nullptr);
		}

		::System::Void set_BestRankingPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDREWARDRESPONSE_SET_BESTRANKINGPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void set_RankingPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDREWARDRESPONSE_SET_RANKINGPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BestRankingPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDREWARDRESPONSE_GET_BESTRANKINGPOINT_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

