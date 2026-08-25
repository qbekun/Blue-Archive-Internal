#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0xA0BD3F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_SETUP_OFFSET UNITYSDK_OFFSET(0xA0BD4F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_SET_ALLOCATERT_OFFSET UNITYSDK_OFFSET(0xA0BD5A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0BD5B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_ONCAMERASETUP_OFFSET UNITYSDK_OFFSET(0xA0BE280)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_SET_MSSASAMPLES_OFFSET UNITYSDK_OFFSET(0xA0BE530)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_GET_ALLOCATERT_OFFSET UNITYSDK_OFFSET(0xA0BE540)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xA0BE550)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_GET_MSSASAMPLES_OFFSET UNITYSDK_OFFSET(0xA0BE580)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0BE590)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_SET_DESTINATION_OFFSET UNITYSDK_OFFSET(0xA0BE640)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0xA0BE670)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_GET_DESTINATION_OFFSET UNITYSDK_OFFSET(0xA0BE6A0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int CopyDepthPass_TypeDefinitionIndex = 32869;

	class CopyDepthPass : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::RenderTargetHandle* _source_k__BackingField; // 0xD8
		::UnityEngine::Rendering::Universal::RenderTargetHandle* _destination_k__BackingField; // 0x108
		::System::Boolean _AllocateRT_k__BackingField; // 0x138
		::System::Int32 _MssaSamples_k__BackingField; // 0x13C
		::UnityEngine::Material* m_CopyDepthMaterial; // 0x140

		::System::Void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_ONCAMERACLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Void Setup(::UnityEngine::Rendering::Universal::RenderTargetHandle* arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_SETUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_AllocateRT(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_SET_ALLOCATERT_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_ONCAMERASETUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_MssaSamples(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_SET_MSSASAMPLES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AllocateRT()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_GET_ALLOCATERT_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::RenderTargetHandle* get_source()
		{
			return (return (::UnityEngine::Rendering::Universal::RenderTargetHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_GET_SOURCE_OFFSET))(nullptr);
		}

		::System::Int32 get_MssaSamples()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_GET_MSSASAMPLES_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::RenderPassEvent* arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderPassEvent*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_destination(::UnityEngine::Rendering::Universal::RenderTargetHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_SET_DESTINATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_source(::UnityEngine::Rendering::Universal::RenderTargetHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_SET_SOURCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::RenderTargetHandle* get_destination()
		{
			return (return (::UnityEngine::Rendering::Universal::RenderTargetHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COPYDEPTHPASS_GET_DESTINATION_OFFSET))(nullptr);
		}

	};
}

