#pragma once
#include "../unitysdk.h"

namespace MXField::Core::Save { class FieldSaveSO; }
namespace MXField { class FieldGameManager; }
namespace MXField::Core { class FieldDesignLevelKeeper; }
namespace MXField::Level { class FieldDesignLevelRoot; }
namespace MXField::Core { class FieldInteractionHistory; }
namespace MXField::Quest { class FieldQuestTracker; }
namespace MXField::Core { class FieldContentStageObject; }
namespace MXField::Shared::Data { class FieldSeasonInfo; }
namespace MXField::Core { class FieldPlayerController; }
namespace MXField::FieldAssets { class FieldKeywordInventory; }
namespace MXField::FieldAssets { class FieldEvidenceInventory; }
namespace MXField::FieldCamera { class FieldCameraManager; }
namespace MXField::Core { class FieldLoadingScreenHandler; }
namespace MXField::Tutorial { class FieldTutorialHandler; }
namespace MXField::Core { class FieldSceneLoader; }
namespace MXField::Core { class FieldSoundHandler; }
namespace MXField::Core::Save { class FieldSaveRepository; }
namespace MXField::Core { class FieldDateHandler; }
namespace UnityEngine { class Coroutine; }
namespace FlatData { class FieldConditionType; }
namespace MXField::Shared::Data { class FieldDateInfo; }
namespace MXField::Actions { class CoFieldAction; }
namespace MXField::Shared::Data { class FieldSceneInfo; }

