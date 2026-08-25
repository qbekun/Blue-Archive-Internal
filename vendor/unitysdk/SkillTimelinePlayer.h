#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
class ExSkillTransitionPlayer;
namespace UnityEngine { class Coroutine; }
class LayerTemporaryChanger;
class LayerPresetLoader;
class CharacterMaterialContainer;
namespace UnityEngine { class Camera; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroupTag; }
class EntityVisual;
namespace UnityEngine::Playables { class PlayableDirector; }
namespace Mx::Timeline { class TimelineEnvironment; }
namespace UnityEngine::Playables { class PlayableAsset; }
class CharacterVisual;
class SupportActorVisual;
namespace MX::Logic::Skills { class SkillDataPack; }

#define SKILLTIMELINEPLAYER_ADD_ONCUTINFINISHED_OFFSET UNITYSDK_OFFSET(0x13C4E30)
#define SKILLTIMELINEPLAYER_REMOVE_ONCUTINFINISHED_OFFSET UNITYSDK_OFFSET(0x13C4ED0)
#define SKILLTIMELINEPLAYER_GET_ISCUTINPLAYING_OFFSET UNITYSDK_OFFSET(0x13C4F70)
#define SKILLTIMELINEPLAYER_SET_ISCUTINPLAYING_OFFSET UNITYSDK_OFFSET(0x13C4F80)
#define SKILLTIMELINEPLAYER_GET_TIMELINESTARTEDFRAME_OFFSET UNITYSDK_OFFSET(0x13C4F90)
#define SKILLTIMELINEPLAYER_SET_TIMELINESTARTEDFRAME_OFFSET UNITYSDK_OFFSET(0x13C4FA0)
#define SKILLTIMELINEPLAYER_DISABLESKILLTIMELINEPLAYER_OFFSET UNITYSDK_OFFSET(0x13C4FB0)
#define SKILLTIMELINEPLAYER_DISABLECUTINTIMELINEPLAYER_OFFSET UNITYSDK_OFFSET(0x13C5030)
#define SKILLTIMELINEPLAYER_SETMAINTRANSITIONPLAYERTRANSFORM_OFFSET UNITYSDK_OFFSET(0x13C5040)
#define SKILLTIMELINEPLAYER_SETSUPPORTTRANSITIONPLAYERTRANSFORM_OFFSET UNITYSDK_OFFSET(0x13C5380)
#define SKILLTIMELINEPLAYER_CREATEEXSKILLTRANSITIONPLAYER_OFFSET UNITYSDK_OFFSET(0x13C56C0)
#define SKILLTIMELINEPLAYER_RELEASEEXSKILLTRANSITIONPLAYER_OFFSET UNITYSDK_OFFSET(0x13C5DE0)
#define SKILLTIMELINEPLAYER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x13C09F0)
#define SKILLTIMELINEPLAYER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x13C6540)
#define SKILLTIMELINEPLAYER_INITIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x13C61D0)
#define SKILLTIMELINEPLAYER_PLAYPUBLICSKILL_OFFSET UNITYSDK_OFFSET(0x13BC3B0)
#define SKILLTIMELINEPLAYER_PLAYEXSKILL_OFFSET UNITYSDK_OFFSET(0x13C65C0)
#define SKILLTIMELINEPLAYER_COPLAYCUTIN_OFFSET UNITYSDK_OFFSET(0x13C6FB0)
#define SKILLTIMELINEPLAYER_ONLASTFRAMEPROCESSED_OFFSET UNITYSDK_OFFSET(0x13C7090)
#define SKILLTIMELINEPLAYER_ONCUTINSTOPPED_OFFSET UNITYSDK_OFFSET(0x13C7580)
#define SKILLTIMELINEPLAYER_PLAYEXSKILL_OFFSET UNITYSDK_OFFSET(0x13C6BC0)
#define SKILLTIMELINEPLAYER_COFRAMECORRECTION_OFFSET UNITYSDK_OFFSET(0x13C7B10)
#define SKILLTIMELINEPLAYER_COOPENSKILLPORTRAITUI_OFFSET UNITYSDK_OFFSET(0x13C74D0)
#define SKILLTIMELINEPLAYER_OPENSKILLPORTRAITUI_OFFSET UNITYSDK_OFFSET(0x13C6D60)
#define SKILLTIMELINEPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13C7BC0)
#define SKILLTIMELINEPLAYER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x13C7C70)

	inline static constexpr unsigned int SkillTimelinePlayer_TypeDefinitionIndex = 1051;

	class SkillTimelinePlayer : public Il2CppObject
	{
	public:
		::System::String* mainTransitionPath; // 0x0
		::System::String* supportTransitionPath; // 0x0
		Il2CppObject* cutinPlaylist; // 0x0
		::UnityEngine::Transform* transitionPlayerRoot; // 0x8
		ExSkillTransitionPlayer* mainTransitionInPlayer; // 0x10
		ExSkillTransitionPlayer* mainTransitionOutPlayer; // 0x18
		ExSkillTransitionPlayer* supportTransitionInPlayer; // 0x20
		ExSkillTransitionPlayer* supportTransitionOutPlayer; // 0x28
		::UnityEngine::Coroutine* delayedUIDisplayCoroutine; // 0x30
		LayerTemporaryChanger* layerChanger; // 0x18
		LayerPresetLoader* layerPresetLoader; // 0x20
		CharacterMaterialContainer* materialContainer; // 0x28
		::UnityEngine::Camera* cutInCamera; // 0x30
		::System::Boolean isShowExCutin; // 0x38
		::System::Boolean isSupporter; // 0x39
		::System::Boolean isNPC; // 0x3A
		::System::Boolean hadShownCutInAtleastOnce; // 0x3B
		::MX::Logic::Battles::Battle* battle; // 0x40
		::MX::Logic::Battles::GroupTag* entityGroupTag; // 0x48
		EntityVisual* entityVisual; // 0x50
		::UnityEngine::Playables::PlayableDirector* playableDirector; // 0x58
		::Mx::Timeline::TimelineEnvironment* timelineEnvironment; // 0x60
		::UnityEngine::Playables::PlayableAsset* exSkillPlayAsset; // 0x68
		::UnityEngine::Playables::PlayableAsset* exSKillCutInAsset; // 0x70
		::System::Object* exCutinEnvColorSettingsHandle; // 0x78
		::System::Object* exCutinShadowColorSettingsHandle; // 0x80
		::System::Object* exCutinFogSettingsHandle; // 0x88
		::System::Action* onCutInFinished; // 0x90
		::System::Boolean isDisabled; // 0x98
		::System::Boolean _IsCutInPlaying_k__BackingField; // 0x99
		::System::Int32 _TimelineStartedFrame_k__BackingField; // 0x9C
		::System::Int64 LastExSkillTimeLineStartFrame; // 0x38

		::System::Void add_onCutInFinished(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_ADD_ONCUTINFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onCutInFinished(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_REMOVE_ONCUTINFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCutInPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_GET_ISCUTINPLAYING_OFFSET))(nullptr);
		}

		::System::Void set_IsCutInPlaying(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_SET_ISCUTINPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TimelineStartedFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_GET_TIMELINESTARTEDFRAME_OFFSET))(nullptr);
		}

		::System::Void set_TimelineStartedFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_SET_TIMELINESTARTEDFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void DisableSkillTimelinePlayer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_DISABLESKILLTIMELINEPLAYER_OFFSET))(nullptr);
		}

		::System::Void DisableCutinTimelinePlayer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_DISABLECUTINTIMELINEPLAYER_OFFSET))(nullptr);
		}

		::System::Void SetMainTransitionPlayerTransform()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_SETMAINTRANSITIONPLAYERTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void SetSupportTransitionPlayerTransform()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_SETSUPPORTTRANSITIONPLAYERTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void CreateExSkillTransitionPlayer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_CREATEEXSKILLTRANSITIONPLAYER_OFFSET))(nullptr);
		}

		::System::Void ReleaseExSkillTransitionPlayer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_RELEASEEXSKILLTRANSITIONPLAYER_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Logic::Battles::GroupTag* arg, CharacterVisual* arg2, ::UnityEngine::Playables::PlayableDirector* arg3, ::System::Boolean arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, CharacterVisual*, ::UnityEngine::Playables::PlayableDirector*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void Initialize(::MX::Logic::Battles::GroupTag* arg, SupportActorVisual* arg2, ::UnityEngine::Playables::PlayableDirector* arg3, ::System::Boolean arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, SupportActorVisual*, ::UnityEngine::Playables::PlayableDirector*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void InitializeInternal(::MX::Logic::Battles::GroupTag* arg, ::UnityEngine::Playables::PlayableDirector* arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, ::UnityEngine::Playables::PlayableDirector*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_INITIALIZEINTERNAL_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void PlayPublicSkill(::UnityEngine::Playables::PlayableAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_PLAYPUBLICSKILL_OFFSET))(arg, nullptr);
		}

		::System::Void PlayExSkill(::UnityEngine::Playables::PlayableAsset* arg, ::UnityEngine::Playables::PlayableAsset* arg2, EntityVisual* arg3, ::MX::Logic::Skills::SkillDataPack* arg4, ::System::Int32 arg5, ::System::Int64 arg6, ::System::Int32 arg7, ::System::Action* arg8)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Playables::PlayableAsset*, EntityVisual*, ::MX::Logic::Skills::SkillDataPack*, ::System::Int32, ::System::Int64, ::System::Int32, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_PLAYEXSKILL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayCutIn(EntityVisual* arg, ::MX::Logic::Skills::SkillDataPack* arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(EntityVisual*, ::MX::Logic::Skills::SkillDataPack*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_COPLAYCUTIN_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void OnLastFrameProcessed(EntityVisual* arg, ::MX::Logic::Skills::SkillDataPack* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(EntityVisual*, ::MX::Logic::Skills::SkillDataPack*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_ONLASTFRAMEPROCESSED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnCutInStopped(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_ONCUTINSTOPPED_OFFSET))(arg, nullptr);
		}

		::System::Void PlayExSkill()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_PLAYEXSKILL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoFrameCorrection()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_COFRAMECORRECTION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoOpenSkillPortraitUI(EntityVisual* arg, ::MX::Logic::Skills::SkillDataPack* arg2, ::System::Int32 arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(EntityVisual*, ::MX::Logic::Skills::SkillDataPack*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_COOPENSKILLPORTRAITUI_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OpenSkillPortraitUI(EntityVisual* arg, ::MX::Logic::Skills::SkillDataPack* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(EntityVisual*, ::MX::Logic::Skills::SkillDataPack*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_OPENSKILLPORTRAITUI_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLTIMELINEPLAYER_.CCTOR_OFFSET))(nullptr);
		}

	};

