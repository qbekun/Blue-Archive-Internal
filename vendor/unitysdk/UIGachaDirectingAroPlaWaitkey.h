#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
namespace Animancer { class AnimancerComponent; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
class AnimationGroup;
namespace Animancer { class AnimancerLayer; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class AnimationClip; }

#define UIGACHADIRECTINGAROPLAWAITKEY_AWAKE_OFFSET UNITYSDK_OFFSET(0x2593090)
#define UIGACHADIRECTINGAROPLAWAITKEY_GETMASKSTRING_OFFSET UNITYSDK_OFFSET(0x2593380)
#define UIGACHADIRECTINGAROPLAWAITKEY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2593540)
#define UIGACHADIRECTINGAROPLAWAITKEY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x2593820)
#define UIGACHADIRECTINGAROPLAWAITKEY_TOUCHMOVEMENTCALCULATE_OFFSET UNITYSDK_OFFSET(0x2594370)
#define UIGACHADIRECTINGAROPLAWAITKEY_TOUCHMOVEMENTCALCULATE_OFFSET UNITYSDK_OFFSET(0x2594510)
#define UIGACHADIRECTINGAROPLAWAITKEY_PRESSDOWN_OFFSET UNITYSDK_OFFSET(0x258DD70)
#define UIGACHADIRECTINGAROPLAWAITKEY_DRAG_OFFSET UNITYSDK_OFFSET(0x258D940)
#define UIGACHADIRECTINGAROPLAWAITKEY_PRESSRELEASE_OFFSET UNITYSDK_OFFSET(0x258E960)
#define UIGACHADIRECTINGAROPLAWAITKEY_ANIMATIONSELECTION_OFFSET UNITYSDK_OFFSET(0x2594570)
#define UIGACHADIRECTINGAROPLAWAITKEY_RANDOMSELECT_OFFSET UNITYSDK_OFFSET(0x25945D0)
#define UIGACHADIRECTINGAROPLAWAITKEY_PLAYARONA_OFFSET UNITYSDK_OFFSET(0x2594550)
#define UIGACHADIRECTINGAROPLAWAITKEY_PLAYPLANA_OFFSET UNITYSDK_OFFSET(0x2594560)
#define UIGACHADIRECTINGAROPLAWAITKEY_PLAYANIMANCER_OFFSET UNITYSDK_OFFSET(0x2593580)
#define UIGACHADIRECTINGAROPLAWAITKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2594760)

	inline static constexpr unsigned int UIGachaDirectingAroPlaWaitkey_TypeDefinitionIndex = 6257;

