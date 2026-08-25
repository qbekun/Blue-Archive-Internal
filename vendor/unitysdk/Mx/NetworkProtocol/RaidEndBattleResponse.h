#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_SET_DEFAULTCLEARPOINT_OFFSET UNITYSDK_OFFSET(0xF4CEE0)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4CEF0)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_SET_BESTRANKINGPOINT_OFFSET UNITYSDK_OFFSET(0xF4CF00)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_SET_CLEARTIMEPOINT_OFFSET UNITYSDK_OFFSET(0xF4CF10)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_GET_BESTRANKINGPOINT_OFFSET UNITYSDK_OFFSET(0xF4CF20)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_SET_HPPERCENTSCOREPOINT_OFFSET UNITYSDK_OFFSET(0xF4CF30)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_GET_RANKINGPOINT_OFFSET UNITYSDK_OFFSET(0xF4CF40)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4CF50)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4CF60)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4CF70)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_GET_HPPERCENTSCOREPOINT_OFFSET UNITYSDK_OFFSET(0xF4CF80)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_SET_RANKINGPOINT_OFFSET UNITYSDK_OFFSET(0xF4CF90)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_GET_DEFAULTCLEARPOINT_OFFSET UNITYSDK_OFFSET(0xF4CFA0)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_GET_CLEARTIMEPOINT_OFFSET UNITYSDK_OFFSET(0xF4CFB0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidEndBattleResponse_TypeDefinitionIndex = 12032;

	class RaidEndBattleResponse : public Il2CppObject
	{
	public:
		::System::Int64 _RankingPoint_k__BackingField; // 0x50
		::System::Int64 _BestRankingPoint_k__BackingField; // 0x58
		::System::Int64 _ClearTimePoint_k__BackingField; // 0x60
		::System::Int64 _HPPercentScorePoint_k__BackingField; // 0x68
		::System::Int64 _DefaultClearPoint_k__BackingField; // 0x70
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x78

		::System::Void set_DefaultClearPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_SET_DEFAULTCLEARPOINT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_BestRankingPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_SET_BESTRANKINGPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClearTimePoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_SET_CLEARTIMEPOINT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BestRankingPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_GET_BESTRANKINGPOINT_OFFSET))(nullptr);
		}

		::System::Void set_HPPercentScorePoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_SET_HPPERCENTSCOREPOINT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RankingPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_GET_RANKINGPOINT_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_HPPercentScorePoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_GET_HPPERCENTSCOREPOINT_OFFSET))(nullptr);
		}

		::System::Void set_RankingPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_SET_RANKINGPOINT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DefaultClearPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_GET_DEFAULTCLEARPOINT_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearTimePoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLERESPONSE_GET_CLEARTIMEPOINT_OFFSET))(nullptr);
		}

	};
}

