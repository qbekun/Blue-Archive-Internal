#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::Campaign { class Strategy; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_GET_CAMPAIGNSTAGEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF14CA0)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_SET_THREESTARREWARD_OFFSET UNITYSDK_OFFSET(0xF14CB0)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_SET_FIRSTCLEARREWARD_OFFSET UNITYSDK_OFFSET(0xF14CC0)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF14CD0)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF14CF0)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_GET_STRATEGYOBJECT_OFFSET UNITYSDK_OFFSET(0xF14D00)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_SET_TACTICRANK_OFFSET UNITYSDK_OFFSET(0xF14D10)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_GET_THREESTARREWARD_OFFSET UNITYSDK_OFFSET(0xF14D20)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_GET_FIRSTCLEARREWARD_OFFSET UNITYSDK_OFFSET(0xF14D30)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_GET_STRATEGYOBJECTREWARDS_OFFSET UNITYSDK_OFFSET(0xF14D40)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_SET_CAMPAIGNSTAGEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF14D50)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_GET_LEVELUPCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0xF14D60)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_SET_STRATEGYOBJECT_OFFSET UNITYSDK_OFFSET(0xF14D70)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14D80)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_SET_STRATEGYOBJECTREWARDS_OFFSET UNITYSDK_OFFSET(0xF14D90)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_GET_TACTICRANK_OFFSET UNITYSDK_OFFSET(0xF14DA0)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_SET_LEVELUPCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0xF14DB0)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF14DC0)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF14DE0)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF14DF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignTacticResultResponse_TypeDefinitionIndex = 11429;

	class CampaignTacticResultResponse : public Il2CppObject
	{
	public:
		::System::Int64 _TacticRank_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::CampaignStageHistoryDB* _CampaignStageHistoryDB_k__BackingField; // 0x58
		Il2CppObject* _LevelUpCharacterDBs_k__BackingField; // 0x60
		Il2CppObject* _FirstClearReward_k__BackingField; // 0x68
		Il2CppObject* _ThreeStarReward_k__BackingField; // 0x70
		::MX::Campaign::Strategy* _StrategyObject_k__BackingField; // 0x78
		Il2CppObject* _StrategyObjectRewards_k__BackingField; // 0x80
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x88
		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* _SaveDataDB_k__BackingField; // 0x90

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* get_CampaignStageHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_GET_CAMPAIGNSTAGEHISTORYDB_OFFSET))(nullptr);
		}

		::System::Void set_ThreeStarReward(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_SET_THREESTARREWARD_OFFSET))(arg, nullptr);
		}

		::System::Void set_FirstClearReward(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_SET_FIRSTCLEARREWARD_OFFSET))(arg, nullptr);
		}

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::Campaign::Strategy* get_StrategyObject()
		{
			return ((::MX::Campaign::Strategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_GET_STRATEGYOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_TacticRank(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_SET_TACTICRANK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ThreeStarReward()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_GET_THREESTARREWARD_OFFSET))(nullptr);
		}

		Il2CppObject* get_FirstClearReward()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_GET_FIRSTCLEARREWARD_OFFSET))(nullptr);
		}

		Il2CppObject* get_StrategyObjectRewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_GET_STRATEGYOBJECTREWARDS_OFFSET))(nullptr);
		}

		::System::Void set_CampaignStageHistoryDB(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_SET_CAMPAIGNSTAGEHISTORYDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_LevelUpCharacterDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_GET_LEVELUPCHARACTERDBS_OFFSET))(nullptr);
		}

		::System::Void set_StrategyObject(::MX::Campaign::Strategy* arg)
		{
			((::System::Void(*)(::MX::Campaign::Strategy*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_SET_STRATEGYOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_StrategyObjectRewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_SET_STRATEGYOBJECTREWARDS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TacticRank()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_GET_TACTICRANK_OFFSET))(nullptr);
		}

		::System::Void set_LevelUpCharacterDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_SET_LEVELUPCHARACTERDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::CampaignMainStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTRESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

	};
}