#define MXFIELD_FIELDGAMEMANAGER_SET_CAMERAMANAGER_OFFSET UNITYSDK_OFFSET(0xE67D10)
#define MXFIELD_FIELDGAMEMANAGER_ENCOUNTERQUIT_OFFSET UNITYSDK_OFFSET(0xE67D20)
#define MXFIELD_FIELDGAMEMANAGER_GET_DESIGNLEVELROOT_OFFSET UNITYSDK_OFFSET(0xE67ED0)
#define MXFIELD_FIELDGAMEMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE67EE0)
#define MXFIELD_FIELDGAMEMANAGER_GET_ISPERMANENTSEASON_OFFSET UNITYSDK_OFFSET(0xE67F60)
#define MXFIELD_FIELDGAMEMANAGER_GET_SCENELOADER_OFFSET UNITYSDK_OFFSET(0xE67F80)
#define MXFIELD_FIELDGAMEMANAGER_QUITPROCESS_OPENFIELDLOBBY_OFFSET UNITYSDK_OFFSET(0xE67F90)
#define MXFIELD_FIELDGAMEMANAGER_GET_KEYWORDINVENTORY_OFFSET UNITYSDK_OFFSET(0xE68020)
#define MXFIELD_FIELDGAMEMANAGER_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0xE68030)
#define MXFIELD_FIELDGAMEMANAGER__ENTERFIELD_G__ENTERFIELDINTERNAL|91_0_OFFSET UNITYSDK_OFFSET(0xE68360)
#define MXFIELD_FIELDGAMEMANAGER_GET_TUTORIALHANDLER_OFFSET UNITYSDK_OFFSET(0xE68670)
#define MXFIELD_FIELDGAMEMANAGER_STARTQUIT_OFFSET UNITYSDK_OFFSET(0xE67E70)
#define MXFIELD_FIELDGAMEMANAGER_ENTERNEXTDATE_OFFSET UNITYSDK_OFFSET(0xE68680)
#define MXFIELD_FIELDGAMEMANAGER_SETPHYSICSSETTING_OFFSET UNITYSDK_OFFSET(0xE688E0)
#define MXFIELD_FIELDGAMEMANAGER_SET_PLAYERCONTROLLER_OFFSET UNITYSDK_OFFSET(0xE689E0)
#define MXFIELD_FIELDGAMEMANAGER_QUIT_OFFSET UNITYSDK_OFFSET(0xE689F0)
#define MXFIELD_FIELDGAMEMANAGER__PROCESSDATECHANGED_G__ONFINISHED|90_0_OFFSET UNITYSDK_OFFSET(0xE68B40)
#define MXFIELD_FIELDGAMEMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE68DC0)
#define MXFIELD_FIELDGAMEMANAGER_SETTEMPSAVESO_OFFSET UNITYSDK_OFFSET(0xE69050)
#define MXFIELD_FIELDGAMEMANAGER_SKIPCURRENTQUESTGROUP_OFFSET UNITYSDK_OFFSET(0xE690A0)
#define MXFIELD_FIELDGAMEMANAGER_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xE693B0)
#define MXFIELD_FIELDGAMEMANAGER_ENTERFIELD_OFFSET UNITYSDK_OFFSET(0xE69430)
#define MXFIELD_FIELDGAMEMANAGER_GET_DESIGNLEVELKEEPER_OFFSET UNITYSDK_OFFSET(0xE69610)
#define MXFIELD_FIELDGAMEMANAGER_GET_CURRENTDATE_OFFSET UNITYSDK_OFFSET(0xE68340)
#define MXFIELD_FIELDGAMEMANAGER_GET_CAMERAMANAGER_OFFSET UNITYSDK_OFFSET(0xE69620)
#define MXFIELD_FIELDGAMEMANAGER_SET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0xE69630)
#define MXFIELD_FIELDGAMEMANAGER_COINITIALIZE_OFFSET UNITYSDK_OFFSET(0xE69640)
#define MXFIELD_FIELDGAMEMANAGER_COQUIT_OFFSET UNITYSDK_OFFSET(0xE68AB0)
#define MXFIELD_FIELDGAMEMANAGER_START_OFFSET UNITYSDK_OFFSET(0xE696F0)
#define MXFIELD_FIELDGAMEMANAGER_QUITPROCESS_READY_OFFSET UNITYSDK_OFFSET(0xE69780)
#define MXFIELD_FIELDGAMEMANAGER_NARRATIVEQUIT_OFFSET UNITYSDK_OFFSET(0xE69300)
#define MXFIELD_FIELDGAMEMANAGER_COQUIT_ERROR_OFFSET UNITYSDK_OFFSET(0xE69890)
#define MXFIELD_FIELDGAMEMANAGER_COQUIT_NARRATIVE_OFFSET UNITYSDK_OFFSET(0xE69810)
#define MXFIELD_FIELDGAMEMANAGER_PROCESSDATECHANGED_OFFSET UNITYSDK_OFFSET(0xE687B0)
#define MXFIELD_FIELDGAMEMANAGER_SET_CURRENTDATE_OFFSET UNITYSDK_OFFSET(0xE684C0)
#define MXFIELD_FIELDGAMEMANAGER_GET_EXP_OFFSET UNITYSDK_OFFSET(0xE69960)
#define MXFIELD_FIELDGAMEMANAGER_OPENDEFAULTUIS_OFFSET UNITYSDK_OFFSET(0xE699E0)
#define MXFIELD_FIELDGAMEMANAGER_SETPLAYERCONTROLLER_OFFSET UNITYSDK_OFFSET(0xE69BD0)
#define MXFIELD_FIELDGAMEMANAGER_ENTERSCENEDIRECTLY_OFFSET UNITYSDK_OFFSET(0xE69BE0)
#define MXFIELD_FIELDGAMEMANAGER_QUITPROCESS_CLEARSYSTEM_OFFSET UNITYSDK_OFFSET(0xE6A590)
#define MXFIELD_FIELDGAMEMANAGER_GET_CLIENTONLY_OFFSET UNITYSDK_OFFSET(0xE6A610)
#define MXFIELD_FIELDGAMEMANAGER_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xE69FD0)
#define MXFIELD_FIELDGAMEMANAGER_GET_SAVESO_OFFSET UNITYSDK_OFFSET(0xE6A670)
#define MXFIELD_FIELDGAMEMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xE6A680)
#define MXFIELD_FIELDGAMEMANAGER_ADD_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0xE69570)
#define MXFIELD_FIELDGAMEMANAGER_GET_EVIDENCEINVENTORY_OFFSET UNITYSDK_OFFSET(0xE6A860)
#define MXFIELD_FIELDGAMEMANAGER_LOADHISTORY_OFFSET UNITYSDK_OFFSET(0xE6A870)
#define MXFIELD_FIELDGAMEMANAGER_SET_DESIGNLEVELROOT_OFFSET UNITYSDK_OFFSET(0xE6A930)
#define MXFIELD_FIELDGAMEMANAGER_ENTERNEWGAME_OFFSET UNITYSDK_OFFSET(0xE6A940)
#define MXFIELD_FIELDGAMEMANAGER_SET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0xE6AA90)
#define MXFIELD_FIELDGAMEMANAGER_GET_PLAYERCONTROLLER_OFFSET UNITYSDK_OFFSET(0xE6AAA0)
#define MXFIELD_FIELDGAMEMANAGER_INITQUESTTRACKER_OFFSET UNITYSDK_OFFSET(0xE6AAB0)
#define MXFIELD_FIELDGAMEMANAGER_KEEPDESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0xE6AB40)
#define MXFIELD_FIELDGAMEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE6ABB0)
#define MXFIELD_FIELDGAMEMANAGER_ENTERFROMSCENARIO_OFFSET UNITYSDK_OFFSET(0xE6AE60)
#define MXFIELD_FIELDGAMEMANAGER_GET_QUESTTRACKER_OFFSET UNITYSDK_OFFSET(0xE6B090)
#define MXFIELD_FIELDGAMEMANAGER_GET_CURRENTSCENE_OFFSET UNITYSDK_OFFSET(0xE6B0A0)
#define MXFIELD_FIELDGAMEMANAGER__ENTERSCENEDIRECTLY_G__GETDAILYQUESTS|89_0_OFFSET UNITYSDK_OFFSET(0xE6A080)
#define MXFIELD_FIELDGAMEMANAGER_REMOVE_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0xE6B120)
#define MXFIELD_FIELDGAMEMANAGER_GET_CONTENTSTAGEOBJECT_OFFSET UNITYSDK_OFFSET(0xE6B1C0)
#define MXFIELD_FIELDGAMEMANAGER_GET_INTERACTIONHISTORY_OFFSET UNITYSDK_OFFSET(0xE6B1D0)
#define MXFIELD_FIELDGAMEMANAGER_GET_LOADINGSCREENHANDLER_OFFSET UNITYSDK_OFFSET(0xE6B1E0)
#define MXFIELD_FIELDGAMEMANAGER_ERRORQUIT_OFFSET UNITYSDK_OFFSET(0xE6B1F0)
#define MXFIELD_FIELDGAMEMANAGER_COQUIT_ENCOUNTER_OFFSET UNITYSDK_OFFSET(0xE67DE0)
#define MXFIELD_FIELDGAMEMANAGER_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0xE6B2D0)
#define MXFIELD_FIELDGAMEMANAGER_CONTINUEGAME_OFFSET UNITYSDK_OFFSET(0xE684F0)
#define MXFIELD_FIELDGAMEMANAGER_GET_SOUNDHANDLER_OFFSET UNITYSDK_OFFSET(0xE6B2E0)
#define MXFIELD_FIELDGAMEMANAGER_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0xE6B2F0)

