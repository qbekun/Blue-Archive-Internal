#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillActor; }
class SkillActorEffectPlayer;
namespace MX::Visual::Battles { class BattleActorComponent; }
namespace MX::Logic::BattleEntities { class ActionChangedEventArgs; }
namespace MX::Logic::Battles { class ProjectileCollidedEventArgs; }
namespace MX::Logic::Battles { class AuraEventArgs; }
namespace MX::Logic::Battles { class ProjectileSpawnedEventArgs; }
class EntityVisual;
namespace MX::Logic::Battles { class BeamEventArgs; }
namespace MX::Logic::Battles { class NormalAttackSpawnedEventArgs; }
namespace MX::Logic::Battles { class EffectAreaSpawnedEventArgs; }

#define SKILLACTORVISUAL_APPLYACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x13C35B0)
#define SKILLACTORVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x13C3670)
#define SKILLACTORVISUAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x13C3680)
#define SKILLACTORVISUAL_APPLYPROJECTILECOLLIDED_OFFSET UNITYSDK_OFFSET(0x13C3810)
#define SKILLACTORVISUAL_APPLYAURASPAWNED_OFFSET UNITYSDK_OFFSET(0x13C3820)
#define SKILLACTORVISUAL_APPLYPROJECTILESPAWNED_OFFSET UNITYSDK_OFFSET(0x13C3A80)
#define SKILLACTORVISUAL_SET_SKILLACTOR_OFFSET UNITYSDK_OFFSET(0x13C42A0)
#define SKILLACTORVISUAL_APPLYBEAMSPAWNED_OFFSET UNITYSDK_OFFSET(0x13C42B0)
#define SKILLACTORVISUAL_APPLYNORMALATTACKSPAWNED_OFFSET UNITYSDK_OFFSET(0x13C4400)
#define SKILLACTORVISUAL_GET_SKILLACTOREFFECTPLAYER_OFFSET UNITYSDK_OFFSET(0x13C4560)
#define SKILLACTORVISUAL_APPLYAREASPAWNED_OFFSET UNITYSDK_OFFSET(0x13C4570)
#define SKILLACTORVISUAL_GET_SKILLACTOR_OFFSET UNITYSDK_OFFSET(0x13C4850)

	inline static constexpr unsigned int SkillActorVisual_TypeDefinitionIndex = 1045;

	class SkillActorVisual : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::SkillActor* _SkillActor_k__BackingField; // 0x50
		SkillActorEffectPlayer* effectPlayer; // 0x58
		::MX::Visual::Battles::BattleActorComponent* battleActorComponent; // 0x60

		::System::Void ApplyActionChanged(::MX::Logic::BattleEntities::ActionChangedEventArgs* arg, ::MX::Visual::Battles::BattleActorComponent* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::MX::Visual::Battles::BattleActorComponent*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLACTORVISUAL_APPLYACTIONCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLACTORVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Visual::Battles::BattleActorComponent* arg, ::MX::Logic::BattleEntities::SkillActor* arg2)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleActorComponent*, ::MX::Logic::BattleEntities::SkillActor*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLACTORVISUAL_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplyProjectileCollided(::MX::Logic::Battles::ProjectileCollidedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::ProjectileCollidedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLACTORVISUAL_APPLYPROJECTILECOLLIDED_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyAuraSpawned(::MX::Logic::Battles::AuraEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::AuraEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLACTORVISUAL_APPLYAURASPAWNED_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyProjectileSpawned(::MX::Logic::Battles::ProjectileSpawnedEventArgs* arg, EntityVisual* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::ProjectileSpawnedEventArgs*, EntityVisual*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLACTORVISUAL_APPLYPROJECTILESPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_SkillActor(::MX::Logic::BattleEntities::SkillActor* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillActor*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLACTORVISUAL_SET_SKILLACTOR_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyBeamSpawned(::MX::Logic::Battles::BeamEventArgs* arg, EntityVisual* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::BeamEventArgs*, EntityVisual*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLACTORVISUAL_APPLYBEAMSPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplyNormalAttackSpawned(::MX::Logic::Battles::NormalAttackSpawnedEventArgs* arg, EntityVisual* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::NormalAttackSpawnedEventArgs*, EntityVisual*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLACTORVISUAL_APPLYNORMALATTACKSPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		SkillActorEffectPlayer* get_SkillActorEffectPlayer()
		{
			return ((SkillActorEffectPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLACTORVISUAL_GET_SKILLACTOREFFECTPLAYER_OFFSET))(nullptr);
		}

		::System::Void ApplyAreaSpawned(::MX::Logic::Battles::EffectAreaSpawnedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EffectAreaSpawnedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLACTORVISUAL_APPLYAREASPAWNED_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::SkillActor* get_SkillActor()
		{
			return ((::MX::Logic::BattleEntities::SkillActor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLACTORVISUAL_GET_SKILLACTOR_OFFSET))(nullptr);
		}

	};

