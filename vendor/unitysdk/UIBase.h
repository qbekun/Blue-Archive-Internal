#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
class UITargetFPS;
class UISiblingPriority;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Camera; }
class UIPanel;
class AudioMixerSnapshotSetting;
namespace FlatData { class MissionCompleteUIPrefabType; }
class UITop;
namespace MX::Sequencer { class UISequencer; }
namespace UnityEngine::Audio { class AudioMixerSnapshot; }
namespace MX::Data { class BGMPlayInfo; }
namespace UnityEngine { class Coroutine; }
class SwipeDir;
class SpineChatDialogContainer;

#define UIBASE_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0x2219E10)
#define UIBASE_SETANDROIDBACKBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x2219E20)
#define UIBASE_GET_ISANIMATIONEND_OFFSET UNITYSDK_OFFSET(0x2219E30)
#define UIBASE_SET_ISANIMATIONEND_OFFSET UNITYSDK_OFFSET(0x2219E40)
#define UIBASE_GET_IGNORESETPANELDEPTH_OFFSET UNITYSDK_OFFSET(0x2219E50)
#define UIBASE_GET_HASBGM_OFFSET UNITYSDK_OFFSET(0x2219E60)
#define UIBASE_GET_PANELTOATTACHFROMOTHERUI_OFFSET UNITYSDK_OFFSET(0x2219E70)
#define UIBASE_GET_TOPBAR_OFFSET UNITYSDK_OFFSET(0x2219E80)
#define UIBASE_GET_SEQUENCER_OFFSET UNITYSDK_OFFSET(0x2219F20)
#define UIBASE_GET_ISSEQUENCING_OFFSET UNITYSDK_OFFSET(0x2219FB0)
#define UIBASE_GET_ALLOWMULTITOUCH_OFFSET UNITYSDK_OFFSET(0x221A080)
#define UIBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x221A090)
#define UIBASE_SWIPE_OFFSET UNITYSDK_OFFSET(0x221A1C0)
#define UIBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2217E30)
#define UIBASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2217A00)
#define UIBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x221A1D0)
#define UIBASE_INITOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x221A2F0)
#define UIBASE_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2216880)
#define UIBASE_CO_CLOSINGONBACK_OFFSET UNITYSDK_OFFSET(0x221A4A0)
#define UIBASE_CO_DESTROYINGONBACK_OFFSET UNITYSDK_OFFSET(0x221A520)
#define UIBASE_CREATESTACKUI_OFFSET UNITYSDK_OFFSET(0x221A5A0)
#define UIBASE_GET_LOADINGCOROUTINE_OFFSET UNITYSDK_OFFSET(0x221A630)
#define UIBASE_SET_LOADINGCOROUTINE_OFFSET UNITYSDK_OFFSET(0x221A640)
#define UIBASE_GET_CLOSINGCOROUTINE_OFFSET UNITYSDK_OFFSET(0x221A660)
#define UIBASE_SET_CLOSINGCOROUTINE_OFFSET UNITYSDK_OFFSET(0x221A670)
#define UIBASE_GET_DESTROYINGCOROUTINE_OFFSET UNITYSDK_OFFSET(0x221A690)
#define UIBASE_SET_DESTROYINGCOROUTINE_OFFSET UNITYSDK_OFFSET(0x221A6A0)
#define UIBASE_STARTLOADINGCOROUTINE_OFFSET UNITYSDK_OFFSET(0x221A6C0)
#define UIBASE_STARTCLOSINGCOROUTINE_OFFSET UNITYSDK_OFFSET(0x221A770)
#define UIBASE_STARTDESTROYCOROUTINE_OFFSET UNITYSDK_OFFSET(0x221A820)
#define UIBASE_ONENDOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x221A8D0)
#define UIBASE_ONBACK_OFFSET UNITYSDK_OFFSET(0x221AA30)
#define UIBASE_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x221AAC0)
#define UIBASE_ONANDROIDBACKBUTTONRESULT_OFFSET UNITYSDK_OFFSET(0x221AAE0)
#define UIBASE_ONOPENED_OFFSET UNITYSDK_OFFSET(0x22181C0)
#define UIBASE_CHECKMISSIONCOMPLETEUIPREFABTYPE_OFFSET UNITYSDK_OFFSET(0x221ABC0)
#define UIBASE_ONOPENEDPOST_OFFSET UNITYSDK_OFFSET(0x221AC60)
#define UIBASE_GET_SHOULDPLAYBGM2ND_OFFSET UNITYSDK_OFFSET(0x221ADB0)
#define UIBASE_GET_SHOULDPLAYBGM3RD_OFFSET UNITYSDK_OFFSET(0x221ADC0)
#define UIBASE_GETBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0x221ADD0)
#define UIBASE_GETBGMPLAYINFOBYEVENTID_OFFSET UNITYSDK_OFFSET(0x221AFB0)
#define UIBASE_PLAYBGM_OFFSET UNITYSDK_OFFSET(0x221AAF0)
#define UIBASE_SETCUSTOMBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0x221B0C0)
#define UIBASE_PRELOADBGM_OFFSET UNITYSDK_OFFSET(0x221B0E0)
#define UIBASE_CHANGEAUDIOMIXERSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x221AC70)
#define UIBASE_RESTOREAUDIOMIXERSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x221B170)
#define UIBASE_YIELDSCROLLVIEWRESET_OFFSET UNITYSDK_OFFSET(0x221B250)
#define UIBASE_REFRESH_OFFSET UNITYSDK_OFFSET(0x221B2E0)
#define UIBASE_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x221B2F0)
#define UIBASE_COOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x221B3F0)
#define UIBASE_SHOWCONTENTSCENARIOONOPEN_OFFSET UNITYSDK_OFFSET(0x221B4A0)
#define UIBASE_SHOWCONTENTSCENARIOONOPEN_OFFSET UNITYSDK_OFFSET(0x221B500)
#define UIBASE_AFTERCONTENTSCENARIO_OFFSET UNITYSDK_OFFSET(0x221B820)
#define UIBASE_PLAYSPINECHATONOPEN_OFFSET UNITYSDK_OFFSET(0x221B9A0)
#define UIBASE_GET_LASTASPECTGENERATION_OFFSET UNITYSDK_OFFSET(0x221BA20)
#define UIBASE_SET_LASTASPECTGENERATION_OFFSET UNITYSDK_OFFSET(0x221BA30)
#define UIBASE_ONSCALECHANGED_OFFSET UNITYSDK_OFFSET(0x221BA40)
#define UIBASE_REFRESHANCHORSFORASPECTCATCHUP_OFFSET UNITYSDK_OFFSET(0x221BBB0)
#define UIBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2217E70)
#define UIBASE__INITOPENSEQUENCE_B__51_0_OFFSET UNITYSDK_OFFSET(0x221BDB0)

	inline static constexpr unsigned int UIBase_TypeDefinitionIndex = 4415;

	class UIBase : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* ControllerDpadPointRoot; // 0x18
		UITargetFPS* TargetFPS; // 0x20
		UISiblingPriority* UIPriority; // 0x24
		::System::Boolean IsAddStack; // 0x28
		::System::Boolean IsFadeOutIn; // 0x29
		::System::Boolean IsAndroidBackButton; // 0x2A
		::System::Boolean IsAndroidBackButtonPropagation; // 0x2B
		::System::Action* androidBackButtonAction; // 0x30
		::UnityEngine::Animation* ChangeUIAni; // 0x38
		::System::Boolean ReverseAni; // 0x40
		::System::Boolean _IsAnimationEnd_k__BackingField; // 0x41
		::System::Boolean HideTopBarOnOpenStart; // 0x42
		::UnityEngine::Camera* Camera3D; // 0x48
		::UnityEngine::Transform* Camera3DScreenCenterTransform; // 0x50
		::System::Boolean ResetGameCameraTransform; // 0x58
		::Il2CppArray<::System::Object*>* ScrollViewsToReset; // 0x60
		UIPanel* panelToAttachFromOtherUI; // 0x68
		AudioMixerSnapshotSetting* audioMixerSnapshotSetting; // 0x70
		::FlatData::MissionCompleteUIPrefabType* missionCompleteUIPrefabType; // 0x78
		UITop* topBar; // 0x80
		::MX::Sequencer::UISequencer* _sequencer; // 0x88
		::UnityEngine::Audio::AudioMixerSnapshot* audioMixerSnapshotOrigin; // 0x90
		::MX::Data::BGMPlayInfo* _customBGMInfo; // 0x98
		::MX::Data::BGMPlayInfo* _customBGMInfoCacheForOnBack; // 0xA0
		::UnityEngine::Coroutine* _LoadingCoroutine_k__BackingField; // 0xA8
		::UnityEngine::Coroutine* _ClosingCoroutine_k__BackingField; // 0xB0
		::UnityEngine::Coroutine* _DestroyingCoroutine_k__BackingField; // 0xB8
		::System::Boolean _ShouldPlayBGM2nd_k__BackingField; // 0xC0
		::System::Boolean _ShouldPlayBGM3rd_k__BackingField; // 0xC1
		::UnityEngine::Coroutine* changeAniCoroutine; // 0xC8
		::System::Int32 _LastAspectGeneration_k__BackingField; // 0xD0

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Void SetAndroidBackButtonAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASE_SETANDROIDBACKBUTTONACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsAnimationEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_GET_ISANIMATIONEND_OFFSET))(nullptr);
		}

		::System::Void set_IsAnimationEnd(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBASE_SET_ISANIMATIONEND_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IgnoreSetPanelDepth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_GET_IGNORESETPANELDEPTH_OFFSET))(nullptr);
		}

		::System::Boolean get_HasBGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_GET_HASBGM_OFFSET))(nullptr);
		}

		UIPanel* get_PanelToAttachFromOtherUI()
		{
			return ((UIPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_GET_PANELTOATTACHFROMOTHERUI_OFFSET))(nullptr);
		}

		UITop* get_TopBar()
		{
			return ((UITop*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_GET_TOPBAR_OFFSET))(nullptr);
		}

		::MX::Sequencer::UISequencer* get_Sequencer()
		{
			return ((::MX::Sequencer::UISequencer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_GET_SEQUENCER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSequencing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_GET_ISSEQUENCING_OFFSET))(nullptr);
		}

		::System::Boolean get_AllowMultiTouch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_GET_ALLOWMULTITOUCH_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Swipe(SwipeDir* arg)
		{
			((::System::Void(*)(SwipeDir*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASE_SWIPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void InitOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_INITOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_ClosingOnBack()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_CO_CLOSINGONBACK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_DestroyingOnBack()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_CO_DESTROYINGONBACK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CreateStackUI()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_CREATESTACKUI_OFFSET))(nullptr);
		}

		::UnityEngine::Coroutine* get_LoadingCoroutine()
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_GET_LOADINGCOROUTINE_OFFSET))(nullptr);
		}

		::System::Void set_LoadingCoroutine(::UnityEngine::Coroutine* arg)
		{
			((::System::Void(*)(::UnityEngine::Coroutine*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASE_SET_LOADINGCOROUTINE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Coroutine* get_ClosingCoroutine()
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_GET_CLOSINGCOROUTINE_OFFSET))(nullptr);
		}

		::System::Void set_ClosingCoroutine(::UnityEngine::Coroutine* arg)
		{
			((::System::Void(*)(::UnityEngine::Coroutine*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASE_SET_CLOSINGCOROUTINE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Coroutine* get_DestroyingCoroutine()
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_GET_DESTROYINGCOROUTINE_OFFSET))(nullptr);
		}

		::System::Void set_DestroyingCoroutine(::UnityEngine::Coroutine* arg)
		{
			((::System::Void(*)(::UnityEngine::Coroutine*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASE_SET_DESTROYINGCOROUTINE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Coroutine* StartLoadingCoroutine()
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_STARTLOADINGCOROUTINE_OFFSET))(nullptr);
		}

		::UnityEngine::Coroutine* StartClosingCoroutine()
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_STARTCLOSINGCOROUTINE_OFFSET))(nullptr);
		}

		::UnityEngine::Coroutine* StartDestroyCoroutine()
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_STARTDESTROYCOROUTINE_OFFSET))(nullptr);
		}

		::System::Void OnEndOpenAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_ONENDOPENANIMATION_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_ONBACK_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean OnAndroidBackButtonResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_ONANDROIDBACKBUTTONRESULT_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBASE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void CheckMissionCompleteUIPrefabType()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_CHECKMISSIONCOMPLETEUIPREFABTYPE_OFFSET))(nullptr);
		}

		::System::Void OnOpenedPost(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBASE_ONOPENEDPOST_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ShouldPlayBGM2nd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_GET_SHOULDPLAYBGM2ND_OFFSET))(nullptr);
		}

		::System::Boolean get_ShouldPlayBGM3rd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_GET_SHOULDPLAYBGM3RD_OFFSET))(nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGMPlayInfo()
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_GETBGMPLAYINFO_OFFSET))(nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGMPlayInfoByEventId(::System::Int64 arg)
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIBASE_GETBGMPLAYINFOBYEVENTID_OFFSET))(arg, nullptr);
		}

		::System::Void PlayBGM()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_PLAYBGM_OFFSET))(nullptr);
		}

		::System::Void SetCustomBGMPlayInfo(::MX::Data::BGMPlayInfo* arg)
		{
			((::System::Void(*)(::MX::Data::BGMPlayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASE_SETCUSTOMBGMPLAYINFO_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PreloadBGM()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_PRELOADBGM_OFFSET))(nullptr);
		}

		::System::Void ChangeAudioMixerSnapshot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_CHANGEAUDIOMIXERSNAPSHOT_OFFSET))(nullptr);
		}

		::System::Void RestoreAudioMixerSnapshot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_RESTOREAUDIOMIXERSNAPSHOT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* YieldScrollViewReset()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_YIELDSCROLLVIEWRESET_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_REFRESH_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoOpenAnimation(::System::Boolean arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBASE_COOPENANIMATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ShowContentScenarioOnOpen(::System::String* str, SpineChatDialogContainer* arg, ::System::Action* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::String*, SpineChatDialogContainer*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASE_SHOWCONTENTSCENARIOONOPEN_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Void ShowContentScenarioOnOpen(::System::UInt32 arg, SpineChatDialogContainer* arg2, ::System::Action* arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(::System::UInt32, SpineChatDialogContainer*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASE_SHOWCONTENTSCENARIOONOPEN_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void AfterContentScenario(SpineChatDialogContainer* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(SpineChatDialogContainer*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASE_AFTERCONTENTSCENARIO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlaySpineChatOnOpen(SpineChatDialogContainer* arg)
		{
			((::System::Void(*)(SpineChatDialogContainer*, ::PVOID))((::PBYTE)hIl2Cpp + UIBASE_PLAYSPINECHATONOPEN_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LastAspectGeneration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_GET_LASTASPECTGENERATION_OFFSET))(nullptr);
		}

		::System::Void set_LastAspectGeneration(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIBASE_SET_LASTASPECTGENERATION_OFFSET))(arg, nullptr);
		}

		::System::Void OnScaleChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_ONSCALECHANGED_OFFSET))(nullptr);
		}

		::System::Void RefreshAnchorsForAspectCatchUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_REFRESHANCHORSFORASPECTCATCHUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _InitOpenSequence_b__51_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBASE__INITOPENSEQUENCE_B__51_0_OFFSET))(nullptr);
		}

	};

