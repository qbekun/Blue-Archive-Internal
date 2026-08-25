#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MX::Visual::Battles { class ForwardVector; }
class TurretRotation;
class ShaderBaseAnimationData;
class UIDamageFloater;
class UIHPBar;
namespace UnityEngine { class Animator; }
class TSAInteractionVisual;
namespace UnityEngine { class Coroutine; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
class EvacuationRopeVisual;
namespace MX::Visual::Battles { class BattleActorComponent; }
class CharacterVisual;
namespace UnityEngine { class Transform; }
class HPWidgetBase;
class Emoji;
class SpeechBubble;
class DialogBubble;
namespace MX::Logic::Skills::LogicEffects { class CountLogicEffectCategoryEffect; }
class BattleGroundCamera;
class CharacterEffectPlayer;
class StatusEffectPlayer;
class BuffIconPlayer;
class SkillTimelinePlayer;
class EvacuationHandler;
namespace UnityEngine { class Vector3; }
class SetBranchSkill;
namespace MX::Logic::BattleEntities { class ActionChangedEventArgs; }
namespace MX::Logic::BattleEntities { class StatusResistEventArgs; }
class TSSVisual;
namespace MX::Logic::Battles { class ProjectileCollidedEventArgs; }
namespace MX::Logic::Battles { class CharacterPhaseChangedEventArgs; }
namespace MX::Logic::Battles { class AuraEventArgs; }
namespace MX::Logic::Actions { class TimelineSkillAction; }
namespace MX::Logic::Battles { class CharacterInteractWithTSSEventArgs; }
namespace Cysharp::Threading::Tasks { class UniTaskVoid; }
namespace MX::Logic::BattleEntities { class GaugeEffectInfo; }
namespace MX::Logic::Battles { class LogicEffectExpiredEventArgs; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Actions { class ActionState; }
namespace MX::Logic::Battles { class EffectAreaSpawnedEventArgs; }
class ChangeStatLogicApplicationGauge;
class BuffIconsBase;
namespace MX::Data { class CharacterSkillListKey; }
namespace MX::Data::Excel { class CharacterSkillListExcel; }
namespace MX::Logic::Skills { class SkillDataPack; }
namespace MX::Logic::BattleEntities { class StatusAddedEventArgs; }
namespace MX::Logic::BattleEntities { class StatusRemovedEventArgs; }
class InvisibleFlag;
namespace MX::Logic::Battles { class AttackEventArgs; }
namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }
namespace MX::Logic::Battles { class NormalAttackSpawnedEventArgs; }
class EntityVisual;
namespace MX::Logic::Battles { class CoverStateChangedEventArgs; }
namespace FlatData { class BattleDialogType; }
namespace MX::Logic::Battles { class GameStateEventArgs; }
namespace MX::Logic::Battles { class HeroReviveEventArgs; }
namespace MX::Logic::Battles { class CharacterGroundNodeChangedEventArgs; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::BattleEntities { class BarrierObstacle; }
namespace UnityEngine { class AnimationEvent; }
namespace MX::Logic::BattleEntities { class StatusLevelEffectInfo; }
namespace FlatData { class DamageAttribute; }
namespace MX::Logic::Battles { class LifeGainEventArgs; }
class ICharacter;
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Battles { class BeamEventArgs; }
namespace MX::Logic::Battles { class TimelinePlayTrackEnabledEventArgs; }
namespace MX::Logic::Battles { class LogicEffectImmuneEventArgs; }
namespace MX::Logic::Skills::LogicEffects { class UseExclusiveHPBarEffect; }
namespace MX::Logic::Battles { class CharacterFormConvertedEventArgs; }
namespace MX::Logic::Battles { class KillEventArgs; }
namespace MX::Logic::Battles { class ProjectileSpawnedEventArgs; }
namespace MX::Logic::Battles { class CharacterShieldHealEventArgs; }

#define CHARACTERVISUAL_SET_ANIMATIONSPEEDSOURCE_OFFSET UNITYSDK_OFFSET(0x10BF700)
#define CHARACTERVISUAL_GET_DIALOGBUBBLE_OFFSET UNITYSDK_OFFSET(0x10BF720)
#define CHARACTERVISUAL_SET_PUBLICSKILLSPEECHBUBBLE_OFFSET UNITYSDK_OFFSET(0x10BF730)
#define CHARACTERVISUAL_EVACUATE_OFFSET UNITYSDK_OFFSET(0x10BF750)
#define CHARACTERVISUAL_REFRESHSYNCUI_OFFSET UNITYSDK_OFFSET(0x10BFBB0)
#define CHARACTERVISUAL_GET_ONCROWDCONTROLGAUGEEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x10BFF30)
#define CHARACTERVISUAL_APPLYLOGICEFFECTRESIST_OFFSET UNITYSDK_OFFSET(0x10BFF40)
#define CHARACTERVISUAL__APPLYACTIONCHANGED_B__191_0_OFFSET UNITYSDK_OFFSET(0x10BFF90)
#define CHARACTERVISUAL_UNLOADCUTINTIMELINE_OFFSET UNITYSDK_OFFSET(0x10C0050)
#define CHARACTERVISUAL_PLAYHITSHADER_OFFSET UNITYSDK_OFFSET(0x10C0120)
#define CHARACTERVISUAL_SETTSSINTERACTIONTRANSFORM_OFFSET UNITYSDK_OFFSET(0x10C0200)
#define CHARACTERVISUAL_OPENOUT_OFFSET UNITYSDK_OFFSET(0x10BFA90)
#define CHARACTERVISUAL__PROCESSHIDECHARACTER_G__CHANGELAYER|220_0_OFFSET UNITYSDK_OFFSET(0x10C0560)
#define CHARACTERVISUAL_APPLYPROJECTILECOLLIDED_OFFSET UNITYSDK_OFFSET(0x10C05E0)
#define CHARACTERVISUAL_INITHPBAR_OFFSET UNITYSDK_OFFSET(0x10C05F0)
#define CHARACTERVISUAL_APPLYPHASECHANGED_OFFSET UNITYSDK_OFFSET(0x10C0CA0)
#define CHARACTERVISUAL_RELEASEADDRESSABLE_OFFSET UNITYSDK_OFFSET(0x10C1260)
#define CHARACTERVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x10C1410)
#define CHARACTERVISUAL_SET_ONBARRIEROBSTACLECOVERCHANGED_OFFSET UNITYSDK_OFFSET(0x10C1580)
#define CHARACTERVISUAL_ISSKILLCUTINPLAYING_OFFSET UNITYSDK_OFFSET(0x10C15A0)
#define CHARACTERVISUAL_STOPPLAYABLEDIRECTOR_OFFSET UNITYSDK_OFFSET(0x10C1620)
#define CHARACTERVISUAL_SET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x10C16F0)
#define CHARACTERVISUAL_SETFORMCONVERSIONIDLEMOTIONINBATTLEFINISHED_OFFSET UNITYSDK_OFFSET(0x10C1710)
#define CHARACTERVISUAL_APPLYAURASPAWNED_OFFSET UNITYSDK_OFFSET(0x10C1720)
#define CHARACTERVISUAL_STARTTURRETROTATETRACKING_OFFSET UNITYSDK_OFFSET(0x10C19F0)
#define CHARACTERVISUAL_ISINVICTORYSTATE_OFFSET UNITYSDK_OFFSET(0x10C1BA0)
#define CHARACTERVISUAL_CREATEENTITIES_OFFSET UNITYSDK_OFFSET(0x10C1D30)
#define CHARACTERVISUAL_APPLYINTERACTIONWITHTSS_OFFSET UNITYSDK_OFFSET(0x10C2230)
#define CHARACTERVISUAL_LOADSKILLTIMELINEINDEXDICTIONARY_OFFSET UNITYSDK_OFFSET(0x10C2320)
#define CHARACTERVISUAL__PLAYDEADSHADER_B__262_0_OFFSET UNITYSDK_OFFSET(0x10C2850)
#define CHARACTERVISUAL_SETCHANGESTATLOGICAPPLICATIONGAUGEASYNC_OFFSET UNITYSDK_OFFSET(0x10C2940)
#define CHARACTERVISUAL_BATTLECACHE_EXCLUSIVEHPBARLOGICEFFECTEXPIRED_OFFSET UNITYSDK_OFFSET(0x10C2A10)
#define CHARACTERVISUAL_PLAYSKILLANIMATION_OFFSET UNITYSDK_OFFSET(0x10C2BD0)
#define CHARACTERVISUAL_GET_SKILLHIGHLIGHTED_OFFSET UNITYSDK_OFFSET(0x10C2C00)
#define CHARACTERVISUAL_GET_ONBARRIEROBSTACLECOVERCHANGED_OFFSET UNITYSDK_OFFSET(0x10C2C10)
#define CHARACTERVISUAL_GET_SELECTSKILLTARGETHIGHLIGHTINFOS_OFFSET UNITYSDK_OFFSET(0x10C2C20)
#define CHARACTERVISUAL_APPLYAREASPAWNED_OFFSET UNITYSDK_OFFSET(0x10C2C30)
#define CHARACTERVISUAL_UPDATE_OFFSET UNITYSDK_OFFSET(0x10C2D20)
#define CHARACTERVISUAL_GET_INSKILLRANGEHIGHLIGHTINFOS_OFFSET UNITYSDK_OFFSET(0x10C2D60)
#define CHARACTERVISUAL_SET_COUNTLOGICEFFECTCATEGORY_OFFSET UNITYSDK_OFFSET(0x10C2D70)
#define CHARACTERVISUAL_SET_INSKILLRANGEHIGHLIGHTINFOS_OFFSET UNITYSDK_OFFSET(0x10C2D90)
#define CHARACTERVISUAL_GET_COUNTLOGICEFFECTCATEGORY_OFFSET UNITYSDK_OFFSET(0x10C2DB0)
#define CHARACTERVISUAL_REFRESHHIGHLIGHTUISETTING_OFFSET UNITYSDK_OFFSET(0x10C2DC0)
#define CHARACTERVISUAL__PLAYDEADSHADER_G__CORELEASERESOURCEAFTERVOICE|262_1_OFFSET UNITYSDK_OFFSET(0x10C28D0)
#define CHARACTERVISUAL_GET_ISUSINGIK_OFFSET UNITYSDK_OFFSET(0x10C2E50)
#define CHARACTERVISUAL_DEAD_OFFSET UNITYSDK_OFFSET(0x10C2E60)
#define CHARACTERVISUAL_GETSTATLOGICAPPLICATIONGAUGE_OFFSET UNITYSDK_OFFSET(0x10C2E70)
#define CHARACTERVISUAL_SET_SKILLHIGHLIGHTED_OFFSET UNITYSDK_OFFSET(0x10C3180)
#define CHARACTERVISUAL_ADDSYNCUI_OFFSET UNITYSDK_OFFSET(0x10BFEE0)
#define CHARACTERVISUAL_SET_FLOATERDISTANCEFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x10C3190)
#define CHARACTERVISUAL_PLAYSKILLTIMELINE_OFFSET UNITYSDK_OFFSET(0x10C31A0)
#define CHARACTERVISUAL__LOADSKILLTIMELINEINDEXDICTIONARY_G__SETSKILLINDEX|165_0_OFFSET UNITYSDK_OFFSET(0x10C2580)
#define CHARACTERVISUAL_GET_ROPEVISUAL_OFFSET UNITYSDK_OFFSET(0x10C32F0)
#define CHARACTERVISUAL_PLAYEXSKILL_OFFSET UNITYSDK_OFFSET(0x10C3300)
#define CHARACTERVISUAL_CHECKCOMMANDINSTANTMOVEPOSITIONRESET_OFFSET UNITYSDK_OFFSET(0x10C3610)
#define CHARACTERVISUAL_SET_TSAINTERACTIONVISUAL_OFFSET UNITYSDK_OFFSET(0x10C37A0)
#define CHARACTERVISUAL_APPLYSTATUSADDED_OFFSET UNITYSDK_OFFSET(0x10C37C0)
#define CHARACTERVISUAL_PROCESSHIDECHARACTER_OFFSET UNITYSDK_OFFSET(0x10C3850)
#define CHARACTERVISUAL_GET_LOOKTARGET_OFFSET UNITYSDK_OFFSET(0x10C39F0)
#define CHARACTERVISUAL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10C3A00)
#define CHARACTERVISUAL_SET_COMBATEMOJI_OFFSET UNITYSDK_OFFSET(0x10C3C30)
#define CHARACTERVISUAL_INITIALIZEANIMATOR_OFFSET UNITYSDK_OFFSET(0x10C3C50)
#define CHARACTERVISUAL_PLAYTSSINTERACTANIMATION_OFFSET UNITYSDK_OFFSET(0x10C3CE0)
#define CHARACTERVISUAL_COTURRETROTATETRACKING_OFFSET UNITYSDK_OFFSET(0x10C1B20)
#define CHARACTERVISUAL_COPLAYTSSINTERACTANIMATION_OFFSET UNITYSDK_OFFSET(0x10C3F30)
#define CHARACTERVISUAL_PLAYADAPTIONEMOJI_OFFSET UNITYSDK_OFFSET(0x10C3FB0)
#define CHARACTERVISUAL_APPLYSTATUSREMOVED_OFFSET UNITYSDK_OFFSET(0x10C4150)
#define CHARACTERVISUAL_BATTLECACHE_LOGICEFFECTCOUNTLOGICEFFECTEXPIRED_OFFSET UNITYSDK_OFFSET(0x10C4160)
#define CHARACTERVISUAL_SETVISIBILITY_OFFSET UNITYSDK_OFFSET(0x10C4410)
#define CHARACTERVISUAL_BATTLECACHE_STATLOGICAPPLICATIONGAUGELOGICEFFECTEXPIRED_OFFSET UNITYSDK_OFFSET(0x10C4720)
#define CHARACTERVISUAL_GET_ONFORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x10C4A80)
#define CHARACTERVISUAL_BATTLECACHE_LOGICEFFECTEXPIRED_OFFSET UNITYSDK_OFFSET(0x10C4A90)
#define CHARACTERVISUAL_TIMELINESETUP_OFFSET UNITYSDK_OFFSET(0x10C4C10)
#define CHARACTERVISUAL_COSTARTINTERACTIONWITHTSS_OFFSET UNITYSDK_OFFSET(0x10C4DE0)
#define CHARACTERVISUAL_PROCESSDEFEATACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x10C4E60)
#define CHARACTERVISUAL_APPLYHITRESULT_OFFSET UNITYSDK_OFFSET(0x10C50B0)
#define CHARACTERVISUAL_APPLYLOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x10C5390)
#define CHARACTERVISUAL_FORCESYNCTRANSFORM_OFFSET UNITYSDK_OFFSET(0x10C5F40)
#define CHARACTERVISUAL_GET_PUBLICSKILLSPEECHBUBBLE_OFFSET UNITYSDK_OFFSET(0x10C6000)
#define CHARACTERVISUAL_GETSHADERANIMATIONMATLIST_OFFSET UNITYSDK_OFFSET(0x10C6010)
#define CHARACTERVISUAL__APPLYPHASECHANGED_B__197_0_OFFSET UNITYSDK_OFFSET(0x10C6300)
#define CHARACTERVISUAL_APPLYNORMALATTACKSPAWNED_OFFSET UNITYSDK_OFFSET(0x10C6640)
#define CHARACTERVISUAL_CHECKFORMCONVERSIONDEFAULT_OFFSET UNITYSDK_OFFSET(0x10C6790)
#define CHARACTERVISUAL_SET_ONFORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x10C68C0)
#define CHARACTERVISUAL_PROCESSRELEASEFORMACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x10C68E0)
#define CHARACTERVISUAL_BUFFICONSBASE.ISYNCABLE.REMOVESYNCUI_OFFSET UNITYSDK_OFFSET(0x10C68F0)
#define CHARACTERVISUAL_APPLYCOVERSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x10C6970)
#define CHARACTERVISUAL_SHOWDIALOGBUBBLE_OFFSET UNITYSDK_OFFSET(0x10C6A10)
#define CHARACTERVISUAL_GET_BATTLEACTORCOMPONENT_OFFSET UNITYSDK_OFFSET(0x10C6C20)
#define CHARACTERVISUAL_LOADCUTINTIMELINE_OFFSET UNITYSDK_OFFSET(0x10C6C30)
#define CHARACTERVISUAL_BATTLECACHE_GAMESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x10C6FE0)
#define CHARACTERVISUAL_APPLYREVIVED_OFFSET UNITYSDK_OFFSET(0x10C7210)
#define CHARACTERVISUAL_COWAITPARTICLESTOP_OFFSET UNITYSDK_OFFSET(0x10C7430)
#define CHARACTERVISUAL_APPLYGROUNDNODECHANGED_OFFSET UNITYSDK_OFFSET(0x10C74A0)
#define CHARACTERVISUAL_GET_TSAINTERACTIONVISUAL_OFFSET UNITYSDK_OFFSET(0x10C7790)
#define CHARACTERVISUAL_INITIK_OFFSET UNITYSDK_OFFSET(0x10C77A0)
#define CHARACTERVISUAL_SET_ROPEVISUAL_OFFSET UNITYSDK_OFFSET(0x10C78D0)
#define CHARACTERVISUAL_PLAYPUBLICSKILL_OFFSET UNITYSDK_OFFSET(0x10C78F0)
#define CHARACTERVISUAL_ONCHANGEDBARRIEROBSTACLECOVER_OFFSET UNITYSDK_OFFSET(0x10C7D60)
#define CHARACTERVISUAL_BATTLECACHE_HPRATIOBOUNDARYGAUGEEFFECTEXPIRED_OFFSET UNITYSDK_OFFSET(0x10C7E10)
#define CHARACTERVISUAL_PROCESSANIMATORSKIP_OFFSET UNITYSDK_OFFSET(0x10C7FA0)
#define CHARACTERVISUAL_ONANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x10C8060)
#define CHARACTERVISUAL_SET_RENDERERS_OFFSET UNITYSDK_OFFSET(0x10C8070)
#define CHARACTERVISUAL_RELEASE_OFFSET UNITYSDK_OFFSET(0x10BF7E0)
#define CHARACTERVISUAL_BATTLECACHE_STATUSLEVELINDICATORLOGICEFFECTEXPIRED_OFFSET UNITYSDK_OFFSET(0x10C8090)
#define CHARACTERVISUAL_PLAYDEADSHADER_OFFSET UNITYSDK_OFFSET(0x10B09E0)
#define CHARACTERVISUAL_SETRENDERERSHADOWSOFF_OFFSET UNITYSDK_OFFSET(0x10C85D0)
#define CHARACTERVISUAL_REGISTERWITHCAMERA_OFFSET UNITYSDK_OFFSET(0x10C8730)
#define CHARACTERVISUAL_SET_ONCROWDCONTROLGAUGEEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x10C8830)
#define CHARACTERVISUAL_SETSTATUSLEVELINDICATORASYNC_OFFSET UNITYSDK_OFFSET(0x10C5DA0)
#define CHARACTERVISUAL_APPLYACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x10C8850)
#define CHARACTERVISUAL_PLAYBOSSPHASEBGM_OFFSET UNITYSDK_OFFSET(0x10C10E0)
#define CHARACTERVISUAL_SET_LOOKTARGET_OFFSET UNITYSDK_OFFSET(0x10C99F0)
#define CHARACTERVISUAL_ONSKILLTARGETDAMAGEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x10C9A10)
#define CHARACTERVISUAL_COPLAYIDLE_OFFSET UNITYSDK_OFFSET(0x10C71A0)
#define CHARACTERVISUAL_SET_HASHIDECHARACTERLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x10C9AA0)
#define CHARACTERVISUAL_PLAYEVACUATION_OFFSET UNITYSDK_OFFSET(0x10C9AB0)
#define CHARACTERVISUAL_COVEROBSTACLEDESTROYED_OFFSET UNITYSDK_OFFSET(0x10C9C90)
#define CHARACTERVISUAL_AWAKE_OFFSET UNITYSDK_OFFSET(0x10C9CA0)
#define CHARACTERVISUAL_APPLYACTIONINTERRUPTED_OFFSET UNITYSDK_OFFSET(0x10C9D40)
#define CHARACTERVISUAL_INITIALIZERENDERERS_OFFSET UNITYSDK_OFFSET(0x10C9D70)
#define CHARACTERVISUAL_BATTLECACHE_STAGETOPOGRAPHYCHANGED_OFFSET UNITYSDK_OFFSET(0x10C9E70)
#define CHARACTERVISUAL__PLAYDEADSHADER_G__RELEASERESOURCE|262_2_OFFSET UNITYSDK_OFFSET(0x10C8410)
#define CHARACTERVISUAL__SHOWDIALOGBUBBLE_B__259_0_OFFSET UNITYSDK_OFFSET(0x10C9EA0)
#define CHARACTERVISUAL_GET_FLOATERDISTANCEFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x10C9EC0)
#define CHARACTERVISUAL_UPDATEDEBUFFCOUNTGAUGE_OFFSET UNITYSDK_OFFSET(0x10C4370)
#define CHARACTERVISUAL_LOADCUTINTIMELINEINDEX_OFFSET UNITYSDK_OFFSET(0x10C9ED0)
#define CHARACTERVISUAL_SET_ONEXSKILLCARDREDRAWGAUGEEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x10CA040)
#define CHARACTERVISUAL_SET_SELECTSKILLTARGETHIGHLIGHTINFOS_OFFSET UNITYSDK_OFFSET(0x10CA060)
#define CHARACTERVISUAL_APPLYLIFEGAIN_OFFSET UNITYSDK_OFFSET(0x10CA080)
#define CHARACTERVISUAL_INITCOMBATEMOJI_OFFSET UNITYSDK_OFFSET(0x10C7390)
#define CHARACTERVISUAL_OFFHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x10CA130)
#define CHARACTERVISUAL_PLAYOPTIMELINE_OFFSET UNITYSDK_OFFSET(0x10C9750)
#define CHARACTERVISUAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x10CA1C0)
#define CHARACTERVISUAL__PLAYPUBLICSKILL_B__202_0_OFFSET UNITYSDK_OFFSET(0x10CB290)
#define CHARACTERVISUAL_APPLYBARRIERHITRESULT_OFFSET UNITYSDK_OFFSET(0x10CB2B0)
#define CHARACTERVISUAL_PLAYAPPEARANCETIMELINE_OFFSET UNITYSDK_OFFSET(0x10CB550)
#define CHARACTERVISUAL_BUFFICONSBASE.ISYNCABLE.ADDSYNCUI_OFFSET UNITYSDK_OFFSET(0x10CB670)
#define CHARACTERVISUAL_GET_ICHARACTER_OFFSET UNITYSDK_OFFSET(0x10CB860)
#define CHARACTERVISUAL_ONINSKILLRANGEHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x10CB870)
#define CHARACTERVISUAL_GET_ANIMATIONSPEEDSOURCE_OFFSET UNITYSDK_OFFSET(0x10CB950)
#define CHARACTERVISUAL__STARTTURRETROTATETRACKING_B__267_0_OFFSET UNITYSDK_OFFSET(0x10CB960)
#define CHARACTERVISUAL_SET_BATTLEACTORCOMPONENT_OFFSET UNITYSDK_OFFSET(0x10CB970)
#define CHARACTERVISUAL_GET_ROPEAPPEARCOROUTINE_OFFSET UNITYSDK_OFFSET(0x10CB990)
#define CHARACTERVISUAL_CLEARINTERRUPTEFFECT_OFFSET UNITYSDK_OFFSET(0x10CB9A0)
#define CHARACTERVISUAL_COOPENOUT_OFFSET UNITYSDK_OFFSET(0x10C04F0)
#define CHARACTERVISUAL_SET_ROPEAPPEARCOROUTINE_OFFSET UNITYSDK_OFFSET(0x10CB9D0)
#define CHARACTERVISUAL_GET_HPBAR_OFFSET UNITYSDK_OFFSET(0x10CB9F0)
#define CHARACTERVISUAL_SET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x10CBA00)
#define CHARACTERVISUAL_GET_HASHIDECHARACTERLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x10CBA20)
#define CHARACTERVISUAL_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x10CBA30)
#define CHARACTERVISUAL_SET_DIALOGBUBBLE_OFFSET UNITYSDK_OFFSET(0x10CBA90)
#define CHARACTERVISUAL_SETDIRECTIONIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x10CBAB0)
#define CHARACTERVISUAL_STOPPLAYERSKILLCUTINTIMELINE_OFFSET UNITYSDK_OFFSET(0x10CBB30)
#define CHARACTERVISUAL_APPLYBEAMSPAWNED_OFFSET UNITYSDK_OFFSET(0x10CBBB0)
#define CHARACTERVISUAL_GET_COMBATEMOJI_OFFSET UNITYSDK_OFFSET(0x10CBD00)
#define CHARACTERVISUAL_APPLYTIMELINEPLAYTRACKENABLED_OFFSET UNITYSDK_OFFSET(0x10CBD10)
#define CHARACTERVISUAL_INITIALIZEFORSUBSTITUTEINFORMCONVERSION_OFFSET UNITYSDK_OFFSET(0x10CC2A0)
#define CHARACTERVISUAL_APPLYBARRIERLOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x10CC2E0)
#define CHARACTERVISUAL_GET_RENDERERS_OFFSET UNITYSDK_OFFSET(0x10CC4C0)
#define CHARACTERVISUAL_APPLYIMMUNE_OFFSET UNITYSDK_OFFSET(0x10CC4D0)
#define CHARACTERVISUAL_SETEXCLUSIVEHPBARASYNC_OFFSET UNITYSDK_OFFSET(0x10C5E70)
#define CHARACTERVISUAL_APPLYFORMCONVERSION_OFFSET UNITYSDK_OFFSET(0x10CC510)
#define CHARACTERVISUAL_ONTSADYINGSTARTED_OFFSET UNITYSDK_OFFSET(0x10CC6E0)
#define CHARACTERVISUAL_GET_HASMOVEVOICE_OFFSET UNITYSDK_OFFSET(0x10CC740)
#define CHARACTERVISUAL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10CC750)
#define CHARACTERVISUAL_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x10CC8C0)
#define CHARACTERVISUAL_GET_ONEXSKILLCARDREDRAWGAUGEEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x10CC8D0)
#define CHARACTERVISUAL_SET_HPBAR_OFFSET UNITYSDK_OFFSET(0x10CC8E0)
#define CHARACTERVISUAL_APPLYPROJECTILESPAWNED_OFFSET UNITYSDK_OFFSET(0x10CC900)
#define CHARACTERVISUAL_ONSKILLTARGETHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x10CD230)
#define CHARACTERVISUAL_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x10CD310)
#define CHARACTERVISUAL_APPLYSHIELDHEAL_OFFSET UNITYSDK_OFFSET(0x10CD320)
#define CHARACTERVISUAL_STOPPLAYERSKILLTIMELINE_OFFSET UNITYSDK_OFFSET(0x10CD3D0)

