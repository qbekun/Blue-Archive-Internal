#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class ScriptableRenderer; }
namespace UnityEngine::Rendering::Universal { class CameraData&; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA072190)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_ONCAMERAPRECULL_OFFSET UNITYSDK_OFFSET(0xA0721A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_ADDRENDERPASSES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA0721B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xA0721D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_SUPPORTSNATIVERENDERPASS_OFFSET UNITYSDK_OFFSET(0xA0721F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0xA072200)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA072210)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA072270)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA05DA20)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScriptableRendererFeature_TypeDefinitionIndex = 32747;

	class ScriptableRendererFeature : public Il2CppObject
	{
	public:
		::System::Boolean m_Active; // 0x18

		::System::Boolean get_isActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_GET_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Void Create()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_CREATE_OFFSET))(nullptr);
		}

		::System::Void OnCameraPreCull(::UnityEngine::Rendering::Universal::ScriptableRenderer* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_ONCAMERAPRECULL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_ADDRENDERPASSES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Boolean SupportsNativeRenderPass()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_SUPPORTSNATIVERENDERPASS_OFFSET))(nullptr);
		}

		::System::Void SetActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_SETACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERFEATURE_.CTOR_OFFSET))(nullptr);
		}

	};
}

