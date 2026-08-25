#pragma once
#include "unitysdk.h"

class UICampaignSquadInfo;
namespace Lean::Touch { class LeanCameraZoom; }
class HexaCameraTranslate;
namespace UnityEngine { class GameObject; }
class AirDropPopup;
class UICampaignStartInfo;
namespace UnityEngine { class Animation; }
class MXButton;
class CampaignTask;
class UILabel;
class HexaTileMapVisual;
namespace MX::Campaign { class HexaTileMap; }
namespace UnityEngine { class MeshRenderer; }
class HexaTileVisual;
namespace UnityEngine { class Vector3; }
class HexaUnitVisual;
class MXToggle;
class TacticSkipToggle;
class CampaignMissionDisplay;
class UITexture;
namespace MX::GameLogic::DBModel { class EventContentMainStageSaveDB; }
namespace MX::Campaign { class HexaUnit; }
namespace MX::Data { class CampaignStageInfo; }
class CharacterObject;
namespace MX::Campaign { class HexLocation; }
namespace UnityEngine { class Vector2; }
namespace MX::Campaign { class Strategy; }
class TopBarAniType;
class HexaUI;
namespace UnityEngine { class Texture; }
class UIEventBuffInfo;
class UIEnemyInfoPopup;

#define UICAMPAIGN_GET_STARTTILES_OFFSET UNITYSDK_OFFSET(0x22997D0)
#define UICAMPAIGN_GET_POSITIONCHANGEMODE_OFFSET UNITYSDK_OFFSET(0x22998F0)
#define UICAMPAIGN_SET_POSITIONCHANGEMODE_OFFSET UNITYSDK_OFFSET(0x2299900)
#define UICAMPAIGN_GET_CURSQUAD_OFFSET UNITYSDK_OFFSET(0x2299910)
#define UICAMPAIGN_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x22999A0)
#define UICAMPAIGN_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x2299A30)
#define UICAMPAIGN_AWAKE_OFFSET UNITYSDK_OFFSET(0x2299AD0)
#define UICAMPAIGN_ONAUTOTURNTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0x229A8F0)
#define UICAMPAIGN_ONTACTICSKIPTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0x229A9E0)
#define UICAMPAIGN_REFRESHSKIPMARKSTATE_OFFSET UNITYSDK_OFFSET(0x229AA30)
#define UICAMPAIGN_ONENABLE_OFFSET UNITYSDK_OFFSET(0x229ABE0)
#define UICAMPAIGN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x229AC60)
#define UICAMPAIGN_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x229AD30)
#define UICAMPAIGN_CAMPAIGNRESTART_OFFSET UNITYSDK_OFFSET(0x229AE90)
#define UICAMPAIGN_COCAMPAIGNRESTART_OFFSET UNITYSDK_OFFSET(0x229AF50)
#define UICAMPAIGN_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x229AFC0)
#define UICAMPAIGN_ONOPENED_OFFSET UNITYSDK_OFFSET(0x229B030)
#define UICAMPAIGN_GETCAMPAIGNINFORMATIONPAGE_OFFSET UNITYSDK_OFFSET(0x229DA80)
#define UICAMPAIGN_OPENEVENTBUFFPOPUPCHECK_OFFSET UNITYSDK_OFFSET(0x229C510)
#define UICAMPAIGN_DEBUFFSELECTBONUSCHECK_OFFSET UNITYSDK_OFFSET(0x229BE20)
#define UICAMPAIGN_OPENEVENTBUFFSELECTEDINFO_OFFSET UNITYSDK_OFFSET(0x229E470)
#define UICAMPAIGN_OPENINFORMATION_OFFSET UNITYSDK_OFFSET(0x229D830)
#define UICAMPAIGN_ONSKIPSCENARIOCLICK_OFFSET UNITYSDK_OFFSET(0x229E550)
#define UICAMPAIGN_SKIPSCENARIOSTRATEGYOK_OFFSET UNITYSDK_OFFSET(0x229E840)
#define UICAMPAIGN_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x229E970)
#define UICAMPAIGN_INITCAMERA_OFFSET UNITYSDK_OFFSET(0x229C7D0)
#define UICAMPAIGN_ONBACK_OFFSET UNITYSDK_OFFSET(0x229EB50)
#define UICAMPAIGN_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x229EFD0)
#define UICAMPAIGN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x229F5A0)
#define UICAMPAIGN_CLEAR_OFFSET UNITYSDK_OFFSET(0x229F290)
#define UICAMPAIGN_GETSTRATEGYCHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x229F6F0)
#define UICAMPAIGN_DEPLOYECHELON_OFFSET UNITYSDK_OFFSET(0x229F7A0)
#define UICAMPAIGN_REFRESHECHELONCOUNTLABEL_OFFSET UNITYSDK_OFFSET(0x229C8A0)
#define UICAMPAIGN_REFRESHSAVEDATA_OFFSET UNITYSDK_OFFSET(0x229FD80)
#define UICAMPAIGN_SETCAMPAIGNMODE_OFFSET UNITYSDK_OFFSET(0x22A00A0)
#define UICAMPAIGN_UPDATE_OFFSET UNITYSDK_OFFSET(0x22A0160)
#define UICAMPAIGN_ISSELECTSQUADRANGE_OFFSET UNITYSDK_OFFSET(0x22A1F80)
#define UICAMPAIGN_ECHELONPOSITIONCHANGE_OFFSET UNITYSDK_OFFSET(0x22A2410)
#define UICAMPAIGN_ONOFFSELECTUI_OFFSET UNITYSDK_OFFSET(0x22A2090)
#define UICAMPAIGN_OPENFORMATION_OFFSET UNITYSDK_OFFSET(0x2296450)
#define UICAMPAIGN_REQUESTWITHDRAWECHELON_OFFSET UNITYSDK_OFFSET(0x2298590)
#define UICAMPAIGN_REMOVEECHELON_OFFSET UNITYSDK_OFFSET(0x22A30A0)
#define UICAMPAIGN_SCREENTOWORLDPOS_OFFSET UNITYSDK_OFFSET(0x22A1E20)
#define UICAMPAIGN_UPDATETIMELABEL_OFFSET UNITYSDK_OFFSET(0x22A1B60)
#define UICAMPAIGN_PROCESSSTRATEGY_OFFSET UNITYSDK_OFFSET(0x22A3650)
#define UICAMPAIGN_FINDPORTALEXIT_OFFSET UNITYSDK_OFFSET(0x22A2D70)
#define UICAMPAIGN_ONCLICKTURNEND_OFFSET UNITYSDK_OFFSET(0x22A36D0)
#define UICAMPAIGN_ONCLICKCAMPAIGNSTART_OFFSET UNITYSDK_OFFSET(0x22A3A50)
#define UICAMPAIGN_TOPBARSTATEANIACTION_OFFSET UNITYSDK_OFFSET(0x229D720)
#define UICAMPAIGN_CAMPAIGNSTARTACTION_OFFSET UNITYSDK_OFFSET(0x22A3FC0)
#define UICAMPAIGN_ECHELONPOSITIONCHANGEMODE_OFFSET UNITYSDK_OFFSET(0x2298150)
#define UICAMPAIGN_CANCELPOSITIONCHANGEMODE_OFFSET UNITYSDK_OFFSET(0x22A2A10)
#define UICAMPAIGN_SELECTSQUAD_OFFSET UNITYSDK_OFFSET(0x2297070)
#define UICAMPAIGN_SELECTSQUAD_OFFSET UNITYSDK_OFFSET(0x22A23A0)
#define UICAMPAIGN_CHANGESQUAD_OFFSET UNITYSDK_OFFSET(0x22A45E0)
#define UICAMPAIGN_SELECTACTIONCOUNTREMAINED_OFFSET UNITYSDK_OFFSET(0x22A4680)
#define UICAMPAIGN_SETSQUAD_OFFSET UNITYSDK_OFFSET(0x22A4040)
#define UICAMPAIGN_ONCLICKINFO_OFFSET UNITYSDK_OFFSET(0x229EAE0)
#define UICAMPAIGN_ONCLICKMISSIONFOLD_OFFSET UNITYSDK_OFFSET(0x22A4BE0)
#define UICAMPAIGN_ONCLICKENEMYINFO_OFFSET UNITYSDK_OFFSET(0x22A4BF0)
#define UICAMPAIGN_MISSIONFOLD_OFFSET UNITYSDK_OFFSET(0x229C9F0)
#define UICAMPAIGN_COPLAYTURNANI_OFFSET UNITYSDK_OFFSET(0x22A4CD0)
#define UICAMPAIGN_ONCANINPUT_OFFSET UNITYSDK_OFFSET(0x2293C60)
#define UICAMPAIGN_SETSLOT_OFFSET UNITYSDK_OFFSET(0x22960D0)
#define UICAMPAIGN_ADDTAGUI_OFFSET UNITYSDK_OFFSET(0x22A4D40)
#define UICAMPAIGN_SETTURNENDEFFECT_OFFSET UNITYSDK_OFFSET(0x22A4B60)
#define UICAMPAIGN_GETVICTORYCONDITIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x229CB90)
#define UICAMPAIGN_.CTOR_OFFSET UNITYSDK_OFFSET(0x22A4E30)
#define UICAMPAIGN___N__0_OFFSET UNITYSDK_OFFSET(0x22A4F10)
#define UICAMPAIGN__DEBUFFSELECTBONUSCHECK_B__88_0_OFFSET UNITYSDK_OFFSET(0x22A4F20)
#define UICAMPAIGN__OPENEVENTBUFFSELECTEDINFO_B__89_0_OFFSET UNITYSDK_OFFSET(0x22A4F50)
#define UICAMPAIGN__UPDATE_B__104_2_OFFSET UNITYSDK_OFFSET(0x22A4F90)
#define UICAMPAIGN__ONCLICKTURNEND_B__115_1_OFFSET UNITYSDK_OFFSET(0x22A5040)
#define UICAMPAIGN__ONCLICKCAMPAIGNSTART_B__116_2_OFFSET UNITYSDK_OFFSET(0x22A5070)
#define UICAMPAIGN__ONCLICKENEMYINFO_B__128_0_OFFSET UNITYSDK_OFFSET(0x22A5130)

	inline static constexpr unsigned int UICampaign_TypeDefinitionIndex = 4749;

	class UICampaign : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Slots; // 0xD8
		UICampaignSquadInfo* UICampaignSquadInfo; // 0xE0
		::Lean::Touch::LeanCameraZoom* leanCameraZoom; // 0xE8
		HexaCameraTranslate* HexaCameraTranslate; // 0xF0
		::UnityEngine::GameObject* MapRoot; // 0xF8
		AirDropPopup* AirDropPopup; // 0x100
		UICampaignStartInfo* CampaigInfoPopup; // 0x108
		::UnityEngine::Animation* CampaignStartAni; // 0x110
		::UnityEngine::Animation* PlayerTurnAni; // 0x118
		::UnityEngine::Animation* EnemyTurnAni; // 0x120
		MXButton* BackButton; // 0x128
		MXButton* StartCampaignButton; // 0x130
		::UnityEngine::GameObject* StartCampaignDisable; // 0x138
		MXButton* TurnEndButton; // 0x140
		::UnityEngine::GameObject* TurnEndEffect; // 0x148
		MXButton* CampaignInfoButton; // 0x150
		::Il2CppArray<::System::Object*>* EnemyInfoButtons; // 0x158
		::Il2CppArray<::System::Object*>* InformationButtons; // 0x160
		::UnityEngine::GameObject* NormalInfoButtonRoot; // 0x168
		::UnityEngine::GameObject* ScenarioInfoButtonRoot; // 0x170
		MXButton* ScenarioSkipButton; // 0x178
		CampaignTask* CampaignTask; // 0x180
		::UnityEngine::GameObject* TagRoot; // 0x188
		Il2CppObject* tagList; // 0x190
		UILabel* TimeLabel; // 0x198
		HexaTileMapVisual* Map; // 0x1A0
		::MX::Campaign::HexaTileMap* OriginalMapData; // 0x1A8
		::UnityEngine::MeshRenderer* Background; // 0x1B0
		UILabel* MissionStartCostLabel; // 0x1B8
		HexaTileVisual* pressedTile; // 0x1C0
		::UnityEngine::Vector3* pressedCameraPos; // 0x1C8
		::System::Boolean mapMove; // 0x1D4
		::System::Boolean pressed; // 0x1D5
		::UnityEngine::Vector3* inputStartPos; // 0x1D8
		::System::Boolean isDragStarted; // 0x1E4
		HexaUnitVisual* DragUnit; // 0x1E8
		::UnityEngine::Vector3* DragUnitOffset; // 0x1F0
		::System::Single DragUnitZPos; // 0x1FC
		::System::Single PickupZOffset; // 0x0
		::System::Boolean _PositionChangeMode_k__BackingField; // 0x200
		::System::Boolean positionChangeEnterCurFrame; // 0x201
		HexaUnitVisual* positionChangeUnit; // 0x208
		::Il2CppArray<::System::Object*>* onOffMxButtons; // 0x210
		::System::Int32 lastSecondText; // 0x218
		::UnityEngine::Animation* campaignTopBarAni; // 0x220
		Il2CppObject* capaignTopBarAniclips; // 0x228
		MXToggle* AutoTurnToggle; // 0x230
		TacticSkipToggle* TacticSkipToggle; // 0x238
		UILabel* EchelonCount; // 0x240
		::Il2CppArray<::System::Object*>* TurnLabel; // 0x248
		MXButton* MissionFoldButton; // 0x250
		::UnityEngine::GameObject* MissionFoldObject; // 0x258
		::UnityEngine::GameObject* MissionObject; // 0x260
		::System::Boolean missionFolded; // 0x268
		CampaignMissionDisplay* missionDisplay_Cleared; // 0x270
		CampaignMissionDisplay* missionDisplay_WinCount; // 0x278
		CampaignMissionDisplay* missionDisplay_TurnCount; // 0x280
		UILabel* VictoryCondition; // 0x288
		::UnityEngine::GameObject* eventDebuffBonus; // 0x290
		UITexture* eventDebuffBonusIcon; // 0x298
		UILabel* eventDebuffBonusValue; // 0x2A0
		MXButton* eventBuffSelectedInfoButton; // 0x2A8
		Il2CppObject* informationList; // 0x2B0
		::System::Int32 curSquadIndex; // 0x2B8
		::MX::GameLogic::DBModel::EventContentMainStageSaveDB* eventContentMainStageSaveDB; // 0x2C0

		Il2CppObject* get_StartTiles()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_GET_STARTTILES_OFFSET))(nullptr);
		}

		::System::Boolean get_PositionChangeMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_GET_POSITIONCHANGEMODE_OFFSET))(nullptr);
		}

		::System::Void set_PositionChangeMode(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_SET_POSITIONCHANGEMODE_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaUnit* get_CurSquad()
		{
			return ((::MX::Campaign::HexaUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_GET_CURSQUAD_OFFSET))(nullptr);
		}

		::MX::Data::CampaignStageInfo* get_stageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_GET_STAGEINFO_OFFSET))(nullptr);
		}

		::System::Void set_stageInfo(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnAutoTurnToggleChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_ONAUTOTURNTOGGLECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnTacticSkipToggleChanged(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_ONTACTICSKIPTOGGLECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshSkipMarkState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_REFRESHSKIPMARKSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Data::CampaignStageInfo* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CampaignRestart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_CAMPAIGNRESTART_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoCampaignRestart()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_COCAMPAIGNRESTART_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_ONOPENED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCampaignInformationPage()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_GETCAMPAIGNINFORMATIONPAGE_OFFSET))(nullptr);
		}

		::System::Void OpenEventBuffPopupCheck(::MX::GameLogic::DBModel::EventContentMainStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_OPENEVENTBUFFPOPUPCHECK_OFFSET))(arg, nullptr);
		}

		::System::Void DeBuffSelectBonusCheck(::MX::GameLogic::DBModel::EventContentMainStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_DEBUFFSELECTBONUSCHECK_OFFSET))(arg, nullptr);
		}

		::System::Void OpenEventBuffSelectedInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_OPENEVENTBUFFSELECTEDINFO_OFFSET))(nullptr);
		}

		::System::Void OpenInformation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_OPENINFORMATION_OFFSET))(nullptr);
		}

		::System::Void OnSkipScenarioClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_ONSKIPSCENARIOCLICK_OFFSET))(nullptr);
		}

		::System::Void SkipScenarioStrategyOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_SKIPSCENARIOSTRATEGYOK_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void InitCamera()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_INITCAMERA_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_ONBACK_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_CLEAR_OFFSET))(nullptr);
		}

		::System::String* GetStrategyCharacterName(CharacterObject* arg)
		{
			return ((::System::String*(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_GETSTRATEGYCHARACTERNAME_OFFSET))(arg, nullptr);
		}

		::System::Void DeployEchelon(::MX::Campaign::HexaUnit* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_DEPLOYECHELON_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshEchelonCountLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_REFRESHECHELONCOUNTLABEL_OFFSET))(nullptr);
		}

		::System::Void RefreshSaveData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_REFRESHSAVEDATA_OFFSET))(nullptr);
		}

		::System::Void SetCampaignMode(HexaUnitVisual* arg, HexaTileVisual* arg2)
		{
			((::System::Void(*)(HexaUnitVisual*, HexaTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_SETCAMPAIGNMODE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_UPDATE_OFFSET))(nullptr);
		}

		::System::Boolean IsSelectSquadRange(HexaUnitVisual* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector3* arg3)
		{
			return ((::System::Boolean(*)(HexaUnitVisual*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_ISSELECTSQUADRANGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void EchelonPositionChange(HexaTileVisual* arg, HexaTileVisual* arg2, HexaUnitVisual* arg3)
		{
			((::System::Void(*)(HexaTileVisual*, HexaTileVisual*, HexaUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_ECHELONPOSITIONCHANGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnOffSelectUI(HexaUnitVisual* arg)
		{
			((::System::Void(*)(HexaUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_ONOFFSELECTUI_OFFSET))(arg, nullptr);
		}

		::System::Void OpenFormation(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_OPENFORMATION_OFFSET))(arg, nullptr);
		}

		::System::Void RequestWithdrawEchelon(HexaUnitVisual* arg)
		{
			((::System::Void(*)(HexaUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_REQUESTWITHDRAWECHELON_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveEchelon(HexaUnitVisual* arg)
		{
			((::System::Void(*)(HexaUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_REMOVEECHELON_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* ScreenToWorldPos(::UnityEngine::Vector2* arg, ::System::Single arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_SCREENTOWORLDPOS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateTimeLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_UPDATETIMELABEL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessStrategy(::MX::Campaign::Strategy* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Campaign::Strategy*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_PROCESSSTRATEGY_OFFSET))(arg, nullptr);
		}

		::System::Boolean FindPortalExit(::MX::Campaign::HexaUnit* arg)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_FINDPORTALEXIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickTurnEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_ONCLICKTURNEND_OFFSET))(nullptr);
		}

		::System::Void OnClickCampaignStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_ONCLICKCAMPAIGNSTART_OFFSET))(nullptr);
		}

		::System::Void TopBarStateAniAction(TopBarAniType* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(TopBarAniType*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_TOPBARSTATEANIACTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CampaignStartAction(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_CAMPAIGNSTARTACTION_OFFSET))(arg, nullptr);
		}

		::System::Void EchelonPositionChangeMode(HexaUnitVisual* arg)
		{
			((::System::Void(*)(HexaUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_ECHELONPOSITIONCHANGEMODE_OFFSET))(arg, nullptr);
		}

		::System::Void CancelPositionChangeMode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_CANCELPOSITIONCHANGEMODE_OFFSET))(nullptr);
		}

		::System::Void SelectSquad(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_SELECTSQUAD_OFFSET))(arg, nullptr);
		}

		::System::Void SelectSquad(::MX::Campaign::HexaUnit* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_SELECTSQUAD_OFFSET))(arg, nullptr);
		}

		::System::Boolean ChangeSquad(::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_CHANGESQUAD_OFFSET))(arg, nullptr);
		}

		::System::Boolean SelectActionCountRemained(::System::Boolean arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_SELECTACTIONCOUNTREMAINED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetSquad(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_SETSQUAD_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_ONCLICKINFO_OFFSET))(nullptr);
		}

		::System::Void OnClickMissionFold()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_ONCLICKMISSIONFOLD_OFFSET))(nullptr);
		}

		::System::Void OnClickEnemyInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_ONCLICKENEMYINFO_OFFSET))(nullptr);
		}

		::System::Void MissionFold(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_MISSIONFOLD_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayTurnAni(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_COPLAYTURNANI_OFFSET))(arg, nullptr);
		}

		::System::Void OnCanInput(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_ONCANINPUT_OFFSET))(arg, nullptr);
		}

		::System::Void SetSlot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_SETSLOT_OFFSET))(nullptr);
		}

		::System::Void AddTagUI(HexaUI* arg)
		{
			((::System::Void(*)(HexaUI*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_ADDTAGUI_OFFSET))(arg, nullptr);
		}

		::System::Void SetTurnEndEffect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_SETTURNENDEFFECT_OFFSET))(arg, nullptr);
		}

		::System::String* GetVictoryConditionMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_GETVICTORYCONDITIONMESSAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN___N__0_OFFSET))(nullptr);
		}

		::System::Void _DeBuffSelectBonusCheck_b__88_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN__DEBUFFSELECTBONUSCHECK_B__88_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenEventBuffSelectedInfo_b__89_0(UIEventBuffInfo* arg)
		{
			((::System::Void(*)(UIEventBuffInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN__OPENEVENTBUFFSELECTEDINFO_B__89_0_OFFSET))(arg, nullptr);
		}

		::System::Void _Update_b__104_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN__UPDATE_B__104_2_OFFSET))(nullptr);
		}

		::System::Void _OnClickTurnEnd_b__115_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN__ONCLICKTURNEND_B__115_1_OFFSET))(nullptr);
		}

		::System::Void _OnClickCampaignStart_b__116_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN__ONCLICKCAMPAIGNSTART_B__116_2_OFFSET))(nullptr);
		}

		::System::Void _OnClickEnemyInfo_b__128_0(UIEnemyInfoPopup* arg)
		{
			((::System::Void(*)(UIEnemyInfoPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN__ONCLICKENEMYINFO_B__128_0_OFFSET))(arg, nullptr);
		}

	};

