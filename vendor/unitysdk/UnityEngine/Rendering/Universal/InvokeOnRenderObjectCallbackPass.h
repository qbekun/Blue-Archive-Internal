#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INVOKEONRENDEROBJECTCALLBACKPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA066FC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INVOKEONRENDEROBJECTCALLBACKPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA067010)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int InvokeOnRenderObjectCallbackPass_TypeDefinitionIndex = 32712;

	class InvokeOnRenderObjectCallbackPass : public Il2CppObject
	{
	public:
		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INVOKEONRENDEROBJECTCALLBACKPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::RenderPassEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderPassEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INVOKEONRENDEROBJECTCALLBACKPASS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

