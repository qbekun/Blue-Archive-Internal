#pragma once
#include "unitysdk.h"

namespace MX::Data { class BGMPlayInfo; }
class WidgetCharacterDialogEmoji;
class IInteractiveWorldRaidStateProvider;
namespace MX::Data { class EventContentSeasonInfo; }
class InteractiveWorldRaidDesignLevelRoot;
namespace UnityEngine { class GameObject; }
class UIInteractiveWorldRaidWorldMapNodes;
namespace UnityEngine { class Camera; }
class InteractiveWorldRaidCameraManager;
class UIBase;
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::Data { class WorldRaidSeasonInfo; }
namespace MX::Data { class WorldRaidBossGroupInfo; }
class BossAppearState;
class UIInteractiveWorldRaidBossNode;
namespace MX::Data { class EventContentStageInfo; }
namespace MX::Data::Excel { class EventContentScenarioExcel; }
namespace Cysharp::Threading::Tasks { class UniTaskVoid; }
class UIPopup_InteractiveWorldRaidArcade;
class UIInteractiveWorldRaidCarrierSkillUpgrade;
class UIInteractiveWorldRaid2DUI;
namespace MX::Data { class InteractiveWorldRaidCarrierMapInfo; }

#define INTERACTIVEWORLDRAIDTASK_SET_EXECUTEDPROCEDUREKEYS_OFFSET UNITYSDK_OFFSET(0x25AD690)
#define INTERACTIVEWORLDRAIDTASK_SHOWLOBBYUI_OFFSET UNITYSDK_OFFSET(0x259EA00)
#define INTERACTIVEWORLDRAIDTASK__PREPAREASYNC_B__56_3_OFFSET UNITYSDK_OFFSET(0x25AD6A0)
#define INTERACTIVEWORLDRAIDTASK_DESTROYPREFABS_OFFSET UNITYSDK_OFFSET(0x25AD700)
#define INTERACTIVEWORLDRAIDTASK_GET_UIANIMATIONLOCKED_OFFSET UNITYSDK_OFFSET(0x25AD940)
#define INTERACTIVEWORLDRAIDTASK_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x25AD950)
#define INTERACTIVEWORLDRAIDTASK_RELEASE_OFFSET UNITYSDK_OFFSET(0x25AD960)
#define INTERACTIVEWORLDRAIDTASK_GET_DIALOGWIDGET_OFFSET UNITYSDK_OFFSET(0x25AD970)
#define INTERACTIVEWORLDRAIDTASK_LOADCAMERAMANAGER_OFFSET UNITYSDK_OFFSET(0x25AD980)
#define INTERACTIVEWORLDRAIDTASK_SET_UIANIMATIONLOCKED_OFFSET UNITYSDK_OFFSET(0x25ADB40)
#define INTERACTIVEWORLDRAIDTASK_GET_WORLDMAPROOT_OFFSET UNITYSDK_OFFSET(0x25ADB50)
#define INTERACTIVEWORLDRAIDTASK_SETOTHERNODESOFF_OFFSET UNITYSDK_OFFSET(0x25ADB60)
#define INTERACTIVEWORLDRAIDTASK_GET_STATEPROVIDER_OFFSET UNITYSDK_OFFSET(0x25ADBD0)
#define INTERACTIVEWORLDRAIDTASK_CHANGECAMERA_OFFSET UNITYSDK_OFFSET(0x25ADBE0)
#define INTERACTIVEWORLDRAIDTASK_SET_SPECIFICUILOCKED_OFFSET UNITYSDK_OFFSET(0x25ADE70)
#define INTERACTIVEWORLDRAIDTASK__LOADWORLDMAPLEVEL_B__59_3_OFFSET UNITYSDK_OFFSET(0x25ADE80)
#define INTERACTIVEWORLDRAIDTASK_SET_STATEPROVIDER_OFFSET UNITYSDK_OFFSET(0x25ADED0)
#define INTERACTIVEWORLDRAIDTASK_OPENSKILLUPGRADEUI_OFFSET UNITYSDK_OFFSET(0x259AD00)
#define INTERACTIVEWORLDRAIDTASK_AUTOSYNCLOBBY_OFFSET UNITYSDK_OFFSET(0x25ADEE0)
#define INTERACTIVEWORLDRAIDTASK__DESTROYPREFABS_B__83_0_OFFSET UNITYSDK_OFFSET(0x25AE0A0)
#define INTERACTIVEWORLDRAIDTASK__LOADWORLDMAPLEVEL_B__59_2_OFFSET UNITYSDK_OFFSET(0x25AE0C0)
#define INTERACTIVEWORLDRAIDTASK_OPENARCADEUI_OFFSET UNITYSDK_OFFSET(0x259A3E0)
#define INTERACTIVEWORLDRAIDTASK_SET_DIALOGWIDGET_OFFSET UNITYSDK_OFFSET(0x25AE160)
#define INTERACTIVEWORLDRAIDTASK_GETBOSSNODES_OFFSET UNITYSDK_OFFSET(0x25AE170)
#define INTERACTIVEWORLDRAIDTASK_GETBACKTOBRIDGE_OFFSET UNITYSDK_OFFSET(0x25AE190)
#define INTERACTIVEWORLDRAIDTASK_OPENINTERACTIVEWORLDRAIDBOSSENTERUI_OFFSET UNITYSDK_OFFSET(0x25AE480)
#define INTERACTIVEWORLDRAIDTASK_PREPARE_OFFSET UNITYSDK_OFFSET(0x25AEA50)
#define INTERACTIVEWORLDRAIDTASK__ENTERLASTACTIVECARRIERLEVEL_B__76_0_OFFSET UNITYSDK_OFFSET(0x25AEA90)
#define INTERACTIVEWORLDRAIDTASK__LOADWORLDMAPLEVEL_B__59_1_OFFSET UNITYSDK_OFFSET(0x25AEAB0)
#define INTERACTIVEWORLDRAIDTASK_SENDREQUESTSANDSYNC_OFFSET UNITYSDK_OFFSET(0x25AEB00)
#define INTERACTIVEWORLDRAIDTASK_LEAVECARRIERLEVEL_OFFSET UNITYSDK_OFFSET(0x25AEC90)
#define INTERACTIVEWORLDRAIDTASK_GETBOSSNODEBYINDEX_OFFSET UNITYSDK_OFFSET(0x25AECB0)
#define INTERACTIVEWORLDRAIDTASK_PLAYSTORYSTAGE_OFFSET UNITYSDK_OFFSET(0x25AED50)
#define INTERACTIVEWORLDRAIDTASK_INITIALIZEWORLDBOSSHPMESSAGETRIGGER_OFFSET UNITYSDK_OFFSET(0x25AEF50)
#define INTERACTIVEWORLDRAIDTASK_SWITCHBOSSPHASE_OFFSET UNITYSDK_OFFSET(0x25AF000)
#define INTERACTIVEWORLDRAIDTASK_HIDELOBBYUI_OFFSET UNITYSDK_OFFSET(0x2598D20)
#define INTERACTIVEWORLDRAIDTASK_PLAYMAINGROUNDSTAGE_OFFSET UNITYSDK_OFFSET(0x25AF210)
#define INTERACTIVEWORLDRAIDTASK_SETSELECTEDNODEONOTHERSOFF_OFFSET UNITYSDK_OFFSET(0x25AF5A0)
#define INTERACTIVEWORLDRAIDTASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25AF6C0)
#define INTERACTIVEWORLDRAIDTASK_PLAYEVENTSCENARIO_OFFSET UNITYSDK_OFFSET(0x259C7F0)
#define INTERACTIVEWORLDRAIDTASK_OPENLOBBYUI_OFFSET UNITYSDK_OFFSET(0x25AFAE0)
#define INTERACTIVEWORLDRAIDTASK_SETSELECTEDNODEON_OFFSET UNITYSDK_OFFSET(0x25AF650)
#define INTERACTIVEWORLDRAIDTASK_SETBOSSNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x25AFC10)
#define INTERACTIVEWORLDRAIDTASK_PREPAREASYNC_OFFSET UNITYSDK_OFFSET(0x25AFE00)
#define INTERACTIVEWORLDRAIDTASK__OPENARCADEUI_B__65_0_OFFSET UNITYSDK_OFFSET(0x25AFED0)
#define INTERACTIVEWORLDRAIDTASK__OPENSKILLUPGRADEUI_B__61_0_OFFSET UNITYSDK_OFFSET(0x25AFF00)
#define INTERACTIVEWORLDRAIDTASK_CANCELWORLDBOSSHPSYNC_OFFSET UNITYSDK_OFFSET(0x25AD8E0)
#define INTERACTIVEWORLDRAIDTASK_GET_EXECUTEDPROCEDUREKEYS_OFFSET UNITYSDK_OFFSET(0x25B0030)
#define INTERACTIVEWORLDRAIDTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x25B0040)
#define INTERACTIVEWORLDRAIDTASK_OPENINFORMATIONUI_OFFSET UNITYSDK_OFFSET(0x259A660)
#define INTERACTIVEWORLDRAIDTASK_OPENWORLDMAPINFORMATIONUI_OFFSET UNITYSDK_OFFSET(0x25B0150)
#define INTERACTIVEWORLDRAIDTASK__LOADWORLDMAPLEVEL_B__59_0_OFFSET UNITYSDK_OFFSET(0x25B0270)
#define INTERACTIVEWORLDRAIDTASK_GET_SPECIFICUILOCKED_OFFSET UNITYSDK_OFFSET(0x25B03C0)
#define INTERACTIVEWORLDRAIDTASK_LOADWORLDMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x25B03D0)
#define INTERACTIVEWORLDRAIDTASK_GET_EVENTSEASONINFO_OFFSET UNITYSDK_OFFSET(0x25B0590)
#define INTERACTIVEWORLDRAIDTASK_SET_CURRENTBGM_OFFSET UNITYSDK_OFFSET(0x25B05A0)
#define INTERACTIVEWORLDRAIDTASK__AUTOSYNCLOBBY_G__GETFAKEHP|95_0_OFFSET UNITYSDK_OFFSET(0x25B05B0)
#define INTERACTIVEWORLDRAIDTASK__OPENWORLDMAPUI_B__62_0_OFFSET UNITYSDK_OFFSET(0x25B0630)
#define INTERACTIVEWORLDRAIDTASK_GET_ISPREPARED_OFFSET UNITYSDK_OFFSET(0x25B06B0)
#define INTERACTIVEWORLDRAIDTASK_OPENWORLDMAPUIAFTERBATTLE_OFFSET UNITYSDK_OFFSET(0x25B06C0)
#define INTERACTIVEWORLDRAIDTASK_SETWORLDBOSSHPONENTER_OFFSET UNITYSDK_OFFSET(0x25B0830)
#define INTERACTIVEWORLDRAIDTASK_INITIALIZEWORLDBOSSHPSYNC_OFFSET UNITYSDK_OFFSET(0x25B0A90)
#define INTERACTIVEWORLDRAIDTASK_ENTERCARRIERLEVEL_OFFSET UNITYSDK_OFFSET(0x25B0C70)
#define INTERACTIVEWORLDRAIDTASK_GET_CURRENTBGM_OFFSET UNITYSDK_OFFSET(0x25B0DC0)
#define INTERACTIVEWORLDRAIDTASK_SET_ISPREPARED_OFFSET UNITYSDK_OFFSET(0x25B0DD0)
#define INTERACTIVEWORLDRAIDTASK_OPENCARRIERSKILLUPGRADEINFORMATIONUI_OFFSET UNITYSDK_OFFSET(0x25B0DE0)
#define INTERACTIVEWORLDRAIDTASK_CHANGECAMERATOMAIN_OFFSET UNITYSDK_OFFSET(0x25AD8D0)
#define INTERACTIVEWORLDRAIDTASK_ENTERLASTACTIVECARRIERLEVEL_OFFSET UNITYSDK_OFFSET(0x25B0F00)
#define INTERACTIVEWORLDRAIDTASK__GETBACKTOBRIDGE_B__100_0_OFFSET UNITYSDK_OFFSET(0x25B0FC0)
#define INTERACTIVEWORLDRAIDTASK_GET_DESIGNLEVELROOT_OFFSET UNITYSDK_OFFSET(0x25B0FD0)
#define INTERACTIVEWORLDRAIDTASK_PREPARECONTINUE_OFFSET UNITYSDK_OFFSET(0x25AE250)
#define INTERACTIVEWORLDRAIDTASK_SHOWFLAVORTEXT_OFFSET UNITYSDK_OFFSET(0x259E7F0)
#define INTERACTIVEWORLDRAIDTASK_SET_WORLDMAPROOT_OFFSET UNITYSDK_OFFSET(0x25B0FF0)
#define INTERACTIVEWORLDRAIDTASK_OPENCARRIERINFORMATIONUI_OFFSET UNITYSDK_OFFSET(0x259ADE0)
#define INTERACTIVEWORLDRAIDTASK_OPENWORLDMAPUI_OFFSET UNITYSDK_OFFSET(0x259AC10)
#define INTERACTIVEWORLDRAIDTASK_GETCURRENTCARRIERMAP_OFFSET UNITYSDK_OFFSET(0x25B1000)
#define INTERACTIVEWORLDRAIDTASK_PLAYSTORYSTAGEASYNC_OFFSET UNITYSDK_OFFSET(0x25AED80)
#define INTERACTIVEWORLDRAIDTASK_LOADCARRIERLEVEL_OFFSET UNITYSDK_OFFSET(0x25B10C0)

	inline static constexpr unsigned int InteractiveWorldRaidTask_TypeDefinitionIndex = 384;

	class InteractiveWorldRaidTask : public Il2CppObject
	{
	public:
		::System::Boolean _IsPrepared_k__BackingField; // 0x10
		::System::Boolean _UIAnimationLocked_k__BackingField; // 0x11
		::System::Boolean _SpecificUILocked_k__BackingField; // 0x12
		::MX::Data::BGMPlayInfo* _CurrentBGM_k__BackingField; // 0x18
		WidgetCharacterDialogEmoji* _DialogWidget_k__BackingField; // 0x20
		Il2CppObject* _ExecutedProcedureKeys_k__BackingField; // 0x28
		IInteractiveWorldRaidStateProvider* _StateProvider_k__BackingField; // 0x30
		::System::Boolean _isEditSceneMode; // 0x38
		::System::Int64 _seasonId; // 0x40
		::System::Int64 _phaseId; // 0x48
		::System::Int64 _currCarrierId; // 0x50
		::System::Int64 _currWorldMapId; // 0x58
		::MX::Data::EventContentSeasonInfo* _eventSeasonInfo; // 0x60
		InteractiveWorldRaidDesignLevelRoot* _designLevelRoot; // 0x68
		Il2CppObject* _uiStack; // 0x70
		::UnityEngine::GameObject* _WorldMapRoot_k__BackingField; // 0x78
		UIInteractiveWorldRaidWorldMapNodes* _worldmapNodes; // 0x80
		::UnityEngine::GameObject* _artLevel; // 0x88
		::UnityEngine::GameObject* _rotatingObjectRoot; // 0x90
		::UnityEngine::Camera* _mainCamera; // 0x98
		InteractiveWorldRaidCameraManager* _interactiveWorldRaidCameraManager; // 0xA0
		Il2CppObject* _worldBossBackupHpDic; // 0xA8
		Il2CppObject* _worldBossClientFakeHPDic; // 0xB0
		::System::Boolean _openingArcadeUI; // 0xB8
		::UnityEngine::Camera* _currentCamera; // 0xC0
		::System::Threading::CancellationTokenSource* _autoSyncCancellationTokenSource; // 0xC8

		::System::Void set_ExecutedProcedureKeys(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_SET_EXECUTEDPROCEDUREKEYS_OFFSET))(arg, nullptr);
		}

		::System::Void ShowLobbyUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_SHOWLOBBYUI_OFFSET))(nullptr);
		}

		::System::Boolean _PrepareAsync_b__56_3(UIBase* arg)
		{
			return ((::System::Boolean(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK__PREPAREASYNC_B__56_3_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyPrefabs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_DESTROYPREFABS_OFFSET))(nullptr);
		}

		::System::Boolean get_UIAnimationLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_GET_UIANIMATIONLOCKED_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_RELEASE_OFFSET))(nullptr);
		}

		WidgetCharacterDialogEmoji* get_DialogWidget()
		{
			return ((WidgetCharacterDialogEmoji*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_GET_DIALOGWIDGET_OFFSET))(nullptr);
		}

		::System::Void LoadCameraManager(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_LOADCAMERAMANAGER_OFFSET))(arg, nullptr);
		}

		::System::Void set_UIAnimationLocked(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_SET_UIANIMATIONLOCKED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* get_WorldMapRoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_GET_WORLDMAPROOT_OFFSET))(nullptr);
		}

		::System::Void SetOtherNodesOff(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_SETOTHERNODESOFF_OFFSET))(arg, nullptr);
		}

		IInteractiveWorldRaidStateProvider* get_StateProvider()
		{
			return ((IInteractiveWorldRaidStateProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_GET_STATEPROVIDER_OFFSET))(nullptr);
		}

		::System::Void ChangeCamera(::UnityEngine::Camera* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_CHANGECAMERA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_SpecificUILocked(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_SET_SPECIFICUILOCKED_OFFSET))(arg, nullptr);
		}

		::System::Boolean _LoadWorldMapLevel_b__59_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK__LOADWORLDMAPLEVEL_B__59_3_OFFSET))(nullptr);
		}

		::System::Void set_StateProvider(IInteractiveWorldRaidStateProvider* arg)
		{
			((::System::Void(*)(IInteractiveWorldRaidStateProvider*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_SET_STATEPROVIDER_OFFSET))(arg, nullptr);
		}

		::System::Void OpenSkillUpgradeUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_OPENSKILLUPGRADEUI_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* AutoSyncLobby(::System::Threading::CancellationToken* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_AUTOSYNCLOBBY_OFFSET))(arg, nullptr);
		}

		::System::Void _DestroyPrefabs_b__83_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK__DESTROYPREFABS_B__83_0_OFFSET))(nullptr);
		}

		::System::Void _LoadWorldMapLevel_b__59_2(UIInteractiveWorldRaidWorldMapNodes* arg)
		{
			((::System::Void(*)(UIInteractiveWorldRaidWorldMapNodes*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK__LOADWORLDMAPLEVEL_B__59_2_OFFSET))(arg, nullptr);
		}

		::System::Void OpenArcadeUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_OPENARCADEUI_OFFSET))(nullptr);
		}

		::System::Void set_DialogWidget(WidgetCharacterDialogEmoji* arg)
		{
			((::System::Void(*)(WidgetCharacterDialogEmoji*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_SET_DIALOGWIDGET_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBossNodes()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_GETBOSSNODES_OFFSET))(nullptr);
		}

		::System::Void GetBackToBridge()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_GETBACKTOBRIDGE_OFFSET))(nullptr);
		}

		::System::Void OpenInteractiveWorldRaidBossEnterUI(::MX::Data::WorldRaidSeasonInfo* arg, ::MX::Data::WorldRaidBossGroupInfo* arg2, BossAppearState* arg3)
		{
			((::System::Void(*)(::MX::Data::WorldRaidSeasonInfo*, ::MX::Data::WorldRaidBossGroupInfo*, BossAppearState*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_OPENINTERACTIVEWORLDRAIDBOSSENTERUI_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Prepare(::MX::Data::EventContentSeasonInfo* arg, ::System::Boolean arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_PREPARE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void _EnterLastActiveCarrierLevel_b__76_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK__ENTERLASTACTIVECARRIERLEVEL_B__76_0_OFFSET))(nullptr);
		}

		::System::Boolean _LoadWorldMapLevel_b__59_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK__LOADWORLDMAPLEVEL_B__59_1_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* SendRequestsAndSync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_SENDREQUESTSANDSYNC_OFFSET))(nullptr);
		}

		::System::Void LeaveCarrierLevel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_LEAVECARRIERLEVEL_OFFSET))(nullptr);
		}

		UIInteractiveWorldRaidBossNode* GetBossNodeByIndex(::System::Int32 arg)
		{
			return ((UIInteractiveWorldRaidBossNode*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_GETBOSSNODEBYINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void PlayStoryStage(::MX::Data::EventContentStageInfo* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentStageInfo*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_PLAYSTORYSTAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitializeWorldBossHpMessageTrigger()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_INITIALIZEWORLDBOSSHPMESSAGETRIGGER_OFFSET))(nullptr);
		}

		::System::Void SwitchBossPhase()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_SWITCHBOSSPHASE_OFFSET))(nullptr);
		}

		::System::Void HideLobbyUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_HIDELOBBYUI_OFFSET))(nullptr);
		}

		::System::Void PlayMainGroundStage(::MX::Data::EventContentStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_PLAYMAINGROUNDSTAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetSelectedNodeOnOthersOff(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_SETSELECTEDNODEONOTHERSOFF_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_INITIALIZE_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PlayEventScenario(::MX::Data::Excel::EventContentScenarioExcel* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::MX::Data::Excel::EventContentScenarioExcel*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_PLAYEVENTSCENARIO_OFFSET))(arg, nullptr);
		}

		::System::Void OpenLobbyUI(::System::Boolean arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_OPENLOBBYUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetSelectedNodeOn(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_SETSELECTEDNODEON_OFFSET))(arg, nullptr);
		}

		::System::Void SetBossNodeActive(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_SETBOSSNODEACTIVE_OFFSET))(arg, arg2, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid* PrepareAsync(::System::Boolean arg, ::System::Action* arg2)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid*(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_PREPAREASYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OpenArcadeUI_b__65_0(UIPopup_InteractiveWorldRaidArcade* arg)
		{
			((::System::Void(*)(UIPopup_InteractiveWorldRaidArcade*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK__OPENARCADEUI_B__65_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenSkillUpgradeUI_b__61_0(UIInteractiveWorldRaidCarrierSkillUpgrade* arg)
		{
			((::System::Void(*)(UIInteractiveWorldRaidCarrierSkillUpgrade*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK__OPENSKILLUPGRADEUI_B__61_0_OFFSET))(arg, nullptr);
		}

		::System::Void CancelWorldBossHpSync()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_CANCELWORLDBOSSHPSYNC_OFFSET))(nullptr);
		}

		Il2CppObject* get_ExecutedProcedureKeys()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_GET_EXECUTEDPROCEDUREKEYS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OpenInformationUI(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_OPENINFORMATIONUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OpenWorldMapInformationUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_OPENWORLDMAPINFORMATIONUI_OFFSET))(arg, nullptr);
		}

		::System::Void _LoadWorldMapLevel_b__59_0(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK__LOADWORLDMAPLEVEL_B__59_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SpecificUILocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_GET_SPECIFICUILOCKED_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* LoadWorldMapLevel(::System::String* str, ::System::String* str2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_LOADWORLDMAPLEVEL_OFFSET))(str, str2, nullptr);
		}

		::MX::Data::EventContentSeasonInfo* get_EventSeasonInfo()
		{
			return ((::MX::Data::EventContentSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_GET_EVENTSEASONINFO_OFFSET))(nullptr);
		}

		::System::Void set_CurrentBGM(::MX::Data::BGMPlayInfo* arg)
		{
			((::System::Void(*)(::MX::Data::BGMPlayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_SET_CURRENTBGM_OFFSET))(arg, nullptr);
		}

		::System::Int64 _AutoSyncLobby_g__GetFakeHp|95_0(::System::Int64 arg, <>c__DisplayClass95_0&* arg2, <>c__DisplayClass95_1&* arg3)
		{
			return ((::System::Int64(*)(::System::Int64, <>c__DisplayClass95_0&*, <>c__DisplayClass95_1&*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK__AUTOSYNCLOBBY_G__GETFAKEHP|95_0_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void _OpenWorldMapUI_b__62_0(UIInteractiveWorldRaid2DUI* arg)
		{
			((::System::Void(*)(UIInteractiveWorldRaid2DUI*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK__OPENWORLDMAPUI_B__62_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_GET_ISPREPARED_OFFSET))(nullptr);
		}

		::System::Void OpenWorldMapUIAfterBattle(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_OPENWORLDMAPUIAFTERBATTLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetWorldBossHpOnEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_SETWORLDBOSSHPONENTER_OFFSET))(nullptr);
		}

		::System::Void InitializeWorldBossHpSync()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_INITIALIZEWORLDBOSSHPSYNC_OFFSET))(nullptr);
		}

		::System::Void EnterCarrierLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_ENTERCARRIERLEVEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::BGMPlayInfo* get_CurrentBGM()
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_GET_CURRENTBGM_OFFSET))(nullptr);
		}

		::System::Void set_IsPrepared(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_SET_ISPREPARED_OFFSET))(arg, nullptr);
		}

		::System::Void OpenCarrierSkillUpgradeInformationUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_OPENCARRIERSKILLUPGRADEINFORMATIONUI_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeCameraToMain(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_CHANGECAMERATOMAIN_OFFSET))(arg, nullptr);
		}

		::System::Void EnterLastActiveCarrierLevel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_ENTERLASTACTIVECARRIERLEVEL_OFFSET))(nullptr);
		}

		::System::Void _GetBackToBridge_b__100_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK__GETBACKTOBRIDGE_B__100_0_OFFSET))(nullptr);
		}

		InteractiveWorldRaidDesignLevelRoot* get_DesignLevelRoot()
		{
			return ((InteractiveWorldRaidDesignLevelRoot*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_GET_DESIGNLEVELROOT_OFFSET))(nullptr);
		}

		::System::Void PrepareContinue(::System::Boolean arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_PREPARECONTINUE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ShowFlavorText(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_SHOWFLAVORTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void set_WorldMapRoot(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_SET_WORLDMAPROOT_OFFSET))(arg, nullptr);
		}

		::System::Void OpenCarrierInformationUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_OPENCARRIERINFORMATIONUI_OFFSET))(arg, nullptr);
		}

		::System::Void OpenWorldMapUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_OPENWORLDMAPUI_OFFSET))(nullptr);
		}

		::MX::Data::InteractiveWorldRaidCarrierMapInfo* GetCurrentCarrierMap()
		{
			return ((::MX::Data::InteractiveWorldRaidCarrierMapInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_GETCURRENTCARRIERMAP_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PlayStoryStageAsync(::MX::Data::EventContentStageInfo* arg, ::System::Action* arg2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::MX::Data::EventContentStageInfo*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_PLAYSTORYSTAGEASYNC_OFFSET))(arg, arg2, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* LoadCarrierLevel(::System::String* str, ::System::String* str2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTASK_LOADCARRIERLEVEL_OFFSET))(str, str2, nullptr);
		}

	};

