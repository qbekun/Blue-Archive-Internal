#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collider2D; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Cinemachine { class CameraState&; }
namespace UnityEngine { class Vector3; }

#define CINEMACHINE_CINEMACHINECONFINER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x282AD80)
#define CINEMACHINE_CINEMACHINECONFINER_INVALIDATEPATHCACHE_OFFSET UNITYSDK_OFFSET(0x282AEB0)
#define CINEMACHINE_CINEMACHINECONFINER_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x282AEF0)
#define CINEMACHINE_CINEMACHINECONFINER_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x282BC00)
#define CINEMACHINE_CINEMACHINECONFINER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x282BC10)
#define CINEMACHINE_CINEMACHINECONFINER_CAMERAWASDISPLACED_OFFSET UNITYSDK_OFFSET(0x282BC20)
#define CINEMACHINE_CINEMACHINECONFINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x282BCE0)
#define CINEMACHINE_CINEMACHINECONFINER_GETCAMERADISPLACEMENTDISTANCE_OFFSET UNITYSDK_OFFSET(0x282BC80)
#define CINEMACHINE_CINEMACHINECONFINER_CONNECTTOVCAM_OFFSET UNITYSDK_OFFSET(0x282BCF0)
#define CINEMACHINE_CINEMACHINECONFINER_CONFINEPOINT_OFFSET UNITYSDK_OFFSET(0x282B740)
#define CINEMACHINE_CINEMACHINECONFINER_CONFINESCREENEDGES_OFFSET UNITYSDK_OFFSET(0x282B190)
#define CINEMACHINE_CINEMACHINECONFINER_VALIDATEPATHCACHE_OFFSET UNITYSDK_OFFSET(0x282BD00)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineConfiner_TypeDefinitionIndex = 34209;

	class CinemachineConfiner : public Il2CppObject
	{
	public:
		Mode* m_ConfineMode; // 0x28
		::UnityEngine::Collider* m_BoundingVolume; // 0x30
		::UnityEngine::Collider2D* m_BoundingShape2D; // 0x38
		::UnityEngine::Collider2D* m_BoundingShape2DCache; // 0x40
		::System::Boolean m_ConfineScreenEdges; // 0x48
		::System::Single m_Damping; // 0x4C
		Il2CppObject* m_pathCache; // 0x50
		::System::Int32 m_pathTotalPointCount; // 0x58

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void InvalidatePathCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_INVALIDATEPATHCACHE_OFFSET))(nullptr);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* arg, Stage* arg, ::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCameraBase*, Stage*, ::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_POSTPIPELINESTAGECALLBACK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Single GetMaxDampTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_GETMAXDAMPTIME_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Boolean CameraWasDisplaced(::Cinemachine::CinemachineVirtualCameraBase* arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::CinemachineVirtualCameraBase*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_CAMERAWASDISPLACED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_.CTOR_OFFSET))(nullptr);
		}

		::System::Single GetCameraDisplacementDistance(::Cinemachine::CinemachineVirtualCameraBase* arg)
		{
			return (return (::System::Single(*)(::Cinemachine::CinemachineVirtualCameraBase*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_GETCAMERADISPLACEMENTDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void ConnectToVcam(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_CONNECTTOVCAM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* ConfinePoint(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_CONFINEPOINT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* ConfineScreenEdges(::Cinemachine::CameraState&* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::Cinemachine::CameraState&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_CONFINESCREENEDGES_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidatePathCache()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_VALIDATEPATHCACHE_OFFSET))(nullptr);
		}

	};
}

