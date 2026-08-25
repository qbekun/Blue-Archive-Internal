#pragma once
#include "unitysdk.h"

namespace MX::AppData::DAO::Battle { class EntityEffectDAO; }
class EntityVisual;
namespace MX::Logic::BattleEntities { class IEntityBody; }
namespace UnityEngine { class Vector3; }
class IInterruptEffect;
class ParticleInterrupt;
namespace MX::Visual::Battles { class BattleActorComponent; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace UnityEngine { class Transform; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::AppData::DAO::Battle { class VisualEffectDAO; }
namespace UnityEngine { class ParticleSystem; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::AppData::DAO::Battle { class VisualSkillEntityDAO; }
namespace MX::Logic::BattleEntities { class Beam; }
namespace FlatData { class EntityMaterialType; }

#define SKILLACTOREFFECTPLAYER_COPLAYENTITYEFFECT_OFFSET UNITYSDK_OFFSET(0x120BC30)
#define SKILLACTOREFFECTPLAYER_COPLAYACTIONEFFECTS_OFFSET UNITYSDK_OFFSET(0x120BE00)
#define SKILLACTOREFFECTPLAYER_PLAYAREASHOTEFFECT_OFFSET UNITYSDK_OFFSET(0x1209730)
#define SKILLACTOREFFECTPLAYER_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x120C010)
#define SKILLACTOREFFECTPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x120C030)
#define SKILLACTOREFFECTPLAYER_ONPARTICLECREATED_OFFSET UNITYSDK_OFFSET(0x120C310)
#define SKILLACTOREFFECTPLAYER_COSHOTBULLET_OFFSET UNITYSDK_OFFSET(0x120CBF0)
#define SKILLACTOREFFECTPLAYER_PLAYSKILLACTIONEFFECTS_OFFSET UNITYSDK_OFFSET(0x120CD80)
#define SKILLACTOREFFECTPLAYER_PLAYREMOVEEFFECTATCANCEL_OFFSET UNITYSDK_OFFSET(0x12091D0)
#define SKILLACTOREFFECTPLAYER_COPLAYAREASHOTEFFECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x120BED0)
#define SKILLACTOREFFECTPLAYER_PLAYBULLETSHOTEFFECT_OFFSET UNITYSDK_OFFSET(0x1207780)
#define SKILLACTOREFFECTPLAYER_COSHOTBEAM_OFFSET UNITYSDK_OFFSET(0x120D390)
#define SKILLACTOREFFECTPLAYER_PLAYBEAMSHOTEFFECT_OFFSET UNITYSDK_OFFSET(0x1208520)
#define SKILLACTOREFFECTPLAYER_GET_MATERIALTYPE_OFFSET UNITYSDK_OFFSET(0x120D4F0)

	inline static constexpr unsigned int SkillActorEffectPlayer_TypeDefinitionIndex = 990;

	class SkillActorEffectPlayer : public Il2CppObject
	{
	public:
		Il2CppObject* NormalAttackVisualCacheDictionary; // 0x68

