#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class PlayableDirector; }
namespace MX::Logic::BattleEntities { class SupportActor; }
class SkillActorEffectPlayer;
class BuffIconPlayer;
class SkillTimelinePlayer;
namespace MX::Visual::Battles { class BattleActorComponent; }
namespace UnityEngine { class Animator; }
class SetBranchSkill;
namespace MX::Logic::Battles { class TimelinePlayTrackEnabledEventArgs; }
class ICharacter;
namespace MX::Logic::Battles { class AuraEventArgs; }
namespace MX::Logic::Battles { class CharacterInteractWithTSSEventArgs; }
namespace MX::Logic::Battles { class ProjectileCollidedEventArgs; }
namespace MX::Logic::Battles { class NormalAttackSpawnedEventArgs; }
class EntityVisual;
namespace MX::Logic::Battles { class BeamEventArgs; }
class BuffIconsBase;
namespace UnityEngine::Playables { class PlayableAsset; }
namespace MX::Logic::Skills { class SkillDataPack; }
namespace MX::Logic::Battles { class EffectAreaSpawnedEventArgs; }
namespace MX::Logic::Battles { class ProjectileSpawnedEventArgs; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Actions { class ActionState; }
namespace MX::Logic::BattleEntities { class ActionChangedEventArgs; }
namespace MX::Data { class CharacterSkillListKey; }
namespace MX::Data::Excel { class CharacterSkillListExcel; }
namespace MX::Logic::Battles { class CharacterFormConvertedEventArgs; }

#define SUPPORTACTORVISUAL_LOADCUTINTIMELINEINDEX_OFFSET UNITYSDK_OFFSET(0x13C9950)
#define SUPPORTACTORVISUAL_APPLYTIMELINEPLAYTRACKENABLED_OFFSET UNITYSDK_OFFSET(0x13CCB10)
#define SUPPORTACTORVISUAL_PLAYPUBLICSKILL_OFFSET UNITYSDK_OFFSET(0x13CD0A0)
#define SUPPORTACTORVISUAL_ICHARACTERVISUAL.GET_HASHIDECHARACTERLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x13CD2A0)
#define SUPPORTACTORVISUAL_UNLOADCUTINTIMELINE_OFFSET UNITYSDK_OFFSET(0x13C7A50)
#define SUPPORTACTORVISUAL_SETVISIBILITY_OFFSET UNITYSDK_OFFSET(0x13C9900)
#define SUPPORTACTORVISUAL_GET_ICHARACTER_OFFSET UNITYSDK_OFFSET(0x13CD2B0)
#define SUPPORTACTORVISUAL_APPLYAURASPAWNED_OFFSET UNITYSDK_OFFSET(0x13CD2C0)
#define SUPPORTACTORVISUAL_APPLYINTERACTIONWITHTSS_OFFSET UNITYSDK_OFFSET(0x13CD4A0)
#define SUPPORTACTORVISUAL_APPLYPROJECTILECOLLIDED_OFFSET UNITYSDK_OFFSET(0x13CD5A0)
#define SUPPORTACTORVISUAL_APPLYNORMALATTACKSPAWNED_OFFSET UNITYSDK_OFFSET(0x13CD5B0)
#define SUPPORTACTORVISUAL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13CD720)
#define SUPPORTACTORVISUAL_SET_SUPPORTACTOR_OFFSET UNITYSDK_OFFSET(0x13CD820)
#define SUPPORTACTORVISUAL_APPLYBEAMSPAWNED_OFFSET UNITYSDK_OFFSET(0x13CD840)
#define SUPPORTACTORVISUAL_BUFFICONSBASE.ISYNCABLE.REMOVESYNCUI_OFFSET UNITYSDK_OFFSET(0x13CD8F0)
#define SUPPORTACTORVISUAL_GET_SUPPORTACTOR_OFFSET UNITYSDK_OFFSET(0x13CD910)
#define SUPPORTACTORVISUAL_LOADCUTINTIMELINE_OFFSET UNITYSDK_OFFSET(0x13CD920)
#define SUPPORTACTORVISUAL_TIMELINESETUP_OFFSET UNITYSDK_OFFSET(0x13CDCD0)
#define SUPPORTACTORVISUAL_GET_RENDERERS_OFFSET UNITYSDK_OFFSET(0x13CDE90)
#define SUPPORTACTORVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x13CDEA0)
#define SUPPORTACTORVISUAL_PLAYEXSKILL_OFFSET UNITYSDK_OFFSET(0x13CDFC0)
#define SUPPORTACTORVISUAL_CHECKFORMCONVERSIONDEFAULT_OFFSET UNITYSDK_OFFSET(0x13CE140)
#define SUPPORTACTORVISUAL_APPLYAREASPAWNED_OFFSET UNITYSDK_OFFSET(0x13CE270)
#define SUPPORTACTORVISUAL_STOPPLAYERSKILLCUTINTIMELINE_OFFSET UNITYSDK_OFFSET(0x13CE440)
#define SUPPORTACTORVISUAL__PLAYEXSKILL_B__50_0_OFFSET UNITYSDK_OFFSET(0x13CE4B0)
#define SUPPORTACTORVISUAL_APPLYPROJECTILESPAWNED_OFFSET UNITYSDK_OFFSET(0x13CE500)
#define SUPPORTACTORVISUAL_PLAYTSSINTERACTANIMATION_OFFSET UNITYSDK_OFFSET(0x13CECF0)
#define SUPPORTACTORVISUAL_APPLYACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x13CEDD0)
#define SUPPORTACTORVISUAL_UPDATE_OFFSET UNITYSDK_OFFSET(0x13CF430)
#define SUPPORTACTORVISUAL_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x13CF6C0)
#define SUPPORTACTORVISUAL_REFRESHSYNCUI_OFFSET UNITYSDK_OFFSET(0x13CF700)
#define SUPPORTACTORVISUAL_LOADSKILLTIMELINEINDEXDICTIONARY_OFFSET UNITYSDK_OFFSET(0x13CFA40)
#define SUPPORTACTORVISUAL_ISSKILLCUTINPLAYING_OFFSET UNITYSDK_OFFSET(0x13CFEE0)
#define SUPPORTACTORVISUAL_BUFFICONSBASE.ISYNCABLE.ADDSYNCUI_OFFSET UNITYSDK_OFFSET(0x13CFF60)
#define SUPPORTACTORVISUAL_ADDSYNCUI_OFFSET UNITYSDK_OFFSET(0x13CFA10)
#define SUPPORTACTORVISUAL_STOPPLAYERSKILLTIMELINE_OFFSET UNITYSDK_OFFSET(0x13D0130)
#define SUPPORTACTORVISUAL__LOADSKILLTIMELINEINDEXDICTIONARY_G__SETSKILLINDEX|31_0_OFFSET UNITYSDK_OFFSET(0x13CFCA0)
#define SUPPORTACTORVISUAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x13D01B0)
#define SUPPORTACTORVISUAL_GET_SKILLACTOREFFECTPLAYER_OFFSET UNITYSDK_OFFSET(0x13D0500)
#define SUPPORTACTORVISUAL_SET_RENDERERS_OFFSET UNITYSDK_OFFSET(0x13D0510)
#define SUPPORTACTORVISUAL_APPLYFORMCONVERSION_OFFSET UNITYSDK_OFFSET(0x13D0530)

