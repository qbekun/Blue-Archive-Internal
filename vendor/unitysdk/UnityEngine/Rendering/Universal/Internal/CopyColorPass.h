#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class Downsampling; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_GET_DESTINATION_OFFSET UNITYSDK_OFFSET(0xA0BC490)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0BC4C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_SET_DESTINATION_OFFSET UNITYSDK_OFFSET(0xA0BCEF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0BCF20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0xA0BD020)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xA0BD1B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_ONCAMERASETUP_OFFSET UNITYSDK_OFFSET(0xA0BD1E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0xA0BD370)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_SETUP_OFFSET UNITYSDK_OFFSET(0xA0BD3A0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int CopyColorPass_TypeDefinitionIndex = 32868;

	class CopyColorPass : public Il2CppObject
	{
	public:
		::System::Int32 m_SampleOffsetShaderHandle; // 0xD8
		::UnityEngine::Material* m_SamplingMaterial; // 0xE0
		::UnityEngine::Rendering::Universal::Downsampling* m_DownsamplingMethod; // 0xE8
		::UnityEngine::Material* m_CopyColorMaterial; // 0xF0
		::UnityEngine::Rendering::RenderTargetIdentifier* _source_k__BackingField; // 0xF8
		::UnityEngine::Rendering::Universal::RenderTargetHandle* _destination_k__BackingField; // 0x120

		::UnityEngine::Rendering::Universal::RenderTargetHandle* get_destination()
		{
			return (return (::UnityEngine::Rendering::Universal::RenderTargetHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_GET_DESTINATION_OFFSET))(nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_destination(::UnityEngine::Rendering::Universal::RenderTargetHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_SET_DESTINATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::RenderPassEvent* arg, ::UnityEngine::Material* arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderPassEvent*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_ONCAMERACLEANUP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* get_source()
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_GET_SOURCE_OFFSET))(nullptr);
		}

		::System::Void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_ONCAMERASETUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_source(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_SET_SOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void Setup(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle* arg, ::UnityEngine::Rendering::Universal::Downsampling* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::UnityEngine::Rendering::Universal::Downsampling*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYCOLORPASS_SETUP_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

