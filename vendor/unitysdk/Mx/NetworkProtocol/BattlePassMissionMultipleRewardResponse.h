#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class BattlePassInfoDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDRESPONSE_SET_BATTLEPASSINFO_OFFSET UNITYSDK_OFFSET(0xF11FF0)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF12000)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDRESPONSE_SET_ADDEDHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF12010)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF12020)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDRESPONSE_GET_ADDEDHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF12030)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF12040)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDRESPONSE_GET_BATTLEPASSINFO_OFFSET UNITYSDK_OFFSET(0xF12050)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF12060)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int BattlePassMissionMultipleRewardResponse_TypeDefinitionIndex = 11342;

	class BattlePassMissionMultipleRewardResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _AddedHistoryDBs_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::BattlePassInfoDB* _BattlePassInfo_k__BackingField; // 0x60

		::System::Void set_BattlePassInfo(::MX::GameLogic::DBModel::BattlePassInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::BattlePassInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDRESPONSE_SET_BATTLEPASSINFO_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_AddedHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDRESPONSE_SET_ADDEDHISTORYDBS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		Il2CppObject* get_AddedHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDRESPONSE_GET_ADDEDHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::BattlePassInfoDB* get_BattlePassInfo()
		{
			return ((::MX::GameLogic::DBModel::BattlePassInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDRESPONSE_GET_BATTLEPASSINFO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONMULTIPLEREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