	inline static constexpr unsigned int SupportActorVisual_TypeDefinitionIndex = 1069;

	class SupportActorVisual : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableDirector* PlayableDirector; // 0x50
		::Il2CppArray<::System::Object*>* PublicSkillPlayableAssetList; // 0x58
		::Il2CppArray<::System::Object*>* ExSkillPlayableAssetList; // 0x60
		Il2CppObject* exSkillCutInBindingData; // 0x68
		Il2CppObject* exSkillCutInPlayableAssetList; // 0x70
		Il2CppObject* exSkillCutInTimelineList; // 0x78
		Il2CppObject* skillTimelineIndexDictionary; // 0x80
		Il2CppObject* cutinTimelineIndexDictionary; // 0x88
		::MX::Logic::BattleEntities::SupportActor* _SupportActor_k__BackingField; // 0x90
		SkillActorEffectPlayer* effectPlayer; // 0x98
		BuffIconPlayer* buffIconPlayer; // 0xA0
		SkillTimelinePlayer* exSkillPlayer; // 0xA8
		::MX::Visual::Battles::BattleActorComponent* battleActorComponent; // 0xB0
		::UnityEngine::Animator* animator; // 0xB8
		::Il2CppArray<::System::Object*>* AnimationControlOfFormList; // 0xC0
		::Il2CppArray<::System::Object*>* _Renderers_k__BackingField; // 0xC8
		SetBranchSkill* setbranchSkill; // 0xD0

