#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class SkillData; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace MX::Data::Excel { class MiniGameShootingCharacterExcel; }
namespace MX::MinigameShooting { class CharacterStateMachine; }
namespace MX::MinigameShooting { class CharacterStat; }
namespace MX::MinigameShooting { class CharacterAnimationController; }
namespace MX::MinigameShooting { class MGSAudioController; }
namespace MX::MinigameShooting { class CharacterBuffController; }
namespace UnityEngine::AI { class NavMeshAgent; }
namespace UnityEngine::AI { class NavMeshObstacle; }
class UIMGSHpBase;
namespace UnityEngine { class Rigidbody; }
class UIMiniGameShootingDamageFloater;
namespace MX::MinigameShooting { class CharacterShaderAniPlayer; }
namespace UnityEngine { class Coroutine; }
namespace MX::MinigameShooting { class Character; }
namespace UnityEngine { class Transform; }
namespace FlatData { class EffectBone; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace UnityEngine { class Vector3; }
namespace MX::MinigameShooting { class ContinuousLogicEffect; }

#define MX_MINIGAMESHOOTING_CHARACTER_GET_DATA_OFFSET UNITYSDK_OFFSET(0x14555F0)
#define MX_MINIGAMESHOOTING_CHARACTER_SET_DATA_OFFSET UNITYSDK_OFFSET(0x1455600)
#define MX_MINIGAMESHOOTING_CHARACTER_GET_STAT_OFFSET UNITYSDK_OFFSET(0x1455620)
#define MX_MINIGAMESHOOTING_CHARACTER_SET_STAT_OFFSET UNITYSDK_OFFSET(0x1455630)
#define MX_MINIGAMESHOOTING_CHARACTER_GET_ANIMATIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1455640)
#define MX_MINIGAMESHOOTING_CHARACTER_SET_ANIMATIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1455650)
#define MX_MINIGAMESHOOTING_CHARACTER_GET_CHARACTERAUDIOCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1455670)
#define MX_MINIGAMESHOOTING_CHARACTER_SET_CHARACTERAUDIOCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1455680)
#define MX_MINIGAMESHOOTING_CHARACTER_GET_GEAS_OFFSET UNITYSDK_OFFSET(0x14556A0)
#define MX_MINIGAMESHOOTING_CHARACTER_SET_GEAS_OFFSET UNITYSDK_OFFSET(0x14556B0)
#define MX_MINIGAMESHOOTING_CHARACTER_GET_BUFFCONTROLLER_OFFSET UNITYSDK_OFFSET(0x14556D0)
#define MX_MINIGAMESHOOTING_CHARACTER_SET_BUFFCONTROLLER_OFFSET UNITYSDK_OFFSET(0x14556E0)
#define MX_MINIGAMESHOOTING_CHARACTER_GET_AGENT_OFFSET UNITYSDK_OFFSET(0x1455700)
#define MX_MINIGAMESHOOTING_CHARACTER_SET_AGENT_OFFSET UNITYSDK_OFFSET(0x1455710)
#define MX_MINIGAMESHOOTING_CHARACTER_GET_OBSTACLE_OFFSET UNITYSDK_OFFSET(0x1455730)
#define MX_MINIGAMESHOOTING_CHARACTER_SET_OBSTACLE_OFFSET UNITYSDK_OFFSET(0x1455740)
#define MX_MINIGAMESHOOTING_CHARACTER_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0x1455760)
#define MX_MINIGAMESHOOTING_CHARACTER_SET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0x1455770)
#define MX_MINIGAMESHOOTING_CHARACTER_GET_HPBAR_OFFSET UNITYSDK_OFFSET(0x1455780)
#define MX_MINIGAMESHOOTING_CHARACTER_SET_HPBAR_OFFSET UNITYSDK_OFFSET(0x1455790)
#define MX_MINIGAMESHOOTING_CHARACTER_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x14557B0)
#define MX_MINIGAMESHOOTING_CHARACTER_GET_HOLDROTATION_OFFSET UNITYSDK_OFFSET(0x14557E0)
#define MX_MINIGAMESHOOTING_CHARACTER_SET_HOLDROTATION_OFFSET UNITYSDK_OFFSET(0x14557F0)
#define MX_MINIGAMESHOOTING_CHARACTER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1455800)
#define MX_MINIGAMESHOOTING_CHARACTER_INITDATA_OFFSET UNITYSDK_OFFSET(0x14558B0)
#define MX_MINIGAMESHOOTING_CHARACTER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1455FB0)
#define MX_MINIGAMESHOOTING_CHARACTER_INITAUDIO_OFFSET UNITYSDK_OFFSET(0x1455910)
#define MX_MINIGAMESHOOTING_CHARACTER_INITSKILLDATA_OFFSET UNITYSDK_OFFSET(0x1456370)
#define MX_MINIGAMESHOOTING_CHARACTER_INITCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1455DA0)
#define MX_MINIGAMESHOOTING_CHARACTER_INITNAVMESHAGENT_OFFSET UNITYSDK_OFFSET(0x1455A60)
#define MX_MINIGAMESHOOTING_CHARACTER_INITNAVMESHOBSTACLE_OFFSET UNITYSDK_OFFSET(0x1455BB0)
#define MX_MINIGAMESHOOTING_CHARACTER_NAVTOGGLE_OFFSET UNITYSDK_OFFSET(0x1456400)
#define MX_MINIGAMESHOOTING_CHARACTER_CONAVTOGGLE_OFFSET UNITYSDK_OFFSET(0x14564B0)
#define MX_MINIGAMESHOOTING_CHARACTER_INITSTAT_OFFSET UNITYSDK_OFFSET(0x1456520)
#define MX_MINIGAMESHOOTING_CHARACTER_INITHPBAR_OFFSET UNITYSDK_OFFSET(0x14565B0)
#define MX_MINIGAMESHOOTING_CHARACTER_INITSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x14566C0)
#define MX_MINIGAMESHOOTING_CHARACTER_HIT_OFFSET UNITYSDK_OFFSET(0x1456760)
#define MX_MINIGAMESHOOTING_CHARACTER_HIT_OFFSET UNITYSDK_OFFSET(0x1456CE0)
#define MX_MINIGAMESHOOTING_CHARACTER_CHECKMISS_OFFSET UNITYSDK_OFFSET(0x1456BB0)
#define MX_MINIGAMESHOOTING_CHARACTER_HEAL_OFFSET UNITYSDK_OFFSET(0x1456FD0)
#define MX_MINIGAMESHOOTING_CHARACTER_GETBONE_OFFSET UNITYSDK_OFFSET(0x1454780)
#define MX_MINIGAMESHOOTING_CHARACTER_DIE_OFFSET UNITYSDK_OFFSET(0x1457120)
#define MX_MINIGAMESHOOTING_CHARACTER_CODEADANI_OFFSET UNITYSDK_OFFSET(0x14574A0)
#define MX_MINIGAMESHOOTING_CHARACTER_HANDLESECTIONEND_OFFSET UNITYSDK_OFFSET(0x1457520)
#define MX_MINIGAMESHOOTING_CHARACTER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14575E0)
#define MX_MINIGAMESHOOTING_CHARACTER_WARP_OFFSET UNITYSDK_OFFSET(0x1457760)
#define MX_MINIGAMESHOOTING_CHARACTER_ADDGEAS_OFFSET UNITYSDK_OFFSET(0x14577A0)
#define MX_MINIGAMESHOOTING_CHARACTER_ADDCONTINUOUSLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1457A20)
#define MX_MINIGAMESHOOTING_CHARACTER_REMOVECONTINUOUSLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1454730)
#define MX_MINIGAMESHOOTING_CHARACTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1457A60)
#define MX_MINIGAMESHOOTING_CHARACTER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1457AC0)
#define MX_MINIGAMESHOOTING_CHARACTER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1457AE0)
#define MX_MINIGAMESHOOTING_CHARACTER_WAITFORSKILLCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1457B00)
#define MX_MINIGAMESHOOTING_CHARACTER_ANIEVT_SHOT_OFFSET UNITYSDK_OFFSET(0x1457B80)
#define MX_MINIGAMESHOOTING_CHARACTER_SHOTEVENT_OFFSET UNITYSDK_OFFSET(0x1457B90)
#define MX_MINIGAMESHOOTING_CHARACTER_COSHOT_OFFSET UNITYSDK_OFFSET(0x1457410)
#define MX_MINIGAMESHOOTING_CHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1457D60)
#define MX_MINIGAMESHOOTING_CHARACTER__COSHOT_G__SHOT|93_0_OFFSET UNITYSDK_OFFSET(0x1457DE0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int Character_TypeDefinitionIndex = 15032;

