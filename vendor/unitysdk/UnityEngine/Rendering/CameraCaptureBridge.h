#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Camera; }

#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_REMOVECAPTUREACTION_OFFSET UNITYSDK_OFFSET(0x9FD3930)
#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9FD3A20)
#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_ADDCAPTUREACTION_OFFSET UNITYSDK_OFFSET(0x9FD3A70)
#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FD3C00)
#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9FD3C90)
#define UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_GETCAPTUREACTIONS_OFFSET UNITYSDK_OFFSET(0x9FD3CE0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CameraCaptureBridge_TypeDefinitionIndex = 34053;

	class CameraCaptureBridge : public Il2CppObject
	{
	public:
		Il2CppObject* actionDict; // 0x0
		::System::Boolean _enabled; // 0x8

		::System::Void RemoveCaptureAction(::UnityEngine::Camera* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_REMOVECAPTUREACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Void AddCaptureAction(::UnityEngine::Camera* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_ADDCAPTUREACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void set_enabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_SET_ENABLED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCaptureActions(::UnityEngine::Camera* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREBRIDGE_GETCAPTUREACTIONS_OFFSET))(arg, nullptr);
		}

	};
}

