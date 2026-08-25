#pragma once
#include "unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class CampaignMainStageEndSummary;
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
class HexaUnitVisual;
class ICampaignTacticResultNetworkTask;
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace FlatData { class EchelonType; }
namespace MX::Campaign { class Strategy; }
namespace MX::GameLogic::DBModel { class StrategyObjectHistoryDB; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::Data { class CampaignStageInfo; }
namespace MX::Campaign { class HexaUnit; }
namespace MX::Campaign { class HexLocation; }
namespace MX::Logic::Data { class BattleSetting; }

#define SCENARIOCAMPAIGNTASK_HANDLESCENARIOENDTURNRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2028230)
#define SCENARIOCAMPAIGNTASK_GET_MAINSTAGEENDSUMMARY_OFFSET UNITYSDK_OFFSET(0x20283F0)
#define SCENARIOCAMPAIGNTASK_HANDLESCENARIOMAPMOVERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2028480)
#define SCENARIOCAMPAIGNTASK_HANDLESCENARIOENTERTACTICRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2028720)
#define SCENARIOCAMPAIGNTASK_GET_RETREATREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x2028E50)
#define SCENARIOCAMPAIGNTASK_HANDLESCENARIODEPLOYECHELONRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2028EE0)
#define SCENARIOCAMPAIGNTASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2029000)
#define SCENARIOCAMPAIGNTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x2029400)
#define SCENARIOCAMPAIGNTASK_HANDLESCENARIOWITHDRAWECHELONRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2029410)
#define SCENARIOCAMPAIGNTASK_HANDLESCENARIORETREATRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2029740)
#define SCENARIOCAMPAIGNTASK_GET_STAGEHISTROY_OFFSET UNITYSDK_OFFSET(0x20297F0)
#define SCENARIOCAMPAIGNTASK_GET_ISSKIPPEDCAMPAIGN_OFFSET UNITYSDK_OFFSET(0x20298A0)
#define SCENARIOCAMPAIGNTASK_REQUESTWITHDRAWECHELON_OFFSET UNITYSDK_OFFSET(0x2029930)
#define SCENARIOCAMPAIGNTASK_REQEUSTRESTARTMAINSTAGE_OFFSET UNITYSDK_OFFSET(0x2029AF0)
#define SCENARIOCAMPAIGNTASK_SKIPCAMPAIGN_OFFSET UNITYSDK_OFFSET(0x2029B80)
#define SCENARIOCAMPAIGNTASK_HANDLESCENARIOSKIPMAINSTAGERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2029DE0)
#define SCENARIOCAMPAIGNTASK_CREATECAMPAIGNTACTICRESULTNETWORKTASK_OFFSET UNITYSDK_OFFSET(0x2029E50)
#define SCENARIOCAMPAIGNTASK_REQUESTDEPLOYECHELON_OFFSET UNITYSDK_OFFSET(0x2029E80)
#define SCENARIOCAMPAIGNTASK_GET_CAMPAIGNSTRATEGYOBJECTREWARD_OFFSET UNITYSDK_OFFSET(0x2029F50)
#define SCENARIOCAMPAIGNTASK_SET_RETREATREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x2029F60)
#define SCENARIOCAMPAIGNTASK_REQUESTPORTAL_OFFSET UNITYSDK_OFFSET(0x202A000)
#define SCENARIOCAMPAIGNTASK_REQUESTSKIPMAINSTAGE_OFFSET UNITYSDK_OFFSET(0x202A0C0)
#define SCENARIOCAMPAIGNTASK_RELEASE_OFFSET UNITYSDK_OFFSET(0x202A170)
#define SCENARIOCAMPAIGNTASK__HANDLESCENARIOPORTALRESPONSEMESSAGE_G__COPORTALUSED|28_0_OFFSET UNITYSDK_OFFSET(0x202A5E0)
#define SCENARIOCAMPAIGNTASK__HANDLESCENARIOENDTURNRESPONSEMESSAGE_B__25_0_OFFSET UNITYSDK_OFFSET(0x202A670)
#define SCENARIOCAMPAIGNTASK_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x202A720)
#define SCENARIOCAMPAIGNTASK_REQUESTENTERTACTIC_OFFSET UNITYSDK_OFFSET(0x202A730)
#define SCENARIOCAMPAIGNTASK_REQUESTENDTURN_OFFSET UNITYSDK_OFFSET(0x202A800)
#define SCENARIOCAMPAIGNTASK_HANDLESCENARIOTACTICRESULTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x202A8B0)
#define SCENARIOCAMPAIGNTASK__HANDLESCENARIOENTERTACTICRESPONSEMESSAGE_B__27_0_OFFSET UNITYSDK_OFFSET(0x202AB50)
#define SCENARIOCAMPAIGNTASK_GET_CAMPAIGNSTRATEGYOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x202AB60)
#define SCENARIOCAMPAIGNTASK_REQUESTRETREAT_OFFSET UNITYSDK_OFFSET(0x202ABF0)
#define SCENARIOCAMPAIGNTASK_GET_STRATEGYOBJECTHISTORY_OFFSET UNITYSDK_OFFSET(0x202ACA0)
#define SCENARIOCAMPAIGNTASK_GET_MAINSTAGESAVE_OFFSET UNITYSDK_OFFSET(0x202ACB0)
#define SCENARIOCAMPAIGNTASK_HANDLESCENARIOCONFIRMMAINSTAGERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x202AD40)
#define SCENARIOCAMPAIGNTASK_HANDLESCENARIOENTERMAINSTAGERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x202B1B0)
#define SCENARIOCAMPAIGNTASK_REQUESTCONFIRMMAINSTAGE_OFFSET UNITYSDK_OFFSET(0x202B4B0)
#define SCENARIOCAMPAIGNTASK_GET_STAGEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x202B6E0)
#define SCENARIOCAMPAIGNTASK_REQUESTMAPMOVE_OFFSET UNITYSDK_OFFSET(0x202B770)
#define SCENARIOCAMPAIGNTASK_HANDLESCENARIOPORTALRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x202B9E0)
#define SCENARIOCAMPAIGNTASK_REQUESTENTERMAINSTAGE_OFFSET UNITYSDK_OFFSET(0x202BB00)
#define SCENARIOCAMPAIGNTASK_CREATEBATTLESETTING_OFFSET UNITYSDK_OFFSET(0x202BCC0)
#define SCENARIOCAMPAIGNTASK_ENDBATTLESIMULATION_OFFSET UNITYSDK_OFFSET(0x202BCE0)

