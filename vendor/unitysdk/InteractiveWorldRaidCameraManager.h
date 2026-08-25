#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Vector3; }
class UIInteractiveWorldRaidWorldMapNodes;

#define INTERACTIVEWORLDRAIDCAMERAMANAGER_ONCLICKBACKTOOVERVIEW_OFFSET UNITYSDK_OFFSET(0x2603A70)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_GET_BLOCKINPUTWHILECAMERAMOVING_OFFSET UNITYSDK_OFFSET(0x2603BF0)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_OVERVIEWMOVERIGHT_OFFSET UNITYSDK_OFFSET(0x2603C00)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2603C20)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_MOVECAMERAFROMWORLDVIEWTOCOCKPIT_OFFSET UNITYSDK_OFFSET(0x2603C60)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_ANIMATECAMERALOCALPOSITIONROTATION_OFFSET UNITYSDK_OFFSET(0x2603B00)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_ANIMATECAMERAGLOBALROTATION_OFFSET UNITYSDK_OFFSET(0x2603DE0)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_ONCLICKZOOMINLEFT_OFFSET UNITYSDK_OFFSET(0x2603EC0)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_TRYSELECTNODEONOVERVIEW_OFFSET UNITYSDK_OFFSET(0x2604430)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_MOVECAMERAPOINTTOINDEX_OFFSET UNITYSDK_OFFSET(0x2603F20)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_ALIGNCAMERAONYPLANE_OFFSET UNITYSDK_OFFSET(0x2604CC0)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_SET_CURRENTBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x26051C0)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_ONCLICKZOOMINRIGHT_OFFSET UNITYSDK_OFFSET(0x26051D0)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_SETWORLDVIEWCAMERAASCURRENTCAMERA_OFFSET UNITYSDK_OFFSET(0x2605230)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_GETANGLEAROUNDAXIS_OFFSET UNITYSDK_OFFSET(0x26047C0)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_STOPOVERVIEWMOVEMENT_OFFSET UNITYSDK_OFFSET(0x26052F0)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_GET_CURRENTBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x2605300)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x2605310)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_SET_ISOVERVIEW_OFFSET UNITYSDK_OFFSET(0x2605410)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_GET_ISOVERVIEW_OFFSET UNITYSDK_OFFSET(0x2605420)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_OVERVIEWMOVELEFT_OFFSET UNITYSDK_OFFSET(0x2605430)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_MOVECAMERATOPOINT_OFFSET UNITYSDK_OFFSET(0x2604780)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_ANIMATECAMERAPOSITIONROTATION_OFFSET UNITYSDK_OFFSET(0x2603CB0)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_SETBOSSNODES_OFFSET UNITYSDK_OFFSET(0x2605470)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_ONCLICKBOSSBUTTON_OFFSET UNITYSDK_OFFSET(0x26054F0)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_MOVECAMERAFROMCOCKPITTOWORLDVIEW_OFFSET UNITYSDK_OFFSET(0x2605520)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_SET_BLOCKINPUTWHILECAMERAMOVING_OFFSET UNITYSDK_OFFSET(0x26056F0)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_GET_MOVINGCAMERAROTATION_OFFSET UNITYSDK_OFFSET(0x2604750)
#define INTERACTIVEWORLDRAIDCAMERAMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x2605700)

	inline static constexpr unsigned int InteractiveWorldRaidCameraManager_TypeDefinitionIndex = 6477;

	class InteractiveWorldRaidCameraManager : public Il2CppObject
	{
	public:
		::UnityEngine::Camera* movingCamera; // 0x18
		::UnityEngine::Transform* cockpitCameraTransform; // 0x20
		::UnityEngine::Transform* worldViewCameraTransform; // 0x28
		::Il2CppArray<::System::Object*>* bossNodes; // 0x30
		::System::Single overviewMaxRotationSpeed; // 0x38
		::System::Single overviewCameraAccelT; // 0x3C
		::UnityEngine::AnimationCurve* overviewCameraAccelerationCurve; // 0x40
		::System::Single overviewTimeForMaxSpeed; // 0x48
		::System::Single overviewTimeForStop; // 0x4C
		::UnityEngine::AnimationCurve* zoomInOutAniCurve; // 0x50
		::System::Single zoomInOutInterpolationTime; // 0x58
		::UnityEngine::AnimationCurve* pointToPointAniCurve; // 0x60
		::System::Single pointToPointInterpolationTime; // 0x68
		::System::Single rotationSpeed; // 0x6C
		::System::Int32 _CurrentBossIndex_k__BackingField; // 0x70
		::System::Int32 nextBossIndex; // 0x74
		::System::Boolean isOverviewMoveLeft; // 0x78
		::System::Boolean isOverviewMoveRight; // 0x79
		::System::Action* onOverviewRotationStopAction; // 0x80
		::System::Single node2DUIVisibleAngle; // 0x88
		::UnityEngine::Transform* cameraDistanceMultiplierRootObject; // 0x90
		::System::Single cameraDistanceMultiplier; // 0x98
		::System::Single rotationYaxis; // 0x9C
		::System::Single rCameraPosition; // 0xA0
		::System::Boolean _IsOverview_k__BackingField; // 0xA4
		::System::Boolean _BlockInputWhileCameraMoving_k__BackingField; // 0xA5

		::System::Void OnClickBackToOverview(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_ONCLICKBACKTOOVERVIEW_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_BlockInputWhileCameraMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_GET_BLOCKINPUTWHILECAMERAMOVING_OFFSET))(nullptr);
		}

		::System::Void OverviewMoveRight(::System::Boolean arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_OVERVIEWMOVERIGHT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void MoveCameraFromWorldViewToCockpit(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_MOVECAMERAFROMWORLDVIEWTOCOCKPIT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* AnimateCameraLocalPositionRotation(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg2, ::UnityEngine::AnimationCurve* arg3, ::System::Single arg4, ::System::Action* arg5)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_ANIMATECAMERALOCALPOSITIONROTATION_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Collections::IEnumerator* AnimateCameraGlobalRotation(::UnityEngine::Quaternion* arg, ::UnityEngine::Quaternion* arg2, ::UnityEngine::AnimationCurve* arg3, ::System::Single arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Quaternion*, ::UnityEngine::Quaternion*, ::UnityEngine::AnimationCurve*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_ANIMATECAMERAGLOBALROTATION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void OnclickZoomInLeft(::System::Action* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_ONCLICKZOOMINLEFT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void TrySelectNodeOnOverview(Il2CppObject* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_TRYSELECTNODEONOVERVIEW_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void MoveCameraPointToIndex(::System::Int32 arg, ::UnityEngine::AnimationCurve* arg2, ::System::Boolean arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::AnimationCurve*, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_MOVECAMERAPOINTTOINDEX_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean AlignCameraOnYPlane(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_ALIGNCAMERAONYPLANE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_CurrentBossIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_SET_CURRENTBOSSINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void OnclickZoomInRight(::System::Action* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_ONCLICKZOOMINRIGHT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetWorldViewCameraAsCurrentCamera()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_SETWORLDVIEWCAMERAASCURRENTCAMERA_OFFSET))(nullptr);
		}

		::System::Single GetAngleAroundAxis(::UnityEngine::Quaternion* arg, ::UnityEngine::Vector3* arg2)
		{
			return ((::System::Single(*)(::UnityEngine::Quaternion*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_GETANGLEAROUNDAXIS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StopOverviewMovement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_STOPOVERVIEWMOVEMENT_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentBossIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_GET_CURRENTBOSSINDEX_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_IsOverview(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_SET_ISOVERVIEW_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsOverview()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_GET_ISOVERVIEW_OFFSET))(nullptr);
		}

		::System::Void OverviewMoveLeft(::System::Boolean arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_OVERVIEWMOVELEFT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void MoveCameraToPoint(::System::Int32 arg, ::System::Boolean arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_MOVECAMERATOPOINT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* AnimateCameraPositionRotation(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg2, ::UnityEngine::AnimationCurve* arg3, ::System::Single arg4, ::System::Single arg5, ::System::Action* arg6)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_ANIMATECAMERAPOSITIONROTATION_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void SetBossNodes(UIInteractiveWorldRaidWorldMapNodes* arg)
		{
			((::System::Void(*)(UIInteractiveWorldRaidWorldMapNodes*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_SETBOSSNODES_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickBossButton(::System::Int32 arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_ONCLICKBOSSBUTTON_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void MoveCameraFromCockpitToWorldView(::UnityEngine::Camera* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_MOVECAMERAFROMCOCKPITTOWORLDVIEW_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_BlockInputWhileCameraMoving(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_SET_BLOCKINPUTWHILECAMERAMOVING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_MovingCameraRotation()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_GET_MOVINGCAMERAROTATION_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCAMERAMANAGER_UPDATE_OFFSET))(nullptr);
		}

	};

