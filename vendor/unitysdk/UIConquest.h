#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXTweenPosition;
class MXTweenRotation;
class ConquestTileMapVisual;
class MXButton;
class UISprite;
class ConquestEventDisplayer;
namespace Lean::Touch { class LeanCameraZoom; }
class ConquestCameraTranslate;
class ConquestUIAnimationController;
class UIGrid;
class UILabel;
namespace FlatData { class StageDifficulty; }
class ConquestTileVisual;
namespace UnityEngine { class Vector3; }
class HexaUIConquest;
class UIConquestGoalUI;
class UIProgressBar;
class UIConquestGaugeUI;
class HexaUIConquestUnitInfo;
namespace UnityEngine { class Transform; }
class UIHexaTileCalculateReward;
class UIConquestCenterLock;
class ConquestCompleteUIController;
class UIConquestErosionAlarm;
class ConquestMapBackgroundVisual;
class SwitchConquestMapContext;
namespace MX::Data { class EventContentSeasonInfo; }
namespace MX::Data::Excel { class ConquestEventExcel; }
namespace MX::Data::Excel { class ConquestCalculateExcel; }
namespace MX::Conquest { class ConquestTileMap; }
namespace MX::SaveData { class ConquestSaveDataDict; }
namespace MX::SaveData { class ConquestSaveData; }
namespace MX::Data { class LocalizeData; }
namespace MX::Conquest { class ConquestTile; }
class UIPopup_System;
namespace FlatData { class ConquestTileType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::Data { class CampaignStageInfo; }
namespace MX::GameLogic::DBModel { class ConquestInfoDB; }
namespace MX::Data { class ConquestMapExcelData; }
class UIEventPlayGuide;
class UIPopup_Conquest_Erosion;
class ErosionToPlay;
namespace MX::Data { class ConquestErosionExcelData; }
class UILevelUpPopup;
namespace MX::Data { class ConquestData; }
namespace MX::Data { class BGMPlayInfo; }

#define UICONQUEST_GET_CONQUESTEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x234D700)
#define UICONQUEST_GET_CURRENTSTAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x234F5D0)
#define UICONQUEST_GET_LOCALDATA_OFFSET UNITYSDK_OFFSET(0x234F5E0)
#define UICONQUEST_ISREACHABLE_OFFSET UNITYSDK_OFFSET(0x234BBF0)
#define UICONQUEST_GETMAPDATA_OFFSET UNITYSDK_OFFSET(0x234F660)
#define UICONQUEST_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x234F710)
#define UICONQUEST_ONCLICKEROSIONALARMONOFF_OFFSET UNITYSDK_OFFSET(0x234F7C0)
#define UICONQUEST_EMULATETOGGLEBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x234F860)
#define UICONQUEST_TOGGLESHOWEROSIONALARM_OFFSET UNITYSDK_OFFSET(0x234F7E0)
#define UICONQUEST_CREATESTACKUI_OFFSET UNITYSDK_OFFSET(0x234F8B0)
#define UICONQUEST_GET_TILEDBS_OFFSET UNITYSDK_OFFSET(0x234F940)
#define UICONQUEST_ONCLICKSTEPGOALONOFF_OFFSET UNITYSDK_OFFSET(0x234F9D0)
#define UICONQUEST__ONOFFSELECTUI_B__183_1_OFFSET UNITYSDK_OFFSET(0x234FB00)
#define UICONQUEST_UNLOADUIRESOURCES_OFFSET UNITYSDK_OFFSET(0x234FBA0)
#define UICONQUEST_ONOFFSELECTUI_OFFSET UNITYSDK_OFFSET(0x234FED0)
#define UICONQUEST_GET_OBJECTDBS_OFFSET UNITYSDK_OFFSET(0x23507A0)
#define UICONQUEST_ONTOGGLESTAGE_OFFSET UNITYSDK_OFFSET(0x2350830)
#define UICONQUEST_HANDLEUPGRADEBASEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2350A70)
#define UICONQUEST_LOADCONQUESTMAPDATA_OFFSET UNITYSDK_OFFSET(0x2350B40)
#define UICONQUEST_ONCLICKMAPINFO_OFFSET UNITYSDK_OFFSET(0x2350BD0)
#define UICONQUEST_SETEROSIONALARMINFO_OFFSET UNITYSDK_OFFSET(0x2350D40)
#define UICONQUEST_COPLAYMOVETOSTEP_OFFSET UNITYSDK_OFFSET(0x23509E0)
#define UICONQUEST_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x2351B30)
#define UICONQUEST_COOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x2351BD0)
#define UICONQUEST_ISSAMEMAP_OFFSET UNITYSDK_OFFSET(0x2351C60)
#define UICONQUEST_RESETTWEEN_OFFSET UNITYSDK_OFFSET(0x2351DE0)
#define UICONQUEST_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0x2351E50)
#define UICONQUEST_UPDATEEROSIONTIMECHECK_OFFSET UNITYSDK_OFFSET(0x2351E60)
#define UICONQUEST_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0x2352270)
#define UICONQUEST_GET_DIFFICULTYSTEPDICT_OFFSET UNITYSDK_OFFSET(0x23523C0)
#define UICONQUEST_COMOVECAMERATOSTEP_OFFSET UNITYSDK_OFFSET(0x2352450)
#define UICONQUEST_GET_INFODB_OFFSET UNITYSDK_OFFSET(0x2352500)
#define UICONQUEST_SETUNITSTATUS_OFFSET UNITYSDK_OFFSET(0x2352590)
#define UICONQUEST_INITUICONQUESTCENTERLOCK_OFFSET UNITYSDK_OFFSET(0x2352780)
#define UICONQUEST__COOPENSEQUENCE_B__196_0_OFFSET UNITYSDK_OFFSET(0x2353280)
#define UICONQUEST_CLOSEANDREOPENUICONQUEST_OFFSET UNITYSDK_OFFSET(0x2353290)
#define UICONQUEST__COMOVECAMERATOSTEP_B__180_0_OFFSET UNITYSDK_OFFSET(0x2353420)
#define UICONQUEST_GET_MAP_OFFSET UNITYSDK_OFFSET(0x2353450)
#define UICONQUEST_AWAKE_OFFSET UNITYSDK_OFFSET(0x2353460)
#define UICONQUEST_ONBACK_OFFSET UNITYSDK_OFFSET(0x2353BA0)
#define UICONQUEST_OPENPOPUPUIS_OFFSET UNITYSDK_OFFSET(0x2353BB0)
#define UICONQUEST_GET_ISMAINSTORY_OFFSET UNITYSDK_OFFSET(0x2353F90)
#define UICONQUEST_GET_LOCALIZESTEP_OFFSET UNITYSDK_OFFSET(0x2353FC0)
#define UICONQUEST_HIDEHEXAUI_OFFSET UNITYSDK_OFFSET(0x2354060)
#define UICONQUEST_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x23540B0)
#define UICONQUEST_HANDLEUICLOSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x23540D0)
#define UICONQUEST_SAVELOCALSAVEDATA_OFFSET UNITYSDK_OFFSET(0x2354250)
#define UICONQUEST_SWITCHMAPWITHCONTEXT_OFFSET UNITYSDK_OFFSET(0x2354440)
#define UICONQUEST_SETSTEPUI_OFFSET UNITYSDK_OFFSET(0x23544C0)
#define UICONQUEST_SAVETILEMAPEVENTDB_OFFSET UNITYSDK_OFFSET(0x2354B00)
#define UICONQUEST_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2354B50)
#define UICONQUEST__ONCLICKPLAYGUIDEBUTTON_B__166_0_OFFSET UNITYSDK_OFFSET(0x2354F40)
#define UICONQUEST__VALIDATEANDSETSAVEDATA_G__SETDEFAULTDATA|154_0_OFFSET UNITYSDK_OFFSET(0x2355140)
#define UICONQUEST_ONCLICKPLAYGUIDEBUTTON_OFFSET UNITYSDK_OFFSET(0x23551B0)
#define UICONQUEST_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2355280)
#define UICONQUEST_GET_CONQUESTORIGINALEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x2355310)
#define UICONQUEST_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x2355330)
#define UICONQUEST_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x23553C0)
#define UICONQUEST_MOVECAMERATOSTAGE_OFFSET UNITYSDK_OFFSET(0x23557C0)
#define UICONQUEST_SAVEEROSIONTOPLAYLIST_OFFSET UNITYSDK_OFFSET(0x2355B60)
#define UICONQUEST_COREFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x2355E50)
#define UICONQUEST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2355F00)
#define UICONQUEST_GET_ANIMATIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0x2356250)
#define UICONQUEST_SHOWHEXAUI_OFFSET UNITYSDK_OFFSET(0x2356260)
#define UICONQUEST___N__0_OFFSET UNITYSDK_OFFSET(0x23562B0)
#define UICONQUEST_GET_LOCALIZEMANAGE_OFFSET UNITYSDK_OFFSET(0x2350700)
#define UICONQUEST_PLAYSTEPOPEN_OFFSET UNITYSDK_OFFSET(0x23562C0)
#define UICONQUEST_INITCAMERALIMIT_OFFSET UNITYSDK_OFFSET(0x2356360)
#define UICONQUEST__ONOFFSELECTUI_G__STARTDIRECTINGCONQUESTREWARD|183_2_OFFSET UNITYSDK_OFFSET(0x23505F0)
#define UICONQUEST_SETLOCALIZETEXT_OFFSET UNITYSDK_OFFSET(0x2356470)
#define UICONQUEST_TRYSHOWEVENTCONTENTGUIDE_OFFSET UNITYSDK_OFFSET(0x2356BE0)
#define UICONQUEST_GETMAPINFOWITHTILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x2356D00)
#define UICONQUEST_GET_LOCALIZETILE_OFFSET UNITYSDK_OFFSET(0x234BC30)
#define UICONQUEST__ONOPENED_B__147_0_OFFSET UNITYSDK_OFFSET(0x2356DB0)
#define UICONQUEST_SETOBJECTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x2354A70)
#define UICONQUEST_SET_MAP_OFFSET UNITYSDK_OFFSET(0x2356EC0)
#define UICONQUEST_DELETECONQUESTOBJECTVISUAL_OFFSET UNITYSDK_OFFSET(0x2356EE0)
#define UICONQUEST_OVERRIDECAMERASETTING_OFFSET UNITYSDK_OFFSET(0x2357140)
#define UICONQUEST__ONCLICKEROSIONINFO_B__138_0_OFFSET UNITYSDK_OFFSET(0x23574B0)
#define UICONQUEST_GET_LOCALIZEUPGRADE_OFFSET UNITYSDK_OFFSET(0x23574E0)
#define UICONQUEST_GETCONQUESTEVENTOPENTIME_OFFSET UNITYSDK_OFFSET(0x2357580)
#define UICONQUEST_REMOVEEROSIONTOPLAY_OFFSET UNITYSDK_OFFSET(0x23575A0)
#define UICONQUEST_REFRESHCONQUESTUI_OFFSET UNITYSDK_OFFSET(0x2357620)
#define UICONQUEST_SETGOALUI_OFFSET UNITYSDK_OFFSET(0x23589C0)
#define UICONQUEST_PLAYEROSIONALARM_OFFSET UNITYSDK_OFFSET(0x23591D0)
#define UICONQUEST_ONCLICKEROSIONINFO_OFFSET UNITYSDK_OFFSET(0x2359280)
#define UICONQUEST_HANDLECONQUESTNORMALCONQUERNETWORKMESSAGE_OFFSET UNITYSDK_OFFSET(0x2359330)
#define UICONQUEST_GET_LOCALIZEMAPINFO_OFFSET UNITYSDK_OFFSET(0x2356B00)
#define UICONQUEST_VALIDATEANDSETSAVEDATA_OFFSET UNITYSDK_OFFSET(0x2359470)
#define UICONQUEST_ADDTAGUI_OFFSET UNITYSDK_OFFSET(0x235A440)
#define UICONQUEST_SHOWCALCULATETAG_OFFSET UNITYSDK_OFFSET(0x235A530)
#define UICONQUEST_GET_ISMAINSTORYORPERMANENT_OFFSET UNITYSDK_OFFSET(0x234D6D0)
#define UICONQUEST_SETTILECOMPLETE_OFFSET UNITYSDK_OFFSET(0x23549E0)
#define UICONQUEST_GET_ECHLONDBS_OFFSET UNITYSDK_OFFSET(0x235A870)
#define UICONQUEST_SET_CONQUESTLOCALSAVEDATA_OFFSET UNITYSDK_OFFSET(0x235A900)
#define UICONQUEST_SET_MAPDATA_OFFSET UNITYSDK_OFFSET(0x235A920)
#define UICONQUEST_GET_LOCALIZETREASUREBOX_OFFSET UNITYSDK_OFFSET(0x235A940)
#define UICONQUEST_UNSELECTTILEVISUAL_OFFSET UNITYSDK_OFFSET(0x234CE90)
#define UICONQUEST_GET_MAXOPENEDSTEP_OFFSET UNITYSDK_OFFSET(0x2354350)
#define UICONQUEST__HANDLECONQUESTNORMALCONQUERNETWORKMESSAGE_B__193_0_OFFSET UNITYSDK_OFFSET(0x235A9E0)
#define UICONQUEST_GET_CURRENTVIEWINGSTEP_OFFSET UNITYSDK_OFFSET(0x2351AA0)
#define UICONQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x235AB00)
#define UICONQUEST_GET_CONQUESTLOCALSAVEDATA_OFFSET UNITYSDK_OFFSET(0x235AC90)
#define UICONQUEST_GET_EVENTEXCEL_OFFSET UNITYSDK_OFFSET(0x235ACA0)
#define UICONQUEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x235ACB0)
#define UICONQUEST_INITCAMERA_OFFSET UNITYSDK_OFFSET(0x2357340)
#define UICONQUEST_REFRESHCONQUESTSTATE_OFFSET UNITYSDK_OFFSET(0x23541C0)
#define UICONQUEST_INITIALIZETOGGLE_OFFSET UNITYSDK_OFFSET(0x235B680)
#define UICONQUEST_SWITCHCONQUESTMAP_OFFSET UNITYSDK_OFFSET(0x235C460)
#define UICONQUEST_GET_CONQUESTDISPLAYINFOS_OFFSET UNITYSDK_OFFSET(0x235C510)
#define UICONQUEST_REFRESHGOALUI_OFFSET UNITYSDK_OFFSET(0x2354820)
#define UICONQUEST_GET_TILEMAPEVENTDB_OFFSET UNITYSDK_OFFSET(0x235C5A0)
#define UICONQUEST_PLAYSCENARIO_OFFSET UNITYSDK_OFFSET(0x2354C10)
#define UICONQUEST_PLAYCOMPLETE_OFFSET UNITYSDK_OFFSET(0x235C6B0)
#define UICONQUEST_SET_CURRENTSTAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x235C760)
#define UICONQUEST_REFRESHSTEPUI_OFFSET UNITYSDK_OFFSET(0x2358370)
#define UICONQUEST_SETCALCULATEUI_OFFSET UNITYSDK_OFFSET(0x2357CB0)
#define UICONQUEST__HANDLECONQUESTNORMALCONQUERNETWORKMESSAGE_B__193_1_OFFSET UNITYSDK_OFFSET(0x235C960)
#define UICONQUEST_HANDLEUIOPENSTARTMESSAGE_OFFSET UNITYSDK_OFFSET(0x235C970)
#define UICONQUEST_GET_LOCALIZESUDDEN_OFFSET UNITYSDK_OFFSET(0x234DDC0)
#define UICONQUEST_SETEROSIONONGOING_OFFSET UNITYSDK_OFFSET(0x235C990)
#define UICONQUEST_CO_DIRECTINGCONQUESTREWARD_OFFSET UNITYSDK_OFFSET(0x2356400)
#define UICONQUEST_GET_CONQUESTDATA_OFFSET UNITYSDK_OFFSET(0x2352F90)
#define UICONQUEST_GETBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0x235C9E0)
#define UICONQUEST_ONSCREENRESOLUTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x235CA10)
#define UICONQUEST_ONCLICKDROPDOWN_OFFSET UNITYSDK_OFFSET(0x235CA20)

