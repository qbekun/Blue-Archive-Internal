#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class ComputeBufferHandle; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class ResourceHandle; }
namespace UnityEngine { class ComputeBuffer; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_COMPUTEBUFFERHANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9F9E1F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_COMPUTEBUFFERHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0x9F9E2B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_COMPUTEBUFFERHANDLE_GET_NULLHANDLE_OFFSET UNITYSDK_OFFSET(0x9F9E550)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_COMPUTEBUFFERHANDLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F9E5A0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_COMPUTEBUFFERHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F9E5B0)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int ComputeBufferHandle_TypeDefinitionIndex = 33857;

	class ComputeBufferHandle : public Il2CppObject
	{
	public:
		::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle* s_NullHandle; // 0x0
		::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle* handle; // 0x10

		::UnityEngine::ComputeBuffer* op_Implicit(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle* arg)
		{
			return (return (::UnityEngine::ComputeBuffer*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_COMPUTEBUFFERHANDLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_COMPUTEBUFFERHANDLE_ISVALID_OFFSET))(nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle* get_nullHandle()
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_COMPUTEBUFFERHANDLE_GET_NULLHANDLE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_COMPUTEBUFFERHANDLE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_COMPUTEBUFFERHANDLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

