#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class ShaderTagId; }
namespace UnityEngine::Rendering { class FilteringSettings; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine::Rendering { class RenderStateBlock; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define COMPOSITEPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9FF5670)
#define COMPOSITEPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x9FF4DB0)
#define COMPOSITEPASS_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0x9FF5C50)
#define COMPOSITEPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF4B70)

	inline static constexpr unsigned int CompositePass_TypeDefinitionIndex = 32412;

	class CompositePass : public Il2CppObject
	{
	public:
		::UnityEngine::Material* _mat; // 0xD8
		::System::Int32 _passIndex; // 0xE0
		::UnityEngine::Rendering::ShaderTagId* _maskTagId; // 0xE4
		::UnityEngine::Rendering::FilteringSettings* _filter; // 0xE8
		::UnityEngine::Rendering::Universal::RenderTargetHandle* _tempHandle; // 0x100
		::UnityEngine::Rendering::RenderTargetIdentifier* _cameraColorTarget; // 0x130
		::UnityEngine::Rendering::RenderStateBlock* _renderStateBlock; // 0x158

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + COMPOSITEPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Setup(::UnityEngine::Rendering::Universal::RenderPassEvent* arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderPassEvent*, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::PVOID))((::PBYTE)hIl2Cpp + COMPOSITEPASS_SETUP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + COMPOSITEPASS_ONCAMERACLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPOSITEPASS_.CTOR_OFFSET))(nullptr);
		}

	};

