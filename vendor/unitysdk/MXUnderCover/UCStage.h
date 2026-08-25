#pragma once
#include "../unitysdk.h"

namespace UnityEngine::SceneManagement { class Scene; }
namespace MXUnderCover { class UCGameResource; }
namespace MXUnderCover { class UCStageModel; }
namespace MXUnderCover { class UCInventoryModel; }
namespace UnityEngine { class MonoBehaviour; }
namespace MXUnderCover { class UCPlayer; }
namespace MXUnderCover { class UCRuntimeCache; }
class States;
namespace MXUnderCover { class UCInputBlocker; }
namespace MXUnderCover { class UCStageTimeHandler; }
namespace MXUnderCover { class UCPlayStateHandler; }
namespace MXUnderCover { class UCRuntimeObjectHandler; }
class CoroutineAsyncOperation;
namespace MXUnderCover { class UCStageSetting; }
namespace MX::Data { class UCStageTableInfo; }
namespace MXUnderCover { class UCPlayerModel; }
namespace MXUnderCover { class UCSectionSetting; }
namespace MXUnderCover { class UCEntity; }
namespace MXUnderCover { class UCCollisionPlayerActionButtonTrigger; }
namespace MXUnderCover { class UCSectionVisual; }
namespace MXUnderCover { class UCSectionModel; }

