#pragma once
#include "unitysdk.h"

class CampaignTask;
class UICampaign;
namespace MX::Logic::Battles { class Battle; }
namespace MX::Campaign { class HexaTileMap; }
namespace MX::Campaign { class HexaUnit; }
class HexaEventDisplayer;
namespace MX::Data { class CampaignStageInfo; }
namespace MX::NetworkProtocol { class CampaignState; }
namespace FlatData { class EchelonType; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::GameLogic::DBModel { class StrategyObjectHistoryDB; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
class CampaignMainStageEndSummary;
namespace MX::Campaign { class Strategy; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::Campaign { class HexLocation; }
class HexaUnitVisual;
namespace MX::Logic::Data { class BattleSetting; }
class ICampaignTacticResultNetworkTask;
class EchelonObject;
namespace FlatData { class EchelonExtensionType; }
namespace MX::GameLogic::DBModel { class SessionKey; }
namespace MX::NetworkProtocol { class Protocol; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::Logic::Battles::Summary { class BattleSummary; }
class UIPopup_System;
class UILoading;

#define CAMPAIGNTASK_GET_ACTIVATEDTASK_OFFSET UNITYSDK_OFFSET(0x1FFC280)
#define CAMPAIGNTASK_SET_ACTIVATEDTASK_OFFSET UNITYSDK_OFFSET(0x1FFC2C0)
#define CAMPAIGNTASK_GET_ISTACTICSKIPON_OFFSET UNITYSDK_OFFSET(0x1FFC310)
#define CAMPAIGNTASK_SET_ISTACTICSKIPON_OFFSET UNITYSDK_OFFSET(0x1FFC320)
#define CAMPAIGNTASK_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0x1FFC330)
#define CAMPAIGNTASK_SET_MAPDATA_OFFSET UNITYSDK_OFFSET(0x1FFC340)
#define CAMPAIGNTASK_GET_BATTLEENEMY_OFFSET UNITYSDK_OFFSET(0x1FFC350)
#define CAMPAIGNTASK_SET_BATTLEENEMY_OFFSET UNITYSDK_OFFSET(0x1FFC360)
#define CAMPAIGNTASK_GET_BATTLEPLAYER_OFFSET UNITYSDK_OFFSET(0x1FFC370)
#define CAMPAIGNTASK_SET_BATTLEPLAYER_OFFSET UNITYSDK_OFFSET(0x1FFC380)
#define CAMPAIGNTASK_GET_ISTACTICREADY_OFFSET UNITYSDK_OFFSET(0x1FFC390)
#define CAMPAIGNTASK_SET_ISTACTICREADY_OFFSET UNITYSDK_OFFSET(0x1FFC3A0)
#define CAMPAIGNTASK_GET_ECHELONLIST_OFFSET UNITYSDK_OFFSET(0x1FFC3B0)
#define CAMPAIGNTASK_SET_ECHELONLIST_OFFSET UNITYSDK_OFFSET(0x1FFC3C0)
#define CAMPAIGNTASK_GET_HEXAEVENTDISPLAYER_OFFSET UNITYSDK_OFFSET(0x1FFC3D0)
#define CAMPAIGNTASK_SET_HEXAEVENTDISPLAYER_OFFSET UNITYSDK_OFFSET(0x1FFC3E0)
#define CAMPAIGNTASK_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1FFC3F0)
#define CAMPAIGNTASK_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1FFC400)
#define CAMPAIGNTASK_GET_ISCAMPAIGNMAINSTAGESTRATEGYSKIP_OFFSET UNITYSDK_OFFSET(0x1FFC410)
#define CAMPAIGNTASK_SET_ISCAMPAIGNMAINSTAGESTRATEGYSKIP_OFFSET UNITYSDK_OFFSET(0x1FFC420)
#define CAMPAIGNTASK_GET_STARTCAMPAIGN_OFFSET UNITYSDK_OFFSET(0x1FFC430)
#define CAMPAIGNTASK_SET_STARTCAMPAIGN_OFFSET UNITYSDK_OFFSET(0x1FFC440)
#define CAMPAIGNTASK_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1FFC450)
#define CAMPAIGNTASK_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1FFC460)
#define CAMPAIGNTASK_GET_SELECTEDBUFFIDS_OFFSET UNITYSDK_OFFSET(0x1FFC470)
#define CAMPAIGNTASK_SET_SELECTEDBUFFIDS_OFFSET UNITYSDK_OFFSET(0x1FFC480)
#define CAMPAIGNTASK_GET_STAGEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x1FFC490)
#define CAMPAIGNTASK_GET_PORTALUSED_OFFSET UNITYSDK_OFFSET(0x1FFC520)
#define CAMPAIGNTASK_SET_PORTALUSED_OFFSET UNITYSDK_OFFSET(0x1FFC530)
#define CAMPAIGNTASK_GET_FINDAVAILABLEECHELONINDEX_OFFSET UNITYSDK_OFFSET(0x1FFC540)
#define CAMPAIGNTASK_SET_FINDAVAILABLEECHELONINDEX_OFFSET UNITYSDK_OFFSET(0x1FFC550)
#define CAMPAIGNTASK_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x1FFC560)
#define CAMPAIGNTASK_GET_STAGEHISTROY_OFFSET UNITYSDK_OFFSET(0x1FFC590)
#define CAMPAIGNTASK_GET_STRATEGYOBJECTHISTORY_OFFSET UNITYSDK_OFFSET(0x1FFC640)
#define CAMPAIGNTASK_GET_MAINSTAGESAVE_OFFSET UNITYSDK_OFFSET(0x1FFC750)
#define CAMPAIGNTASK_GET_MAINSTAGEENDSUMMARY_OFFSET UNITYSDK_OFFSET(0x1FFC7E0)
#define CAMPAIGNTASK_GET_RETREATREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x1FFC870)
#define CAMPAIGNTASK_SET_RETREATREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x1FFC900)
#define CAMPAIGNTASK_GET_CAMPAIGNSTRATEGYOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x1FFC9A0)
#define CAMPAIGNTASK_GET_CAMPAIGNSTRATEGYOBJECTREWARD_OFFSET UNITYSDK_OFFSET(0x1FFCA30)
#define CAMPAIGNTASK_GET_ISSKIPPEDCAMPAIGN_OFFSET UNITYSDK_OFFSET(0x1FFCAC0)
#define CAMPAIGNTASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FFCAD0)
#define CAMPAIGNTASK_RELEASE_OFFSET UNITYSDK_OFFSET(0x1FFCEA0)
#define CAMPAIGNTASK_HANDLECAMPAIGNMAPMOVERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FFD2A0)
#define CAMPAIGNTASK_MOVEPLAYER_OFFSET UNITYSDK_OFFSET(0x1FFD5A0)
#define CAMPAIGNTASK_MOVEUNIT_OFFSET UNITYSDK_OFFSET(0x1FFD670)
#define CAMPAIGNTASK_ONLEAVETILE_OFFSET UNITYSDK_OFFSET(0x1FFD740)
#define CAMPAIGNTASK_ONENTERTILE_OFFSET UNITYSDK_OFFSET(0x1FFD860)
#define CAMPAIGNTASK_POSITIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1FFD9E0)
#define CAMPAIGNTASK_MOVEEND_OFFSET UNITYSDK_OFFSET(0x1FFDAA0)
#define CAMPAIGNTASK_PROCESSSTRATEGYANDDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1FFDFA0)
#define CAMPAIGNTASK_PROCESSSTRATEGY_OFFSET UNITYSDK_OFFSET(0x1FFE030)
#define CAMPAIGNTASK_CHECKBATTLE_OFFSET UNITYSDK_OFFSET(0x1FFDB90)
#define CAMPAIGNTASK_REFRESHUNITPOSITION_OFFSET UNITYSDK_OFFSET(0x1FFDE20)
#define CAMPAIGNTASK_PROCESSVISUALCONDITIONANDCOMMAND_OFFSET UNITYSDK_OFFSET(0x1FFE160)
#define CAMPAIGNTASK_HANDLECAMPAIGNDEPLOYECHELONRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FFE1C0)
#define CAMPAIGNTASK_HANDLECAMPAIGNENDTURNRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FFE2E0)
#define CAMPAIGNTASK_GETCURRENTLEADERSERVERID_OFFSET UNITYSDK_OFFSET(0x1FFEE30)
#define CAMPAIGNTASK_GETCURRENTFIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1FFE500)
#define CAMPAIGNTASK_ENDCAMPAIGN_OFFSET UNITYSDK_OFFSET(0x1FFE5F0)
#define CAMPAIGNTASK_CO_REFRESHSAVEDATA_OFFSET UNITYSDK_OFFSET(0x1FFEDA0)
#define CAMPAIGNTASK_CO_REFRESHSAVEDATA_OFFSET UNITYSDK_OFFSET(0x1FFEFF0)
#define CAMPAIGNTASK_ISTACTICSKIP_OFFSET UNITYSDK_OFFSET(0x1FFE0E0)
#define CAMPAIGNTASK_GETENTERSCENARIOGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1FFF080)
#define CAMPAIGNTASK_GETCLEARSCENARIOGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1FFF200)
#define CAMPAIGNTASK_HANDLECAMPAIGNRETREATRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FFF380)
#define CAMPAIGNTASK_HANDLECAMPAIGNENTERTACTICRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FFF420)
#define CAMPAIGNTASK_HANDLECAMPAIGNPORTALRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FFF630)
#define CAMPAIGNTASK_HANDLECAMPAIGNCONFIRMTUTORIALRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FFF7C0)
#define CAMPAIGNTASK_HANDLECAMPAIGNCONFIRMMAINSTAGERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FFFB00)
#define CAMPAIGNTASK_HANDLECAMPAIGNENTERMAINSTAGERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FFFDC0)
#define CAMPAIGNTASK_HANDLECAMPAIGNWITHDRAWECHELONRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2000070)
#define CAMPAIGNTASK_CLEARMAINSTAGESAVE_OFFSET UNITYSDK_OFFSET(0x20003A0)
#define CAMPAIGNTASK_INVALIDSAVEDATA_OFFSET UNITYSDK_OFFSET(0x2000430)
#define CAMPAIGNTASK_CLEAR_OFFSET UNITYSDK_OFFSET(0x20005A0)
#define CAMPAIGNTASK_REQEUSTRESTARTMAINSTAGE_OFFSET UNITYSDK_OFFSET(0x2000620)
#define CAMPAIGNTASK_REQUESTMAPMOVE_OFFSET UNITYSDK_OFFSET(0x20006B0)
#define CAMPAIGNTASK_REQUESTDEPLOYECHELON_OFFSET UNITYSDK_OFFSET(0x2000920)
#define CAMPAIGNTASK_REQUESTENDTURN_OFFSET UNITYSDK_OFFSET(0x20009F0)
#define CAMPAIGNTASK_REQUESTRETREAT_OFFSET UNITYSDK_OFFSET(0x2000AA0)
#define CAMPAIGNTASK_REQUESTENTERTACTIC_OFFSET UNITYSDK_OFFSET(0x2000B50)
#define CAMPAIGNTASK_REQUESTPORTAL_OFFSET UNITYSDK_OFFSET(0x2000C20)
#define CAMPAIGNTASK_REQUESTCONFIRMTUTORIAL_OFFSET UNITYSDK_OFFSET(0x2000CE0)
#define CAMPAIGNTASK_REQUESTCONFIRMMAINSTAGE_OFFSET UNITYSDK_OFFSET(0x2000E70)
#define CAMPAIGNTASK_REQUESTENTERMAINSTAGE_OFFSET UNITYSDK_OFFSET(0x20010A0)
#define CAMPAIGNTASK_REQUESTWITHDRAWECHELON_OFFSET UNITYSDK_OFFSET(0x2001260)
#define CAMPAIGNTASK_INITHEXAMAP_OFFSET UNITYSDK_OFFSET(0x2001420)
#define CAMPAIGNTASK_SETMAINSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x2001480)
#define CAMPAIGNTASK_CREATEBATTLESETTING_OFFSET UNITYSDK_OFFSET(0x20014B0)
#define CAMPAIGNTASK_ENTERTACTIC_OFFSET UNITYSDK_OFFSET(0x1FFF490)
#define CAMPAIGNTASK_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0x2001630)
#define CAMPAIGNTASK_CHECKSETFIXEDECHELON_OFFSET UNITYSDK_OFFSET(0x20017C0)
#define CAMPAIGNTASK_STARTBATTLESIMULATION_OFFSET UNITYSDK_OFFSET(0x20014D0)
#define CAMPAIGNTASK_CREATECAMPAIGNTACTICRESULTNETWORKTASK_OFFSET UNITYSDK_OFFSET(0x2001A50)
#define CAMPAIGNTASK_ENDBATTLESIMULATION_OFFSET UNITYSDK_OFFSET(0x2001A80)
#define CAMPAIGNTASK_SIMULATEBATTLE_OFFSET UNITYSDK_OFFSET(0x20019C0)
#define CAMPAIGNTASK_HANDLECAMPAIGNTACTICRESULTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2001D20)
#define CAMPAIGNTASK_STARTTACTICSKIPEFFECT_OFFSET UNITYSDK_OFFSET(0x2001880)
#define CAMPAIGNTASK_ENDTACTICSKIPEFFECT_OFFSET UNITYSDK_OFFSET(0x2002080)
#define CAMPAIGNTASK_ONTOGGLETACTICSKIP_OFFSET UNITYSDK_OFFSET(0x2002130)
#define CAMPAIGNTASK_ENDBATTLECONTINUE_OFFSET UNITYSDK_OFFSET(0x2002140)
#define CAMPAIGNTASK_SETSTATE_OFFSET UNITYSDK_OFFSET(0x2002260)
#define CAMPAIGNTASK_CO_SETSTATE_OFFSET UNITYSDK_OFFSET(0x2002500)
#define CAMPAIGNTASK_GETBATTLELEADERSERVERID_OFFSET UNITYSDK_OFFSET(0x20025B0)
#define CAMPAIGNTASK_GETECHELONOBJECT_OFFSET UNITYSDK_OFFSET(0x2002620)
#define CAMPAIGNTASK_CO_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0x20027A0)
#define CAMPAIGNTASK_SYNCRESULT_OFFSET UNITYSDK_OFFSET(0x2002830)
#define CAMPAIGNTASK_REQUESTENTERMAINSTAGESTRATEGYSKIP_OFFSET UNITYSDK_OFFSET(0x2002E00)
#define CAMPAIGNTASK_REQUESTCAMPAIGNMAINSTAGESTRATEGYSKIPRESULT_OFFSET UNITYSDK_OFFSET(0x2002F40)
#define CAMPAIGNTASK_REQUESTENTERSUBSTAGE_OFFSET UNITYSDK_OFFSET(0x2003070)
#define CAMPAIGNTASK_HANDLECAMPAIGNENTERSUBSTAGERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2003220)
#define CAMPAIGNTASK_REQUESTENTERTUTORIALSTAGE_OFFSET UNITYSDK_OFFSET(0x20034F0)
#define CAMPAIGNTASK_HANDLEENTERTUTORIALSTAGERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2003690)
#define CAMPAIGNTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x2003960)
#define CAMPAIGNTASK__GET_STRATEGYOBJECTHISTORY_B__71_0_OFFSET UNITYSDK_OFFSET(0x2003A70)
#define CAMPAIGNTASK__HANDLECAMPAIGNENDTURNRESPONSEMESSAGE_B__100_0_OFFSET UNITYSDK_OFFSET(0x2003AA0)
#define CAMPAIGNTASK__HANDLECAMPAIGNPORTALRESPONSEMESSAGE_G__COPORTALUSED|111_0_OFFSET UNITYSDK_OFFSET(0x1FFF750)
#define CAMPAIGNTASK__HANDLECAMPAIGNCONFIRMTUTORIALRESPONSEMESSAGE_B__112_1_OFFSET UNITYSDK_OFFSET(0x2003B60)
#define CAMPAIGNTASK__HANDLECAMPAIGNCONFIRMTUTORIALRESPONSEMESSAGE_B__112_2_OFFSET UNITYSDK_OFFSET(0x2003CE0)
#define CAMPAIGNTASK__HANDLECAMPAIGNCONFIRMTUTORIALRESPONSEMESSAGE_B__112_3_OFFSET UNITYSDK_OFFSET(0x2003E10)
#define CAMPAIGNTASK__INVALIDSAVEDATA_B__117_0_OFFSET UNITYSDK_OFFSET(0x2003E50)
#define CAMPAIGNTASK__INVALIDSAVEDATA_B__117_1_OFFSET UNITYSDK_OFFSET(0x2003EF0)
#define CAMPAIGNTASK__ENTERTACTIC_B__133_0_OFFSET UNITYSDK_OFFSET(0x2003F80)
#define CAMPAIGNTASK__ENTERTACTIC_B__133_1_OFFSET UNITYSDK_OFFSET(0x20040A0)
#define CAMPAIGNTASK__ENDBATTLECONTINUE_G__CO_ENDBATTLECONTINUE|144_0_OFFSET UNITYSDK_OFFSET(0x2002200)
#define CAMPAIGNTASK__CO_SETSTATE_B__146_0_OFFSET UNITYSDK_OFFSET(0x20041A0)