		::System::Void LoadCutinTimelineIndex(::System::Int32 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_LOADCUTINTIMELINEINDEX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplyTimelinePlayTrackEnabled(::MX::Logic::Battles::TimelinePlayTrackEnabledEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::TimelinePlayTrackEnabledEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_APPLYTIMELINEPLAYTRACKENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void PlayPublicSkill(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_PLAYPUBLICSKILL_OFFSET))(str, nullptr);
		}

		::System::Boolean ICharacterVisual.get_HasHideCharacterLogicEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_ICHARACTERVISUAL.GET_HASHIDECHARACTERLOGICEFFECT_OFFSET))(nullptr);
		}

		::System::Void UnloadCutinTimeline(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_UNLOADCUTINTIMELINE_OFFSET))(arg, nullptr);
		}

		::System::Void SetVisibility(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_SETVISIBILITY_OFFSET))(arg, nullptr);
		}

		ICharacter* get_ICharacter()
		{
			return ((ICharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_GET_ICHARACTER_OFFSET))(nullptr);
		}

		::System::Void ApplyAuraSpawned(::MX::Logic::Battles::AuraEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::AuraEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_APPLYAURASPAWNED_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyInteractionWithTSS(::MX::Logic::Battles::CharacterInteractWithTSSEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::CharacterInteractWithTSSEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_APPLYINTERACTIONWITHTSS_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyProjectileCollided(::MX::Logic::Battles::ProjectileCollidedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::ProjectileCollidedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_APPLYPROJECTILECOLLIDED_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyNormalAttackSpawned(::MX::Logic::Battles::NormalAttackSpawnedEventArgs* arg, EntityVisual* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::NormalAttackSpawnedEventArgs*, EntityVisual*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_APPLYNORMALATTACKSPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void set_SupportActor(::MX::Logic::BattleEntities::SupportActor* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_SET_SUPPORTACTOR_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyBeamSpawned(::MX::Logic::Battles::BeamEventArgs* arg, EntityVisual* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::BeamEventArgs*, EntityVisual*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_APPLYBEAMSPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void BuffIconsBase.ISyncable.RemoveSyncUI(BuffIconsBase* arg)
		{
			((::System::Void(*)(BuffIconsBase*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_BUFFICONSBASE.ISYNCABLE.REMOVESYNCUI_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::SupportActor* get_SupportActor()
		{
			return ((::MX::Logic::BattleEntities::SupportActor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_GET_SUPPORTACTOR_OFFSET))(nullptr);
		}

		::System::Void LoadCutinTimeline()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_LOADCUTINTIMELINE_OFFSET))(nullptr);
		}

		::System::Void TimelineSetup(::UnityEngine::Playables::PlayableAsset* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_TIMELINESETUP_OFFSET))(arg, arg2, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Renderers()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_GET_RENDERERS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayExSkill(::UnityEngine::Playables::PlayableAsset* arg, ::UnityEngine::Playables::PlayableAsset* arg2, ::MX::Logic::Skills::SkillDataPack* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Playables::PlayableAsset*, ::MX::Logic::Skills::SkillDataPack*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_PLAYEXSKILL_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void CheckFormConversionDefault()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_CHECKFORMCONVERSIONDEFAULT_OFFSET))(nullptr);
		}

		::System::Void ApplyAreaSpawned(::MX::Logic::Battles::EffectAreaSpawnedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EffectAreaSpawnedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_APPLYAREASPAWNED_OFFSET))(arg, nullptr);
		}

		::System::Void StopPlayerSkillCutinTimeline()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_STOPPLAYERSKILLCUTINTIMELINE_OFFSET))(nullptr);
		}

		::System::Void _PlayExSkill_b__50_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL__PLAYEXSKILL_B__50_0_OFFSET))(nullptr);
		}

		::System::Void ApplyProjectileSpawned(::MX::Logic::Battles::ProjectileSpawnedEventArgs* arg, EntityVisual* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::ProjectileSpawnedEventArgs*, EntityVisual*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_APPLYPROJECTILESPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlayTSSInteractAnimation(::MX::Logic::BattleEntities::BehaviorType* arg, ::MX::Logic::Actions::ActionState* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, ::MX::Logic::Actions::ActionState*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_PLAYTSSINTERACTANIMATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplyActionChanged(::MX::Logic::BattleEntities::ActionChangedEventArgs* arg, ::MX::Visual::Battles::BattleActorComponent* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::MX::Visual::Battles::BattleActorComponent*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_APPLYACTIONCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_UPDATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_GET_ISVISIBLE_OFFSET))(nullptr);
		}

		::System::Void RefreshSyncUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_REFRESHSYNCUI_OFFSET))(nullptr);
		}

		::System::Void LoadSkillTimelineIndexDictionary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_LOADSKILLTIMELINEINDEXDICTIONARY_OFFSET))(nullptr);
		}

		::System::Boolean IsSkillCutinPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_ISSKILLCUTINPLAYING_OFFSET))(nullptr);
		}

		::System::Void BuffIconsBase.ISyncable.AddSyncUI(BuffIconsBase* arg)
		{
			((::System::Void(*)(BuffIconsBase*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_BUFFICONSBASE.ISYNCABLE.ADDSYNCUI_OFFSET))(arg, nullptr);
		}

		::System::Void AddSyncUI(BuffIconsBase* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(BuffIconsBase*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_ADDSYNCUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StopPlayerSkillTimeline()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_STOPPLAYERSKILLTIMELINE_OFFSET))(nullptr);
		}

		::System::Void _LoadSkillTimelineIndexDictionary_g__SetSkillIndex|31_0(::MX::Data::CharacterSkillListKey* arg, ::MX::Data::Excel::CharacterSkillListExcel* arg2)
		{
			((::System::Void(*)(::MX::Data::CharacterSkillListKey*, ::MX::Data::Excel::CharacterSkillListExcel*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL__LOADSKILLTIMELINEINDEXDICTIONARY_G__SETSKILLINDEX|31_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(::MX::Logic::BattleEntities::SupportActor* arg, ::MX::Visual::Battles::BattleActorComponent* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SupportActor*, ::MX::Visual::Battles::BattleActorComponent*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		SkillActorEffectPlayer* get_SkillActorEffectPlayer()
		{
			return ((SkillActorEffectPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_GET_SKILLACTOREFFECTPLAYER_OFFSET))(nullptr);
		}

		::System::Void set_Renderers(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_SET_RENDERERS_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyFormConversion(::MX::Logic::Battles::CharacterFormConvertedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::CharacterFormConvertedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SUPPORTACTORVISUAL_APPLYFORMCONVERSION_OFFSET))(arg, nullptr);
		}

	};

