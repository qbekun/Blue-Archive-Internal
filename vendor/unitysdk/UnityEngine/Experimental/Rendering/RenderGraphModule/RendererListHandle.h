#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RendererListHandle; }
namespace UnityEngine::Rendering::RendererUtils { class RendererList; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERERLISTHANDLE_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x9FA3240)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERERLISTHANDLE_SET_HANDLE_OFFSET UNITYSDK_OFFSET(0x9FA3250)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERERLISTHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FA1CB0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERERLISTHANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9F9FCC0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERERLISTHANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9FA3260)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERERLISTHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0x9FA3310)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RendererListHandle_TypeDefinitionIndex = 33869;

	class RendererListHandle : public Il2CppObject
	{
	public:
		::System::Boolean m_IsValid; // 0x10
		::System::Int32 _handle_k__BackingField; // 0x14

		::System::Int32 get_handle()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERERLISTHANDLE_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::Void set_handle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERERLISTHANDLE_SET_HANDLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERERLISTHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 op_Implicit(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERERLISTHANDLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RendererUtils::RendererList* op_Implicit(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle* arg)
		{
			return (return (::UnityEngine::Rendering::RendererUtils::RendererList*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERERLISTHANDLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERERLISTHANDLE_ISVALID_OFFSET))(nullptr);
		}

	};
}

