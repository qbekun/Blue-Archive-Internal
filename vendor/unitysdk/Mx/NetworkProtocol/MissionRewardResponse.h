#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MissionHistoryDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MISSIONREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4A5E0)
#define MX_NETWORKPROTOCOL_MISSIONREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4A5F0)
#define MX_NETWORKPROTOCOL_MISSIONREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4A600)
#define MX_NETWORKPROTOCOL_MISSIONREWARDRESPONSE_GET_ADDEDHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF4A610)
#define MX_NETWORKPROTOCOL_MISSIONREWARDRESPONSE_SET_ADDEDHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF4A620)
#define MX_NETWORKPROTOCOL_MISSIONREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4A630)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MissionRewardResponse_TypeDefinitionIndex = 11950;

	class MissionRewardResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MissionHistoryDB* _AddedHistoryDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::MissionHistoryDB* get_AddedHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::MissionHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONREWARDRESPONSE_GET_ADDEDHISTORYDB_OFFSET))(nullptr);
		}

		::System::Void set_AddedHistoryDB(::MX::GameLogic::DBModel::MissionHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MissionHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONREWARDRESPONSE_SET_ADDEDHISTORYDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

	};
}

