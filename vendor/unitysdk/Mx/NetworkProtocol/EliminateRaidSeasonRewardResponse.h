#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ELIMINATERAIDSEASONREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF42FE0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDSEASONREWARDRESPONSE_SET_RECEIVEREWARDIDS_OFFSET UNITYSDK_OFFSET(0xF42FF0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDSEASONREWARDRESPONSE_GET_RECEIVEREWARDIDS_OFFSET UNITYSDK_OFFSET(0xF43000)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDSEASONREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF43010)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDSEASONREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF43020)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDSEASONREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF43030)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EliminateRaidSeasonRewardResponse_TypeDefinitionIndex = 11654;

	class EliminateRaidSeasonRewardResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		Il2CppObject* _ReceiveRewardIds_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDSEASONREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ReceiveRewardIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDSEASONREWARDRESPONSE_SET_RECEIVEREWARDIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ReceiveRewardIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDSEASONREWARDRESPONSE_GET_RECEIVEREWARDIDS_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDSEASONREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDSEASONREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDSEASONREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

	};
}