namespace MXField
{
	inline static constexpr unsigned int FieldGameManager_TypeDefinitionIndex = 10515;

	class FieldGameManager : public Il2CppObject
	{
	public:
		::System::Boolean isStandAlone; // 0x18
		::MXField::Core::Save::FieldSaveSO* saveSO; // 0x20
		::MXField::FieldGameManager* Instance; // 0x0
		::MXField::Core::FieldDesignLevelKeeper* _DesignLevelKeeper_k__BackingField; // 0x28
		::MXField::Level::FieldDesignLevelRoot* _DesignLevelRoot_k__BackingField; // 0x30
		::MXField::Core::FieldInteractionHistory* _InteractionHistory_k__BackingField; // 0x38
		::MXField::Quest::FieldQuestTracker* _QuestTracker_k__BackingField; // 0x40
		::MXField::Core::FieldContentStageObject* _ContentStageObject_k__BackingField; // 0x48
		::MXField::Shared::Data::FieldSeasonInfo* _SeasonInfo_k__BackingField; // 0x50
		::MXField::Core::FieldPlayerController* _PlayerController_k__BackingField; // 0x58
		::MXField::FieldAssets::FieldKeywordInventory* _KeywordInventory_k__BackingField; // 0x60
		::MXField::FieldAssets::FieldEvidenceInventory* _EvidenceInventory_k__BackingField; // 0x68
		::MXField::FieldCamera::FieldCameraManager* _CameraManager_k__BackingField; // 0x70
		::MXField::Core::FieldLoadingScreenHandler* _LoadingScreenHandler_k__BackingField; // 0x78
		::MXField::Tutorial::FieldTutorialHandler* _TutorialHandler_k__BackingField; // 0x80
		::MXField::Core::FieldSceneLoader* _SceneLoader_k__BackingField; // 0x88
		::MXField::Core::FieldSoundHandler* _SoundHandler_k__BackingField; // 0x90
		::System::Boolean _Initialized_k__BackingField; // 0x98
		::MXField::Core::Save::FieldSaveRepository* _saveRepository; // 0xA0
		::MXField::Core::FieldDateHandler* dateHandler; // 0xA8
		::System::Action* OnInitialized; // 0xB0
		::UnityEngine::Coroutine* quitCoroutine; // 0xB8

		::System::Void set_CameraManager(::MXField::FieldCamera::FieldCameraManager* arg)
		{
			((::System::Void(*)(::MXField::FieldCamera::FieldCameraManager*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_SET_CAMERAMANAGER_OFFSET))(arg, nullptr);
		}

		::System::Void EncounterQuit(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_ENCOUNTERQUIT_OFFSET))(arg, nullptr);
		}