	class Character : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::SkillData* AttackData; // 0x28
		::Il2CppArray<::System::Object*>* PublicSkillData; // 0x30
		::MX::MinigameShooting::SkillData* DeathSkillData; // 0x38
		::UnityEngine::GameObject* ShotBone; // 0x40
		::UnityEngine::GameObject* HeadBone; // 0x48
		::UnityEngine::GameObject* BodyBone; // 0x50
		::UnityEngine::Playables::PlayableDirector* PlayableDirector; // 0x58
		::Il2CppArray<::System::Object*>* PublicSkillPlayableAssetList; // 0x60
		::MX::Data::Excel::MiniGameShootingCharacterExcel* _Data_k__BackingField; // 0x68
		::MX::MinigameShooting::CharacterStateMachine* StateMachine; // 0x78
		::MX::MinigameShooting::CharacterStat* _Stat_k__BackingField; // 0x80
		::MX::MinigameShooting::CharacterAnimationController* _AnimationController_k__BackingField; // 0x88
		::MX::MinigameShooting::MGSAudioController* _CharacterAudioController_k__BackingField; // 0x90
		Il2CppObject* _Geas_k__BackingField; // 0x98
		::MX::MinigameShooting::CharacterBuffController* _BuffController_k__BackingField; // 0xA0
		::UnityEngine::AI::NavMeshAgent* _Agent_k__BackingField; // 0xA8
		::UnityEngine::AI::NavMeshObstacle* _Obstacle_k__BackingField; // 0xB0
		::System::Boolean _IsPlayer_k__BackingField; // 0xB8
		UIMGSHpBase* _HpBar_k__BackingField; // 0xC0
		::System::Boolean _HoldRotation_k__BackingField; // 0xC8
		::Il2CppArray<::System::Object*>* colliders; // 0xD0
		::UnityEngine::Rigidbody* rigidBody; // 0xD8
		UIMiniGameShootingDamageFloater* uiDamageFloater; // 0xE0
		::MX::MinigameShooting::CharacterShaderAniPlayer* shaderPlayer; // 0xE8
		::UnityEngine::Coroutine* navToggleCoroutine; // 0xF0
		Il2CppObject* skillCoroutines; // 0xF8

