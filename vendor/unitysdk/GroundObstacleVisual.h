#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class FxShake;
namespace MX::Logic::BattleEntities { class GroundObstacle; }
namespace MX::Audio { class AudioPlayer; }
class UIDamageFloater;
namespace UnityEngine { class Coroutine; }
class EffectPlayer;
class GroundNode;
namespace MX::Visual::Battles { class BattleActorComponent; }
namespace FlatData { class EntityMaterialType; }
namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }
namespace MX::Logic::BattleEntities { class StatusResistEventArgs; }
namespace FlatData { class DamageAttribute; }
namespace MX::Logic::Battles { class AttackEventArgs; }

#define GROUNDOBSTACLEVISUAL__COREMOVEOBSTACLE_B__57_0_OFFSET UNITYSDK_OFFSET(0x15A1700)
#define GROUNDOBSTACLEVISUAL_PLAYHITSHADER_OFFSET UNITYSDK_OFFSET(0x15A18C0)
#define GROUNDOBSTACLEVISUAL_MAKESHADERANIMATIONMATLIST_OFFSET UNITYSDK_OFFSET(0x15A1A00)
#define GROUNDOBSTACLEVISUAL_SET_SKILLHIGHLIGHTED_OFFSET UNITYSDK_OFFSET(0x15A1CE0)
#define GROUNDOBSTACLEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15A1CF0)
#define GROUNDOBSTACLEVISUAL_GET_DESTROYOBJECTRENDERER_OFFSET UNITYSDK_OFFSET(0x15A1D60)
#define GROUNDOBSTACLEVISUAL_GET_SELECTSKILLTARGETHIGHLIGHTINFOS_OFFSET UNITYSDK_OFFSET(0x15A1D70)
#define GROUNDOBSTACLEVISUAL_SET_IDLEOBJECTRENDERER_OFFSET UNITYSDK_OFFSET(0x15A1D80)
#define GROUNDOBSTACLEVISUAL_GETOBSTACLEHITAUDIO_OFFSET UNITYSDK_OFFSET(0x15A1DA0)
#define GROUNDOBSTACLEVISUAL_GET_INSKILLRANGEHIGHLIGHTINFOS_OFFSET UNITYSDK_OFFSET(0x15A1DE0)
#define GROUNDOBSTACLEVISUAL_SET_INSKILLRANGEHIGHLIGHTINFOS_OFFSET UNITYSDK_OFFSET(0x15A1DF0)
#define GROUNDOBSTACLEVISUAL_GET_OBSTACLEEFFECTPLAYER_OFFSET UNITYSDK_OFFSET(0x15A1E10)
#define GROUNDOBSTACLEVISUAL_APPLYSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x15A1E20)
#define GROUNDOBSTACLEVISUAL_REFRESHHIGHLIGHTUISETTING_OFFSET UNITYSDK_OFFSET(0x15A2440)
#define GROUNDOBSTACLEVISUAL_APPLYLOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x15A2450)
#define GROUNDOBSTACLEVISUAL_APPLYLOGICEFFECTRESIST_OFFSET UNITYSDK_OFFSET(0x15A2770)
#define GROUNDOBSTACLEVISUAL__COREMOVEOBSTACLE_B__57_1_OFFSET UNITYSDK_OFFSET(0x15A27C0)
#define GROUNDOBSTACLEVISUAL_SET_SELECTSKILLTARGETHIGHLIGHTINFOS_OFFSET UNITYSDK_OFFSET(0x15A28E0)
#define GROUNDOBSTACLEVISUAL_INIT_OFFSET UNITYSDK_OFFSET(0x15A2900)
#define GROUNDOBSTACLEVISUAL_ONINSKILLRANGEHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x15A3250)
#define GROUNDOBSTACLEVISUAL_SET_BATTLEACTORCOMPONENT_OFFSET UNITYSDK_OFFSET(0x15A32C0)
#define GROUNDOBSTACLEVISUAL_ONSKILLTARGETDAMAGEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x15A32E0)
#define GROUNDOBSTACLEVISUAL_SETGAMEOBJECTNAME_OFFSET UNITYSDK_OFFSET(0x15A3370)
#define GROUNDOBSTACLEVISUAL_SET_DESTROYOBJECTRENDERER_OFFSET UNITYSDK_OFFSET(0x15A3380)
#define GROUNDOBSTACLEVISUAL_GET_RETREATOBJECTRENDERER_OFFSET UNITYSDK_OFFSET(0x15A33A0)
#define GROUNDOBSTACLEVISUAL_COREMOVEOBSTACLE_OFFSET UNITYSDK_OFFSET(0x15A23C0)
#define GROUNDOBSTACLEVISUAL_OFFHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x15A33D0)
#define GROUNDOBSTACLEVISUAL_GET_BATTLEACTORCOMPONENT_OFFSET UNITYSDK_OFFSET(0x15A33F0)
#define GROUNDOBSTACLEVISUAL_UPDATE_OFFSET UNITYSDK_OFFSET(0x15A3400)
#define GROUNDOBSTACLEVISUAL_GET_SKILLHIGHLIGHTED_OFFSET UNITYSDK_OFFSET(0x15A3490)
#define GROUNDOBSTACLEVISUAL_ONSKILLTARGETHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x15A34A0)
#define GROUNDOBSTACLEVISUAL_RELEASE_OFFSET UNITYSDK_OFFSET(0x15A27D0)
#define GROUNDOBSTACLEVISUAL_SET_RETREATOBJECTRENDERER_OFFSET UNITYSDK_OFFSET(0x15A3510)
#define GROUNDOBSTACLEVISUAL_APPLYDESTROYED_OFFSET UNITYSDK_OFFSET(0x15A3530)
#define GROUNDOBSTACLEVISUAL_GET_IDLEOBJECTRENDERER_OFFSET UNITYSDK_OFFSET(0x15A37D0)
#define GROUNDOBSTACLEVISUAL_APPLYHITRESULT_OFFSET UNITYSDK_OFFSET(0x15A37E0)

	inline static constexpr unsigned int GroundObstacleVisual_TypeDefinitionIndex = 1086;

	class GroundObstacleVisual : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* PreObject; // 0x50
		::UnityEngine::GameObject* IdleObject; // 0x58
		::UnityEngine::GameObject* DestroyedObject; // 0x60
		::UnityEngine::GameObject* RetreatObject; // 0x68
		FxShake* FxShake; // 0x70
		::UnityEngine::GameObject* EnemyPointsParent; // 0x78
		::UnityEngine::GameObject* PlayerPointsParent; // 0x80
		::MX::Logic::BattleEntities::GroundObstacle* GroundObstacle; // 0x88
		::MX::Audio::AudioPlayer* AudioPlayer; // 0x90
		UIDamageFloater* uiDamageFloater; // 0x98
		::UnityEngine::Coroutine* hitAnimationCoroutine; // 0xA0
		::Il2CppArray<::System::Object*>* hitShaderAnimationMats; // 0xA8
		::Il2CppArray<::System::Object*>* destroyShaderAnimationMats; // 0xB0
		::Il2CppArray<::System::Object*>* retreatShaderAnimationMats; // 0xB8
		EffectPlayer* effectPlayer; // 0xC0
		Il2CppObject* _IdleObjectRenderer_k__BackingField; // 0xC8
		Il2CppObject* _DestroyObjectRenderer_k__BackingField; // 0xD0
		Il2CppObject* _RetreatObjectRenderer_k__BackingField; // 0xD8
		::System::Boolean _SkillHighlighted_k__BackingField; // 0xE0
		Il2CppObject* _SelectSkillTargetHighlightInfos_k__BackingField; // 0xE8
		Il2CppObject* _InSkillRangeHighlightInfos_k__BackingField; // 0xF0
		GroundNode* oldGroundNode; // 0xF8
		::MX::Visual::Battles::BattleActorComponent* _BattleActorComponent_k__BackingField; // 0x100
		::System::Boolean IsDummy; // 0x108

		::System::Void _CoRemoveObstacle_b__57_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL__COREMOVEOBSTACLE_B__57_0_OFFSET))(nullptr);
		}

		::System::Void PlayHitShader()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_PLAYHITSHADER_OFFSET))(nullptr);
		}

		::System::Void MakeShaderAnimationMatList(::System::Object[]&* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Object[]&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_MAKESHADERANIMATIONMATLIST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_SkillHighlighted(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_SET_SKILLHIGHLIGHTED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_DestroyObjectRenderer()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_GET_DESTROYOBJECTRENDERER_OFFSET))(nullptr);
		}

		Il2CppObject* get_SelectSkillTargetHighlightInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_GET_SELECTSKILLTARGETHIGHLIGHTINFOS_OFFSET))(nullptr);
		}

		::System::Void set_IdleObjectRenderer(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_SET_IDLEOBJECTRENDERER_OFFSET))(arg, nullptr);
		}

		::System::String* GetObstacleHitAudio(::FlatData::EntityMaterialType* arg)
		{
			return ((::System::String*(*)(::FlatData::EntityMaterialType*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_GETOBSTACLEHITAUDIO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_InSkillRangeHighlightInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_GET_INSKILLRANGEHIGHLIGHTINFOS_OFFSET))(nullptr);
		}

		::System::Void set_InSkillRangeHighlightInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_SET_INSKILLRANGEHIGHLIGHTINFOS_OFFSET))(arg, nullptr);
		}

		EffectPlayer* get_ObstacleEffectPlayer()
		{
			return ((EffectPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_GET_OBSTACLEEFFECTPLAYER_OFFSET))(nullptr);
		}

		::System::Void ApplyStateChanged(::MX::Visual::Battles::BattleActorComponent* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleActorComponent*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_APPLYSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshHighlightUISetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_REFRESHHIGHLIGHTUISETTING_OFFSET))(nullptr);
		}

		::System::Void ApplyLogicEffectHit(::MX::Logic::Battles::LogicEffectHitEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_APPLYLOGICEFFECTHIT_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyLogicEffectResist(::MX::Logic::BattleEntities::StatusResistEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::StatusResistEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_APPLYLOGICEFFECTRESIST_OFFSET))(arg, nullptr);
		}

		::System::Void _CoRemoveObstacle_b__57_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL__COREMOVEOBSTACLE_B__57_1_OFFSET))(nullptr);
		}

		::System::Void set_SelectSkillTargetHighlightInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_SET_SELECTSKILLTARGETHIGHLIGHTINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::MX::Logic::BattleEntities::GroundObstacle* arg, ::MX::Visual::Battles::BattleActorComponent* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::GroundObstacle*, ::MX::Visual::Battles::BattleActorComponent*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_INIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnInSkillRangeHighlight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_ONINSKILLRANGEHIGHLIGHT_OFFSET))(nullptr);
		}

		::System::Void set_BattleActorComponent(::MX::Visual::Battles::BattleActorComponent* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleActorComponent*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_SET_BATTLEACTORCOMPONENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnSkillTargetDamageAttribute(::System::Boolean arg, ::FlatData::DamageAttribute* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::DamageAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_ONSKILLTARGETDAMAGEATTRIBUTE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetGameObjectName()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_SETGAMEOBJECTNAME_OFFSET))(nullptr);
		}

		::System::Void set_DestroyObjectRenderer(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_SET_DESTROYOBJECTRENDERER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RetreatObjectRenderer()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_GET_RETREATOBJECTRENDERER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoRemoveObstacle(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_COREMOVEOBSTACLE_OFFSET))(arg, nullptr);
		}

		::System::Void OffHighlight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_OFFHIGHLIGHT_OFFSET))(nullptr);
		}

		::MX::Visual::Battles::BattleActorComponent* get_BattleActorComponent()
		{
			return ((::MX::Visual::Battles::BattleActorComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_GET_BATTLEACTORCOMPONENT_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_UPDATE_OFFSET))(nullptr);
		}

		::System::Boolean get_SkillHighlighted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_GET_SKILLHIGHLIGHTED_OFFSET))(nullptr);
		}

		::System::Void OnSkillTargetHighlight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_ONSKILLTARGETHIGHLIGHT_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_RELEASE_OFFSET))(nullptr);
		}

		::System::Void set_RetreatObjectRenderer(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_SET_RETREATOBJECTRENDERER_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyDestroyed(::MX::Visual::Battles::BattleActorComponent* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleActorComponent*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_APPLYDESTROYED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_IdleObjectRenderer()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_GET_IDLEOBJECTRENDERER_OFFSET))(nullptr);
		}

		::System::Void ApplyHitResult(::MX::Logic::Battles::AttackEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::AttackEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEVISUAL_APPLYHITRESULT_OFFSET))(arg, nullptr);
		}

	};

