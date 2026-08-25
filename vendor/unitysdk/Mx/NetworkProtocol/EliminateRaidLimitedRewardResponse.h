#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ELIMINATERAIDLIMITEDREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF43060)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDLIMITEDREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF43070)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDLIMITEDREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF43080)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDLIMITEDREWARDRESPONSE_GET_RECEIVEREWARDIDS_OFFSET UNITYSDK_OFFSET(0xF43090)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDLIMITEDREWARDRESPONSE_SET_RECEIVEREWARDIDS_OFFSET UNITYSDK_OFFSET(0xF430A0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDLIMITEDREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF430B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EliminateRaidLimitedRewardResponse_TypeDefinitionIndex = 11656;

	class EliminateRaidLimitedRewardResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		Il2CppObject* _ReceiveRewardIds_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDLIMITEDREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDLIMITEDREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDLIMITEDREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ReceiveRewardIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDLIMITEDREWARDRESPONSE_GET_RECEIVEREWARDIDS_OFFSET))(nullptr);
		}

		::System::Void set_ReceiveRewardIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDLIMITEDREWARDRESPONSE_SET_RECEIVEREWARDIDS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDLIMITEDREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

