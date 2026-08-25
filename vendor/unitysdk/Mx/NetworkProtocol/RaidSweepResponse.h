#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDSWEEPRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D540)
#define MX_NETWORKPROTOCOL_RAIDSWEEPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D550)
#define MX_NETWORKPROTOCOL_RAIDSWEEPRESPONSE_GET_TOTALSEASONPOINT_OFFSET UNITYSDK_OFFSET(0xF4D560)
#define MX_NETWORKPROTOCOL_RAIDSWEEPRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4D570)
#define MX_NETWORKPROTOCOL_RAIDSWEEPRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4D580)
#define MX_NETWORKPROTOCOL_RAIDSWEEPRESPONSE_SET_TOTALSEASONPOINT_OFFSET UNITYSDK_OFFSET(0xF4D590)
#define MX_NETWORKPROTOCOL_RAIDSWEEPRESPONSE_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0xF4D5A0)
#define MX_NETWORKPROTOCOL_RAIDSWEEPRESPONSE_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0xF4D5B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidSweepResponse_TypeDefinitionIndex = 12050;

	class RaidSweepResponse : public Il2CppObject
	{
	public:
		::System::Int64 _TotalSeasonPoint_k__BackingField; // 0x50
		Il2CppObject* _Rewards_k__BackingField; // 0x58
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x60

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSWEEPRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSWEEPRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_TotalSeasonPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSWEEPRESPONSE_GET_TOTALSEASONPOINT_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSWEEPRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSWEEPRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_TotalSeasonPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSWEEPRESPONSE_SET_TOTALSEASONPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSWEEPRESPONSE_SET_REWARDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSWEEPRESPONSE_GET_REWARDS_OFFSET))(nullptr);
		}

	};
}