	inline static constexpr unsigned int UIConquest_TypeDefinitionIndex = 5048;

	class UIConquest : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* Map3DBackground; // 0xD8
		MXTweenPosition* Tween; // 0xE0
		MXTweenRotation* TriangleTween; // 0xE8
		ConquestTileMapVisual* _Map_k__BackingField; // 0xF0
		MXButton* DropDownButton; // 0xF8
		MXButton* BackButton; // 0x100
		MXButton* MapInfoButton; // 0x108
		MXButton* ErosionInfoButton; // 0x110
		UISprite* ErosionInfoButtonYellowDot; // 0x118
		::UnityEngine::GameObject* stepGoalDisplayBar; // 0x120
		::UnityEngine::GameObject* erosionAlarmDisplayBar; // 0x128
		MXButton* stepGoalDisplayOnOff; // 0x130
		MXButton* erosionAlarmDisplayOnOff; // 0x138
		MXButton* playGuideButton; // 0x140
		::UnityEngine::GameObject* erosionAlarmUI; // 0x148
		UISprite* erosionAlarmIcon; // 0x150
		::System::Boolean showStepGoalUI; // 0x158
		::System::Boolean showErosionAlarmUI; // 0x159
		::System::Boolean isSaveLocked; // 0x15A
		ConquestEventDisplayer* conquestEventDisplayer; // 0x160
		::Lean::Touch::LeanCameraZoom* leanCameraZoom; // 0x168
		ConquestCameraTranslate* ConquestCameraTranslate; // 0x170
		::UnityEngine::GameObject* MapRoot; // 0x178
		ConquestUIAnimationController* animationController; // 0x180
		::System::Boolean tweenOn; // 0x188
		UIGrid* ToggleGrid; // 0x190
		UISprite* DropDownBG; // 0x198
		UISprite* DropDownInboxBG; // 0x1A0
		::Il2CppArray<::System::Object*>* Toggle; // 0x1A8
		::Il2CppArray<::System::Object*>* ButtonOfToggle; // 0x1B0
		::Il2CppArray<::System::Object*>* ToggleStepLabelOn; // 0x1B8
		Il2CppObject* toggleTable; // 0x1C0
		Il2CppObject* tileMapNameTable; // 0x1C8
		UILabel* dropdownStepLabel; // 0x1D0
		Il2CppObject* currentViewingStepDict; // 0x1D8
		::System::Int32 maxNormalStep; // 0x1E0
		::FlatData::StageDifficulty* _CurrentStageDifficulty_k__BackingField; // 0x1E4
		ConquestTileVisual* pressedTile; // 0x1E8
		::UnityEngine::Vector3* pressedCameraPos; // 0x1F0
		::System::Boolean mapMove; // 0x1FC
		::System::Boolean pressed; // 0x1FD
		HexaUIConquest* HexaUIPopup; // 0x200
		ConquestTileVisual* selectedTileVisual; // 0x208
		UIConquestGoalUI* conquestGoalUI; // 0x210
		::System::DateTime* erosionDateTime; // 0x218
		UILabel* erosionWarning; // 0x220
		UILabel* erosionRemainTime; // 0x228
		UILabel* erosionRemainApToUse; // 0x230
		UIProgressBar* erosionRemainApToUseGauge; // 0x238
		::Il2CppArray<::System::Object*>* gaugeUIList; // 0x240
		UIConquestGaugeUI* gaugeUI; // 0x248
		::UnityEngine::GameObject* TagRoot; // 0x250
		Il2CppObject* tagList; // 0x258
		HexaUIConquestUnitInfo* HexaUIResourceUnitInfo; // 0x260
		::UnityEngine::Transform* CalculateTagRoot; // 0x268
		UIHexaTileCalculateReward* HexaTileCalculateReward; // 0x270
		::System::Single calculateValue; // 0x278
		::UnityEngine::Transform* centerLockRoot; // 0x280
		UIConquestCenterLock* uIConquestCenterLockPrefab; // 0x288
		ConquestCompleteUIController* completeUIController; // 0x290
		UIConquestErosionAlarm* erosionAlarm; // 0x298
		::UnityEngine::GameObject* erosionFx; // 0x2A0
		Il2CppObject* centerLockByStep; // 0x2A8
		ConquestMapBackgroundVisual* mapBackgroundVisual; // 0x2B0
		::System::Boolean isShowingPlayGuide; // 0x2B8
		SwitchConquestMapContext* switchConquestMapContext; // 0x2C0
		Il2CppObject* mapEnterDisplayInfos; // 0x2C8
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x2D0
		::MX::Data::Excel::ConquestEventExcel* eventExcel; // 0x2D8
		::MX::Data::Excel::ConquestCalculateExcel* calculateExcel; // 0x2E8
		Il2CppObject* mapExcelDatas; // 0x2F8
		Il2CppObject* stepToCameraSettingDict; // 0x300
		::MX::Conquest::ConquestTileMap* _mapData_k__BackingField; // 0x308
		::MX::SaveData::ConquestSaveDataDict* conquestSaveDataDict; // 0x310
		::MX::SaveData::ConquestSaveData* _ConquestLocalSaveData_k__BackingField; // 0x318
		::System::Boolean loadingUIConquestInternally; // 0x320
		Il2CppObject* OpenedPopupUIs; // 0x328

