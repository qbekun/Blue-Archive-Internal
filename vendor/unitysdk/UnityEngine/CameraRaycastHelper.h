#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Ray; }
namespace UnityEngine { class Ray&; }

#define UNITYENGINE_CAMERARAYCASTHELPER_RAYCASTTRY_OFFSET UNITYSDK_OFFSET(0xA290790)
#define UNITYENGINE_CAMERARAYCASTHELPER_RAYCASTTRY2D_OFFSET UNITYSDK_OFFSET(0xA290850)
#define UNITYENGINE_CAMERARAYCASTHELPER_RAYCASTTRY_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2907F0)
#define UNITYENGINE_CAMERARAYCASTHELPER_RAYCASTTRY2D_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2908B0)

namespace UnityEngine
{
	inline static constexpr unsigned int CameraRaycastHelper_TypeDefinitionIndex = 37746;

	class CameraRaycastHelper : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* RaycastTry(::UnityEngine::Camera* arg, ::UnityEngine::Ray* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::UnityEngine::Camera*, ::UnityEngine::Ray*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERARAYCASTHELPER_RAYCASTTRY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::GameObject* RaycastTry2D(::UnityEngine::Camera* arg, ::UnityEngine::Ray* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::UnityEngine::Camera*, ::UnityEngine::Ray*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERARAYCASTHELPER_RAYCASTTRY2D_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::GameObject* RaycastTry_Injected(::UnityEngine::Camera* arg, ::UnityEngine::Ray&* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::UnityEngine::Camera*, ::UnityEngine::Ray&*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERARAYCASTHELPER_RAYCASTTRY_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::GameObject* RaycastTry2D_Injected(::UnityEngine::Camera* arg, ::UnityEngine::Ray&* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::UnityEngine::Camera*, ::UnityEngine::Ray&*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERARAYCASTHELPER_RAYCASTTRY2D_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

