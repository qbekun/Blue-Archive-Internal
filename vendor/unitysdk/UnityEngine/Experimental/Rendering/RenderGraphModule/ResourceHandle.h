#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphResourceType; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class ResourceHandle; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RESOURCEHANDLE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9FA3320)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RESOURCEHANDLE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x9FA3330)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RESOURCEHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0x9F9E4B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RESOURCEHANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9F9FBC0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RESOURCEHANDLE_GET_ITYPE_OFFSET UNITYSDK_OFFSET(0x9F9D800)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RESOURCEHANDLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FA3340)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RESOURCEHANDLE_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x9FA0B60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RESOURCEHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F9E690)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RESOURCEHANDLE_NEWFRAME_OFFSET UNITYSDK_OFFSET(0x9FA0720)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int ResourceHandle_TypeDefinitionIndex = 33872;

	class ResourceHandle : public Il2CppObject
	{
	public:
		::System::UInt32 kValidityMask; // 0x0
		::System::UInt32 kIndexMask; // 0x0
		::System::UInt32 m_Value; // 0x10
		::System::UInt32 s_CurrentValidBit; // 0x0
		::System::UInt32 s_SharedResourceValidBit; // 0x4
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType* _type_k__BackingField; // 0x14

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType* get_type()
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RESOURCEHANDLE_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_type(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RESOURCEHANDLE_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RESOURCEHANDLE_ISVALID_OFFSET))(nullptr);
		}

		::System::Int32 op_Implicit(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RESOURCEHANDLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_iType()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RESOURCEHANDLE_GET_ITYPE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RESOURCEHANDLE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RESOURCEHANDLE_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RESOURCEHANDLE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void NewFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RESOURCEHANDLE_NEWFRAME_OFFSET))(arg, nullptr);
		}

	};
}

