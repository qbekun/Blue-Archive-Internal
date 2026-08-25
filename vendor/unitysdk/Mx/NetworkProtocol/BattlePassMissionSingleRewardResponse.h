#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MissionHistoryDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class BattlePassInfoDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONSINGLEREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF11F10)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONSINGLEREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11F20)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONSINGLEREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11F30)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONSINGLEREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF11F40)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONSINGLEREWARDRESPONSE_SET_ADDEDHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF11F50)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONSINGLEREWARDRESPONSE_GET_ADDEDHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF11F60)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONSINGLEREWARDRESPONSE_SET_BATTLEPASSINFO_OFFSET UNITYSDK_OFFSET(0xF11F70)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONSINGLEREWARDRESPONSE_GET_BATTLEPASSINFO_OFFSET UNITYSDK_OFFSET(0xF11F80)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int BattlePassMissionSingleRewardResponse_TypeDefinitionIndex = 11340;

	class BattlePassMissionSingleRewardResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MissionHistoryDB* _AddedHistoryDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::BattlePassInfoDB* _BattlePassInfo_k__BackingField; // 0x60

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONSINGLEREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONSINGLEREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONSINGLEREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONSINGLEREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_AddedHistoryDB(::MX::GameLogic::DBModel::MissionHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MissionHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONSINGLEREWARDRESPONSE_SET_ADDEDHISTORYDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::MissionHistoryDB* get_AddedHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::MissionHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONSINGLEREWARDRESPONSE_GET_ADDEDHISTORYDB_OFFSET))(nullptr);
		}

		::System::Void set_BattlePassInfo(::MX::GameLogic::DBModel::BattlePassInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::BattlePassInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONSINGLEREWARDRESPONSE_SET_BATTLEPASSINFO_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::BattlePassInfoDB* get_BattlePassInfo()
		{
			return ((::MX::GameLogic::DBModel::BattlePassInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONSINGLEREWARDRESPONSE_GET_BATTLEPASSINFO_OFFSET))(nullptr);
		}

	};
}

