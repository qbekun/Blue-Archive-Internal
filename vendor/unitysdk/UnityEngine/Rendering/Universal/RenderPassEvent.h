#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RenderPassEvent_TypeDefinitionIndex = 32715;

	class RenderPassEvent : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::RenderPassEvent* BeforeRendering; // 0x0
		::UnityEngine::Rendering::Universal::RenderPassEvent* BeforeRenderingShadows; // 0x0
		::UnityEngine::Rendering::Universal::RenderPassEvent* AfterRenderingShadows; // 0x0
		::UnityEngine::Rendering::Universal::RenderPassEvent* BeforeRenderingPrePasses; // 0x0
		::UnityEngine::Rendering::Universal::RenderPassEvent* BeforeRenderingPrepasses; // 0x0
		::UnityEngine::Rendering::Universal::RenderPassEvent* AfterRenderingPrePasses; // 0x0
		::UnityEngine::Rendering::Universal::RenderPassEvent* BeforeRenderingGbuffer; // 0x0
		::UnityEngine::Rendering::Universal::RenderPassEvent* AfterRenderingGbuffer; // 0x0
		::UnityEngine::Rendering::Universal::RenderPassEvent* BeforeRenderingDeferredLights; // 0x0
		::UnityEngine::Rendering::Universal::RenderPassEvent* AfterRenderingDeferredLights; // 0x0
		::UnityEngine::Rendering::Universal::RenderPassEvent* BeforeRenderingOpaques; // 0x0
		::UnityEngine::Rendering::Universal::RenderPassEvent* AfterRenderingOpaques; // 0x0
		::UnityEngine::Rendering::Universal::RenderPassEvent* BeforeRenderingSkybox; // 0x0
		::UnityEngine::Rendering::Universal::RenderPassEvent* AfterRenderingSkybox; // 0x0
		::UnityEngine::Rendering::Universal::RenderPassEvent* BeforeRenderingTransparents; // 0x0
		::UnityEngine::Rendering::Universal::RenderPassEvent* AfterRenderingTransparents; // 0x0
		::UnityEngine::Rendering::Universal::RenderPassEvent* BeforeRenderingPostProcessing; // 0x0
		::UnityEngine::Rendering::Universal::RenderPassEvent* AfterRenderingPostProcessing; // 0x0
		::UnityEngine::Rendering::Universal::RenderPassEvent* AfterRendering; // 0x0

	};
}

