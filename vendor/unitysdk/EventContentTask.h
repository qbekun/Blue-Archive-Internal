#pragma once
#include "unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::Data { class CampaignStageInfo; }
namespace MX::Campaign { class HexaUnit; }
namespace MX::Campaign { class HexLocation; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
class UIPopup_System;
namespace MX::Campaign { class Strategy; }
class ICampaignTacticResultNetworkTask;
namespace MX::GameLogic::DBModel { class StrategyObjectHistoryDB; }
class CampaignMainStageEndSummary;
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
class HexaUnitVisual;
namespace MX::Logic::Data { class BattleSetting; }

#define EVENTCONTENTTASK_HANDLEEVENTCONTENTWITHDRAWECHELONRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x200CD30)
#define EVENTCONTENTTASK_GET_STAGEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x200D060)
#define EVENTCONTENTTASK_HANDLEEVENTCONTENTMAPMOVERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x200D170)
#define EVENTCONTENTTASK_REQUESTENTERTUTORIALSTAGE_OFFSET UNITYSDK_OFFSET(0x200D470)
#define EVENTCONTENTTASK_INVALIDSAVEDATA_OFFSET UNITYSDK_OFFSET(0x200D4C0)
#define EVENTCONTENTTASK_CLEARSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x200D6A0)
#define EVENTCONTENTTASK__INVALIDSAVEDATA_B__31_1_OFFSET UNITYSDK_OFFSET(0x200D6C0)
#define EVENTCONTENTTASK_CLEARMAINSTAGESAVE_OFFSET UNITYSDK_OFFSET(0x200D750)
#define EVENTCONTENTTASK_HANDLEEVENTCONTENTENTERTACTICRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x200D850)
#define EVENTCONTENTTASK_REQUESTMAPMOVE_OFFSET UNITYSDK_OFFSET(0x200D8C0)
#define EVENTCONTENTTASK__GET_STAGEHISTROY_B__5_0_OFFSET UNITYSDK_OFFSET(0x200DB90)
#define EVENTCONTENTTASK__INVALIDSAVEDATA_B__31_0_OFFSET UNITYSDK_OFFSET(0x200DBC0)
#define EVENTCONTENTTASK_HANDLEEVENTCONTENTENTERMAINSTAGERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x200DC60)
#define EVENTCONTENTTASK__HANDLEEVENTCONTENTENDTURNRESPONSEMESSAGE_B__23_0_OFFSET UNITYSDK_OFFSET(0x200DF20)
#define EVENTCONTENTTASK_GET_CAMPAIGNSTRATEGYOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x200DFC0)
#define EVENTCONTENTTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x200E0D0)
#define EVENTCONTENTTASK_REQEUSTRESTARTMAINSTAGE_OFFSET UNITYSDK_OFFSET(0x200E0E0)
#define EVENTCONTENTTASK_CREATECAMPAIGNTACTICRESULTNETWORKTASK_OFFSET UNITYSDK_OFFSET(0x200E170)
#define EVENTCONTENTTASK_REQUESTENTERSUBSTAGE_OFFSET UNITYSDK_OFFSET(0x200E240)
#define EVENTCONTENTTASK_GET_RETREATREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x200E440)
#define EVENTCONTENTTASK_REQUESTCONFIRMMAINSTAGE_OFFSET UNITYSDK_OFFSET(0x200E550)
#define EVENTCONTENTTASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x200E7D0)
#define EVENTCONTENTTASK_REQUESTDEPLOYECHELON_OFFSET UNITYSDK_OFFSET(0x200EB50)
#define EVENTCONTENTTASK_HANDLEEVENTCONTENTTACTICRESULTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x200EC70)
#define EVENTCONTENTTASK_SET_RETREATREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x200EF70)
#define EVENTCONTENTTASK_REQUESTENTERMAINGROUNDSTAGE_OFFSET UNITYSDK_OFFSET(0x200F090)
#define EVENTCONTENTTASK_REQUESTPORTAL_OFFSET UNITYSDK_OFFSET(0x200F290)
#define EVENTCONTENTTASK_GET_STRATEGYOBJECTHISTORY_OFFSET UNITYSDK_OFFSET(0x200F3A0)
#define EVENTCONTENTTASK_RELEASE_OFFSET UNITYSDK_OFFSET(0x200F530)
#define EVENTCONTENTTASK_REQUESTCONFIRMTUTORIAL_OFFSET UNITYSDK_OFFSET(0x200F930)
#define EVENTCONTENTTASK__HANDLEEVENTCONTENTPORTALRESPONSEMESSAGE_G__COPORTALUSED|26_0_OFFSET UNITYSDK_OFFSET(0x200F980)
#define EVENTCONTENTTASK_HANDLEEVENTCONTENTENTERMAINGROUNDSTAGERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x200FA10)
#define EVENTCONTENTTASK_REQUESTENTERMAINSTAGE_OFFSET UNITYSDK_OFFSET(0x200FCE0)
#define EVENTCONTENTTASK__GET_STRATEGYOBJECTHISTORY_B__7_0_OFFSET UNITYSDK_OFFSET(0x200FEF0)
#define EVENTCONTENTTASK_HANDLEEVENTCONTENTCONFIRMMAINSTAGERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x200FF20)
#define EVENTCONTENTTASK_GET_MAINSTAGEENDSUMMARY_OFFSET UNITYSDK_OFFSET(0x2010310)
#define EVENTCONTENTTASK_HANDLEEVENTCONTENTPORTALRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2010420)
#define EVENTCONTENTTASK_HANDLEEVENTCONTENTRETREATRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2010540)
#define EVENTCONTENTTASK_GET_MAINSTAGESAVE_OFFSET UNITYSDK_OFFSET(0x20105E0)
#define EVENTCONTENTTASK_REQUESTENDTURN_OFFSET UNITYSDK_OFFSET(0x20106F0)
#define EVENTCONTENTTASK_GET_CAMPAIGNSTRATEGYOBJECTREWARD_OFFSET UNITYSDK_OFFSET(0x20107F0)
#define EVENTCONTENTTASK_HANDLEEVENTCONTENTDEPLOYECHELONRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2010900)
#define EVENTCONTENTTASK_REQUESTRETREAT_OFFSET UNITYSDK_OFFSET(0x2010A20)
#define EVENTCONTENTTASK_HANDLEEVENTCONTENTENDTURNRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2010B20)
#define EVENTCONTENTTASK_GET_STAGEHISTROY_OFFSET UNITYSDK_OFFSET(0x2010E10)
#define EVENTCONTENTTASK_REQUESTWITHDRAWECHELON_OFFSET UNITYSDK_OFFSET(0x2010FA0)
#define EVENTCONTENTTASK_ENDBATTLESIMULATION_OFFSET UNITYSDK_OFFSET(0x20111C0)
#define EVENTCONTENTTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1FFEF60)
#define EVENTCONTENTTASK_HANDLEEVENTCONTENTENTERSUBSTAGERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2011440)
#define EVENTCONTENTTASK_REQUESTENTERTACTIC_OFFSET UNITYSDK_OFFSET(0x2011710)

