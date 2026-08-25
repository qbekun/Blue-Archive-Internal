#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class LayerMask; }
namespace UnityEngine { class Ray; }
namespace UnityEngine { class Plane; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class RaycastHit; }
namespace Cinemachine { class CameraState; }
namespace UnityEngine { class Bounds; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Cinemachine { class CameraState&; }
namespace UnityEngine { class Vector3&; }
namespace Cinemachine { class ICinemachineCamera; }
namespace UnityEngine { class RaycastHit&; }

#define CINEMACHINE_CINEMACHINECOLLIDER_GETPUSHBACKDISTANCE_OFFSET UNITYSDK_OFFSET(0x28264C0)
#define CINEMACHINE_CINEMACHINECOLLIDER_PUSHCAMERABACK_OFFSET UNITYSDK_OFFSET(0x2826710)
#define CINEMACHINE_CINEMACHINECOLLIDER_CHECKFORTARGETOBSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x2828310)
#define CINEMACHINE_CINEMACHINECOLLIDER_CLAMPRAYTOBOUNDS_OFFSET UNITYSDK_OFFSET(0x2827AC0)
#define CINEMACHINE_CINEMACHINECOLLIDER_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x2828620)
#define CINEMACHINE_CINEMACHINECOLLIDER_GETWALKINGDIRECTION_OFFSET UNITYSDK_OFFSET(0x2827140)
#define CINEMACHINE_CINEMACHINECOLLIDER_RESPECTCAMERARADIUS_OFFSET UNITYSDK_OFFSET(0x2829600)
#define CINEMACHINE_CINEMACHINECOLLIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x282A4E0)
#define CINEMACHINE_CINEMACHINECOLLIDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x282A5A0)
#define CINEMACHINE_CINEMACHINECOLLIDER_ISTARGETOBSCURED_OFFSET UNITYSDK_OFFSET(0x282A610)
#define CINEMACHINE_CINEMACHINECOLLIDER_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x282A670)
#define CINEMACHINE_CINEMACHINECOLLIDER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x282A690)
#define CINEMACHINE_CINEMACHINECOLLIDER_CAMERAWASDISPLACED_OFFSET UNITYSDK_OFFSET(0x282A6D0)
#define CINEMACHINE_CINEMACHINECOLLIDER_GET_DEBUGPATHS_OFFSET UNITYSDK_OFFSET(0x282A7B0)
#define CINEMACHINE_CINEMACHINECOLLIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x282AA00)
#define CINEMACHINE_CINEMACHINECOLLIDER_GETCAMERADISPLACEMENTDISTANCE_OFFSET UNITYSDK_OFFSET(0x282A6F0)
#define CINEMACHINE_CINEMACHINECOLLIDER_ISTARGETOFFSCREEN_OFFSET UNITYSDK_OFFSET(0x282A080)
#define CINEMACHINE_CINEMACHINECOLLIDER_PRESERVELINEOFSIGHT_OFFSET UNITYSDK_OFFSET(0x2829000)
#define CINEMACHINE_CINEMACHINECOLLIDER_PULLCAMERAINFRONTOFNEARESTOBSTACLE_OFFSET UNITYSDK_OFFSET(0x282AA50)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCollider_TypeDefinitionIndex = 34206;

	class CinemachineCollider : public Il2CppObject
	{
	public:
		::UnityEngine::LayerMask* m_CollideAgainst; // 0x28
		::System::String* m_IgnoreTag; // 0x30
		::UnityEngine::LayerMask* m_TransparentLayers; // 0x38
		::System::Single m_MinimumDistanceFromTarget; // 0x3C
		::System::Boolean m_AvoidObstacles; // 0x40
		::System::Single m_DistanceLimit; // 0x44
		::System::Single m_MinimumOcclusionTime; // 0x48
		::System::Single m_CameraRadius; // 0x4C
		ResolutionStrategy* m_Strategy; // 0x50
		::System::Int32 m_MaximumEffort; // 0x54
		::System::Single m_SmoothingTime; // 0x58
		::System::Single m_Damping; // 0x5C
		::System::Single m_DampingWhenOccluded; // 0x60
		::System::Single m_OptimalTargetDistance; // 0x64
		::System::Single k_PrecisionSlush; // 0x0
		::Il2CppArray<::System::Object*>* m_CornerBuffer; // 0x68
		::System::Single k_AngleThreshold; // 0x0
		::Il2CppArray<::System::Object*>* s_ColliderBuffer; // 0x0

		::System::Single GetPushBackDistance(::UnityEngine::Ray* arg, ::UnityEngine::Plane* arg, ::System::Single arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Ray*, ::UnityEngine::Plane*, ::System::Single, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_GETPUSHBACKDISTANCE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* PushCameraBack(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::RaycastHit* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Plane* arg, ::System::Single arg, ::System::Int32 arg, VcamExtraState&* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::RaycastHit*, ::UnityEngine::Vector3*, ::UnityEngine::Plane*, ::System::Single, ::System::Int32, VcamExtraState&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_PUSHCAMERABACK_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CheckForTargetObstructions(::Cinemachine::CameraState* arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::CameraState*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_CHECKFORTARGETOBSTRUCTIONS_OFFSET))(arg, nullptr);
		}

		::System::Single ClampRayToBounds(::UnityEngine::Ray* arg, ::System::Single arg, ::UnityEngine::Bounds* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Ray*, ::System::Single, ::UnityEngine::Bounds*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_CLAMPRAYTOBOUNDS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* arg, Stage* arg, ::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, Stage*, ::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_POSTPIPELINESTAGECALLBACK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean GetWalkingDirection(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::RaycastHit* arg, ::UnityEngine::Vector3&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::RaycastHit*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_GETWALKINGDIRECTION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* RespectCameraRadius(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_RESPECTCAMERARADIUS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsTargetObscured(::Cinemachine::ICinemachineCamera* arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::ICinemachineCamera*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_ISTARGETOBSCURED_OFFSET))(arg, nullptr);
		}

		::System::Single GetMaxDampTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_GETMAXDAMPTIME_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Boolean CameraWasDisplaced(::Cinemachine::ICinemachineCamera* arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::ICinemachineCamera*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_CAMERAWASDISPLACED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DebugPaths()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_GET_DEBUGPATHS_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Single GetCameraDisplacementDistance(::Cinemachine::ICinemachineCamera* arg)
		{
			return (return (::System::Single(*)(::Cinemachine::ICinemachineCamera*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_GETCAMERADISPLACEMENTDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTargetOffscreen(::Cinemachine::CameraState* arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::CameraState*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_ISTARGETOFFSCREEN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* PreserveLineOfSight(::Cinemachine::CameraState&* arg, VcamExtraState&* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::Cinemachine::CameraState&*, VcamExtraState&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_PRESERVELINEOFSIGHT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* PullCameraInFrontOfNearestObstacle(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Int32 arg, ::UnityEngine::RaycastHit&* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Int32, ::UnityEngine::RaycastHit&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_PULLCAMERAINFRONTOFNEARESTOBSTACLE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

