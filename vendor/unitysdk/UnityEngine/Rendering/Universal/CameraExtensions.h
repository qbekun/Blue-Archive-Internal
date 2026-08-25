#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class UniversalAdditionalCameraData; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering::Universal { class VolumeFrameworkUpdateMode; }
namespace UnityEngine { class LayerMask&; }
namespace UnityEngine { class Transform&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_GETUNIVERSALADDITIONALCAMERADATA_OFFSET UNITYSDK_OFFSET(0xA0763B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_GETVOLUMEFRAMEWORKUPDATEMODE_OFFSET UNITYSDK_OFFSET(0xA076450)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETVOLUMEFRAMEWORKUPDATEMODE_OFFSET UNITYSDK_OFFSET(0xA076470)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_UPDATEVOLUMESTACK_OFFSET UNITYSDK_OFFSET(0xA076750)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_UPDATEVOLUMESTACK_OFFSET UNITYSDK_OFFSET(0xA0765F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_DESTROYVOLUMESTACK_OFFSET UNITYSDK_OFFSET(0xA076980)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_DESTROYVOLUMESTACK_OFFSET UNITYSDK_OFFSET(0xA0769D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_GETVOLUMELAYERMASKANDTRIGGER_OFFSET UNITYSDK_OFFSET(0xA076770)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CameraExtensions_TypeDefinitionIndex = 32773;

	class CameraExtensions : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* GetUniversalAdditionalCameraData(::UnityEngine::Camera* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_GETUNIVERSALADDITIONALCAMERADATA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode* GetVolumeFrameworkUpdateMode(::UnityEngine::Camera* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode*(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_GETVOLUMEFRAMEWORKUPDATEMODE_OFFSET))(arg, nullptr);
		}

		::System::Void SetVolumeFrameworkUpdateMode(::UnityEngine::Camera* arg, ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_SETVOLUMEFRAMEWORKUPDATEMODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateVolumeStack(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_UPDATEVOLUMESTACK_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateVolumeStack(::UnityEngine::Camera* arg, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_UPDATEVOLUMESTACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DestroyVolumeStack(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_DESTROYVOLUMESTACK_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyVolumeStack(::UnityEngine::Camera* arg, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_DESTROYVOLUMESTACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetVolumeLayerMaskAndTrigger(::UnityEngine::Camera* arg, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* arg, ::UnityEngine::LayerMask&* arg, ::UnityEngine::Transform&* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*, ::UnityEngine::LayerMask&*, ::UnityEngine::Transform&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERAEXTENSIONS_GETVOLUMELAYERMASKANDTRIGGER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

