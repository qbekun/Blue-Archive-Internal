#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDSEASONREWARDRESPONSE_SET_RECEIVEREWARDIDS_OFFSET UNITYSDK_OFFSET(0xF4D300)
#define MX_NETWORKPROTOCOL_RAIDSEASONREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D310)
#define MX_NETWORKPROTOCOL_RAIDSEASONREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D320)
#define MX_NETWORKPROTOCOL_RAIDSEASONREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4D330)
#define MX_NETWORKPROTOCOL_RAIDSEASONREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4D340)
#define MX_NETWORKPROTOCOL_RAIDSEASONREWARDRESPONSE_GET_RECEIVEREWARDIDS_OFFSET UNITYSDK_OFFSET(0xF4D350)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidSeasonRewardResponse_TypeDefinitionIndex = 12044;

	class RaidSeasonRewardResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		Il2CppObject* _ReceiveRewardIds_k__BackingField; // 0x58

		::System::Void set_ReceiveRewardIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSEASONREWARDRESPONSE_SET_RECEIVEREWARDIDS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSEASONREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSEASONREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSEASONREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSEASONREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		Il2CppObject* get_ReceiveRewardIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSEASONREWARDRESPONSE_GET_RECEIVEREWARDIDS_OFFSET))(nullptr);
		}

	};
}