	inline static constexpr unsigned int CharacterVisual_TypeDefinitionIndex = 971;

	class CharacterVisual : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* BodyBone; // 0x50
		::UnityEngine::GameObject* HeadBone; // 0x58
		::UnityEngine::GameObject* ShotBone; // 0x60
		::UnityEngine::GameObject* Shot2Bone; // 0x68
		::UnityEngine::GameObject* Shot3Bone; // 0x70
		::UnityEngine::GameObject* ExtraBone; // 0x78
		::UnityEngine::GameObject* Extra2Bone; // 0x80
		::UnityEngine::GameObject* Extra3Bone; // 0x88
		::MX::Visual::Battles::ForwardVector* BodyBoneForward; // 0x90
		::MX::Visual::Battles::ForwardVector* HeadBoneForward; // 0x94
		::MX::Visual::Battles::ForwardVector* ShotBoneForward; // 0x98
		::MX::Visual::Battles::ForwardVector* Shot2BoneForward; // 0x9C
		::MX::Visual::Battles::ForwardVector* Shot3BoneForward; // 0xA0
		::UnityEngine::GameObject* TurretHorizontal; // 0xA8
		::UnityEngine::GameObject* TurretVertical; // 0xB0
		::MX::Visual::Battles::ForwardVector* TurretHorizontalForward; // 0xB8
		::MX::Visual::Battles::ForwardVector* TurretVerticalForward; // 0xBC
		TurretRotation* turretRotation; // 0xC0
		::System::Boolean DeathShaderAfterAniClip; // 0xC8
		::System::Boolean DisableDeathShader; // 0xC9
		ShaderBaseAnimationData* DeathShaderAniOverride; // 0xD0
		UIDamageFloater* uiDamageFloater; // 0xD8
		UIHPBar* uiHpBar; // 0xE0
		::UnityEngine::Animator* _Animator_k__BackingField; // 0xE8
		TSAInteractionVisual* _TSAInteractionVisual_k__BackingField; // 0xF0
		::Il2CppArray<::System::Object*>* AnimationControlOfFormList; // 0xF8
		::UnityEngine::Coroutine* hitAnimationCoroutine; // 0x100
		::Il2CppArray<::System::Object*>* hitShaderAnimationMats; // 0x108
		::Il2CppArray<::System::Object*>* deadShaderAnimationMats; // 0x110
		::UnityEngine::Playables::PlayableDirector* PlayableDirector; // 0x118
		::Il2CppArray<::System::Object*>* NormalAttackSkillPlayableAssetList; // 0x120
		::Il2CppArray<::System::Object*>* PublicSkillPlayableAssetList; // 0x128
		::Il2CppArray<::System::Object*>* ExSkillPlayableAssetList; // 0x130
		Il2CppObject* exSkillCutInBindingData; // 0x138
		Il2CppObject* exSkillCutInPlayableAssetList; // 0x140
		Il2CppObject* exSkillCutInTimelineList; // 0x148
		Il2CppObject* skillTimelineIndexDictionary; // 0x150
		Il2CppObject* cutinTimelineIndexDictionary; // 0x158
		::UnityEngine::Playables::PlayableAsset* OPPlayableAsset; // 0x160
		::UnityEngine::Playables::PlayableAsset* AppearancePlayableAsset; // 0x168
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* _Character_k__BackingField; // 0x170
		EvacuationRopeVisual* _RopeVisual_k__BackingField; // 0x178
		::UnityEngine::Coroutine* _RopeAppearCoroutine_k__BackingField; // 0x180
		::MX::Visual::Battles::BattleActorComponent* _BattleActorComponent_k__BackingField; // 0x188
		CharacterVisual* _AnimationSpeedSource_k__BackingField; // 0x190
		::UnityEngine::Transform* _LookTarget_k__BackingField; // 0x198
		HPWidgetBase* _HPBar_k__BackingField; // 0x1A0
		Emoji* _CombatEmoji_k__BackingField; // 0x1A8
		SpeechBubble* _PublicSkillSpeechBubble_k__BackingField; // 0x1B0
		DialogBubble* _DialogBubble_k__BackingField; // 0x1B8
		::System::Single _FloaterDistanceFromCamera_k__BackingField; // 0x1C0
		Il2CppObject* _Renderers_k__BackingField; // 0x1C8
		::System::Boolean _SkillHighlighted_k__BackingField; // 0x1D0
		Il2CppObject* _SelectSkillTargetHighlightInfos_k__BackingField; // 0x1D8
		Il2CppObject* _InSkillRangeHighlightInfos_k__BackingField; // 0x1E0
		Il2CppObject* _OnCrowdControlGaugeEffectHit_k__BackingField; // 0x1E8
		::MX::Logic::Skills::LogicEffects::CountLogicEffectCategoryEffect* _CountLogicEffectCategory_k__BackingField; // 0x1F0
		Il2CppObject* _OnExSkillCardRedrawGaugeEffectHit_k__BackingField; // 0x1F8
		Il2CppObject* _OnBarrierObstacleCoverChanged_k__BackingField; // 0x200
		Il2CppObject* _OnForceAppliedStatChangeFromSingleTargetEffectHit_k__BackingField; // 0x208
		BattleGroundCamera* groundCamera; // 0x210
		CharacterEffectPlayer* CharacterEffectPlayer; // 0x218
		StatusEffectPlayer* statusEffectPlayer; // 0x220
		BuffIconPlayer* buffIconPlayer; // 0x228
		SkillTimelinePlayer* skillTimelinePlayer; // 0x230
		EvacuationHandler* evacuationHandler; // 0x238
		::System::Boolean checkHeightOffset; // 0x240
		::Il2CppArray<::System::Object*>* TransformToApplyHeightOffsetList; // 0x248
		::UnityEngine::Vector3* heightOffsetVector; // 0x250
		::System::Boolean hideHpBar; // 0x25C
		::System::Boolean isDeadCalled; // 0x25D
		::System::Boolean isTSAInteracting; // 0x25E
		::System::Int32 tsaInteractEndFrame; // 0x260
		::UnityEngine::Coroutine* tssInteractionAnimationCoroutine; // 0x268
		::UnityEngine::Coroutine* turretRotateCoroutine; // 0x270
		::System::Boolean IsCharacterVisualReplacedInFormConversion; // 0x278
		Il2CppObject* ComponentToDisableInFormConversion; // 0x280
		Il2CppObject* GameObjectToDeactivateInFormConversion; // 0x288
		CharacterVisual* CharacterPrefabToReplaceInFormConversion; // 0x290
		::System::Boolean _HasHideCharacterLogicEffect_k__BackingField; // 0x298
		::System::Boolean isCharacterChangeStatLogicApplicationGaugeExpiredEventSubscribed; // 0x299
		::System::Boolean isStatusLevelIndicatorExpiredEventSubscribed; // 0x29A
		SetBranchSkill* setbranchSkill; // 0x2A0

