#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Rect; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine::Rendering { class CoreCameraValues; }
namespace UnityEngine { class Plane; }
namespace UnityEngine::Rendering { class CameraProperties; }

#define UNITYENGINE_RENDERING_CAMERAPROPERTIES_GETSHADOWCULLINGPLANE_OFFSET UNITYSDK_OFFSET(0xA257F00)
#define UNITYENGINE_RENDERING_CAMERAPROPERTIES_GETCAMERACULLINGPLANE_OFFSET UNITYSDK_OFFSET(0xA258000)
#define UNITYENGINE_RENDERING_CAMERAPROPERTIES_EQUALS_OFFSET UNITYSDK_OFFSET(0xA258100)
#define UNITYENGINE_RENDERING_CAMERAPROPERTIES_EQUALS_OFFSET UNITYSDK_OFFSET(0xA259940)
#define UNITYENGINE_RENDERING_CAMERAPROPERTIES_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2599D0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CameraProperties_TypeDefinitionIndex = 31543;

	class CameraProperties : public Il2CppObject
	{
	public:
		::UnityEngine::Rect* screenRect; // 0x10
		::UnityEngine::Vector3* viewDir; // 0x20
		::System::Single projectionNear; // 0x2C
		::System::Single projectionFar; // 0x30
		::System::Single cameraNear; // 0x34
		::System::Single cameraFar; // 0x38
		::System::Single cameraAspect; // 0x3C
		::UnityEngine::Matrix4x4* cameraToWorld; // 0x40
		::UnityEngine::Matrix4x4* actualWorldToClip; // 0x80
		::UnityEngine::Matrix4x4* cameraClipToWorld; // 0xC0
		::UnityEngine::Matrix4x4* cameraWorldToClip; // 0x100
		::UnityEngine::Matrix4x4* implicitProjection; // 0x140
		::UnityEngine::Matrix4x4* stereoWorldToClipLeft; // 0x180
		::UnityEngine::Matrix4x4* stereoWorldToClipRight; // 0x1C0
		::UnityEngine::Matrix4x4* worldToCamera; // 0x200
		::UnityEngine::Vector3* up; // 0x240
		::UnityEngine::Vector3* right; // 0x24C
		::UnityEngine::Vector3* transformDirection; // 0x258
		::UnityEngine::Vector3* cameraEuler; // 0x264
		::UnityEngine::Vector3* velocity; // 0x270
		::System::Single farPlaneWorldSpaceLength; // 0x27C
		::System::UInt32 rendererCount; // 0x280
		<m_ShadowCullPlanes>e__FixedBuffer* m_ShadowCullPlanes; // 0x284
		<m_CameraCullPlanes>e__FixedBuffer* m_CameraCullPlanes; // 0x2E4
		::System::Single baseFarDistance; // 0x344
		::UnityEngine::Vector3* shadowCullCenter; // 0x348
		<layerCullDistances>e__FixedBuffer* layerCullDistances; // 0x354
		::System::Int32 layerCullSpherical; // 0x3D4
		::UnityEngine::Rendering::CoreCameraValues* coreCameraValues; // 0x3D8
		::System::UInt32 cameraType; // 0x3E4
		::System::Int32 projectionIsOblique; // 0x3E8
		::System::Int32 isImplicitProjectionMatrix; // 0x3EC

		::UnityEngine::Plane* GetShadowCullingPlane(::System::Int32 arg)
		{
			return (return (::UnityEngine::Plane*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERAPROPERTIES_GETSHADOWCULLINGPLANE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Plane* GetCameraCullingPlane(::System::Int32 arg)
		{
			return (return (::UnityEngine::Plane*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERAPROPERTIES_GETCAMERACULLINGPLANE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::CameraProperties* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::CameraProperties*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERAPROPERTIES_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERAPROPERTIES_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERAPROPERTIES_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