	inline static constexpr unsigned int CampaignTask_TypeDefinitionIndex = 3136;

	class CampaignTask : public Il2CppObject
	{
	public:
		CampaignTask* _ActivatedTask_k__BackingField; // 0x0
		UICampaign* uiCampaign; // 0x10
		::System::Int64 lastDeployedEntityId; // 0x18
		::System::Boolean _IsTacticSkipOn_k__BackingField; // 0x20
		::MX::Logic::Battles::Battle* lastSkippedBattle; // 0x28
		::MX::Campaign::HexaTileMap* _MapData_k__BackingField; // 0x30
		::MX::Campaign::HexaUnit* _BattleEnemy_k__BackingField; // 0x38
		::MX::Campaign::HexaUnit* _BattlePlayer_k__BackingField; // 0x40
		::System::Boolean _IsTacticReady_k__BackingField; // 0x48
		Il2CppObject* _EchelonList_k__BackingField; // 0x50
		HexaEventDisplayer* _HexaEventDisplayer_k__BackingField; // 0x58
		::MX::Data::CampaignStageInfo* _StageInfo_k__BackingField; // 0x60
		::System::Boolean _IsCampaignMainStageStrategySkip_k__BackingField; // 0x68
		::System::Boolean _StartCampaign_k__BackingField; // 0x69
		::MX::NetworkProtocol::CampaignState* _State_k__BackingField; // 0x6C
		Il2CppObject* _SelectedBuffIds_k__BackingField; // 0x70
		::System::Boolean _PortalUsed_k__BackingField; // 0x78
		::System::Boolean _FindAvailableEchelonIndex_k__BackingField; // 0x79

