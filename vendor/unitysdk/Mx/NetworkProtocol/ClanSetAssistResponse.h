#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ClanAssistSlotDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class ClanAssistRewardInfo; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANSETASSISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF3EE40)
#define MX_NETWORKPROTOCOL_CLANSETASSISTRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF3EE50)
#define MX_NETWORKPROTOCOL_CLANSETASSISTRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF3EE60)
#define MX_NETWORKPROTOCOL_CLANSETASSISTRESPONSE_SET_REWARDINFO_OFFSET UNITYSDK_OFFSET(0xF3EE70)
#define MX_NETWORKPROTOCOL_CLANSETASSISTRESPONSE_SET_CLANASSISTSLOTDB_OFFSET UNITYSDK_OFFSET(0xF3EE80)
#define MX_NETWORKPROTOCOL_CLANSETASSISTRESPONSE_GET_CLANASSISTSLOTDB_OFFSET UNITYSDK_OFFSET(0xF3EE90)
#define MX_NETWORKPROTOCOL_CLANSETASSISTRESPONSE_GET_REWARDINFO_OFFSET UNITYSDK_OFFSET(0xF3EEA0)
#define MX_NETWORKPROTOCOL_CLANSETASSISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF3EEB0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanSetAssistResponse_TypeDefinitionIndex = 11519;

	class ClanSetAssistResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ClanAssistSlotDB* _ClanAssistSlotDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::ClanAssistRewardInfo* _RewardInfo_k__BackingField; // 0x60

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETASSISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETASSISTRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETASSISTRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_RewardInfo(::MX::GameLogic::DBModel::ClanAssistRewardInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETASSISTRESPONSE_SET_REWARDINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClanAssistSlotDB(::MX::GameLogic::DBModel::ClanAssistSlotDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistSlotDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETASSISTRESPONSE_SET_CLANASSISTSLOTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistSlotDB* get_ClanAssistSlotDB()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistSlotDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETASSISTRESPONSE_GET_CLANASSISTSLOTDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistRewardInfo* get_RewardInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistRewardInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETASSISTRESPONSE_GET_REWARDINFO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETASSISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