		::MXField::Level::FieldDesignLevelRoot* get_DesignLevelRoot()
		{
			return ((::MXField::Level::FieldDesignLevelRoot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_GET_DESIGNLEVELROOT_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPermanentSeason()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_GET_ISPERMANENTSEASON_OFFSET))(nullptr);
		}

		::MXField::Core::FieldSceneLoader* get_SceneLoader()
		{
			return ((::MXField::Core::FieldSceneLoader*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_GET_SCENELOADER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* QuitProcess_OpenFieldLobby()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_QUITPROCESS_OPENFIELDLOBBY_OFFSET))(nullptr);
		}

		::MXField::FieldAssets::FieldKeywordInventory* get_KeywordInventory()
		{
			return ((::MXField::FieldAssets::FieldKeywordInventory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_GET_KEYWORDINVENTORY_OFFSET))(nullptr);
		}

		::System::Boolean IsSatisfied(::FlatData::FieldConditionType* arg, ::System::Int64 arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			return ((::System::Boolean(*)(::FlatData::FieldConditionType*, ::System::Int64, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_ISSATISFIED_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void _EnterField_g__EnterFieldInternal|91_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER__ENTERFIELD_G__ENTERFIELDINTERNAL|91_0_OFFSET))(nullptr);
		}

		::MXField::Tutorial::FieldTutorialHandler* get_TutorialHandler()
		{
			return ((::MXField::Tutorial::FieldTutorialHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_GET_TUTORIALHANDLER_OFFSET))(nullptr);
		}

		::System::Void StartQuit(::System::Collections::IEnumerator* arg)
		{
			((::System::Void(*)(::System::Collections::IEnumerator*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_STARTQUIT_OFFSET))(arg, nullptr);
		}

		::System::Void EnterNextDate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_ENTERNEXTDATE_OFFSET))(nullptr);
		}

		::System::Void SetPhysicsSetting(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_SETPHYSICSSETTING_OFFSET))(arg, nullptr);
		}

		::System::Void set_PlayerController(::MXField::Core::FieldPlayerController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldPlayerController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_SET_PLAYERCONTROLLER_OFFSET))(arg, nullptr);
		}

		::System::Void Quit(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_QUIT_OFFSET))(arg, nullptr);
		}

		::System::Void _ProcessDateChanged_g__OnFinished|90_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER__PROCESSDATECHANGED_G__ONFINISHED|90_0_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void SetTempSaveSO()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_SETTEMPSAVESO_OFFSET))(nullptr);
		}

		::System::Void SkipCurrentQuestGroup(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_SKIPCURRENTQUESTGROUP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Level()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void EnterField(::MXField::Core::Save::FieldSaveRepository* arg, ::MXField::Core::Save::FieldSaveSO* arg2)
		{
			((::System::Void(*)(::MXField::Core::Save::FieldSaveRepository*, ::MXField::Core::Save::FieldSaveSO*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_ENTERFIELD_OFFSET))(arg, arg2, nullptr);
		}

		::MXField::Core::FieldDesignLevelKeeper* get_DesignLevelKeeper()
		{
			return ((::MXField::Core::FieldDesignLevelKeeper*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_GET_DESIGNLEVELKEEPER_OFFSET))(nullptr);
		}

		::MXField::Shared::Data::FieldDateInfo* get_CurrentDate()
		{
			return ((::MXField::Shared::Data::FieldDateInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_GET_CURRENTDATE_OFFSET))(nullptr);
		}

		::MXField::FieldCamera::FieldCameraManager* get_CameraManager()
		{
			return ((::MXField::FieldCamera::FieldCameraManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_GET_CAMERAMANAGER_OFFSET))(nullptr);
		}

		::System::Void set_Initialized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_SET_INITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoInitialize()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_COINITIALIZE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoQuit(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_COQUIT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Start()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_START_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* QuitProcess_Ready()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_QUITPROCESS_READY_OFFSET))(nullptr);
		}

		::System::Void NarrativeQuit(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_NARRATIVEQUIT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoQuit_Error(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_COQUIT_ERROR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoQuit_Narrative(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_COQUIT_NARRATIVE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessDateChanged(::MXField::Shared::Data::FieldDateInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldDateInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_PROCESSDATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void set_CurrentDate(::MXField::Shared::Data::FieldDateInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldDateInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_SET_CURRENTDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Exp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_GET_EXP_OFFSET))(nullptr);
		}

		::System::Void OpenDefaultUIs(::MXField::Actions::CoFieldAction* arg)
		{
			((::System::Void(*)(::MXField::Actions::CoFieldAction*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_OPENDEFAULTUIS_OFFSET))(arg, nullptr);
		}

		::System::Void SetPlayerController(::MXField::Core::FieldPlayerController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldPlayerController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_SETPLAYERCONTROLLER_OFFSET))(arg, nullptr);
		}

		::System::Void EnterSceneDirectly(::MXField::Shared::Data::FieldSceneInfo* arg, ::System::Int64 arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldSceneInfo*, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_ENTERSCENEDIRECTLY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* QuitProcess_ClearSystem()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_QUITPROCESS_CLEARSYSTEM_OFFSET))(nullptr);
		}

		::System::Boolean get_ClientOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_GET_CLIENTONLY_OFFSET))(nullptr);
		}

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::MXField::Core::Save::FieldSaveSO* get_SaveSO()
		{
			return ((::MXField::Core::Save::FieldSaveSO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_GET_SAVESO_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void add_OnInitialized(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_ADD_ONINITIALIZED_OFFSET))(arg, nullptr);
		}

		::MXField::FieldAssets::FieldEvidenceInventory* get_EvidenceInventory()
		{
			return ((::MXField::FieldAssets::FieldEvidenceInventory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_GET_EVIDENCEINVENTORY_OFFSET))(nullptr);
		}

		::System::Void LoadHistory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_LOADHISTORY_OFFSET))(nullptr);
		}

		::System::Void set_DesignLevelRoot(::MXField::Level::FieldDesignLevelRoot* arg)
		{
			((::System::Void(*)(::MXField::Level::FieldDesignLevelRoot*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_SET_DESIGNLEVELROOT_OFFSET))(arg, nullptr);
		}

		::System::Void EnterNewGame(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_ENTERNEWGAME_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonInfo(::MXField::Shared::Data::FieldSeasonInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_SET_SEASONINFO_OFFSET))(arg, nullptr);
		}

		::MXField::Core::FieldPlayerController* get_PlayerController()
		{
			return ((::MXField::Core::FieldPlayerController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_GET_PLAYERCONTROLLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* InitQuestTracker()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_INITQUESTTRACKER_OFFSET))(nullptr);
		}

		::System::Void KeepDesignLevel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_KEEPDESIGNLEVEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void EnterFromScenario(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_ENTERFROMSCENARIO_OFFSET))(arg, nullptr);
		}

		::MXField::Quest::FieldQuestTracker* get_QuestTracker()
		{
			return ((::MXField::Quest::FieldQuestTracker*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_GET_QUESTTRACKER_OFFSET))(nullptr);
		}

		::MXField::Shared::Data::FieldSceneInfo* get_CurrentScene()
		{
			return ((::MXField::Shared::Data::FieldSceneInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_GET_CURRENTSCENE_OFFSET))(nullptr);
		}

		Il2CppObject* _EnterSceneDirectly_g__GetDailyQuests|89_0(<>c__DisplayClass89_0&* arg)
		{
			return ((Il2CppObject*(*)(<>c__DisplayClass89_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER__ENTERSCENEDIRECTLY_G__GETDAILYQUESTS|89_0_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnInitialized(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_REMOVE_ONINITIALIZED_OFFSET))(arg, nullptr);
		}

		::MXField::Core::FieldContentStageObject* get_ContentStageObject()
		{
			return ((::MXField::Core::FieldContentStageObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_GET_CONTENTSTAGEOBJECT_OFFSET))(nullptr);
		}

		::MXField::Core::FieldInteractionHistory* get_InteractionHistory()
		{
			return ((::MXField::Core::FieldInteractionHistory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_GET_INTERACTIONHISTORY_OFFSET))(nullptr);
		}

		::MXField::Core::FieldLoadingScreenHandler* get_LoadingScreenHandler()
		{
			return ((::MXField::Core::FieldLoadingScreenHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_GET_LOADINGSCREENHANDLER_OFFSET))(nullptr);
		}

		::System::Void ErrorQuit(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_ERRORQUIT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoQuit_Encounter(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_COQUIT_ENCOUNTER_OFFSET))(arg, nullptr);
		}

		::MXField::Shared::Data::FieldSeasonInfo* get_SeasonInfo()
		{
			return ((::MXField::Shared::Data::FieldSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Void ContinueGame()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_CONTINUEGAME_OFFSET))(nullptr);
		}

		::MXField::Core::FieldSoundHandler* get_SoundHandler()
		{
			return ((::MXField::Core::FieldSoundHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_GET_SOUNDHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean get_Initialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDGAMEMANAGER_GET_INITIALIZED_OFFSET))(nullptr);
		}

	};
}