		::System::Collections::IEnumerator* CoPlayEntityEffect(::MX::AppData::DAO::Battle::EntityEffectDAO* arg, EntityVisual* arg2, Il2CppObject* arg3, ::MX::Logic::BattleEntities::IEntityBody* arg4, Il2CppObject* arg5, ::UnityEngine::Vector3* arg6, ::UnityEngine::Vector3* arg7, IInterruptEffect* arg8, ParticleInterrupt* arg9, Il2CppObject* arg10, Il2CppObject* arg11, Il2CppObject* arg12, Il2CppObject* arg13)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::AppData::DAO::Battle::EntityEffectDAO*, EntityVisual*, Il2CppObject*, ::MX::Logic::BattleEntities::IEntityBody*, Il2CppObject*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, IInterruptEffect*, ParticleInterrupt*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLACTOREFFECTPLAYER_COPLAYENTITYEFFECT_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayActionEffects(::MX::Visual::Battles::BattleActorComponent* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2, Il2CppObject* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Visual::Battles::BattleActorComponent*, ::MX::Logic::BattleEntities::BehaviorType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLACTOREFFECTPLAYER_COPLAYACTIONEFFECTS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void PlayAreaShotEffect(::MX::Logic::Skills::SkillSpecification* arg, ::System::String* str, EntityVisual* arg2, Il2CppObject* arg3, ::MX::Logic::BattleEntities::IEntityBody* arg4, IInterruptEffect* arg5, ParticleInterrupt* arg6, Il2CppObject* arg7, ::System::Boolean arg8)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillSpecification*, ::System::String*, EntityVisual*, Il2CppObject*, ::MX::Logic::BattleEntities::IEntityBody*, IInterruptEffect*, ParticleInterrupt*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SKILLACTOREFFECTPLAYER_PLAYAREASHOTEFFECT_OFFSET))(arg, str, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::UnityEngine::Transform* get_Transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLACTOREFFECTPLAYER_GET_TRANSFORM_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, EntityVisual* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, EntityVisual*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLACTOREFFECTPLAYER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnParticleCreated(::MX::AppData::DAO::Battle::VisualEffectDAO* arg, ::UnityEngine::ParticleSystem* arg2, ::MX::Logic::BattleEntities::IEntityBody* arg3, Il2CppObject* arg4, Il2CppObject* arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(::MX::AppData::DAO::Battle::VisualEffectDAO*, ::UnityEngine::ParticleSystem*, ::MX::Logic::BattleEntities::IEntityBody*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SKILLACTOREFFECTPLAYER_ONPARTICLECREATED_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Collections::IEnumerator* CoShotBullet(::MX::Visual::Battles::BattleActorComponent* arg, ::MX::AppData::DAO::Battle::EntityEffectDAO* arg2, ::MX::Logic::BattleEntities::EntityId* arg3, ::MX::AppData::DAO::Battle::VisualSkillEntityDAO* arg4, EntityVisual* arg5, Il2CppObject* arg6, ::MX::Logic::BattleEntities::IEntityBody* arg7, Il2CppObject* arg8, ::UnityEngine::Vector3* arg9, ::System::Int32 arg10, ::System::Int32 arg11, IInterruptEffect* arg12)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Visual::Battles::BattleActorComponent*, ::MX::AppData::DAO::Battle::EntityEffectDAO*, ::MX::Logic::BattleEntities::EntityId*, ::MX::AppData::DAO::Battle::VisualSkillEntityDAO*, EntityVisual*, Il2CppObject*, ::MX::Logic::BattleEntities::IEntityBody*, Il2CppObject*, ::UnityEngine::Vector3*, ::System::Int32, ::System::Int32, IInterruptEffect*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLACTOREFFECTPLAYER_COSHOTBULLET_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, nullptr);
		}

		::System::Void PlaySkillActionEffects(::MX::Visual::Battles::BattleActorComponent* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2, ::MX::Logic::Skills::SkillSpecification* arg3)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleActorComponent*, ::MX::Logic::BattleEntities::BehaviorType*, ::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLACTOREFFECTPLAYER_PLAYSKILLACTIONEFFECTS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void PlayRemoveEffectAtCancel(::MX::Logic::Skills::SkillSpecification* arg, ::System::String* str, EntityVisual* arg2, EntityVisual* arg3, Il2CppObject* arg4, ::MX::Logic::BattleEntities::IEntityBody* arg5, ParticleInterrupt* arg6)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillSpecification*, ::System::String*, EntityVisual*, EntityVisual*, Il2CppObject*, ::MX::Logic::BattleEntities::IEntityBody*, ParticleInterrupt*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLACTOREFFECTPLAYER_PLAYREMOVEEFFECTATCANCEL_OFFSET))(arg, str, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayAreaShotEffectInternal(::MX::Logic::Skills::SkillSpecification* arg, ::System::String* str, EntityVisual* arg2, Il2CppObject* arg3, ::MX::Logic::BattleEntities::IEntityBody* arg4, IInterruptEffect* arg5, ParticleInterrupt* arg6, Il2CppObject* arg7, ::System::Boolean arg8)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::String*, EntityVisual*, Il2CppObject*, ::MX::Logic::BattleEntities::IEntityBody*, IInterruptEffect*, ParticleInterrupt*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SKILLACTOREFFECTPLAYER_COPLAYAREASHOTEFFECTINTERNAL_OFFSET))(arg, str, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void PlayBulletShotEffect(::MX::Visual::Battles::BattleActorComponent* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Skills::SkillSpecification* arg3, ::System::String* str, ::System::Int32 arg4, ::System::Int32 arg5, EntityVisual* arg6, Il2CppObject* arg7, ::MX::Logic::BattleEntities::IEntityBody* arg8, Il2CppObject* arg9, ::UnityEngine::Vector3* arg10, IInterruptEffect* arg11)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleActorComponent*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Skills::SkillSpecification*, ::System::String*, ::System::Int32, ::System::Int32, EntityVisual*, Il2CppObject*, ::MX::Logic::BattleEntities::IEntityBody*, Il2CppObject*, ::UnityEngine::Vector3*, IInterruptEffect*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLACTOREFFECTPLAYER_PLAYBULLETSHOTEFFECT_OFFSET))(arg, arg2, arg3, str, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, nullptr);
		}

		::System::Collections::IEnumerator* CoShotBeam(::MX::Logic::BattleEntities::Beam* arg, ::MX::Visual::Battles::BattleActorComponent* arg2, ::MX::AppData::DAO::Battle::EntityEffectDAO* arg3, ::MX::Logic::BattleEntities::EntityId* arg4, ::MX::AppData::DAO::Battle::VisualSkillEntityDAO* arg5, EntityVisual* arg6, Il2CppObject* arg7, Il2CppObject* arg8, ::UnityEngine::Vector3* arg9, ::System::Int32 arg10, ::System::Int32 arg11, IInterruptEffect* arg12)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::BattleEntities::Beam*, ::MX::Visual::Battles::BattleActorComponent*, ::MX::AppData::DAO::Battle::EntityEffectDAO*, ::MX::Logic::BattleEntities::EntityId*, ::MX::AppData::DAO::Battle::VisualSkillEntityDAO*, EntityVisual*, Il2CppObject*, Il2CppObject*, ::UnityEngine::Vector3*, ::System::Int32, ::System::Int32, IInterruptEffect*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLACTOREFFECTPLAYER_COSHOTBEAM_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, nullptr);
		}

		::System::Void PlayBeamShotEffect(::MX::Logic::BattleEntities::Beam* arg, ::MX::Visual::Battles::BattleActorComponent* arg2, ::MX::Logic::BattleEntities::EntityId* arg3, ::MX::Logic::Skills::SkillSpecification* arg4, ::System::String* str, ::System::Int32 arg5, ::System::Int32 arg6, EntityVisual* arg7, Il2CppObject* arg8, IInterruptEffect* arg9)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::Beam*, ::MX::Visual::Battles::BattleActorComponent*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Skills::SkillSpecification*, ::System::String*, ::System::Int32, ::System::Int32, EntityVisual*, Il2CppObject*, IInterruptEffect*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLACTOREFFECTPLAYER_PLAYBEAMSHOTEFFECT_OFFSET))(arg, arg2, arg3, arg4, str, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::FlatData::EntityMaterialType* get_MaterialType()
		{
			return ((::FlatData::EntityMaterialType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLACTOREFFECTPLAYER_GET_MATERIALTYPE_OFFSET))(nullptr);
		}

	};

