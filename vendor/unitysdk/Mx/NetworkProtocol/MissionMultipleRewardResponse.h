#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4A6C0)
#define MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4A6D0)
#define MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDRESPONSE_SET_ADDEDHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF4A6E0)
#define MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4A6F0)
#define MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDRESPONSE_GET_ADDEDHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF4A700)
#define MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4A710)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MissionMultipleRewardResponse_TypeDefinitionIndex = 11952;

	class MissionMultipleRewardResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _AddedHistoryDBs_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AddedHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDRESPONSE_SET_ADDEDHISTORYDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AddedHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDRESPONSE_GET_ADDEDHISTORYDBS_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

	};
}

