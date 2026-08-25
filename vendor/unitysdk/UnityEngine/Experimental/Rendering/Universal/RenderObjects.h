#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering::Universal { class RenderObjectsPass; }
namespace UnityEngine::Rendering::Universal { class ScriptableRenderer; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF8980)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTS_SUPPORTSNATIVERENDERPASS_OFFSET UNITYSDK_OFFSET(0x9FF8B30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTS_ADDRENDERPASSES_OFFSET UNITYSDK_OFFSET(0x9FF8B60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTS_CREATE_OFFSET UNITYSDK_OFFSET(0x9FF8B90)

namespace UnityEngine::Experimental::Rendering::Universal
{
	inline static constexpr unsigned int RenderObjects_TypeDefinitionIndex = 32428;

	class RenderObjects : public Il2CppObject
	{
	public:
		RenderObjectsSettings* settings; // 0x20
		::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass* renderObjectsPass; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTS_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean SupportsNativeRenderPass()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTS_SUPPORTSNATIVERENDERPASS_OFFSET))(nullptr);
		}

		::System::Void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTS_ADDRENDERPASSES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Create()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTS_CREATE_OFFSET))(nullptr);
		}

	};
}