		::System::Int64 get_ConquestEventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_CONQUESTEVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_CurrentStageDifficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_CURRENTSTAGEDIFFICULTY_OFFSET))(nullptr);
		}

		::MX::Data::LocalizeData* get_localData()
		{
			return ((::MX::Data::LocalizeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_LOCALDATA_OFFSET))(nullptr);
		}

		::System::Boolean IsReachable(::MX::Conquest::ConquestTile* arg)
		{
			return ((::System::Boolean(*)(::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_ISREACHABLE_OFFSET))(arg, nullptr);
		}

		::MX::Conquest::ConquestTileMap* GetMapData(::FlatData::StageDifficulty* arg, ::System::Int32 arg2)
		{
			return ((::MX::Conquest::ConquestTileMap*(*)(::FlatData::StageDifficulty*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GETMAPDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickErosionAlarmOnOff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_ONCLICKEROSIONALARMONOFF_OFFSET))(nullptr);
		}

		::System::Void EmulateToggleButtonClick(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_EMULATETOGGLEBUTTONCLICK_OFFSET))(arg, nullptr);
		}

		::System::Void ToggleShowErosionAlarm(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_TOGGLESHOWEROSIONALARM_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CreateStackUI()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_CREATESTACKUI_OFFSET))(nullptr);
		}

		Il2CppObject* get_tileDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_TILEDBS_OFFSET))(nullptr);
		}

		::System::Void OnClickStepGoalOnOff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_ONCLICKSTEPGOALONOFF_OFFSET))(nullptr);
		}

		::System::Void _OnOffSelectUI_b__183_1(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST__ONOFFSELECTUI_B__183_1_OFFSET))(arg, nullptr);
		}

		::System::Void UnloadUIResources()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_UNLOADUIRESOURCES_OFFSET))(nullptr);
		}

		::System::Void OnOffSelectUI(::FlatData::ConquestTileType* arg, ConquestTileVisual* arg2)
		{
			((::System::Void(*)(::FlatData::ConquestTileType*, ConquestTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_ONOFFSELECTUI_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_objectDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_OBJECTDBS_OFFSET))(nullptr);
		}

		::System::Void OnToggleStage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_ONTOGGLESTAGE_OFFSET))(nullptr);
		}

		::System::Boolean HandleUpgradeBaseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_HANDLEUPGRADEBASEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* LoadConquestMapData()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_LOADCONQUESTMAPDATA_OFFSET))(nullptr);
		}

		::System::Void OnClickMapInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_ONCLICKMAPINFO_OFFSET))(nullptr);
		}

		::System::Void SetErosionAlarmInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_SETEROSIONALARMINFO_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayMoveToStep(::FlatData::StageDifficulty* arg, ::System::Int32 arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::FlatData::StageDifficulty*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_COPLAYMOVETOSTEP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_stageInfo(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoOpenSequence()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_COOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Boolean IsSameMap(::FlatData::StageDifficulty* arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::FlatData::StageDifficulty*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_ISSAMEMAP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetTween()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_RESETTWEEN_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMap* get_mapData()
		{
			return ((::MX::Conquest::ConquestTileMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_MAPDATA_OFFSET))(nullptr);
		}

		::System::Void UpdateErosionTimeCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_UPDATEEROSIONTIMECHECK_OFFSET))(nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		Il2CppObject* get_difficultyStepDict()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_DIFFICULTYSTEPDICT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoMoveCameraToStep(::System::Int32 arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_COMOVECAMERATOSTEP_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::ConquestInfoDB* get_infoDB()
		{
			return ((::MX::GameLogic::DBModel::ConquestInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_INFODB_OFFSET))(nullptr);
		}

		::System::Void SetUnitStatus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_SETUNITSTATUS_OFFSET))(nullptr);
		}

		::System::Void InitUIConquestCenterLock(::MX::Data::ConquestMapExcelData* arg)
		{
			((::System::Void(*)(::MX::Data::ConquestMapExcelData*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_INITUICONQUESTCENTERLOCK_OFFSET))(arg, nullptr);
		}

		::System::Boolean _CoOpenSequence_b__196_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST__COOPENSEQUENCE_B__196_0_OFFSET))(nullptr);
		}

		::System::Void CloseAndReopenUIConquest(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_CLOSEANDREOPENUICONQUEST_OFFSET))(arg, nullptr);
		}

		::System::Boolean _CoMoveCameraToStep_b__180_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST__COMOVECAMERATOSTEP_B__180_0_OFFSET))(nullptr);
		}

		ConquestTileMapVisual* get_Map()
		{
			return ((ConquestTileMapVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_MAP_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_ONBACK_OFFSET))(nullptr);
		}

		::System::Void OpenPopupUIs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_OPENPOPUPUIS_OFFSET))(nullptr);
		}

		::System::Boolean get_isMainStory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_ISMAINSTORY_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeStep()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_LOCALIZESTEP_OFFSET))(nullptr);
		}

		::System::Void HideHexaUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_HIDEHEXAUI_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Boolean HandleUICloseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_HANDLEUICLOSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SaveLocalSaveData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_SAVELOCALSAVEDATA_OFFSET))(nullptr);
		}

		::System::Void SwitchMapWithContext(::FlatData::StageDifficulty* arg, ::System::Int32 arg2, SwitchConquestMapContext* arg3)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::System::Int32, SwitchConquestMapContext*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_SWITCHMAPWITHCONTEXT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetStepUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_SETSTEPUI_OFFSET))(nullptr);
		}

		::System::Void SaveTileMapEventDB(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_SAVETILEMAPEVENTDB_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickPlayGuideButton_b__166_0(UIEventPlayGuide* arg)
		{
			((::System::Void(*)(UIEventPlayGuide*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST__ONCLICKPLAYGUIDEBUTTON_B__166_0_OFFSET))(arg, nullptr);
		}

		::System::Void _ValidateAndSetSaveData_g__SetDefaultData|154_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST__VALIDATEANDSETSAVEDATA_G__SETDEFAULTDATA|154_0_OFFSET))(nullptr);
		}

		::System::Void OnClickPlayGuideButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_ONCLICKPLAYGUIDEBUTTON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Int64 get_ConquestOriginalEventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_CONQUESTORIGINALEVENTCONTENTID_OFFSET))(nullptr);
		}

		::MX::Data::CampaignStageInfo* get_stageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_STAGEINFO_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void MoveCameraToStage(::System::Int32 arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_MOVECAMERATOSTAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SaveErosionToPlayList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_SAVEEROSIONTOPLAYLIST_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoRefreshState(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_COREFRESHSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_ONENABLE_OFFSET))(nullptr);
		}

		ConquestUIAnimationController* get_AnimationController()
		{
			return ((ConquestUIAnimationController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_ANIMATIONCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void ShowHexaUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_SHOWHEXAUI_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST___N__0_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeManage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_LOCALIZEMANAGE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayStepOpen(::System::Int32 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_PLAYSTEPOPEN_OFFSET))(arg, nullptr);
		}

		::System::Void InitCameraLimit(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_INITCAMERALIMIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OnOffSelectUI_g__StartDirectingConquestReward|183_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST__ONOFFSELECTUI_G__STARTDIRECTINGCONQUESTREWARD|183_2_OFFSET))(nullptr);
		}

		::System::Void SetLocalizeText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_SETLOCALIZETEXT_OFFSET))(nullptr);
		}

		::System::Void TryShowEventContentGuide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_TRYSHOWEVENTCONTENTGUIDE_OFFSET))(nullptr);
		}

		::System::Int32 GetMapInfoWithTileUniqueId(::FlatData::StageDifficulty* arg, ::System::Int64 arg2)
		{
			return ((::System::Int32(*)(::FlatData::StageDifficulty*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GETMAPINFOWITHTILEUNIQUEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_LocalizeTile()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_LOCALIZETILE_OFFSET))(nullptr);
		}

		::System::Void _OnOpened_b__147_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST__ONOPENED_B__147_0_OFFSET))(nullptr);
		}

		::System::Void SetObjectComplete(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_SETOBJECTCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Map(ConquestTileMapVisual* arg)
		{
			((::System::Void(*)(ConquestTileMapVisual*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_SET_MAP_OFFSET))(arg, nullptr);
		}

		::System::Void DeleteConquestObjectVisual(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_DELETECONQUESTOBJECTVISUAL_OFFSET))(arg, nullptr);
		}

		::System::Void OverrideCameraSetting(::System::Int32 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_OVERRIDECAMERASETTING_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OnClickErosionInfo_b__138_0(UIPopup_Conquest_Erosion* arg)
		{
			((::System::Void(*)(UIPopup_Conquest_Erosion*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST__ONCLICKEROSIONINFO_B__138_0_OFFSET))(arg, nullptr);
		}

		::System::String* get_LocalizeUpgrade()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_LOCALIZEUPGRADE_OFFSET))(nullptr);
		}

		::System::DateTime* GetConquestEventOpenTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GETCONQUESTEVENTOPENTIME_OFFSET))(nullptr);
		}

		::System::Void RemoveErosionToPlay(ErosionToPlay* arg)
		{
			((::System::Void(*)(ErosionToPlay*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_REMOVEEROSIONTOPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshConquestUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_REFRESHCONQUESTUI_OFFSET))(nullptr);
		}

		::System::Void SetGoalUI(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_SETGOALUI_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayErosionAlarm(::MX::Data::ConquestErosionExcelData* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Data::ConquestErosionExcelData*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_PLAYEROSIONALARM_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickErosionInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_ONCLICKEROSIONINFO_OFFSET))(nullptr);
		}

		::System::Boolean HandleConquestNormalConquerNetworkMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_HANDLECONQUESTNORMALCONQUERNETWORKMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::String* get_LocalizeMapInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_LOCALIZEMAPINFO_OFFSET))(nullptr);
		}

		::System::Void ValidateAndSetSaveData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_VALIDATEANDSETSAVEDATA_OFFSET))(nullptr);
		}

		::System::Void AddTagUI(HexaUIConquestUnitInfo* arg)
		{
			((::System::Void(*)(HexaUIConquestUnitInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_ADDTAGUI_OFFSET))(arg, nullptr);
		}

		::System::Void ShowCalculateTag()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_SHOWCALCULATETAG_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMainStoryOrPermanent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_ISMAINSTORYORPERMANENT_OFFSET))(nullptr);
		}

		::System::Void SetTileComplete(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_SETTILECOMPLETE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_echlonDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_ECHLONDBS_OFFSET))(nullptr);
		}

		::System::Void set_ConquestLocalSaveData(::MX::SaveData::ConquestSaveData* arg)
		{
			((::System::Void(*)(::MX::SaveData::ConquestSaveData*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_SET_CONQUESTLOCALSAVEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_mapData(::MX::Conquest::ConquestTileMap* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_SET_MAPDATA_OFFSET))(arg, nullptr);
		}

		::System::String* get_LocalizeTreasureBox()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_LOCALIZETREASUREBOX_OFFSET))(nullptr);
		}

		::System::Void UnselectTileVisual()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_UNSELECTTILEVISUAL_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxOpenedStep()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_MAXOPENEDSTEP_OFFSET))(nullptr);
		}

		::System::Void _HandleConquestNormalConquerNetworkMessage_b__193_0(UILevelUpPopup* arg)
		{
			((::System::Void(*)(UILevelUpPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST__HANDLECONQUESTNORMALCONQUERNETWORKMESSAGE_B__193_0_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CurrentViewingStep()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_CURRENTVIEWINGSTEP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::SaveData::ConquestSaveData* get_ConquestLocalSaveData()
		{
			return ((::MX::SaveData::ConquestSaveData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_CONQUESTLOCALSAVEDATA_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ConquestEventExcel* get_EventExcel()
		{
			return ((::MX::Data::Excel::ConquestEventExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_EVENTEXCEL_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_UPDATE_OFFSET))(nullptr);
		}

		::System::Void InitCamera(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_INITCAMERA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshConquestState(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_REFRESHCONQUESTSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeToggle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_INITIALIZETOGGLE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* SwitchConquestMap(::FlatData::StageDifficulty* arg, ::System::Int32 arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::FlatData::StageDifficulty*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_SWITCHCONQUESTMAP_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_conquestDisplayInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_CONQUESTDISPLAYINFOS_OFFSET))(nullptr);
		}

		::System::Void RefreshGoalUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_REFRESHGOALUI_OFFSET))(nullptr);
		}

		Il2CppObject* get_TileMapEventDB()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_TILEMAPEVENTDB_OFFSET))(nullptr);
		}

		::System::Void PlayScenario(::System::Int64 arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_PLAYSCENARIO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* PlayComplete(::System::Boolean arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_PLAYCOMPLETE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_CurrentStageDifficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_SET_CURRENTSTAGEDIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshStepUI(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_REFRESHSTEPUI_OFFSET))(arg, nullptr);
		}

		::System::Void SetCalculateUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_SETCALCULATEUI_OFFSET))(nullptr);
		}

		::System::Void _HandleConquestNormalConquerNetworkMessage_b__193_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST__HANDLECONQUESTNORMALCONQUERNETWORKMESSAGE_B__193_1_OFFSET))(nullptr);
		}

		::System::Boolean HandleUIOpenStartMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_HANDLEUIOPENSTARTMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::String* get_LocalizeSudden()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_LOCALIZESUDDEN_OFFSET))(nullptr);
		}

		::System::Void SetErosionOngoing(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_SETEROSIONONGOING_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_DirectingConquestReward()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_CO_DIRECTINGCONQUESTREWARD_OFFSET))(nullptr);
		}

		::MX::Data::ConquestData* get_conquestData()
		{
			return ((::MX::Data::ConquestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GET_CONQUESTDATA_OFFSET))(nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGMPlayInfo()
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_GETBGMPLAYINFO_OFFSET))(nullptr);
		}

		::System::Void OnScreenResolutionChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_ONSCREENRESOLUTIONCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnClickDropdown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUEST_ONCLICKDROPDOWN_OFFSET))(nullptr);
		}

	};