	inline static constexpr unsigned int ScenarioCampaignTask_TypeDefinitionIndex = 3203;

	class ScenarioCampaignTask : public Il2CppObject
	{
	public:
		::System::Boolean HandleScenarioEndTurnResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_HANDLESCENARIOENDTURNRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		CampaignMainStageEndSummary* get_MainStageEndSummary()
		{
			return ((CampaignMainStageEndSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_GET_MAINSTAGEENDSUMMARY_OFFSET))(nullptr);
		}

		::System::Boolean HandleScenarioMapMoveResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_HANDLESCENARIOMAPMOVERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleScenarioEnterTacticResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_HANDLESCENARIOENTERTACTICRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RetreatRewardParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_GET_RETREATREWARDPARCELS_OFFSET))(nullptr);
		}

		::System::Boolean HandleScenarioDeployEchelonResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_HANDLESCENARIODEPLOYECHELONRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleScenarioWithdrawEchelonResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_HANDLESCENARIOWITHDRAWECHELONRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleScenarioRetreatResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_HANDLESCENARIORETREATRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* get_StageHistroy()
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_GET_STAGEHISTROY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSkippedCampaign()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_GET_ISSKIPPEDCAMPAIGN_OFFSET))(nullptr);
		}

		::System::Void RequestWithdrawEchelon(Il2CppObject* arg, HexaUnitVisual* arg2)
		{
			((::System::Void(*)(Il2CppObject*, HexaUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_REQUESTWITHDRAWECHELON_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ReqeustRestartMainStage()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_REQEUSTRESTARTMAINSTAGE_OFFSET))(nullptr);
		}

		::System::Void SkipCampaign()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_SKIPCAMPAIGN_OFFSET))(nullptr);
		}

		::System::Boolean HandleScenarioSkipMainStageResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_HANDLESCENARIOSKIPMAINSTAGERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		ICampaignTacticResultNetworkTask* CreateCampaignTacticResultNetworkTask()
		{
			return ((ICampaignTacticResultNetworkTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_CREATECAMPAIGNTACTICRESULTNETWORKTASK_OFFSET))(nullptr);
		}

		::System::Void RequestDeployEchelon(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_REQUESTDEPLOYECHELON_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_CampaignStrategyObjectReward()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_GET_CAMPAIGNSTRATEGYOBJECTREWARD_OFFSET))(nullptr);
		}

		::System::Void set_RetreatRewardParcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_SET_RETREATREWARDPARCELS_OFFSET))(arg, nullptr);
		}

		::System::Void RequestPortal(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_REQUESTPORTAL_OFFSET))(arg, nullptr);
		}

		::System::Void RequestSkipMainStage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_REQUESTSKIPMAINSTAGE_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_RELEASE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _HandleScenarioPortalResponseMessage_g__CoPortalUsed|28_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK__HANDLESCENARIOPORTALRESPONSEMESSAGE_G__COPORTALUSED|28_0_OFFSET))(nullptr);
		}

		::System::Void _HandleScenarioEndTurnResponseMessage_b__25_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK__HANDLESCENARIOENDTURNRESPONSEMESSAGE_B__25_0_OFFSET))(nullptr);
		}

		::FlatData::EchelonType* get_EchelonType()
		{
			return ((::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::System::Void RequestEnterTactic()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_REQUESTENTERTACTIC_OFFSET))(nullptr);
		}

		::System::Void RequestEndTurn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_REQUESTENDTURN_OFFSET))(nullptr);
		}

		::System::Boolean HandleScenarioTacticResultResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_HANDLESCENARIOTACTICRESULTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void _HandleScenarioEnterTacticResponseMessage_b__27_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK__HANDLESCENARIOENTERTACTICRESPONSEMESSAGE_B__27_0_OFFSET))(nullptr);
		}

		::MX::Campaign::Strategy* get_CampaignStrategyObjectInfo()
		{
			return ((::MX::Campaign::Strategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_GET_CAMPAIGNSTRATEGYOBJECTINFO_OFFSET))(nullptr);
		}

		::System::Void RequestRetreat()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_REQUESTRETREAT_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::StrategyObjectHistoryDB* get_StrategyObjectHistory()
		{
			return ((::MX::GameLogic::DBModel::StrategyObjectHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_GET_STRATEGYOBJECTHISTORY_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* get_MainStageSave()
		{
			return ((::MX::GameLogic::DBModel::CampaignMainStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_GET_MAINSTAGESAVE_OFFSET))(nullptr);
		}

		::System::Boolean HandleScenarioConfirmMainStageResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_HANDLESCENARIOCONFIRMMAINSTAGERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleScenarioEnterMainStageResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_HANDLESCENARIOENTERMAINSTAGERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RequestConfirmMainStage(::MX::Data::CampaignStageInfo* arg, ::System::Boolean arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_REQUESTCONFIRMMAINSTAGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* get_StageHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_GET_STAGEHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void RequestMapMove(::MX::Campaign::HexaUnit* arg, ::MX::Campaign::HexLocation* arg2)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_REQUESTMAPMOVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandleScenarioPortalResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_HANDLESCENARIOPORTALRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RequestEnterMainStage(::MX::Data::CampaignStageInfo* arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_REQUESTENTERMAINSTAGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::Data::BattleSetting* CreateBattleSetting()
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_CREATEBATTLESETTING_OFFSET))(nullptr);
		}

		::System::Void EndBattleSimulation(ICampaignTacticResultNetworkTask* arg, ::MX::Logic::Data::BattleSetting* arg2)
		{
			((::System::Void(*)(ICampaignTacticResultNetworkTask*, ::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCAMPAIGNTASK_ENDBATTLESIMULATION_OFFSET))(arg, arg2, nullptr);
		}

	};