#define MXUNDERCOVER_UCSTAGE_SET_ONCLEARCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xDB4880)
#define MXUNDERCOVER_UCSTAGE_GET_ONHIDEDIALOGEMOJIALL_OFFSET UNITYSDK_OFFSET(0xDB48A0)
#define MXUNDERCOVER_UCSTAGE_INITASYNC_OFFSET UNITYSDK_OFFSET(0xDB0FA0)
#define MXUNDERCOVER_UCSTAGE_CO_LOADPLAYERVISUAL_OFFSET UNITYSDK_OFFSET(0xDB4930)
#define MXUNDERCOVER_UCSTAGE_CLEARSTAGE_OFFSET UNITYSDK_OFFSET(0xDB2960)
#define MXUNDERCOVER_UCSTAGE_SET_CURRENTPLAYER_OFFSET UNITYSDK_OFFSET(0xDB49C0)
#define MXUNDERCOVER_UCSTAGE_GETPLAYERVISUAL_OFFSET UNITYSDK_OFFSET(0xDB49D0)
#define MXUNDERCOVER_UCSTAGE_ENTERSECTIONASYNC_OFFSET UNITYSDK_OFFSET(0xDB4A20)
#define MXUNDERCOVER_UCSTAGE_ADDACTIONBUTTONTRIGGER_OFFSET UNITYSDK_OFFSET(0xDB4B60)
#define MXUNDERCOVER_UCSTAGE_GET_COROUTINEHANDLER_OFFSET UNITYSDK_OFFSET(0xDB4EF0)
#define MXUNDERCOVER_UCSTAGE_SET_PLAYSTATEHANDLER_OFFSET UNITYSDK_OFFSET(0xDB4F00)
#define MXUNDERCOVER_UCSTAGE_SWITCHPLAYER_OFFSET UNITYSDK_OFFSET(0xDB4F20)
#define MXUNDERCOVER_UCSTAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB0C70)
#define MXUNDERCOVER_UCSTAGE_SET_USERINPUTBLOCKER_OFFSET UNITYSDK_OFFSET(0xDB5A50)
#define MXUNDERCOVER_UCSTAGE_CO_POSTINIT_OFFSET UNITYSDK_OFFSET(0xDB5A70)
#define MXUNDERCOVER_UCSTAGE_POSTENTERSECTION_OFFSET UNITYSDK_OFFSET(0xDB5B00)
#define MXUNDERCOVER_UCSTAGE_SET_ONPLAYCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xDB5C50)
#define MXUNDERCOVER_UCSTAGE_SET_SECTIONVISUALS_OFFSET UNITYSDK_OFFSET(0xDB5C70)
#define MXUNDERCOVER_UCSTAGE_GET_ENTERANCESCENE_OFFSET UNITYSDK_OFFSET(0xDB5C80)
#define MXUNDERCOVER_UCSTAGE_RESETALLINPUTBLOCK_OFFSET UNITYSDK_OFFSET(0xDB29F0)
#define MXUNDERCOVER_UCSTAGE_GET_PLAYSTATEHANDLER_OFFSET UNITYSDK_OFFSET(0xDB5C90)
#define MXUNDERCOVER_UCSTAGE_GET_MESSENGER_OFFSET UNITYSDK_OFFSET(0xDB5CA0)
#define MXUNDERCOVER_UCSTAGE_GETSECTIONVISUAL_OFFSET UNITYSDK_OFFSET(0xDB5CB0)
#define MXUNDERCOVER_UCSTAGE_CLEANUP_OFFSET UNITYSDK_OFFSET(0xDB2970)
#define MXUNDERCOVER_UCSTAGE_SET_ISDISABLEDACTIONBUTTONTRIGGER_OFFSET UNITYSDK_OFFSET(0xDB5D00)
#define MXUNDERCOVER_UCSTAGE_SET_RUNTIMEOBJECTHANDLER_OFFSET UNITYSDK_OFFSET(0xDB5D10)
#define MXUNDERCOVER_UCSTAGE_GET_USERINPUTBLOCKER_OFFSET UNITYSDK_OFFSET(0xDB5D30)
#define MXUNDERCOVER_UCSTAGE_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0xDB0450)
#define MXUNDERCOVER_UCSTAGE_CO_UNLOADALL_OFFSET UNITYSDK_OFFSET(0xDB5D50)
#define MXUNDERCOVER_UCSTAGE_GET_ONCLEARCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xDB5DE0)
#define MXUNDERCOVER_UCSTAGE_CO_UNLOADALLSECTION_OFFSET UNITYSDK_OFFSET(0xDB5DF0)
#define MXUNDERCOVER_UCSTAGE__ENTERSECTIONASYNCFROMACTION_G__CO_ENTERSECTIONFROMACTION|124_0_OFFSET UNITYSDK_OFFSET(0xDB5E80)
#define MXUNDERCOVER_UCSTAGE_REMOVEUNUSEDPLAYER_OFFSET UNITYSDK_OFFSET(0xDB5F40)
#define MXUNDERCOVER_UCSTAGE_SET_GAMERESOURCE_OFFSET UNITYSDK_OFFSET(0xDB6190)
#define MXUNDERCOVER_UCSTAGE_SET_DIALOGUEINPUTBLOCKER_OFFSET UNITYSDK_OFFSET(0xDB61A0)
#define MXUNDERCOVER_UCSTAGE_GET_RUNTIMEOBJECTHANDLER_OFFSET UNITYSDK_OFFSET(0xDB61C0)
#define MXUNDERCOVER_UCSTAGE_GET_PLAYERVISUALS_OFFSET UNITYSDK_OFFSET(0xDB61D0)
#define MXUNDERCOVER_UCSTAGE_GET_STAGEMODEL_OFFSET UNITYSDK_OFFSET(0xDB61E0)
#define MXUNDERCOVER_UCSTAGE_GET_ISDISABLEDACTIONBUTTONTRIGGER_OFFSET UNITYSDK_OFFSET(0xDB61F0)
#define MXUNDERCOVER_UCSTAGE_SET_PLAYERVISUALS_OFFSET UNITYSDK_OFFSET(0xDB6200)
#define MXUNDERCOVER_UCSTAGE_SETCURRENTPLAYER_OFFSET UNITYSDK_OFFSET(0xDB52E0)
#define MXUNDERCOVER_UCSTAGE_SET_MESSENGER_OFFSET UNITYSDK_OFFSET(0xDB6210)
#define MXUNDERCOVER_UCSTAGE_GET_SECTIONMODELS_OFFSET UNITYSDK_OFFSET(0xDB6220)
#define MXUNDERCOVER_UCSTAGE_UNLOADALLASYNC_OFFSET UNITYSDK_OFFSET(0xDB1610)
#define MXUNDERCOVER_UCSTAGE_GET_ACTIONCOROUTINEHANDLER_OFFSET UNITYSDK_OFFSET(0xDB6230)
#define MXUNDERCOVER_UCSTAGE_GET_STATE_OFFSET UNITYSDK_OFFSET(0xDB6240)
#define MXUNDERCOVER_UCSTAGE_GET_TIMEHANDLER_OFFSET UNITYSDK_OFFSET(0xDB6250)
#define MXUNDERCOVER_UCSTAGE_PAUSE_OFFSET UNITYSDK_OFFSET(0xDB2B50)
#define MXUNDERCOVER_UCSTAGE_GAMEOVER_OFFSET UNITYSDK_OFFSET(0xDB36A0)
#define MXUNDERCOVER_UCSTAGE_SET_ONSTOPCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xDB6450)
#define MXUNDERCOVER_UCSTAGE_STARTSWITCHPLAYER_OFFSET UNITYSDK_OFFSET(0xDB6470)
#define MXUNDERCOVER_UCSTAGE_CO_LOADASYNCSAVEPOINT_OFFSET UNITYSDK_OFFSET(0xDB6570)
#define MXUNDERCOVER_UCSTAGE_GET_ONSTOPCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xDB6600)
#define MXUNDERCOVER_UCSTAGE_SET_TIMEHANDLER_OFFSET UNITYSDK_OFFSET(0xDB6610)
#define MXUNDERCOVER_UCSTAGE_SET_ACTIONBUTTONTRIGGERPERPLAYER_OFFSET UNITYSDK_OFFSET(0xDB6630)
#define MXUNDERCOVER_UCSTAGE_SET_ONSHOWDIALOGEMOJI_OFFSET UNITYSDK_OFFSET(0xDB6640)
#define MXUNDERCOVER_UCSTAGE_POSTINITASYNC_OFFSET UNITYSDK_OFFSET(0xDB1120)
#define MXUNDERCOVER_UCSTAGE_GETCURRENTACTIONBUTTONTRIGGER_OFFSET UNITYSDK_OFFSET(0xDB6660)
#define MXUNDERCOVER_UCSTAGE_CREATEINVENTORYMODEL_OFFSET UNITYSDK_OFFSET(0xDB6710)
#define MXUNDERCOVER_UCSTAGE_CLEANUPPOST_OFFSET UNITYSDK_OFFSET(0xDB29C0)
#define MXUNDERCOVER_UCSTAGE_SET_ONHIDEDIALOGEMOJIALL_OFFSET UNITYSDK_OFFSET(0xDB6780)
#define MXUNDERCOVER_UCSTAGE_SET_SAVETRIGGERSPLAYERLOCATE_OFFSET UNITYSDK_OFFSET(0xDB67A0)
#define MXUNDERCOVER_UCSTAGE_GET_CURRENTPLAYER_OFFSET UNITYSDK_OFFSET(0xDB67C0)
#define MXUNDERCOVER_UCSTAGE_REMOVEACTIONBUTTONTRIGGER_OFFSET UNITYSDK_OFFSET(0xDB67D0)
#define MXUNDERCOVER_UCSTAGE_GET_ONSHOWDIALOGEMOJI_OFFSET UNITYSDK_OFFSET(0xDB6A40)
#define MXUNDERCOVER_UCSTAGE__POSTENTERSECTION_G__CO_POSTENTERSECTION|126_0_OFFSET UNITYSDK_OFFSET(0xDB5BE0)
#define MXUNDERCOVER_UCSTAGE_SET_COROUTINEHANDLER_OFFSET UNITYSDK_OFFSET(0xDB6A70)
#define MXUNDERCOVER_UCSTAGE_LOADASYNCSAVEPOINT_OFFSET UNITYSDK_OFFSET(0xDB6A80)
#define MXUNDERCOVER_UCSTAGE_GET_INVENTORYMODEL_OFFSET UNITYSDK_OFFSET(0xDB6B60)
#define MXUNDERCOVER_UCSTAGE_SET_STAGEMODEL_OFFSET UNITYSDK_OFFSET(0xDB6B70)
#define MXUNDERCOVER_UCSTAGE_SET_STATE_OFFSET UNITYSDK_OFFSET(0xDB6B80)
#define MXUNDERCOVER_UCSTAGE_GET_GAMERESOURCE_OFFSET UNITYSDK_OFFSET(0xDB6B90)
#define MXUNDERCOVER_UCSTAGE_CO_UNLOADUNUSEDSECTION_OFFSET UNITYSDK_OFFSET(0xDB6BA0)
#define MXUNDERCOVER_UCSTAGE_CO_ONPLAYERDETECTED_OFFSET UNITYSDK_OFFSET(0xDB6C30)
#define MXUNDERCOVER_UCSTAGE_CREATESECTIONMODEL_OFFSET UNITYSDK_OFFSET(0xDB6D00)
#define MXUNDERCOVER_UCSTAGE_SAVE_OFFSET UNITYSDK_OFFSET(0xDB6F60)
#define MXUNDERCOVER_UCSTAGE_GET_CACHE_OFFSET UNITYSDK_OFFSET(0xDB75A0)
#define MXUNDERCOVER_UCSTAGE_ONCLICKACTIONBUTTON_OFFSET UNITYSDK_OFFSET(0xDB75B0)
#define MXUNDERCOVER_UCSTAGE_SET_ACTIONCOROUTINEHANDLER_OFFSET UNITYSDK_OFFSET(0xDB7760)
#define MXUNDERCOVER_UCSTAGE_SET_PLAYERMODELS_OFFSET UNITYSDK_OFFSET(0xDB7770)
#define MXUNDERCOVER_UCSTAGE_GET_DIALOGUEINPUTBLOCKER_OFFSET UNITYSDK_OFFSET(0xDB7780)
#define MXUNDERCOVER_UCSTAGE_CLEARACTIONBUTTONTRIGGER_OFFSET UNITYSDK_OFFSET(0xDB7790)
#define MXUNDERCOVER_UCSTAGE_ONPLAYERDETECTED_OFFSET UNITYSDK_OFFSET(0xDB78E0)
#define MXUNDERCOVER_UCSTAGE_GETPLAYERVISUALS_OFFSET UNITYSDK_OFFSET(0xDB79A0)
#define MXUNDERCOVER_UCSTAGE_SETACTIVEVISUALALL_OFFSET UNITYSDK_OFFSET(0xDB30F0)
#define MXUNDERCOVER_UCSTAGE__SWITCHPLAYER_B__140_1_OFFSET UNITYSDK_OFFSET(0xDB79F0)
#define MXUNDERCOVER_UCSTAGE_LOAD_OFFSET UNITYSDK_OFFSET(0xDB7A50)
#define MXUNDERCOVER_UCSTAGE_GET_ONPLAYCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xDB7D60)
#define MXUNDERCOVER_UCSTAGE_SET_ENTERANCESCENE_OFFSET UNITYSDK_OFFSET(0xDB7D70)
#define MXUNDERCOVER_UCSTAGE_GET_PLAYERMODELS_OFFSET UNITYSDK_OFFSET(0xDB7D80)
#define MXUNDERCOVER_UCSTAGE_GET_SAVETRIGGERSPLAYERLOCATE_OFFSET UNITYSDK_OFFSET(0xDB7D90)
#define MXUNDERCOVER_UCSTAGE__ENTERSECTIONASYNC_G__CO_ENTERSECTION|125_0_OFFSET UNITYSDK_OFFSET(0xDB4AB0)
#define MXUNDERCOVER_UCSTAGE_GET_SECTIONVISUALS_OFFSET UNITYSDK_OFFSET(0xDB7DC0)
#define MXUNDERCOVER_UCSTAGE_GET_ONHIDEDIALOGEMOJI_OFFSET UNITYSDK_OFFSET(0xDB7DD0)
#define MXUNDERCOVER_UCSTAGE_GET_ACTIONBUTTONTRIGGERPERPLAYER_OFFSET UNITYSDK_OFFSET(0xDB7DE0)
#define MXUNDERCOVER_UCSTAGE_CO_SWITCHPLAYER_OFFSET UNITYSDK_OFFSET(0xDB6500)
#define MXUNDERCOVER_UCSTAGE_ENTERSECTIONASYNCFROMACTION_OFFSET UNITYSDK_OFFSET(0xDB7E10)
#define MXUNDERCOVER_UCSTAGE_SET_ONHIDEDIALOGEMOJI_OFFSET UNITYSDK_OFFSET(0xDB7E90)
#define MXUNDERCOVER_UCSTAGE_SET_CACHE_OFFSET UNITYSDK_OFFSET(0xDB7EB0)
#define MXUNDERCOVER_UCSTAGE_CREATEPLAYERMODEL_OFFSET UNITYSDK_OFFSET(0xDB7EC0)
#define MXUNDERCOVER_UCSTAGE_CO_LOADDEFAULTSECTION_OFFSET UNITYSDK_OFFSET(0xDB7FC0)
#define MXUNDERCOVER_UCSTAGE_SET_INVENTORYMODEL_OFFSET UNITYSDK_OFFSET(0xDB8060)
#define MXUNDERCOVER_UCSTAGE_UNLOADPLAYERVISUAL_OFFSET UNITYSDK_OFFSET(0xDB8070)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCStage_TypeDefinitionIndex = 9996;

	class UCStage : public Il2CppObject
	{
	public:
		::UnityEngine::SceneManagement::Scene* _EnteranceScene_k__BackingField; // 0x10
		::MXUnderCover::UCGameResource* _GameResource_k__BackingField; // 0x18
		::MXUnderCover::UCStageModel* _StageModel_k__BackingField; // 0x20
		Il2CppObject* _PlayerModels_k__BackingField; // 0x28
		Il2CppObject* _SectionModels_k__BackingField; // 0x30
		::MXUnderCover::UCInventoryModel* _InventoryModel_k__BackingField; // 0x38
		Il2CppObject* _PlayerVisuals_k__BackingField; // 0x40
		Il2CppObject* _SectionVisuals_k__BackingField; // 0x48
		::UnityEngine::MonoBehaviour* _CoroutineHandler_k__BackingField; // 0x50
		::UnityEngine::MonoBehaviour* _ActionCoroutineHandler_k__BackingField; // 0x58
		::MXUnderCover::UCPlayer* _CurrentPlayer_k__BackingField; // 0x60
		::MXUnderCover::UCRuntimeCache* _Cache_k__BackingField; // 0x68
		Il2CppObject* _Messenger_k__BackingField; // 0x70
		States* _State_k__BackingField; // 0x78
		Il2CppObject* _ActionButtonTriggerPerPlayer_k__BackingField; // 0x80
		::MXUnderCover::UCInputBlocker* _UserInputBlocker_k__BackingField; // 0x88
		::MXUnderCover::UCInputBlocker* _DialogueInputBlocker_k__BackingField; // 0x90
		::MXUnderCover::UCStageTimeHandler* _TimeHandler_k__BackingField; // 0x98
		::MXUnderCover::UCPlayStateHandler* _PlayStateHandler_k__BackingField; // 0xA0
		Il2CppObject* _SaveTriggersPlayerLocate_k__BackingField; // 0xA8
		::MXUnderCover::UCRuntimeObjectHandler* _RuntimeObjectHandler_k__BackingField; // 0xB0
		::System::Boolean _IsDisabledActionButtonTrigger_k__BackingField; // 0xB8
		Il2CppObject* _OnShowDialogEmoji_k__BackingField; // 0xC0
		Il2CppObject* _OnHideDialogEmoji_k__BackingField; // 0xC8
		Il2CppObject* _OnHideDialogEmojiAll_k__BackingField; // 0xD0
		Il2CppObject* _OnPlayCountdown_k__BackingField; // 0xD8
		::System::Action* _OnStopCountdown_k__BackingField; // 0xE0
		::System::Action* _OnClearCountdown_k__BackingField; // 0xE8

		::System::Void set_OnClearCountdown(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_ONCLEARCOUNTDOWN_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_OnHideDialogEmojiAll()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_ONHIDEDIALOGEMOJIALL_OFFSET))(nullptr);
		}

		CoroutineAsyncOperation* InitAsync(::MXUnderCover::UCStageSetting* arg, ::MX::Data::UCStageTableInfo* arg2, ::UnityEngine::SceneManagement::Scene* arg3, ::MXUnderCover::UCGameResource* arg4, ::UnityEngine::MonoBehaviour* arg5, ::UnityEngine::MonoBehaviour* arg6)
		{
			return ((CoroutineAsyncOperation*(*)(::MXUnderCover::UCStageSetting*, ::MX::Data::UCStageTableInfo*, ::UnityEngine::SceneManagement::Scene*, ::MXUnderCover::UCGameResource*, ::UnityEngine::MonoBehaviour*, ::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_INITASYNC_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Collections::IEnumerator* co_LoadPlayerVisual()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_CO_LOADPLAYERVISUAL_OFFSET))(nullptr);
		}

		::System::Void ClearStage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_CLEARSTAGE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentPlayer(::MXUnderCover::UCPlayer* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_CURRENTPLAYER_OFFSET))(arg, nullptr);
		}

		::MXUnderCover::UCPlayer* GetPlayerVisual(::MXUnderCover::UCPlayerModel* arg)
		{
			return ((::MXUnderCover::UCPlayer*(*)(::MXUnderCover::UCPlayerModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GETPLAYERVISUAL_OFFSET))(arg, nullptr);
		}

		CoroutineAsyncOperation* EnterSectionAsync(::MXUnderCover::UCSectionSetting* arg, ::MXUnderCover::UCEntity* arg2, ::System::Boolean arg3)
		{
			return ((CoroutineAsyncOperation*(*)(::MXUnderCover::UCSectionSetting*, ::MXUnderCover::UCEntity*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_ENTERSECTIONASYNC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void AddActionButtonTrigger(::MXUnderCover::UCPlayer* arg, ::MXUnderCover::UCCollisionPlayerActionButtonTrigger* arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCPlayer*, ::MXUnderCover::UCCollisionPlayerActionButtonTrigger*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_ADDACTIONBUTTONTRIGGER_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::MonoBehaviour* get_CoroutineHandler()
		{
			return ((::UnityEngine::MonoBehaviour*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_COROUTINEHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_PlayStateHandler(::MXUnderCover::UCPlayStateHandler* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCPlayStateHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_PLAYSTATEHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Boolean SwitchPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SWITCHPLAYER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_UserInputBlocker(::MXUnderCover::UCInputBlocker* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCInputBlocker*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_USERINPUTBLOCKER_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_PostInit()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_CO_POSTINIT_OFFSET))(nullptr);
		}

		CoroutineAsyncOperation* PostEnterSection()
		{
			return ((CoroutineAsyncOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_POSTENTERSECTION_OFFSET))(nullptr);
		}

		::System::Void set_OnPlayCountdown(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_ONPLAYCOUNTDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void set_SectionVisuals(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_SECTIONVISUALS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::SceneManagement::Scene* get_EnteranceScene()
		{
			return ((::UnityEngine::SceneManagement::Scene*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_ENTERANCESCENE_OFFSET))(nullptr);
		}

		::System::Void ResetAllInputBlock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_RESETALLINPUTBLOCK_OFFSET))(nullptr);
		}

		::MXUnderCover::UCPlayStateHandler* get_PlayStateHandler()
		{
			return ((::MXUnderCover::UCPlayStateHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_PLAYSTATEHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_Messenger()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_MESSENGER_OFFSET))(nullptr);
		}

		::MXUnderCover::UCSectionVisual* GetSectionVisual(::MXUnderCover::UCSectionModel* arg)
		{
			return ((::MXUnderCover::UCSectionVisual*(*)(::MXUnderCover::UCSectionModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GETSECTIONVISUAL_OFFSET))(arg, nullptr);
		}

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_CLEANUP_OFFSET))(nullptr);
		}

		::System::Void set_IsDisabledActionButtonTrigger(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_ISDISABLEDACTIONBUTTONTRIGGER_OFFSET))(arg, nullptr);
		}

		::System::Void set_RuntimeObjectHandler(::MXUnderCover::UCRuntimeObjectHandler* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCRuntimeObjectHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_RUNTIMEOBJECTHANDLER_OFFSET))(arg, nullptr);
		}

		::MXUnderCover::UCInputBlocker* get_UserInputBlocker()
		{
			return ((::MXUnderCover::UCInputBlocker*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_USERINPUTBLOCKER_OFFSET))(nullptr);
		}

		::System::Void ManualUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_MANUALUPDATE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_UnloadAll()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_CO_UNLOADALL_OFFSET))(nullptr);
		}

		::System::Action* get_OnClearCountdown()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_ONCLEARCOUNTDOWN_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_UnloadAllSection()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_CO_UNLOADALLSECTION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _EnterSectionAsyncFromAction_g__co_EnterSectionFromAction|124_0(::MXUnderCover::UCSectionSetting* arg, ::MXUnderCover::UCEntity* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCSectionSetting*, ::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE__ENTERSECTIONASYNCFROMACTION_G__CO_ENTERSECTIONFROMACTION|124_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RemoveUnusedPlayer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_REMOVEUNUSEDPLAYER_OFFSET))(nullptr);
		}

		::System::Void set_GameResource(::MXUnderCover::UCGameResource* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCGameResource*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_GAMERESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void set_DialogueInputBlocker(::MXUnderCover::UCInputBlocker* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCInputBlocker*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_DIALOGUEINPUTBLOCKER_OFFSET))(arg, nullptr);
		}

		::MXUnderCover::UCRuntimeObjectHandler* get_RuntimeObjectHandler()
		{
			return ((::MXUnderCover::UCRuntimeObjectHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_RUNTIMEOBJECTHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_PlayerVisuals()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_PLAYERVISUALS_OFFSET))(nullptr);
		}

		::MXUnderCover::UCStageModel* get_StageModel()
		{
			return ((::MXUnderCover::UCStageModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_STAGEMODEL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDisabledActionButtonTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_ISDISABLEDACTIONBUTTONTRIGGER_OFFSET))(nullptr);
		}

		::System::Void set_PlayerVisuals(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_PLAYERVISUALS_OFFSET))(arg, nullptr);
		}

		::System::Void SetCurrentPlayer(::MXUnderCover::UCPlayer* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCPlayer*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SETCURRENTPLAYER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Messenger(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_MESSENGER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SectionModels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_SECTIONMODELS_OFFSET))(nullptr);
		}

		CoroutineAsyncOperation* UnloadAllAsync()
		{
			return ((CoroutineAsyncOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_UNLOADALLASYNC_OFFSET))(nullptr);
		}

		::UnityEngine::MonoBehaviour* get_ActionCoroutineHandler()
		{
			return ((::UnityEngine::MonoBehaviour*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_ACTIONCOROUTINEHANDLER_OFFSET))(nullptr);
		}

		States* get_State()
		{
			return ((States*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_STATE_OFFSET))(nullptr);
		}

		::MXUnderCover::UCStageTimeHandler* get_TimeHandler()
		{
			return ((::MXUnderCover::UCStageTimeHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_TIMEHANDLER_OFFSET))(nullptr);
		}

		::System::Void Pause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_PAUSE_OFFSET))(arg, nullptr);
		}

		::System::Void GameOver()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GAMEOVER_OFFSET))(nullptr);
		}

		::System::Void set_OnStopCountdown(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_ONSTOPCOUNTDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void StartSwitchPlayer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_STARTSWITCHPLAYER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_LoadAsyncSavePoint()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_CO_LOADASYNCSAVEPOINT_OFFSET))(nullptr);
		}

		::System::Action* get_OnStopCountdown()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_ONSTOPCOUNTDOWN_OFFSET))(nullptr);
		}

		::System::Void set_TimeHandler(::MXUnderCover::UCStageTimeHandler* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCStageTimeHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_TIMEHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void set_ActionButtonTriggerPerPlayer(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_ACTIONBUTTONTRIGGERPERPLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void set_OnShowDialogEmoji(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_ONSHOWDIALOGEMOJI_OFFSET))(arg, nullptr);
		}

		CoroutineAsyncOperation* PostInitAsync()
		{
			return ((CoroutineAsyncOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_POSTINITASYNC_OFFSET))(nullptr);
		}

		::MXUnderCover::UCCollisionPlayerActionButtonTrigger* GetCurrentActionButtonTrigger()
		{
			return ((::MXUnderCover::UCCollisionPlayerActionButtonTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GETCURRENTACTIONBUTTONTRIGGER_OFFSET))(nullptr);
		}

		::System::Void CreateInventoryModel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_CREATEINVENTORYMODEL_OFFSET))(nullptr);
		}

		::System::Void CleanupPost()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_CLEANUPPOST_OFFSET))(nullptr);
		}

		::System::Void set_OnHideDialogEmojiAll(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_ONHIDEDIALOGEMOJIALL_OFFSET))(arg, nullptr);
		}

		::System::Void set_SaveTriggersPlayerLocate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_SAVETRIGGERSPLAYERLOCATE_OFFSET))(arg, nullptr);
		}

		::MXUnderCover::UCPlayer* get_CurrentPlayer()
		{
			return ((::MXUnderCover::UCPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_CURRENTPLAYER_OFFSET))(nullptr);
		}

		::System::Void RemoveActionButtonTrigger(::MXUnderCover::UCPlayer* arg, ::MXUnderCover::UCCollisionPlayerActionButtonTrigger* arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCPlayer*, ::MXUnderCover::UCCollisionPlayerActionButtonTrigger*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_REMOVEACTIONBUTTONTRIGGER_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_OnShowDialogEmoji()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_ONSHOWDIALOGEMOJI_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _PostEnterSection_g__co_PostEnterSection|126_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE__POSTENTERSECTION_G__CO_POSTENTERSECTION|126_0_OFFSET))(nullptr);
		}

		::System::Void set_CoroutineHandler(::UnityEngine::MonoBehaviour* arg)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_COROUTINEHANDLER_OFFSET))(arg, nullptr);
		}

		CoroutineAsyncOperation* LoadAsyncSavePoint()
		{
			return ((CoroutineAsyncOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_LOADASYNCSAVEPOINT_OFFSET))(nullptr);
		}

		::MXUnderCover::UCInventoryModel* get_InventoryModel()
		{
			return ((::MXUnderCover::UCInventoryModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_INVENTORYMODEL_OFFSET))(nullptr);
		}

		::System::Void set_StageModel(::MXUnderCover::UCStageModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCStageModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_STAGEMODEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_State(States* arg)
		{
			((::System::Void(*)(States*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_STATE_OFFSET))(arg, nullptr);
		}

		::MXUnderCover::UCGameResource* get_GameResource()
		{
			return ((::MXUnderCover::UCGameResource*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_GAMERESOURCE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_UnloadUnusedSection()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_CO_UNLOADUNUSEDSECTION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_OnPlayerDetected(::MXUnderCover::UCEntity* arg, ::MXUnderCover::UCPlayer* arg2, ::System::Int32 arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::MXUnderCover::UCPlayer*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_CO_ONPLAYERDETECTED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void CreateSectionModel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_CREATESECTIONMODEL_OFFSET))(nullptr);
		}

		::System::Void Save()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SAVE_OFFSET))(nullptr);
		}

		::MXUnderCover::UCRuntimeCache* get_Cache()
		{
			return ((::MXUnderCover::UCRuntimeCache*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_CACHE_OFFSET))(nullptr);
		}

		::System::Void OnClickActionButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_ONCLICKACTIONBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_ActionCoroutineHandler(::UnityEngine::MonoBehaviour* arg)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_ACTIONCOROUTINEHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void set_PlayerModels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_PLAYERMODELS_OFFSET))(arg, nullptr);
		}

		::MXUnderCover::UCInputBlocker* get_DialogueInputBlocker()
		{
			return ((::MXUnderCover::UCInputBlocker*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_DIALOGUEINPUTBLOCKER_OFFSET))(nullptr);
		}

		::System::Void ClearActionButtonTrigger(::MXUnderCover::UCPlayer* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_CLEARACTIONBUTTONTRIGGER_OFFSET))(arg, nullptr);
		}

		CoroutineAsyncOperation* OnPlayerDetected(::MXUnderCover::UCEntity* arg, ::MXUnderCover::UCPlayer* arg2, ::System::Int32 arg3)
		{
			return ((CoroutineAsyncOperation*(*)(::MXUnderCover::UCEntity*, ::MXUnderCover::UCPlayer*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_ONPLAYERDETECTED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetPlayerVisuals()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GETPLAYERVISUALS_OFFSET))(nullptr);
		}

		::System::Void SetActiveVisualAll(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SETACTIVEVISUALALL_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SwitchPlayer_b__140_1(::MXUnderCover::UCPlayer* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE__SWITCHPLAYER_B__140_1_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_LOAD_OFFSET))(nullptr);
		}

		Il2CppObject* get_OnPlayCountdown()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_ONPLAYCOUNTDOWN_OFFSET))(nullptr);
		}

		::System::Void set_EnteranceScene(::UnityEngine::SceneManagement::Scene* arg)
		{
			((::System::Void(*)(::UnityEngine::SceneManagement::Scene*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_ENTERANCESCENE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PlayerModels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_PLAYERMODELS_OFFSET))(nullptr);
		}

		Il2CppObject* get_SaveTriggersPlayerLocate()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_SAVETRIGGERSPLAYERLOCATE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _EnterSectionAsync_g__co_EnterSection|125_0(::MXUnderCover::UCSectionSetting* arg, ::MXUnderCover::UCEntity* arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCSectionSetting*, ::MXUnderCover::UCEntity*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE__ENTERSECTIONASYNC_G__CO_ENTERSECTION|125_0_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* get_SectionVisuals()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_SECTIONVISUALS_OFFSET))(nullptr);
		}

		Il2CppObject* get_OnHideDialogEmoji()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_ONHIDEDIALOGEMOJI_OFFSET))(nullptr);
		}

		Il2CppObject* get_ActionButtonTriggerPerPlayer()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_GET_ACTIONBUTTONTRIGGERPERPLAYER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_SwitchPlayer()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_CO_SWITCHPLAYER_OFFSET))(nullptr);
		}

		CoroutineAsyncOperation* EnterSectionAsyncFromAction(::MXUnderCover::UCSectionSetting* arg, ::MXUnderCover::UCEntity* arg2)
		{
			return ((CoroutineAsyncOperation*(*)(::MXUnderCover::UCSectionSetting*, ::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_ENTERSECTIONASYNCFROMACTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_OnHideDialogEmoji(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_ONHIDEDIALOGEMOJI_OFFSET))(arg, nullptr);
		}

		::System::Void set_Cache(::MXUnderCover::UCRuntimeCache* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCRuntimeCache*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void CreatePlayerModel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_CREATEPLAYERMODEL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_LoadDefaultSection(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_CO_LOADDEFAULTSECTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_InventoryModel(::MXUnderCover::UCInventoryModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCInventoryModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_SET_INVENTORYMODEL_OFFSET))(arg, nullptr);
		}

		::System::Void UnloadPlayerVisual()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGE_UNLOADPLAYERVISUAL_OFFSET))(nullptr);
		}

	};
}

