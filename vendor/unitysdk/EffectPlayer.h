#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
class ParticleManager;
namespace FlatData { class EntityMaterialType; }
namespace UnityEngine { class Transform; }
class EntityVisual;
namespace MX::Data { class SkillData; }
namespace MX::Visual::Battles { class BattleSceneHandler; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Vector3; }
namespace MX::Logic::Skills { class SkillSpecification; }
class ParticleInterrupt;
namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }
class IInterruptEffect;
namespace MX::Logic::Skills::LogicEffects { class AccumulateEffect; }
namespace MX::Logic::Skills::LogicEffects { class AccumulateDamageFromTargetsEffect; }
namespace MX::Logic::BattleEntities { class IEntityBody; }
namespace FlatData { class EffectBone; }
namespace MX::AppData::DAO::Battle { class VisualEffectDAO; }
namespace MX::AppData::DAO::Battle { class ParticleEffectDAO; }
namespace MX::AppData::DAO::Battle { class EntityEffectDAO; }
namespace MX::AppData::DAO::Battle { class LogicEffectVisualDAO; }
namespace MX::Visual::Data { class PositionSetting; }
namespace UnityEngine { class GameObject; }
namespace MX::Logic::BattleEntities { class BehaviorType; }

#define EFFECTPLAYER_GET_BATTLE_OFFSET UNITYSDK_OFFSET(0x1213700)
#define EFFECTPLAYER_GET_MATERIALTYPE_OFFSET UNITYSDK_OFFSET(0x1213710)
#define EFFECTPLAYER_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1213720)
#define EFFECTPLAYER_GET_OWNERVISUAL_OFFSET UNITYSDK_OFFSET(0x1213730)
#define EFFECTPLAYER_ADD_ONINTERRUPTEDBYCASTERACTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1213740)
#define EFFECTPLAYER_REMOVE_ONINTERRUPTEDBYCASTERACTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x12137E0)
#define EFFECTPLAYER_GET_BATTLESCENEHANDLER_OFFSET UNITYSDK_OFFSET(0x1213880)
#define EFFECTPLAYER_GET_HITEFFECTCOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x1213890)
#define EFFECTPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x120C0E0)
#define EFFECTPLAYER_ISCURRENTPLAYINGPARTICLE_OFFSET UNITYSDK_OFFSET(0x120AAE0)
#define EFFECTPLAYER_HIDEANDREMOVECURRENTPLAYINGPARTICLE_OFFSET UNITYSDK_OFFSET(0x12138A0)
#define EFFECTPLAYER_COCHECKSTACKEFFECT_OFFSET UNITYSDK_OFFSET(0x12138C0)
#define EFFECTPLAYER_COCHECKLOGICEFFECTDISPEL_OFFSET UNITYSDK_OFFSET(0x12139D0)
#define EFFECTPLAYER_PLAYCOMMONLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1213AC0)
#define EFFECTPLAYER_PLAYACCUMULATEEFFECT_OFFSET UNITYSDK_OFFSET(0x1214960)
#define EFFECTPLAYER_COPLAYACCUMULATEEFFECT_OFFSET UNITYSDK_OFFSET(0x1214CA0)
#define EFFECTPLAYER_PLAYACCUMULATEDAMAGEFROMTARGETSVISUAL_OFFSET UNITYSDK_OFFSET(0x1214DB0)
#define EFFECTPLAYER_COPLAYACCUMULATEDAMAGEFROMTARGETSVISUAL_OFFSET UNITYSDK_OFFSET(0x1214F30)
#define EFFECTPLAYER_PLAYLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x12041E0)
#define EFFECTPLAYER_COPLAYENDLOGICEFFECTDELAYED_OFFSET UNITYSDK_OFFSET(0x1214800)
#define EFFECTPLAYER_COPLAYENDLOGICEFFECTDELAYED_OFFSET UNITYSDK_OFFSET(0x1215040)
#define EFFECTPLAYER_COPLAYREMOVEDEFFECT_OFFSET UNITYSDK_OFFSET(0x12148B0)
#define EFFECTPLAYER_COPLAYREMOVEDEFFECT_OFFSET UNITYSDK_OFFSET(0x1215200)
#define EFFECTPLAYER_PLAYHITEFFECT_OFFSET UNITYSDK_OFFSET(0x1203760)
#define EFFECTPLAYER_PLAYHITEFFECT_OFFSET UNITYSDK_OFFSET(0x1202AC0)
#define EFFECTPLAYER_PROCESSINTERRUPTEFFECTBYACTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1215390)
#define EFFECTPLAYER_CLEARINTERRUPTEFFECTBYACTIONCHANGELISTENER_OFFSET UNITYSDK_OFFSET(0x1201C40)
#define EFFECTPLAYER_INTERRUPTANDCLEARPARTICLEINTRRUPTWITHPARENTLIST_OFFSET UNITYSDK_OFFSET(0x12153B0)
#define EFFECTPLAYER_PROCESSEFFECTCOUNTLIMITCHECK_OFFSET UNITYSDK_OFFSET(0x1215480)
#define EFFECTPLAYER_ONPARTICLEREMOVED_OFFSET UNITYSDK_OFFSET(0x1215550)
#define EFFECTPLAYER_PLAYEFFECT_OFFSET UNITYSDK_OFFSET(0x120D150)
#define EFFECTPLAYER_PLAYEFFECT_OFFSET UNITYSDK_OFFSET(0x1214210)
#define EFFECTPLAYER_PLAYEFFECT_OFFSET UNITYSDK_OFFSET(0x1215600)
#define EFFECTPLAYER_FINDENTITYEFFECTVISUAL_OFFSET UNITYSDK_OFFSET(0x120CFA0)
#define EFFECTPLAYER_PLAYPARTICLEEFFECT_OFFSET UNITYSDK_OFFSET(0x12156E0)
#define EFFECTPLAYER_FINDLOGICEFFECTVISUAL_OFFSET UNITYSDK_OFFSET(0x1214AE0)
#define EFFECTPLAYER_GETPOSITIONSETTINGAPPLIED_OFFSET UNITYSDK_OFFSET(0x12159A0)
#define EFFECTPLAYER_GETEFFECTFORWARD_OFFSET UNITYSDK_OFFSET(0x121BEF0)
#define EFFECTPLAYER_ADDLOOKATTARGETCOMPOENT_OFFSET UNITYSDK_OFFSET(0x121C480)
#define EFFECTPLAYER_GETBONETRANSFORM_OFFSET UNITYSDK_OFFSET(0x121C330)
#define EFFECTPLAYER_GETSKILLINDEX_OFFSET UNITYSDK_OFFSET(0x121C490)
#define EFFECTPLAYER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x121C4B0)

	inline static constexpr unsigned int EffectPlayer_TypeDefinitionIndex = 1011;

	class EffectPlayer : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::Battle* _Battle_k__BackingField; // 0x10
		ParticleManager* particleManager; // 0x18
		::FlatData::EntityMaterialType* _MaterialType_k__BackingField; // 0x20
		::UnityEngine::Transform* _Transform_k__BackingField; // 0x28
		EntityVisual* _OwnerVisual_k__BackingField; // 0x30
		::System::EventHandler* OnInterruptedByCasterActionChange; // 0x38
		::MX::Data::SkillData* skillData; // 0x40
		Il2CppObject* ParticleIntrruptWithParentList; // 0x48
		::MX::Visual::Battles::BattleSceneHandler* _BattleSceneHandler_k__BackingField; // 0x50
		::System::Int32 _HitEffectCountLimit_k__BackingField; // 0x58
		Il2CppObject* HitEffectCountTable; // 0x60
		::System::UInt32 statusAddEffectHash; // 0x0
		::System::UInt32 statChangeEffectHash; // 0x4

		::MX::Logic::Battles::Battle* get_Battle()
		{
			return ((::MX::Logic::Battles::Battle*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_GET_BATTLE_OFFSET))(nullptr);
		}

		::FlatData::EntityMaterialType* get_MaterialType()
		{
			return ((::FlatData::EntityMaterialType*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_GET_MATERIALTYPE_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_Transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_GET_TRANSFORM_OFFSET))(nullptr);
		}

		EntityVisual* get_OwnerVisual()
		{
			return ((EntityVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_GET_OWNERVISUAL_OFFSET))(nullptr);
		}

		::System::Void add_OnInterruptedByCasterActionChange(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_ADD_ONINTERRUPTEDBYCASTERACTIONCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnInterruptedByCasterActionChange(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_REMOVE_ONINTERRUPTEDBYCASTERACTIONCHANGE_OFFSET))(arg, nullptr);
		}

		::MX::Visual::Battles::BattleSceneHandler* get_BattleSceneHandler()
		{
			return ((::MX::Visual::Battles::BattleSceneHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_GET_BATTLESCENEHANDLER_OFFSET))(nullptr);
		}

		::System::Int32 get_HitEffectCountLimit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_GET_HITEFFECTCOUNTLIMIT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, EntityVisual* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, EntityVisual*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsCurrentPlayingParticle(::UnityEngine::ParticleSystem* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_ISCURRENTPLAYINGPARTICLE_OFFSET))(arg, nullptr);
		}

		::System::Void HideAndRemoveCurrentPlayingParticle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_HIDEANDREMOVECURRENTPLAYINGPARTICLE_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* CoCheckStackEffect(EntityVisual* arg, EntityVisual* arg2, ::UnityEngine::Vector3* arg3, ::System::String* str, Il2CppObject* arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(EntityVisual*, EntityVisual*, ::UnityEngine::Vector3*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_COCHECKSTACKEFFECT_OFFSET))(arg, arg2, arg3, str, arg4, nullptr);
		}

		::System::Collections::IEnumerator* CoCheckLogicEffectDispel(::MX::Logic::Skills::SkillSpecification* arg, ::System::String* str, ::System::Int32 arg2, ParticleInterrupt* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::String*, ::System::Int32, ParticleInterrupt*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_COCHECKLOGICEFFECTDISPEL_OFFSET))(arg, str, arg2, arg3, nullptr);
		}

		::System::Void PlayCommonLogicEffect(::MX::Logic::Battles::LogicEffectHitEventArgs* arg, IInterruptEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::LogicEffectHitEventArgs*, IInterruptEffect*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_PLAYCOMMONLOGICEFFECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlayAccumulateEffect(::MX::Logic::Skills::LogicEffects::AccumulateEffect* arg, EntityVisual* arg2, EntityVisual* arg3, ::UnityEngine::Vector3* arg4)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::AccumulateEffect*, EntityVisual*, EntityVisual*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_PLAYACCUMULATEEFFECT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayAccumulateEffect(::MX::Logic::Skills::LogicEffects::AccumulateEffect* arg, Il2CppObject* arg2, EntityVisual* arg3, EntityVisual* arg4, ::UnityEngine::Vector3* arg5)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::Skills::LogicEffects::AccumulateEffect*, Il2CppObject*, EntityVisual*, EntityVisual*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_COPLAYACCUMULATEEFFECT_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void PlayAccumulateDamageFromTargetsVisual(::MX::Logic::Skills::LogicEffects::AccumulateDamageFromTargetsEffect* arg, EntityVisual* arg2, EntityVisual* arg3, ::UnityEngine::Vector3* arg4)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::AccumulateDamageFromTargetsEffect*, EntityVisual*, EntityVisual*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_PLAYACCUMULATEDAMAGEFROMTARGETSVISUAL_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayAccumulateDamageFromTargetsVisual(::MX::Logic::Skills::LogicEffects::AccumulateDamageFromTargetsEffect* arg, Il2CppObject* arg2, EntityVisual* arg3, EntityVisual* arg4, ::UnityEngine::Vector3* arg5)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::Skills::LogicEffects::AccumulateDamageFromTargetsEffect*, Il2CppObject*, EntityVisual*, EntityVisual*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_COPLAYACCUMULATEDAMAGEFROMTARGETSVISUAL_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void PlayLogicEffect(::MX::Logic::Skills::SkillSpecification* arg, ::System::String* str, EntityVisual* arg2, EntityVisual* arg3, ::MX::Logic::BattleEntities::IEntityBody* arg4, Il2CppObject* arg5, ::UnityEngine::Vector3* arg6, ::System::Single arg7, ::System::Int32 arg8, IInterruptEffect* arg9)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillSpecification*, ::System::String*, EntityVisual*, EntityVisual*, ::MX::Logic::BattleEntities::IEntityBody*, Il2CppObject*, ::UnityEngine::Vector3*, ::System::Single, ::System::Int32, IInterruptEffect*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_PLAYLOGICEFFECT_OFFSET))(arg, str, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayEndLogicEffectDelayed(::System::String* str, ::FlatData::EffectBone* arg, ParticleInterrupt* arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::FlatData::EffectBone*, ParticleInterrupt*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_COPLAYENDLOGICEFFECTDELAYED_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayEndLogicEffectDelayed(::MX::AppData::DAO::Battle::VisualEffectDAO* arg, EntityVisual* arg2, EntityVisual* arg3, ::MX::Logic::BattleEntities::IEntityBody* arg4, Il2CppObject* arg5, ::UnityEngine::Vector3* arg6, ::System::Single arg7, ParticleInterrupt* arg8)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::AppData::DAO::Battle::VisualEffectDAO*, EntityVisual*, EntityVisual*, ::MX::Logic::BattleEntities::IEntityBody*, Il2CppObject*, ::UnityEngine::Vector3*, ::System::Single, ParticleInterrupt*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_COPLAYENDLOGICEFFECTDELAYED_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayRemovedEffect(::System::String* str, ::FlatData::EffectBone* arg, ParticleInterrupt* arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::FlatData::EffectBone*, ParticleInterrupt*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_COPLAYREMOVEDEFFECT_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayRemovedEffect(::MX::AppData::DAO::Battle::VisualEffectDAO* arg, EntityVisual* arg2, EntityVisual* arg3, Il2CppObject* arg4, ::UnityEngine::Vector3* arg5, ::MX::Logic::BattleEntities::IEntityBody* arg6, ParticleInterrupt* arg7)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::AppData::DAO::Battle::VisualEffectDAO*, EntityVisual*, EntityVisual*, Il2CppObject*, ::UnityEngine::Vector3*, ::MX::Logic::BattleEntities::IEntityBody*, ParticleInterrupt*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_COPLAYREMOVEDEFFECT_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void PlayHitEffect(::MX::Logic::Skills::SkillSpecification* arg, ::System::String* str, EntityVisual* arg2, EntityVisual* arg3, Il2CppObject* arg4, ::UnityEngine::Vector3* arg5, ::UnityEngine::Vector3* arg6, ::UnityEngine::Vector3* arg7, ParticleInterrupt* arg8, ::System::Boolean arg9, ::System::Single arg10, IInterruptEffect* arg11, ::FlatData::EntityMaterialType* arg12)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillSpecification*, ::System::String*, EntityVisual*, EntityVisual*, Il2CppObject*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ParticleInterrupt*, ::System::Boolean, ::System::Single, IInterruptEffect*, ::FlatData::EntityMaterialType*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_PLAYHITEFFECT_OFFSET))(arg, str, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, nullptr);
		}

		::System::Void PlayHitEffect(::MX::Logic::Skills::SkillSpecification* arg, ::System::String* str, EntityVisual* arg2, EntityVisual* arg3, Il2CppObject* arg4, ::UnityEngine::Vector3* arg5, ::UnityEngine::Vector3* arg6, ::UnityEngine::Vector3* arg7, ParticleInterrupt* arg8, ::System::Boolean arg9, ::System::Single arg10, IInterruptEffect* arg11)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillSpecification*, ::System::String*, EntityVisual*, EntityVisual*, Il2CppObject*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ParticleInterrupt*, ::System::Boolean, ::System::Single, IInterruptEffect*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_PLAYHITEFFECT_OFFSET))(arg, str, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, nullptr);
		}

		::System::Void ProcessInterruptEffectByActionChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_PROCESSINTERRUPTEFFECTBYACTIONCHANGE_OFFSET))(nullptr);
		}

		::System::Void ClearInterruptEffectByActionChangeListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_CLEARINTERRUPTEFFECTBYACTIONCHANGELISTENER_OFFSET))(nullptr);
		}

		::System::Void InterruptAndClearParticleIntrruptWithParentList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_INTERRUPTANDCLEARPARTICLEINTRRUPTWITHPARENTLIST_OFFSET))(nullptr);
		}

		::System::Boolean ProcessEffectCountLimitCheck(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_PROCESSEFFECTCOUNTLIMITCHECK_OFFSET))(str, nullptr);
		}

		::System::Void OnParticleRemoved(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_ONPARTICLEREMOVED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayEffect(::MX::AppData::DAO::Battle::VisualEffectDAO* arg, EntityVisual* arg2, EntityVisual* arg3, Il2CppObject* arg4, ::MX::Logic::BattleEntities::IEntityBody* arg5, Il2CppObject* arg6, ::UnityEngine::Vector3* arg7, ::UnityEngine::Vector3* arg8, ::System::Single arg9, ParticleInterrupt* arg10, ::System::Single arg11, IInterruptEffect* arg12, Il2CppObject* arg13)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::AppData::DAO::Battle::VisualEffectDAO*, EntityVisual*, EntityVisual*, Il2CppObject*, ::MX::Logic::BattleEntities::IEntityBody*, Il2CppObject*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ParticleInterrupt*, ::System::Single, IInterruptEffect*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_PLAYEFFECT_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, nullptr);
		}

		::System::Void PlayEffect(::System::String* str, ::FlatData::EffectBone* arg, ParticleInterrupt* arg2, ::System::Boolean arg3, IInterruptEffect* arg4)
		{
			((::System::Void(*)(::System::String*, ::FlatData::EffectBone*, ParticleInterrupt*, ::System::Boolean, IInterruptEffect*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_PLAYEFFECT_OFFSET))(str, arg, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* PlayEffect(::MX::AppData::DAO::Battle::ParticleEffectDAO* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector3* arg3, Il2CppObject* arg4, ::System::Boolean arg5)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::AppData::DAO::Battle::ParticleEffectDAO*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_PLAYEFFECT_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::AppData::DAO::Battle::EntityEffectDAO* FindEntityEffectVisual(::System::String* str, ::System::String* str2)
		{
			return ((::MX::AppData::DAO::Battle::EntityEffectDAO*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_FINDENTITYEFFECTVISUAL_OFFSET))(str, str2, nullptr);
		}

		::System::Void PlayParticleEffect(::MX::Logic::Skills::SkillSpecification* arg, ::System::String* str, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector3* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillSpecification*, ::System::String*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_PLAYPARTICLEEFFECT_OFFSET))(arg, str, arg2, arg3, arg4, nullptr);
		}

		::MX::AppData::DAO::Battle::LogicEffectVisualDAO* FindLogicEffectVisual(::System::String* str, ::System::String* str2)
		{
			return ((::MX::AppData::DAO::Battle::LogicEffectVisualDAO*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_FINDLOGICEFFECTVISUAL_OFFSET))(str, str2, nullptr);
		}

		Il2CppObject* GetPositionSettingApplied(::MX::Logic::Battles::Battle* arg, ::MX::Visual::Data::PositionSetting* arg2, EntityVisual* arg3, EntityVisual* arg4, Il2CppObject* arg5, Il2CppObject* arg6, ::UnityEngine::Vector3* arg7, ::UnityEngine::Vector3* arg8, ::System::Single arg9, EntityVisual* arg10)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Visual::Data::PositionSetting*, EntityVisual*, EntityVisual*, Il2CppObject*, Il2CppObject*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, EntityVisual*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_GETPOSITIONSETTINGAPPLIED_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::UnityEngine::Vector3* GetEffectForward(::MX::Visual::Data::PositionSetting* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector3* arg4, ::UnityEngine::Vector3* arg5, ::UnityEngine::Vector3* arg6, ::UnityEngine::Vector3* arg7, ::UnityEngine::Vector3* arg8)
		{
			return ((::UnityEngine::Vector3*(*)(::MX::Visual::Data::PositionSetting*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_GETEFFECTFORWARD_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void AddLookAtTargetCompoent(::UnityEngine::GameObject* arg, ::UnityEngine::Transform* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector3* arg4)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_ADDLOOKATTARGETCOMPOENT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::UnityEngine::Transform* GetBoneTransform(::FlatData::EffectBone* arg, EntityVisual* arg2)
		{
			return ((::UnityEngine::Transform*(*)(::FlatData::EffectBone*, EntityVisual*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_GETBONETRANSFORM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetSkillIndex(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			return ((::System::Int32(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_GETSKILLINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTPLAYER_.CCTOR_OFFSET))(nullptr);
		}

	};