		::System::Void set_AnimationSpeedSource(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SET_ANIMATIONSPEEDSOURCE_OFFSET))(arg, nullptr);
		}

		DialogBubble* get_DialogBubble()
		{
			return ((DialogBubble*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_DIALOGBUBBLE_OFFSET))(nullptr);
		}

		::System::Void set_PublicSkillSpeechBubble(SpeechBubble* arg)
		{
			((::System::Void(*)(SpeechBubble*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SET_PUBLICSKILLSPEECHBUBBLE_OFFSET))(arg, nullptr);
		}

		::System::Void Evacuate(::MX::Logic::BattleEntities::ActionChangedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_EVACUATE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshSyncUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_REFRESHSYNCUI_OFFSET))(nullptr);
		}

		Il2CppObject* get_OnCrowdControlGaugeEffectHit()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_ONCROWDCONTROLGAUGEEFFECTHIT_OFFSET))(nullptr);
		}

		::System::Void ApplyLogicEffectResist(::MX::Logic::BattleEntities::StatusResistEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::StatusResistEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYLOGICEFFECTRESIST_OFFSET))(arg, nullptr);
		}

		::System::Void _ApplyActionChanged_b__191_0(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL__APPLYACTIONCHANGED_B__191_0_OFFSET))(arg, nullptr);
		}

		::System::Void UnloadCutinTimeline(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_UNLOADCUTINTIMELINE_OFFSET))(arg, nullptr);
		}

		::System::Void PlayHitShader()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_PLAYHITSHADER_OFFSET))(nullptr);
		}

		::System::Void SetTSSInteractionTransform(TSSVisual* arg)
		{
			((::System::Void(*)(TSSVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SETTSSINTERACTIONTRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::Void OpenOut(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_OPENOUT_OFFSET))(arg, nullptr);
		}

		::System::Void _ProcessHideCharacter_g__ChangeLayer|220_0(::UnityEngine::Transform* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL__PROCESSHIDECHARACTER_G__CHANGELAYER|220_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplyProjectileCollided(::MX::Logic::Battles::ProjectileCollidedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::ProjectileCollidedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYPROJECTILECOLLIDED_OFFSET))(arg, nullptr);
		}

		::System::Void InitHpBar()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_INITHPBAR_OFFSET))(nullptr);
		}

		::System::Void ApplyPhaseChanged(::MX::Logic::Battles::CharacterPhaseChangedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::CharacterPhaseChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYPHASECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseAddressable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_RELEASEADDRESSABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_OnBarrierObstacleCoverChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SET_ONBARRIEROBSTACLECOVERCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSkillCutinPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_ISSKILLCUTINPLAYING_OFFSET))(nullptr);
		}

		::System::Void StopPlayableDirector()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_STOPPLAYABLEDIRECTOR_OFFSET))(nullptr);
		}

		::System::Void set_Animator(::UnityEngine::Animator* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SET_ANIMATOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetFormConversionIdleMotionInBattleFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SETFORMCONVERSIONIDLEMOTIONINBATTLEFINISHED_OFFSET))(nullptr);
		}

		::System::Void ApplyAuraSpawned(::MX::Logic::Battles::AuraEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::AuraEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYAURASPAWNED_OFFSET))(arg, nullptr);
		}

		::System::Void StartTurretRotateTracking(::MX::Logic::Actions::TimelineSkillAction* arg)
		{
			((::System::Void(*)(::MX::Logic::Actions::TimelineSkillAction*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_STARTTURRETROTATETRACKING_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInVictoryState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_ISINVICTORYSTATE_OFFSET))(nullptr);
		}

		::System::Void CreateEntities(::MX::Visual::Battles::BattleActorComponent* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleActorComponent*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_CREATEENTITIES_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyInteractionWithTSS(::MX::Logic::Battles::CharacterInteractWithTSSEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::CharacterInteractWithTSSEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYINTERACTIONWITHTSS_OFFSET))(arg, nullptr);
		}

		::System::Void LoadSkillTimelineIndexDictionary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_LOADSKILLTIMELINEINDEXDICTIONARY_OFFSET))(nullptr);
		}

		::System::Void _PlayDeadShader_b__262_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL__PLAYDEADSHADER_B__262_0_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid* SetChangeStatLogicApplicationGaugeAsync(::MX::Logic::BattleEntities::GaugeEffectInfo* arg, ::System::String* str)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid*(*)(::MX::Logic::BattleEntities::GaugeEffectInfo*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SETCHANGESTATLOGICAPPLICATIONGAUGEASYNC_OFFSET))(arg, str, nullptr);
		}

		::System::Void BattleCache_ExclusiveHPBarLogicEffectExpired(::System::Object* arg, ::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_BATTLECACHE_EXCLUSIVEHPBARLOGICEFFECTEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlaySkillAnimation(::MX::Logic::BattleEntities::BehaviorType* arg, ::MX::Logic::Actions::ActionState* arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, ::MX::Logic::Actions::ActionState*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_PLAYSKILLANIMATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_SkillHighlighted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_SKILLHIGHLIGHTED_OFFSET))(nullptr);
		}

		Il2CppObject* get_OnBarrierObstacleCoverChanged()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_ONBARRIEROBSTACLECOVERCHANGED_OFFSET))(nullptr);
		}

		Il2CppObject* get_SelectSkillTargetHighlightInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_SELECTSKILLTARGETHIGHLIGHTINFOS_OFFSET))(nullptr);
		}

		::System::Void ApplyAreaSpawned(::MX::Logic::Battles::EffectAreaSpawnedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EffectAreaSpawnedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYAREASPAWNED_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_UPDATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_InSkillRangeHighlightInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_INSKILLRANGEHIGHLIGHTINFOS_OFFSET))(nullptr);
		}

		::System::Void set_CountLogicEffectCategory(::MX::Logic::Skills::LogicEffects::CountLogicEffectCategoryEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::CountLogicEffectCategoryEffect*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SET_COUNTLOGICEFFECTCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Void set_InSkillRangeHighlightInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SET_INSKILLRANGEHIGHLIGHTINFOS_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::LogicEffects::CountLogicEffectCategoryEffect* get_CountLogicEffectCategory()
		{
			return ((::MX::Logic::Skills::LogicEffects::CountLogicEffectCategoryEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_COUNTLOGICEFFECTCATEGORY_OFFSET))(nullptr);
		}

		::System::Void RefreshHighlightUISetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_REFRESHHIGHLIGHTUISETTING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _PlayDeadShader_g__CoReleaseResourceAfterVoice|262_1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL__PLAYDEADSHADER_G__CORELEASERESOURCEAFTERVOICE|262_1_OFFSET))(nullptr);
		}

		::System::Boolean get_isUsingIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_ISUSINGIK_OFFSET))(nullptr);
		}

		::System::Void Dead()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_DEAD_OFFSET))(nullptr);
		}

		ChangeStatLogicApplicationGauge* GetStatLogicApplicationGauge()
		{
			return ((ChangeStatLogicApplicationGauge*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GETSTATLOGICAPPLICATIONGAUGE_OFFSET))(nullptr);
		}

		::System::Void set_SkillHighlighted(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SET_SKILLHIGHLIGHTED_OFFSET))(arg, nullptr);
		}

		::System::Void AddSyncUI(BuffIconsBase* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(BuffIconsBase*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_ADDSYNCUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_FloaterDistanceFromCamera(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SET_FLOATERDISTANCEFROMCAMERA_OFFSET))(arg, nullptr);
		}

		::System::Void PlaySkillTimeline(::UnityEngine::Playables::PlayableAsset* arg, ::MX::Logic::BattleEntities::ActionChangedEventArgs* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_PLAYSKILLTIMELINE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _LoadSkillTimelineIndexDictionary_g__SetSkillIndex|165_0(::MX::Data::CharacterSkillListKey* arg, ::MX::Data::Excel::CharacterSkillListExcel* arg2)
		{
			((::System::Void(*)(::MX::Data::CharacterSkillListKey*, ::MX::Data::Excel::CharacterSkillListExcel*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL__LOADSKILLTIMELINEINDEXDICTIONARY_G__SETSKILLINDEX|165_0_OFFSET))(arg, arg2, nullptr);
		}

		EvacuationRopeVisual* get_RopeVisual()
		{
			return ((EvacuationRopeVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_ROPEVISUAL_OFFSET))(nullptr);
		}

		::System::Void PlayExSkill(::UnityEngine::Playables::PlayableAsset* arg, ::UnityEngine::Playables::PlayableAsset* arg2, ::MX::Logic::Skills::SkillDataPack* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Playables::PlayableAsset*, ::MX::Logic::Skills::SkillDataPack*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_PLAYEXSKILL_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void CheckCommandInstantMovePositionReset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_CHECKCOMMANDINSTANTMOVEPOSITIONRESET_OFFSET))(nullptr);
		}

		::System::Void set_TSAInteractionVisual(TSAInteractionVisual* arg)
		{
			((::System::Void(*)(TSAInteractionVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SET_TSAINTERACTIONVISUAL_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyStatusAdded(::MX::Logic::BattleEntities::StatusAddedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::StatusAddedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYSTATUSADDED_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessHideCharacter(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_PROCESSHIDECHARACTER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_LookTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_LOOKTARGET_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void set_CombatEmoji(Emoji* arg)
		{
			((::System::Void(*)(Emoji*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SET_COMBATEMOJI_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeAnimator()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_INITIALIZEANIMATOR_OFFSET))(nullptr);
		}

		::System::Void PlayTSSInteractAnimation(::MX::Logic::BattleEntities::BehaviorType* arg, ::MX::Logic::Actions::ActionState* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, ::MX::Logic::Actions::ActionState*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_PLAYTSSINTERACTANIMATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoTurretRotateTracking(::MX::Logic::Actions::TimelineSkillAction* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::Actions::TimelineSkillAction*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_COTURRETROTATETRACKING_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayTSSInteractAnimation(::MX::Logic::BattleEntities::BehaviorType* arg, ::MX::Logic::Actions::ActionState* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::BattleEntities::BehaviorType*, ::MX::Logic::Actions::ActionState*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_COPLAYTSSINTERACTANIMATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlayAdaptionEmoji()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_PLAYADAPTIONEMOJI_OFFSET))(nullptr);
		}

		::System::Void ApplyStatusRemoved(::MX::Logic::BattleEntities::StatusRemovedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::StatusRemovedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYSTATUSREMOVED_OFFSET))(arg, nullptr);
		}

		::System::Void BattleCache_LogicEffectCountLogicEffectExpired(::System::Object* arg, ::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_BATTLECACHE_LOGICEFFECTCOUNTLOGICEFFECTEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetVisibility(::System::Boolean arg, InvisibleFlag* arg2, InvisibleFlag* arg3)
		{
			((::System::Void(*)(::System::Boolean, InvisibleFlag*, InvisibleFlag*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SETVISIBILITY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void BattleCache_StatLogicApplicationGaugeLogicEffectExpired(::System::Object* arg, ::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_BATTLECACHE_STATLOGICAPPLICATIONGAUGELOGICEFFECTEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_OnForceAppliedStatChangeFromSingleTargetEffectHit()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_ONFORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTHIT_OFFSET))(nullptr);
		}

		::System::Void BattleCache_LogicEffectExpired(::System::Object* arg, ::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_BATTLECACHE_LOGICEFFECTEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void TimelineSetup(::UnityEngine::Playables::PlayableAsset* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_TIMELINESETUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoStartInteractionWithTSS(TSSVisual* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(TSSVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_COSTARTINTERACTIONWITHTSS_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessDefeatActionChanged(::MX::Logic::BattleEntities::ActionChangedEventArgs* arg, bool&* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::ActionChangedEventArgs*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_PROCESSDEFEATACTIONCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplyHitResult(::MX::Logic::Battles::AttackEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::AttackEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYHITRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyLogicEffectHit(::MX::Logic::Battles::LogicEffectHitEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYLOGICEFFECTHIT_OFFSET))(arg, nullptr);
		}

		::System::Void ForceSyncTransform()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_FORCESYNCTRANSFORM_OFFSET))(nullptr);
		}

		SpeechBubble* get_PublicSkillSpeechBubble()
		{
			return ((SpeechBubble*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_PUBLICSKILLSPEECHBUBBLE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetShaderAnimationMatList(Il2CppObject* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GETSHADERANIMATIONMATLIST_OFFSET))(arg, nullptr);
		}

		::System::Void _ApplyPhaseChanged_b__197_0(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL__APPLYPHASECHANGED_B__197_0_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyNormalAttackSpawned(::MX::Logic::Battles::NormalAttackSpawnedEventArgs* arg, EntityVisual* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::NormalAttackSpawnedEventArgs*, EntityVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYNORMALATTACKSPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CheckFormConversionDefault()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_CHECKFORMCONVERSIONDEFAULT_OFFSET))(nullptr);
		}

		::System::Void set_OnForceAppliedStatChangeFromSingleTargetEffectHit(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SET_ONFORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTHIT_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessReleaseFormActionChanged(bool&* arg)
		{
			((::System::Void(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_PROCESSRELEASEFORMACTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void BuffIconsBase.ISyncable.RemoveSyncUI(BuffIconsBase* arg)
		{
			((::System::Void(*)(BuffIconsBase*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_BUFFICONSBASE.ISYNCABLE.REMOVESYNCUI_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyCoverStateChanged(::MX::Logic::Battles::CoverStateChangedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::CoverStateChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYCOVERSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void ShowDialogBubble(::System::String* str, ::FlatData::BattleDialogType* arg, ::System::Int64 arg2, ::UnityEngine::Vector3* arg3)
		{
			((::System::Void(*)(::System::String*, ::FlatData::BattleDialogType*, ::System::Int64, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SHOWDIALOGBUBBLE_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::MX::Visual::Battles::BattleActorComponent* get_BattleActorComponent()
		{
			return ((::MX::Visual::Battles::BattleActorComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_BATTLEACTORCOMPONENT_OFFSET))(nullptr);
		}

		::System::Void LoadCutinTimeline()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_LOADCUTINTIMELINE_OFFSET))(nullptr);
		}

		::System::Void BattleCache_GameStateChanged(::System::Object* arg, ::MX::Logic::Battles::GameStateEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::GameStateEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_BATTLECACHE_GAMESTATECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplyRevived(::System::Object* arg, ::MX::Logic::Battles::HeroReviveEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::HeroReviveEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYREVIVED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoWaitParticleStop()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_COWAITPARTICLESTOP_OFFSET))(nullptr);
		}

		::System::Void ApplyGroundNodeChanged(::MX::Logic::Battles::CharacterGroundNodeChangedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::CharacterGroundNodeChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYGROUNDNODECHANGED_OFFSET))(arg, nullptr);
		}

		TSAInteractionVisual* get_TSAInteractionVisual()
		{
			return ((TSAInteractionVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_TSAINTERACTIONVISUAL_OFFSET))(nullptr);
		}

		::System::Void InitIK()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_INITIK_OFFSET))(nullptr);
		}

		::System::Void set_RopeVisual(EvacuationRopeVisual* arg)
		{
			((::System::Void(*)(EvacuationRopeVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SET_ROPEVISUAL_OFFSET))(arg, nullptr);
		}

		::System::Void PlayPublicSkill(::MX::Logic::BattleEntities::ActionChangedEventArgs* arg, ::MX::Logic::Skills::SkillSpecification* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_PLAYPUBLICSKILL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnChangedBarrierObstacleCover(::System::Object* arg, ::MX::Logic::BattleEntities::BarrierObstacle* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::BarrierObstacle*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_ONCHANGEDBARRIEROBSTACLECOVER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void BattleCache_HPRatioBoundaryGaugeEffectExpired(::System::Object* arg, ::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_BATTLECACHE_HPRATIOBOUNDARYGAUGEEFFECTEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ProcessAnimatorSkip(::MX::Logic::BattleEntities::BehaviorType* arg, ::MX::Logic::Actions::ActionState* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, ::MX::Logic::Actions::ActionState*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_PROCESSANIMATORSKIP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnAnimationEvent(::UnityEngine::AnimationEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationEvent*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_ONANIMATIONEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_Renderers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SET_RENDERERS_OFFSET))(arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_RELEASE_OFFSET))(nullptr);
		}

		::System::Void BattleCache_StatusLevelIndicatorLogicEffectExpired(::System::Object* arg, ::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_BATTLECACHE_STATUSLEVELINDICATORLOGICEFFECTEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlayDeadShader()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_PLAYDEADSHADER_OFFSET))(nullptr);
		}

		::System::Void SetRendererShadowsOff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SETRENDERERSHADOWSOFF_OFFSET))(nullptr);
		}

		::System::Void RegisterWithCamera()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_REGISTERWITHCAMERA_OFFSET))(nullptr);
		}

		::System::Void set_OnCrowdControlGaugeEffectHit(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SET_ONCROWDCONTROLGAUGEEFFECTHIT_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid* SetStatusLevelIndicatorAsync(::MX::Logic::BattleEntities::StatusLevelEffectInfo* arg, ::System::String* str)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid*(*)(::MX::Logic::BattleEntities::StatusLevelEffectInfo*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SETSTATUSLEVELINDICATORASYNC_OFFSET))(arg, str, nullptr);
		}

		::System::Void ApplyActionChanged(::MX::Logic::BattleEntities::ActionChangedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYACTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void PlayBossPhaseBGM(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_PLAYBOSSPHASEBGM_OFFSET))(arg, nullptr);
		}

		::System::Void set_LookTarget(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SET_LOOKTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void OnSkillTargetDamageAttribute(::System::Boolean arg, ::FlatData::DamageAttribute* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::DamageAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_ONSKILLTARGETDAMAGEATTRIBUTE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayIdle()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_COPLAYIDLE_OFFSET))(nullptr);
		}

		::System::Void set_HasHideCharacterLogicEffect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SET_HASHIDECHARACTERLOGICEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void PlayEvacuation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_PLAYEVACUATION_OFFSET))(nullptr);
		}

		::System::Void CoverObstacleDestroyed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_COVEROBSTACLEDESTROYED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void ApplyActionInterrupted(::MX::Logic::BattleEntities::ActionChangedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYACTIONINTERRUPTED_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeRenderers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_INITIALIZERENDERERS_OFFSET))(nullptr);
		}

		::System::Void BattleCache_StageTopographyChanged(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_BATTLECACHE_STAGETOPOGRAPHYCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _PlayDeadShader_g__ReleaseResource|262_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL__PLAYDEADSHADER_G__RELEASERESOURCE|262_2_OFFSET))(nullptr);
		}

		::System::Void _ShowDialogBubble_b__259_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL__SHOWDIALOGBUBBLE_B__259_0_OFFSET))(nullptr);
		}

		::System::Single get_FloaterDistanceFromCamera()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_FLOATERDISTANCEFROMCAMERA_OFFSET))(nullptr);
		}

		::System::Void UpdateDebuffCountGauge()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_UPDATEDEBUFFCOUNTGAUGE_OFFSET))(nullptr);
		}

		::System::Void LoadCutinTimelineIndex(::System::Int32 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_LOADCUTINTIMELINEINDEX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_OnExSkillCardRedrawGaugeEffectHit(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SET_ONEXSKILLCARDREDRAWGAUGEEFFECTHIT_OFFSET))(arg, nullptr);
		}

		::System::Void set_SelectSkillTargetHighlightInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SET_SELECTSKILLTARGETHIGHLIGHTINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyLifeGain(::MX::Logic::Battles::LifeGainEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::LifeGainEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYLIFEGAIN_OFFSET))(arg, nullptr);
		}

		::System::Void InitCombatEmoji()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_INITCOMBATEMOJI_OFFSET))(nullptr);
		}

		::System::Void OffHighlight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_OFFHIGHLIGHT_OFFSET))(nullptr);
		}

		::System::Void PlayOPTimeLine(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_PLAYOPTIMELINE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Visual::Battles::BattleActorComponent* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Visual::Battles::BattleActorComponent*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void _PlayPublicSkill_b__202_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL__PLAYPUBLICSKILL_B__202_0_OFFSET))(nullptr);
		}

		::System::Void ApplyBarrierHitResult(::MX::Logic::Battles::AttackEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::AttackEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYBARRIERHITRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void PlayAppearanceTimeLine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_PLAYAPPEARANCETIMELINE_OFFSET))(nullptr);
		}

		::System::Void BuffIconsBase.ISyncable.AddSyncUI(BuffIconsBase* arg)
		{
			((::System::Void(*)(BuffIconsBase*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_BUFFICONSBASE.ISYNCABLE.ADDSYNCUI_OFFSET))(arg, nullptr);
		}

		ICharacter* get_ICharacter()
		{
			return ((ICharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_ICHARACTER_OFFSET))(nullptr);
		}

		::System::Void OnInSkillRangeHighlight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_ONINSKILLRANGEHIGHLIGHT_OFFSET))(nullptr);
		}

		CharacterVisual* get_AnimationSpeedSource()
		{
			return ((CharacterVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_ANIMATIONSPEEDSOURCE_OFFSET))(nullptr);
		}

		::System::Void _StartTurretRotateTracking_b__267_0(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL__STARTTURRETROTATETRACKING_B__267_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_BattleActorComponent(::MX::Visual::Battles::BattleActorComponent* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleActorComponent*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SET_BATTLEACTORCOMPONENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Coroutine* get_RopeAppearCoroutine()
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_ROPEAPPEARCOROUTINE_OFFSET))(nullptr);
		}

		::System::Void ClearInterruptEffect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_CLEARINTERRUPTEFFECT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoOpenOut()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_COOPENOUT_OFFSET))(nullptr);
		}

		::System::Void set_RopeAppearCoroutine(::UnityEngine::Coroutine* arg)
		{
			((::System::Void(*)(::UnityEngine::Coroutine*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SET_ROPEAPPEARCOROUTINE_OFFSET))(arg, nullptr);
		}

		HPWidgetBase* get_HPBar()
		{
			return ((HPWidgetBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_HPBAR_OFFSET))(nullptr);
		}

		::System::Void set_Character(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SET_CHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasHideCharacterLogicEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_HASHIDECHARACTERLOGICEFFECT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_ISVISIBLE_OFFSET))(nullptr);
		}

		::System::Void set_DialogBubble(DialogBubble* arg)
		{
			((::System::Void(*)(DialogBubble*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SET_DIALOGBUBBLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetDirectionImmediately(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SETDIRECTIONIMMEDIATELY_OFFSET))(arg, nullptr);
		}

		::System::Void StopPlayerSkillCutinTimeline()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_STOPPLAYERSKILLCUTINTIMELINE_OFFSET))(nullptr);
		}

		::System::Void ApplyBeamSpawned(::MX::Logic::Battles::BeamEventArgs* arg, EntityVisual* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::BeamEventArgs*, EntityVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYBEAMSPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		Emoji* get_CombatEmoji()
		{
			return ((Emoji*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_COMBATEMOJI_OFFSET))(nullptr);
		}

		::System::Void ApplyTimelinePlayTrackEnabled(::MX::Logic::Battles::TimelinePlayTrackEnabledEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::TimelinePlayTrackEnabledEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYTIMELINEPLAYTRACKENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeForSubstituteInFormConversion(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, CharacterVisual* arg2, ::MX::Visual::Battles::BattleActorComponent* arg3, HPWidgetBase* arg4, HPWidgetBase* arg5)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, CharacterVisual*, ::MX::Visual::Battles::BattleActorComponent*, HPWidgetBase*, HPWidgetBase*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_INITIALIZEFORSUBSTITUTEINFORMCONVERSION_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void ApplyBarrierLogicEffectHit(::MX::Logic::Battles::LogicEffectHitEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYBARRIERLOGICEFFECTHIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Renderers()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_RENDERERS_OFFSET))(nullptr);
		}

		::System::Void ApplyImmune(::MX::Logic::Battles::LogicEffectImmuneEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::LogicEffectImmuneEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYIMMUNE_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid* SetExclusiveHPBarAsync(::MX::Logic::Skills::LogicEffects::UseExclusiveHPBarEffect* arg, ::System::String* str)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid*(*)(::MX::Logic::Skills::LogicEffects::UseExclusiveHPBarEffect*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SETEXCLUSIVEHPBARASYNC_OFFSET))(arg, str, nullptr);
		}

		::System::Void ApplyFormConversion(::MX::Logic::Battles::CharacterFormConvertedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::CharacterFormConvertedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYFORMCONVERSION_OFFSET))(arg, nullptr);
		}

		::System::Void OnTSADyingStarted(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_ONTSADYINGSTARTED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_hasMoveVoice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_HASMOVEVOICE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_LATEUPDATE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* get_Character()
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_CHARACTER_OFFSET))(nullptr);
		}

		Il2CppObject* get_OnExSkillCardRedrawGaugeEffectHit()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_ONEXSKILLCARDREDRAWGAUGEEFFECTHIT_OFFSET))(nullptr);
		}

		::System::Void set_HPBar(HPWidgetBase* arg)
		{
			((::System::Void(*)(HPWidgetBase*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_SET_HPBAR_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyProjectileSpawned(::MX::Logic::Battles::ProjectileSpawnedEventArgs* arg, EntityVisual* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::ProjectileSpawnedEventArgs*, EntityVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYPROJECTILESPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnSkillTargetHighlight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_ONSKILLTARGETHIGHLIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::Animator* get_Animator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_GET_ANIMATOR_OFFSET))(nullptr);
		}

		::System::Void ApplyShieldHeal(::MX::Logic::Battles::CharacterShieldHealEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::CharacterShieldHealEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_APPLYSHIELDHEAL_OFFSET))(arg, nullptr);
		}

		::System::Void StopPlayerSkillTimeline()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERVISUAL_STOPPLAYERSKILLTIMELINE_OFFSET))(nullptr);
		}

	};