		::MX::Data::Excel::MiniGameShootingCharacterExcel* get_Data()
		{
			return ((::MX::Data::Excel::MiniGameShootingCharacterExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_GET_DATA_OFFSET))(nullptr);
		}

		::System::Void set_Data(::MX::Data::Excel::MiniGameShootingCharacterExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameShootingCharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_SET_DATA_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::CharacterStat* get_Stat()
		{
			return ((::MX::MinigameShooting::CharacterStat*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_GET_STAT_OFFSET))(nullptr);
		}

		::System::Void set_Stat(::MX::MinigameShooting::CharacterStat* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterStat*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_SET_STAT_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::CharacterAnimationController* get_AnimationController()
		{
			return ((::MX::MinigameShooting::CharacterAnimationController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_GET_ANIMATIONCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void set_AnimationController(::MX::MinigameShooting::CharacterAnimationController* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterAnimationController*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_SET_ANIMATIONCONTROLLER_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::MGSAudioController* get_CharacterAudioController()
		{
			return ((::MX::MinigameShooting::MGSAudioController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_GET_CHARACTERAUDIOCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void set_CharacterAudioController(::MX::MinigameShooting::MGSAudioController* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::MGSAudioController*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_SET_CHARACTERAUDIOCONTROLLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Geas()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_GET_GEAS_OFFSET))(nullptr);
		}

		::System::Void set_Geas(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_SET_GEAS_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::CharacterBuffController* get_BuffController()
		{
			return ((::MX::MinigameShooting::CharacterBuffController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_GET_BUFFCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void set_BuffController(::MX::MinigameShooting::CharacterBuffController* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterBuffController*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_SET_BUFFCONTROLLER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AI::NavMeshAgent* get_Agent()
		{
			return ((::UnityEngine::AI::NavMeshAgent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_GET_AGENT_OFFSET))(nullptr);
		}

		::System::Void set_Agent(::UnityEngine::AI::NavMeshAgent* arg)
		{
			((::System::Void(*)(::UnityEngine::AI::NavMeshAgent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_SET_AGENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AI::NavMeshObstacle* get_Obstacle()
		{
			return ((::UnityEngine::AI::NavMeshObstacle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_GET_OBSTACLE_OFFSET))(nullptr);
		}

		::System::Void set_Obstacle(::UnityEngine::AI::NavMeshObstacle* arg)
		{
			((::System::Void(*)(::UnityEngine::AI::NavMeshObstacle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_SET_OBSTACLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_GET_ISPLAYER_OFFSET))(nullptr);
		}

		::System::Void set_IsPlayer(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_SET_ISPLAYER_OFFSET))(arg, nullptr);
		}

		UIMGSHpBase* get_HpBar()
		{
			return ((UIMGSHpBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_GET_HPBAR_OFFSET))(nullptr);
		}

		::System::Void set_HpBar(UIMGSHpBase* arg)
		{
			((::System::Void(*)(UIMGSHpBase*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_SET_HPBAR_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::Character* get_Target()
		{
			return ((::MX::MinigameShooting::Character*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Boolean get_HoldRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_GET_HOLDROTATION_OFFSET))(nullptr);
		}

		::System::Void set_HoldRotation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_SET_HOLDROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void InitData(::MX::Data::Excel::MiniGameShootingCharacterExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameShootingCharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_INITDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Int32 arg, ::System::String* str, ::System::Boolean arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_INITIALIZE_OFFSET))(arg, str, arg2, arg3, nullptr);
		}

		::System::Void InitAudio(::MX::Data::Excel::MiniGameShootingCharacterExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameShootingCharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_INITAUDIO_OFFSET))(arg, nullptr);
		}

		::System::Void InitSkillData(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_INITSKILLDATA_OFFSET))(arg, nullptr);
		}

		::System::Void InitCollider()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_INITCOLLIDER_OFFSET))(nullptr);
		}

		::System::Void InitNavMeshAgent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_INITNAVMESHAGENT_OFFSET))(nullptr);
		}

		::System::Void InitNavMeshObstacle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_INITNAVMESHOBSTACLE_OFFSET))(nullptr);
		}

		::System::Void NavToggle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_NAVTOGGLE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoNavToggle(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_CONAVTOGGLE_OFFSET))(arg, nullptr);
		}

		::System::Void InitStat()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_INITSTAT_OFFSET))(nullptr);
		}

		::System::Void InitHpBar()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_INITHPBAR_OFFSET))(nullptr);
		}

		::System::Void InitStateMachine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_INITSTATEMACHINE_OFFSET))(nullptr);
		}

		::System::Void Hit(::System::Int64 arg, ::MX::MinigameShooting::Character* arg2, ::MX::MinigameShooting::CharacterStat* arg3, ::MX::MinigameShooting::SkillData* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::System::Int64, ::MX::MinigameShooting::Character*, ::MX::MinigameShooting::CharacterStat*, ::MX::MinigameShooting::SkillData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_HIT_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void Hit(::MX::MinigameShooting::Character* arg, ::System::Int64 arg2, ::System::Boolean arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::System::Int64, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_HIT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean CheckMiss(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_CHECKMISS_OFFSET))(arg, nullptr);
		}

		::System::Void Heal(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_HEAL_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Transform* GetBone(::FlatData::EffectBone* arg)
		{
			return ((::UnityEngine::Transform*(*)(::FlatData::EffectBone*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_GETBONE_OFFSET))(arg, nullptr);
		}

		::System::Void Die()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_DIE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoDeadAni(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_CODEADANI_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleSectionEnd(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_HANDLESECTIONEND_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Warp(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_WARP_OFFSET))(arg, nullptr);
		}

		::System::Void AddGeas(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_ADDGEAS_OFFSET))(arg, nullptr);
		}

		::System::Void AddContinuousLogicEffect(::MX::MinigameShooting::ContinuousLogicEffect* arg, ::MX::MinigameShooting::Character* arg2)
		{
			((::System::Void(*)(::MX::MinigameShooting::ContinuousLogicEffect*, ::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_ADDCONTINUOUSLOGICEFFECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RemoveContinuousLogicEffect(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_REMOVECONTINUOUSLOGICEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void FixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_FIXEDUPDATE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* WaitForSkillCoroutine(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_WAITFORSKILLCOROUTINE_OFFSET))(arg, nullptr);
		}

		::System::Void AniEvt_Shot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_ANIEVT_SHOT_OFFSET))(nullptr);
		}

		::System::Void ShotEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_SHOTEVENT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoShot(::MX::MinigameShooting::SkillData* arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::MinigameShooting::SkillData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_COSHOT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _CoShot_g__Shot|93_0(::MX::MinigameShooting::SkillData* arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::MinigameShooting::SkillData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTER__COSHOT_G__SHOT|93_0_OFFSET))(arg, arg2, nullptr);
		}

	};
}