	inline static constexpr unsigned int EventContentTask_TypeDefinitionIndex = 3151;

	class EventContentTask : public Il2CppObject
	{
	public:
		::System::Boolean HandleEventContentWithdrawEchelonResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_HANDLEEVENTCONTENTWITHDRAWECHELONRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_StageHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_GET_STAGEHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentMapMoveResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_HANDLEEVENTCONTENTMAPMOVERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RequestEnterTutorialStage(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_REQUESTENTERTUTORIALSTAGE_OFFSET))(arg, nullptr);
		}

		::System::Void InvalidSaveData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_INVALIDSAVEDATA_OFFSET))(nullptr);
		}

		::System::Void ClearStageInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_CLEARSTAGEINFO_OFFSET))(nullptr);
		}

		::System::Void _InvalidSaveData_b__31_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK__INVALIDSAVEDATA_B__31_1_OFFSET))(nullptr);
		}

		::System::Void ClearMainStageSave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_CLEARMAINSTAGESAVE_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentEnterTacticResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_HANDLEEVENTCONTENTENTERTACTICRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RequestMapMove(::MX::Campaign::HexaUnit* arg, ::MX::Campaign::HexLocation* arg2)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_REQUESTMAPMOVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _get_StageHistroy_b__5_0(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK__GET_STAGEHISTROY_B__5_0_OFFSET))(arg, nullptr);
		}

		::System::Void _InvalidSaveData_b__31_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK__INVALIDSAVEDATA_B__31_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEventContentEnterMainStageResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_HANDLEEVENTCONTENTENTERMAINSTAGERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void _HandleEventContentEndTurnResponseMessage_b__23_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK__HANDLEEVENTCONTENTENDTURNRESPONSEMESSAGE_B__23_0_OFFSET))(nullptr);
		}

		::MX::Campaign::Strategy* get_CampaignStrategyObjectInfo()
		{
			return ((::MX::Campaign::Strategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_GET_CAMPAIGNSTRATEGYOBJECTINFO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ReqeustRestartMainStage()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_REQEUSTRESTARTMAINSTAGE_OFFSET))(nullptr);
		}

		ICampaignTacticResultNetworkTask* CreateCampaignTacticResultNetworkTask()
		{
			return ((ICampaignTacticResultNetworkTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_CREATECAMPAIGNTACTICRESULTNETWORKTASK_OFFSET))(nullptr);
		}

		::System::Void RequestEnterSubStage(::MX::Data::CampaignStageInfo* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_REQUESTENTERSUBSTAGE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_RetreatRewardParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_GET_RETREATREWARDPARCELS_OFFSET))(nullptr);
		}

		::System::Void RequestConfirmMainStage(::MX::Data::CampaignStageInfo* arg, ::System::Boolean arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_REQUESTCONFIRMMAINSTAGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void RequestDeployEchelon(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_REQUESTDEPLOYECHELON_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandleEventContentTacticResultResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_HANDLEEVENTCONTENTTACTICRESULTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_RetreatRewardParcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_SET_RETREATREWARDPARCELS_OFFSET))(arg, nullptr);
		}

		::System::Void RequestEnterMainGroundStage(::MX::Data::CampaignStageInfo* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_REQUESTENTERMAINGROUNDSTAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RequestPortal(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_REQUESTPORTAL_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::StrategyObjectHistoryDB* get_StrategyObjectHistory()
		{
			return ((::MX::GameLogic::DBModel::StrategyObjectHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_GET_STRATEGYOBJECTHISTORY_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_RELEASE_OFFSET))(nullptr);
		}

		::System::Void RequestConfirmTutorial(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_REQUESTCONFIRMTUTORIAL_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _HandleEventContentPortalResponseMessage_g__CoPortalUsed|26_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK__HANDLEEVENTCONTENTPORTALRESPONSEMESSAGE_G__COPORTALUSED|26_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentEnterMainGroundStageResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_HANDLEEVENTCONTENTENTERMAINGROUNDSTAGERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RequestEnterMainStage(::MX::Data::CampaignStageInfo* arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_REQUESTENTERMAINSTAGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean _get_StrategyObjectHistory_b__7_0(::MX::GameLogic::DBModel::StrategyObjectHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::StrategyObjectHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK__GET_STRATEGYOBJECTHISTORY_B__7_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEventContentConfirmMainStageResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_HANDLEEVENTCONTENTCONFIRMMAINSTAGERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		CampaignMainStageEndSummary* get_MainStageEndSummary()
		{
			return ((CampaignMainStageEndSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_GET_MAINSTAGEENDSUMMARY_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentPortalResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_HANDLEEVENTCONTENTPORTALRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEventContentRetreatResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_HANDLEEVENTCONTENTRETREATRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* get_MainStageSave()
		{
			return ((::MX::GameLogic::DBModel::CampaignMainStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_GET_MAINSTAGESAVE_OFFSET))(nullptr);
		}

		::System::Void RequestEndTurn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_REQUESTENDTURN_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_CampaignStrategyObjectReward()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_GET_CAMPAIGNSTRATEGYOBJECTREWARD_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentDeployEchelonResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_HANDLEEVENTCONTENTDEPLOYECHELONRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RequestRetreat()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_REQUESTRETREAT_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentEndTurnResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_HANDLEEVENTCONTENTENDTURNRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* get_StageHistroy()
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_GET_STAGEHISTROY_OFFSET))(nullptr);
		}

		::System::Void RequestWithdrawEchelon(Il2CppObject* arg, HexaUnitVisual* arg2)
		{
			((::System::Void(*)(Il2CppObject*, HexaUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_REQUESTWITHDRAWECHELON_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EndBattleSimulation(ICampaignTacticResultNetworkTask* arg, ::MX::Logic::Data::BattleSetting* arg2)
		{
			((::System::Void(*)(ICampaignTacticResultNetworkTask*, ::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_ENDBATTLESIMULATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentEnterSubStageResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_HANDLEEVENTCONTENTENTERSUBSTAGERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RequestEnterTactic()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTASK_REQUESTENTERTACTIC_OFFSET))(nullptr);
		}

	};