		CampaignTask* get_ActivatedTask()
		{
			return ((CampaignTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_ACTIVATEDTASK_OFFSET))(nullptr);
		}

		::System::Void set_ActivatedTask(CampaignTask* arg)
		{
			((::System::Void(*)(CampaignTask*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_SET_ACTIVATEDTASK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsTacticSkipOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_ISTACTICSKIPON_OFFSET))(nullptr);
		}

		::System::Void set_IsTacticSkipOn(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_SET_ISTACTICSKIPON_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTileMap* get_MapData()
		{
			return ((::MX::Campaign::HexaTileMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_MAPDATA_OFFSET))(nullptr);
		}

		::System::Void set_MapData(::MX::Campaign::HexaTileMap* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_SET_MAPDATA_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaUnit* get_BattleEnemy()
		{
			return ((::MX::Campaign::HexaUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_BATTLEENEMY_OFFSET))(nullptr);
		}

		::System::Void set_BattleEnemy(::MX::Campaign::HexaUnit* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_SET_BATTLEENEMY_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaUnit* get_BattlePlayer()
		{
			return ((::MX::Campaign::HexaUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_BATTLEPLAYER_OFFSET))(nullptr);
		}

		::System::Void set_BattlePlayer(::MX::Campaign::HexaUnit* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_SET_BATTLEPLAYER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsTacticReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_ISTACTICREADY_OFFSET))(nullptr);
		}

		::System::Void set_IsTacticReady(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_SET_ISTACTICREADY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EchelonList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_ECHELONLIST_OFFSET))(nullptr);
		}

