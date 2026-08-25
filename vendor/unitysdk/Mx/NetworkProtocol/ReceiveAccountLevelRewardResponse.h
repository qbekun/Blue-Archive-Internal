#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RECEIVEACCOUNTLEVELREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF10380)
#define MX_NETWORKPROTOCOL_RECEIVEACCOUNTLEVELREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF10390)
#define MX_NETWORKPROTOCOL_RECEIVEACCOUNTLEVELREWARDRESPONSE_SET_RECEIVEDACCOUNTLEVELREWARDIDS_OFFSET UNITYSDK_OFFSET(0xF103A0)
#define MX_NETWORKPROTOCOL_RECEIVEACCOUNTLEVELREWARDRESPONSE_GET_RECEIVEDACCOUNTLEVELREWARDIDS_OFFSET UNITYSDK_OFFSET(0xF103B0)
#define MX_NETWORKPROTOCOL_RECEIVEACCOUNTLEVELREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF103C0)
#define MX_NETWORKPROTOCOL_RECEIVEACCOUNTLEVELREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF103D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ReceiveAccountLevelRewardResponse_TypeDefinitionIndex = 11266;

	class ReceiveAccountLevelRewardResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _ReceivedAccountLevelRewardIds_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RECEIVEACCOUNTLEVELREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RECEIVEACCOUNTLEVELREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ReceivedAccountLevelRewardIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RECEIVEACCOUNTLEVELREWARDRESPONSE_SET_RECEIVEDACCOUNTLEVELREWARDIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ReceivedAccountLevelRewardIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RECEIVEACCOUNTLEVELREWARDRESPONSE_GET_RECEIVEDACCOUNTLEVELREWARDIDS_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RECEIVEACCOUNTLEVELREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RECEIVEACCOUNTLEVELREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

