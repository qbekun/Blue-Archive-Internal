#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animator; }
namespace MX::Audio { class EntityAudioController; }
class CharacterVisual;
class AnimatorStateName;
namespace FlatData { class AnimatorData; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Actions { class ActionState; }

#define CHARACTERANIMATIONCONTROLLER_GET_LASTANIMATORSTATE_OFFSET UNITYSDK_OFFSET(0x10AE340)
#define CHARACTERANIMATIONCONTROLLER_SET_LASTANIMATORSTATE_OFFSET UNITYSDK_OFFSET(0x10AE350)
#define CHARACTERANIMATIONCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x10AE360)
#define CHARACTERANIMATIONCONTROLLER_ISRANDOMANIMATIONENABLE_OFFSET UNITYSDK_OFFSET(0x10AE7E0)
#define CHARACTERANIMATIONCONTROLLER_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x10AE7F0)
#define CHARACTERANIMATIONCONTROLLER_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x10AF190)
#define CHARACTERANIMATIONCONTROLLER_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x10AE8C0)
#define CHARACTERANIMATIONCONTROLLER_CODEADANI_OFFSET UNITYSDK_OFFSET(0x10B0210)
#define CHARACTERANIMATIONCONTROLLER_GETBLENDTIME_OFFSET UNITYSDK_OFFSET(0x10AF6B0)
#define CHARACTERANIMATIONCONTROLLER_COCHECKSPEED_OFFSET UNITYSDK_OFFSET(0x10B02C0)
#define CHARACTERANIMATIONCONTROLLER_SETSPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x10AF7F0)
#define CHARACTERANIMATIONCONTROLLER_GETTIME_OFFSET UNITYSDK_OFFSET(0x10B03B0)
#define CHARACTERANIMATIONCONTROLLER_NEEDTIMESTATE_OFFSET UNITYSDK_OFFSET(0x10B0390)
#define CHARACTERANIMATIONCONTROLLER_ISMOVESTATE_OFFSET UNITYSDK_OFFSET(0x10B08C0)
#define CHARACTERANIMATIONCONTROLLER_GETPREFIX_OFFSET UNITYSDK_OFFSET(0x10AF360)

	inline static constexpr unsigned int CharacterAnimationController_TypeDefinitionIndex = 909;

	class CharacterAnimationController : public Il2CppObject
	{
	public:
		::UnityEngine::Animator* Animator; // 0x10
		::MX::Audio::EntityAudioController* AnimationAudioController; // 0x18
		CharacterVisual* characterVisual; // 0x20
		AnimatorStateName* _LastAnimatorState_k__BackingField; // 0x28
		Il2CppObject* blendList; // 0x30
		::FlatData::AnimatorData* animatorData; // 0x38
		Il2CppObject* MappingDictionary; // 0x0
		Il2CppObject* animationMap; // 0x48
		::System::Collections::IEnumerator* currentSpeedChecker; // 0x50
		::System::String* lastPrefixWithObstacle; // 0x58

		AnimatorStateName* get_LastAnimatorState()
		{
			return ((AnimatorStateName*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONCONTROLLER_GET_LASTANIMATORSTATE_OFFSET))(nullptr);
		}

		::System::Void set_LastAnimatorState(AnimatorStateName* arg)
		{
			((::System::Void(*)(AnimatorStateName*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONCONTROLLER_SET_LASTANIMATORSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Animator* arg, CharacterVisual* arg2)
		{
			((::System::Void(*)(::UnityEngine::Animator*, CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONCONTROLLER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsRandomAnimationEnable(AnimatorStateName* arg)
		{
			return ((::System::Boolean(*)(AnimatorStateName*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONCONTROLLER_ISRANDOMANIMATIONENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void PlayAnimation(::MX::Logic::BattleEntities::BehaviorType* arg, ::MX::Logic::Actions::ActionState* arg2, ::System::Single arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, ::MX::Logic::Actions::ActionState*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONCONTROLLER_PLAYANIMATION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean IsPlaying(::MX::Logic::BattleEntities::BehaviorType* arg, ::MX::Logic::Actions::ActionState* arg2, ::System::Action* arg3)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BehaviorType*, ::MX::Logic::Actions::ActionState*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONCONTROLLER_ISPLAYING_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void PlayAnimation(::MX::Logic::BattleEntities::BehaviorType* arg, AnimatorStateName* arg2, ::System::Single arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, AnimatorStateName*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONCONTROLLER_PLAYANIMATION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* CoDeadAni(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONCONTROLLER_CODEADANI_OFFSET))(arg, nullptr);
		}

		::System::Single GetBlendTime(::MX::Logic::BattleEntities::BehaviorType* arg, AnimatorStateName* arg2)
		{
			return ((::System::Single(*)(::MX::Logic::BattleEntities::BehaviorType*, AnimatorStateName*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONCONTROLLER_GETBLENDTIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoCheckSpeed(Il2CppObject* arg, ::System::Int64 arg2, AnimatorStateName* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::System::Int64, AnimatorStateName*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONCONTROLLER_COCHECKSPEED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single SetSpeedMultiplier(AnimatorStateName* arg)
		{
			return ((::System::Single(*)(AnimatorStateName*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONCONTROLLER_SETSPEEDMULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Single GetTime(AnimatorStateName* arg)
		{
			return ((::System::Single(*)(AnimatorStateName*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONCONTROLLER_GETTIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean NeedTimeState(AnimatorStateName* arg)
		{
			return ((::System::Boolean(*)(AnimatorStateName*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONCONTROLLER_NEEDTIMESTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMoveState(AnimatorStateName* arg)
		{
			return ((::System::Boolean(*)(AnimatorStateName*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONCONTROLLER_ISMOVESTATE_OFFSET))(arg, nullptr);
		}

		::System::String* GetPrefix(::MX::Logic::BattleEntities::BehaviorType* arg, AnimatorStateName* arg2)
		{
			return ((::System::String*(*)(::MX::Logic::BattleEntities::BehaviorType*, AnimatorStateName*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONCONTROLLER_GETPREFIX_OFFSET))(arg, arg2, nullptr);
		}

	};

