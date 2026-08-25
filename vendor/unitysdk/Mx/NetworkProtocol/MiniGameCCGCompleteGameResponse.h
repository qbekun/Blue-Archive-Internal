#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameCCGSaveDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMECCGCOMPLETEGAMERESPONSE_SET_OLDSAVEDB_OFFSET UNITYSDK_OFFSET(0xF4A220)
#define MX_NETWORKPROTOCOL_MINIGAMECCGCOMPLETEGAMERESPONSE_SET_REWARDPARCELS_OFFSET UNITYSDK_OFFSET(0xF4A230)
#define MX_NETWORKPROTOCOL_MINIGAMECCGCOMPLETEGAMERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4A240)
#define MX_NETWORKPROTOCOL_MINIGAMECCGCOMPLETEGAMERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4A250)
#define MX_NETWORKPROTOCOL_MINIGAMECCGCOMPLETEGAMERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4A260)
#define MX_NETWORKPROTOCOL_MINIGAMECCGCOMPLETEGAMERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4A270)
#define MX_NETWORKPROTOCOL_MINIGAMECCGCOMPLETEGAMERESPONSE_GET_REWARDPARCELS_OFFSET UNITYSDK_OFFSET(0xF4A280)
#define MX_NETWORKPROTOCOL_MINIGAMECCGCOMPLETEGAMERESPONSE_GET_OLDSAVEDB_OFFSET UNITYSDK_OFFSET(0xF4A290)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameCCGCompleteGameResponse_TypeDefinitionIndex = 11940;

	class MiniGameCCGCompleteGameResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MiniGameCCGSaveDB* _OldSaveDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58
		Il2CppObject* _RewardParcels_k__BackingField; // 0x60

		::System::Void set_OldSaveDB(::MX::GameLogic::DBModel::MiniGameCCGSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGCOMPLETEGAMERESPONSE_SET_OLDSAVEDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_RewardParcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGCOMPLETEGAMERESPONSE_SET_REWARDPARCELS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGCOMPLETEGAMERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGCOMPLETEGAMERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGCOMPLETEGAMERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGCOMPLETEGAMERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_RewardParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGCOMPLETEGAMERESPONSE_GET_REWARDPARCELS_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGSaveDB* get_OldSaveDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameCCGSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGCOMPLETEGAMERESPONSE_GET_OLDSAVEDB_OFFSET))(nullptr);
		}

	};
}