	class UIGachaDirectingAroPlaWaitkey : public Il2CppObject
	{
	public:
		::UnityEngine::Camera* camera; // 0x18
		::System::Int32 idlePlayCount; // 0x20
		::System::Single reactionCooltime; // 0x24
		::Animancer::AnimancerComponent* aronaAnimancer; // 0x28
		::UnityEngine::Collider* aronaHairCollider; // 0x30
		::UnityEngine::Collider* aronaEyeCollider; // 0x38
		::UnityEngine::GameObject* aronaHeadBone; // 0x40
		::UnityEngine::GameObject* aronaEyeBoneR; // 0x48
		::UnityEngine::GameObject* aronaEyeBoneL; // 0x50
		AnimationGroup* aronaAnimations; // 0x58
		::Il2CppArray<::System::Object*>* aronaEye; // 0x70
		::Animancer::AnimancerComponent* planaAnimancer; // 0x78
		::UnityEngine::Collider* planaHairCollider; // 0x80
		::UnityEngine::Collider* planaEyeCollider; // 0x88
		::UnityEngine::GameObject* planaHeadBone; // 0x90
		::UnityEngine::GameObject* planaEyeBoneR; // 0x98
		::UnityEngine::GameObject* planaEyeBoneL; // 0xA0
		AnimationGroup* planaAnimations; // 0xA8
		::Il2CppArray<::System::Object*>* planaEye; // 0xC0
		::System::Boolean aronaFaceTouched; // 0xC8
		::System::Boolean planaFaceTouched; // 0xC9
		::System::Boolean aronaHairTouched; // 0xCA
		::System::Boolean planaHairTouched; // 0xCB
		::System::Int32 aronaIdleCap; // 0xCC
		::System::Int32 planaIdleCap; // 0xD0
		::Il2CppArray<::System::Object*>* aronaAnimationSumArray; // 0xD8
		::Il2CppArray<::System::Object*>* planaAnimationSumArray; // 0xE0
		::Animancer::AnimancerLayer* aronaEyeLayer; // 0xE8
		::Animancer::AnimancerLayer* planaEyeLayer; // 0xF0
		::System::Single moveFactor; // 0xF8
		::System::Single moveSpeed; // 0xFC
		::System::Single eyeTrackTurnFactor; // 0x100
		::System::Single eyeTrackTurnSpeed; // 0x104
		::UnityEngine::Vector2* aronaMoveValue; // 0x108
		::UnityEngine::Vector2* aronaMoveBoundaryMax; // 0x110
		::UnityEngine::Vector2* aronaMoveBoundaryMin; // 0x118
		::UnityEngine::Vector2* aronaEyeTrackTurnBoundaryMax; // 0x120
		::UnityEngine::Vector2* aronaEyeTrackTurnBoundaryMin; // 0x128
		::UnityEngine::Vector2* planaMoveValue; // 0x130
		::UnityEngine::Vector2* planaMoveBoundaryMax; // 0x138
		::UnityEngine::Vector2* planaMoveBoundaryMin; // 0x140
		::UnityEngine::Vector2* planaEyeTrackTurnBoundaryMax; // 0x148
		::UnityEngine::Vector2* planaEyeTrackTurnBoundaryMin; // 0x150
		::System::Single turnFactor; // 0x158
		::System::Single turnSpeed; // 0x15C
		::UnityEngine::Vector2* aronaTurnValue; // 0x160
		::System::Single aronaTurnBoundaryMax; // 0x168
		::System::Single aronaTurnBoundaryMin; // 0x16C
		::UnityEngine::Vector2* planaTurnValue; // 0x170
		::System::Single planaTurnBoundaryMax; // 0x178
		::System::Single planaTurnBoundaryMin; // 0x17C
		::UnityEngine::Vector3* touchPositionAnchor; // 0x180
		::UnityEngine::Vector3* currentTouchPosition; // 0x18C
		::UnityEngine::Quaternion* currentLookDirection; // 0x198
		::System::Single aronaLastReactionTime; // 0x1A8
		::System::Single planaLastReactionTime; // 0x1AC

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTINGAROPLAWAITKEY_AWAKE_OFFSET))(nullptr);
		}

		::System::String* GetMaskString(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg2)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTINGAROPLAWAITKEY_GETMASKSTRING_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTINGAROPLAWAITKEY_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTINGAROPLAWAITKEY_LATEUPDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* TouchMovementCalculate(::System::Boolean arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3, ::System::Single arg4, ::UnityEngine::Vector2* arg5, ::UnityEngine::Vector2* arg6)
		{
			return ((::UnityEngine::Vector2*(*)(::System::Boolean, ::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTINGAROPLAWAITKEY_TOUCHMOVEMENTCALCULATE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::UnityEngine::Vector2* TouchMovementCalculate(::System::Boolean arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3, ::System::Single arg4, ::System::Single arg5, ::System::Single arg6)
		{
			return ((::UnityEngine::Vector2*(*)(::System::Boolean, ::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTINGAROPLAWAITKEY_TOUCHMOVEMENTCALCULATE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void PressDown(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTINGAROPLAWAITKEY_PRESSDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void Drag(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTINGAROPLAWAITKEY_DRAG_OFFSET))(arg, nullptr);
		}

		::System::Void PressRelease()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTINGAROPLAWAITKEY_PRESSRELEASE_OFFSET))(nullptr);
		}

		::UnityEngine::AnimationClip* AnimationSelection(::System::Boolean arg, ::System::Boolean arg2, AnimationGroup* arg3, int32_t&* arg4)
		{
			return ((::UnityEngine::AnimationClip*(*)(::System::Boolean, ::System::Boolean, AnimationGroup*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTINGAROPLAWAITKEY_ANIMATIONSELECTION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::UnityEngine::AnimationClip* RandomSelect(AnimationGroup* arg)
		{
			return ((::UnityEngine::AnimationClip*(*)(AnimationGroup*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTINGAROPLAWAITKEY_RANDOMSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void PlayArona()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTINGAROPLAWAITKEY_PLAYARONA_OFFSET))(nullptr);
		}

		::System::Void PlayPlana()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTINGAROPLAWAITKEY_PLAYPLANA_OFFSET))(nullptr);
		}

		::System::Void PlayAnimancer(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTINGAROPLAWAITKEY_PLAYANIMANCER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTINGAROPLAWAITKEY_.CTOR_OFFSET))(nullptr);
		}

	};