		::System::Void set_EchelonList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_SET_ECHELONLIST_OFFSET))(arg, nullptr);
		}

		HexaEventDisplayer* get_HexaEventDisplayer()
		{
			return ((HexaEventDisplayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_HEXAEVENTDISPLAYER_OFFSET))(nullptr);
		}

		::System::Void set_HexaEventDisplayer(HexaEventDisplayer* arg)
		{
			((::System::Void(*)(HexaEventDisplayer*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_SET_HEXAEVENTDISPLAYER_OFFSET))(arg, nullptr);
		}

		::MX::Data::CampaignStageInfo* get_StageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_STAGEINFO_OFFSET))(nullptr);
		}

		::System::Void set_StageInfo(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCampaignMainStageStrategySkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_ISCAMPAIGNMAINSTAGESTRATEGYSKIP_OFFSET))(nullptr);
		}

		::System::Void set_IsCampaignMainStageStrategySkip(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_SET_ISCAMPAIGNMAINSTAGESTRATEGYSKIP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_StartCampaign()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_STARTCAMPAIGN_OFFSET))(nullptr);
		}

		::System::Void set_StartCampaign(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_SET_STARTCAMPAIGN_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::CampaignState* get_State()
		{
			return ((::MX::NetworkProtocol::CampaignState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_State(::MX::NetworkProtocol::CampaignState* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CampaignState*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_SET_STATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SelectedBuffIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_SELECTEDBUFFIDS_OFFSET))(nullptr);
		}

		::System::Void set_SelectedBuffIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_SET_SELECTEDBUFFIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_StageHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_STAGEHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Boolean get_PortalUsed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_PORTALUSED_OFFSET))(nullptr);
		}

		::System::Void set_PortalUsed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_SET_PORTALUSED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_FindAvailableEchelonIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_FINDAVAILABLEECHELONINDEX_OFFSET))(nullptr);
		}

		::System::Void set_FindAvailableEchelonIndex(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_SET_FINDAVAILABLEECHELONINDEX_OFFSET))(arg, nullptr);
		}

		::FlatData::EchelonType* get_EchelonType()
		{
			return ((::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* get_StageHistroy()
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_STAGEHISTROY_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::StrategyObjectHistoryDB* get_StrategyObjectHistory()
		{
			return ((::MX::GameLogic::DBModel::StrategyObjectHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_STRATEGYOBJECTHISTORY_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* get_MainStageSave()
		{
			return ((::MX::GameLogic::DBModel::CampaignMainStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_MAINSTAGESAVE_OFFSET))(nullptr);
		}

		CampaignMainStageEndSummary* get_MainStageEndSummary()
		{
			return ((CampaignMainStageEndSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_MAINSTAGEENDSUMMARY_OFFSET))(nullptr);
		}

		Il2CppObject* get_RetreatRewardParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_RETREATREWARDPARCELS_OFFSET))(nullptr);
		}

		::System::Void set_RetreatRewardParcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_SET_RETREATREWARDPARCELS_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::Strategy* get_CampaignStrategyObjectInfo()
		{
			return ((::MX::Campaign::Strategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_CAMPAIGNSTRATEGYOBJECTINFO_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_CampaignStrategyObjectReward()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_CAMPAIGNSTRATEGYOBJECTREWARD_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSkippedCampaign()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GET_ISSKIPPEDCAMPAIGN_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_RELEASE_OFFSET))(nullptr);
		}

		::System::Boolean HandleCampaignMapMoveResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_HANDLECAMPAIGNMAPMOVERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* MovePlayer(::MX::Campaign::HexaUnit* arg, ::MX::Campaign::HexLocation* arg2, ::MX::Campaign::HexLocation* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Campaign::HexaUnit*, ::MX::Campaign::HexLocation*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_MOVEPLAYER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* MoveUnit(::MX::Campaign::HexaUnit* arg, ::MX::Campaign::HexLocation* arg2, ::MX::Campaign::HexLocation* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Campaign::HexaUnit*, ::MX::Campaign::HexLocation*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_MOVEUNIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnLeaveTile(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_ONLEAVETILE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnterTile(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_ONENTERTILE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PositionChange(HexaUnitVisual* arg, HexaUnitVisual* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(HexaUnitVisual*, HexaUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_POSITIONCHANGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean MoveEnd(::MX::Campaign::HexaUnit* arg)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_MOVEEND_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessStrategyAndDisplayInfo()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_PROCESSSTRATEGYANDDISPLAYINFO_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessStrategy(::MX::Campaign::Strategy* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Campaign::Strategy*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_PROCESSSTRATEGY_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckBattle(::MX::Campaign::HexaUnit* arg)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_CHECKBATTLE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshUnitPosition(::MX::Campaign::HexaUnit* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_REFRESHUNITPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessVisualConditionAndCommand()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_PROCESSVISUALCONDITIONANDCOMMAND_OFFSET))(nullptr);
		}

		::System::Boolean HandleCampaignDeployEchelonResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_HANDLECAMPAIGNDEPLOYECHELONRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCampaignEndTurnResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_HANDLECAMPAIGNENDTURNRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetCurrentLeaderServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GETCURRENTLEADERSERVERID_OFFSET))(nullptr);
		}

		::System::Int64 GetCurrentFixedEchelonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GETCURRENTFIXEDECHELONID_OFFSET))(nullptr);
		}

		::System::Void EndCampaign(::System::Boolean arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_ENDCAMPAIGN_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* Co_RefreshSaveData(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_CO_REFRESHSAVEDATA_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_RefreshSaveData()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_CO_REFRESHSAVEDATA_OFFSET))(nullptr);
		}

		::System::Boolean IsTacticSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_ISTACTICSKIP_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEnterScenarioGroupIds()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GETENTERSCENARIOGROUPIDS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetClearScenarioGroupIds()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GETCLEARSCENARIOGROUPIDS_OFFSET))(nullptr);
		}

		::System::Boolean HandleCampaignRetreatResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_HANDLECAMPAIGNRETREATRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCampaignEnterTacticResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_HANDLECAMPAIGNENTERTACTICRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCampaignPortalResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_HANDLECAMPAIGNPORTALRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCampaignConfirmTutorialResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_HANDLECAMPAIGNCONFIRMTUTORIALRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCampaignConfirmMainStageResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_HANDLECAMPAIGNCONFIRMMAINSTAGERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCampaignEnterMainStageResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_HANDLECAMPAIGNENTERMAINSTAGERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCampaignWithdrawEchelonResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_HANDLECAMPAIGNWITHDRAWECHELONRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void ClearMainStageSave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_CLEARMAINSTAGESAVE_OFFSET))(nullptr);
		}

		::System::Void InvalidSaveData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_INVALIDSAVEDATA_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_CLEAR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ReqeustRestartMainStage()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_REQEUSTRESTARTMAINSTAGE_OFFSET))(nullptr);
		}

		::System::Void RequestMapMove(::MX::Campaign::HexaUnit* arg, ::MX::Campaign::HexLocation* arg2)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_REQUESTMAPMOVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RequestDeployEchelon(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_REQUESTDEPLOYECHELON_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RequestEndTurn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_REQUESTENDTURN_OFFSET))(nullptr);
		}

		::System::Void RequestRetreat()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_REQUESTRETREAT_OFFSET))(nullptr);
		}

		::System::Void RequestEnterTactic()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_REQUESTENTERTACTIC_OFFSET))(nullptr);
		}

		::System::Void RequestPortal(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_REQUESTPORTAL_OFFSET))(arg, nullptr);
		}

		::System::Void RequestConfirmTutorial(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_REQUESTCONFIRMTUTORIAL_OFFSET))(arg, nullptr);
		}

		::System::Void RequestConfirmMainStage(::MX::Data::CampaignStageInfo* arg, ::System::Boolean arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_REQUESTCONFIRMMAINSTAGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void RequestEnterMainStage(::MX::Data::CampaignStageInfo* arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_REQUESTENTERMAINSTAGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void RequestWithdrawEchelon(Il2CppObject* arg, HexaUnitVisual* arg2)
		{
			((::System::Void(*)(Il2CppObject*, HexaUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_REQUESTWITHDRAWECHELON_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitHexaMap(UICampaign* arg, ::MX::Campaign::HexaTileMap* arg2)
		{
			((::System::Void(*)(UICampaign*, ::MX::Campaign::HexaTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_INITHEXAMAP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetMainStageInfo(::MX::Data::CampaignStageInfo* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_SETMAINSTAGEINFO_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Data::BattleSetting* CreateBattleSetting()
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_CREATEBATTLESETTING_OFFSET))(nullptr);
		}

		::System::Void EnterTactic()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_ENTERTACTIC_OFFSET))(nullptr);
		}

		::System::Void StartBattle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_STARTBATTLE_OFFSET))(nullptr);
		}

		::System::Void CheckSetFixedEchelon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_CHECKSETFIXEDECHELON_OFFSET))(nullptr);
		}

		::System::Void StartBattleSimulation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_STARTBATTLESIMULATION_OFFSET))(nullptr);
		}

		ICampaignTacticResultNetworkTask* CreateCampaignTacticResultNetworkTask()
		{
			return ((ICampaignTacticResultNetworkTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_CREATECAMPAIGNTACTICRESULTNETWORKTASK_OFFSET))(nullptr);
		}

		::System::Void EndBattleSimulation(ICampaignTacticResultNetworkTask* arg, ::MX::Logic::Data::BattleSetting* arg2)
		{
			((::System::Void(*)(ICampaignTacticResultNetworkTask*, ::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_ENDBATTLESIMULATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* SimulateBattle(::MX::Logic::Data::BattleSetting* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_SIMULATEBATTLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCampaignTacticResultResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_HANDLECAMPAIGNTACTICRESULTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void StartTacticSkipEffect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_STARTTACTICSKIPEFFECT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* EndTacticSkipEffect(::System::Boolean arg, ::System::Int64 arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_ENDTACTICSKIPEFFECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnToggleTacticSkip(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_ONTOGGLETACTICSKIP_OFFSET))(arg, nullptr);
		}

		::System::Void EndBattleContinue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_ENDBATTLECONTINUE_OFFSET))(nullptr);
		}

		::System::Void SetState(::MX::NetworkProtocol::CampaignState* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CampaignState*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_SETSTATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* Co_SetState(::MX::NetworkProtocol::CampaignState* arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::NetworkProtocol::CampaignState*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_CO_SETSTATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetBattleLeaderServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GETBATTLELEADERSERVERID_OFFSET))(nullptr);
		}

		EchelonObject* GetEchelonObject(::MX::Campaign::HexaUnit* arg, ::FlatData::EchelonExtensionType* arg2)
		{
			return ((EchelonObject*(*)(::MX::Campaign::HexaUnit*, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_GETECHELONOBJECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* Co_StartBattle(::MX::Logic::Data::BattleSetting* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_CO_STARTBATTLE_OFFSET))(arg, nullptr);
		}

		::System::Void SyncResult(::MX::GameLogic::DBModel::SessionKey* arg, ::MX::NetworkProtocol::Protocol* arg2, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg3, Il2CppObject* arg4, ::MX::GameLogic::Parcel::ParcelResultDB* arg5, Il2CppObject* arg6, Il2CppObject* arg7, Il2CppObject&* arg8, Il2CppObject&* arg9)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::SessionKey*, ::MX::NetworkProtocol::Protocol*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, Il2CppObject*, ::MX::GameLogic::Parcel::ParcelResultDB*, Il2CppObject*, Il2CppObject*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_SYNCRESULT_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Void RequestEnterMainStageStrategySkip(::MX::Data::CampaignStageInfo* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_REQUESTENTERMAINSTAGESTRATEGYSKIP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RequestCampaignMainStageStrategySkipResult(::MX::Logic::Battles::Summary::BattleSummary* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_REQUESTCAMPAIGNMAINSTAGESTRATEGYSKIPRESULT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void RequestEnterSubStage(::MX::Data::CampaignStageInfo* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_REQUESTENTERSUBSTAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandleCampaignEnterSubStageResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_HANDLECAMPAIGNENTERSUBSTAGERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RequestEnterTutorialStage(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_REQUESTENTERTUTORIALSTAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEnterTutorialStageResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_HANDLEENTERTUTORIALSTAGERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _get_StrategyObjectHistory_b__71_0(::MX::GameLogic::DBModel::StrategyObjectHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::StrategyObjectHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK__GET_STRATEGYOBJECTHISTORY_B__71_0_OFFSET))(arg, nullptr);
		}

		::System::Void _HandleCampaignEndTurnResponseMessage_b__100_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK__HANDLECAMPAIGNENDTURNRESPONSEMESSAGE_B__100_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _HandleCampaignPortalResponseMessage_g__CoPortalUsed|111_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK__HANDLECAMPAIGNPORTALRESPONSEMESSAGE_G__COPORTALUSED|111_0_OFFSET))(nullptr);
		}

		::System::Void _HandleCampaignConfirmTutorialResponseMessage_b__112_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK__HANDLECAMPAIGNCONFIRMTUTORIALRESPONSEMESSAGE_B__112_1_OFFSET))(nullptr);
		}

		::System::Void _HandleCampaignConfirmTutorialResponseMessage_b__112_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK__HANDLECAMPAIGNCONFIRMTUTORIALRESPONSEMESSAGE_B__112_2_OFFSET))(nullptr);
		}

		::System::Void _HandleCampaignConfirmTutorialResponseMessage_b__112_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK__HANDLECAMPAIGNCONFIRMTUTORIALRESPONSEMESSAGE_B__112_3_OFFSET))(nullptr);
		}

		::System::Void _InvalidSaveData_b__117_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK__INVALIDSAVEDATA_B__117_0_OFFSET))(arg, nullptr);
		}

		::System::Void _InvalidSaveData_b__117_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK__INVALIDSAVEDATA_B__117_1_OFFSET))(nullptr);
		}

		::System::Void _EnterTactic_b__133_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK__ENTERTACTIC_B__133_0_OFFSET))(nullptr);
		}

		::System::Void _EnterTactic_b__133_1(UILoading* arg)
		{
			((::System::Void(*)(UILoading*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK__ENTERTACTIC_B__133_1_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _EndBattleContinue_g__Co_EndBattleContinue|144_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK__ENDBATTLECONTINUE_G__CO_ENDBATTLECONTINUE|144_0_OFFSET))(nullptr);
		}

		::System::Boolean _Co_SetState_b__146_0(::MX::Campaign::HexaUnit* arg)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTASK__CO_SETSTATE_B__146_0_OFFSET))(arg, nullptr);
		}

	};

