#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WORLDRAIDRECEIVEREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF50FE0)
#define MX_NETWORKPROTOCOL_WORLDRAIDRECEIVEREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50FF0)
#define MX_NETWORKPROTOCOL_WORLDRAIDRECEIVEREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF51000)
#define MX_NETWORKPROTOCOL_WORLDRAIDRECEIVEREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF51010)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WorldRaidReceiveRewardResponse_TypeDefinitionIndex = 12208;

	class WorldRaidReceiveRewardResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDRECEIVEREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDRECEIVEREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDRECEIVEREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDRECEIVEREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

