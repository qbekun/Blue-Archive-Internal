#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine::Rendering { class FilteringSettings; }
namespace UnityEngine::Rendering::Universal { class StencilStateData; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }
namespace UnityEngine { class LayerMask; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }

#define RENDERTOCOMPOSITEPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x9FF4D40)
#define RENDERTOCOMPOSITEPASS_ONCAMERASETUP_OFFSET UNITYSDK_OFFSET(0x9FF5060)
#define RENDERTOCOMPOSITEPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x9FF52C0)
#define RENDERTOCOMPOSITEPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF4A10)
#define RENDERTOCOMPOSITEPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9FF5340)

	inline static constexpr unsigned int RenderToCompositePass_TypeDefinitionIndex = 32411;

	class RenderToCompositePass : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::RenderTargetHandle* _tempBufferHandle; // 0xD8
		::UnityEngine::RenderTextureDescriptor* _descriptor; // 0x108
		::Il2CppArray<::System::Object*>* _tagIds; // 0x140
		::UnityEngine::Rendering::FilteringSettings* _filter; // 0x148
		::UnityEngine::Rendering::Universal::StencilStateData* _stencilStateData; // 0x160
		::System::Boolean _useCameraDepth; // 0x168

		::System::Void Setup(::UnityEngine::RenderTextureDescriptor* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + RENDERTOCOMPOSITEPASS_SETUP_OFFSET))(arg, nullptr);
		}

		::System::Void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + RENDERTOCOMPOSITEPASS_ONCAMERASETUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + RENDERTOCOMPOSITEPASS_FRAMECLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::RenderPassEvent* arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle* arg, ::UnityEngine::LayerMask* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderPassEvent*, ::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::UnityEngine::LayerMask*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RENDERTOCOMPOSITEPASS_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + RENDERTOCOMPOSITEPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

	};

