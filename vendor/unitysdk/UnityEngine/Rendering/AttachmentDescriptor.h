#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class RenderBufferLoadAction; }
namespace UnityEngine::Rendering { class RenderBufferStoreAction; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine { class Color; }
namespace UnityEngine::Rendering { class AttachmentDescriptor; }

#define UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_SET_LOADACTION_OFFSET UNITYSDK_OFFSET(0xA256CB0)
#define UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_SET_STOREACTION_OFFSET UNITYSDK_OFFSET(0xA256CC0)
#define UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_GET_GRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0xA256CD0)
#define UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_GET_LOADSTORETARGET_OFFSET UNITYSDK_OFFSET(0xA256CE0)
#define UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_SET_LOADSTORETARGET_OFFSET UNITYSDK_OFFSET(0xA256D00)
#define UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_CONFIGURETARGET_OFFSET UNITYSDK_OFFSET(0xA256D20)
#define UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_CONFIGURERESOLVETARGET_OFFSET UNITYSDK_OFFSET(0xA256D70)
#define UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_CONFIGURECLEAR_OFFSET UNITYSDK_OFFSET(0xA256DA0)
#define UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA256DC0)
#define UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_EQUALS_OFFSET UNITYSDK_OFFSET(0xA256E80)
#define UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_EQUALS_OFFSET UNITYSDK_OFFSET(0xA257050)
#define UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA257120)
#define UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA257250)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AttachmentDescriptor_TypeDefinitionIndex = 31537;

	class AttachmentDescriptor : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::RenderBufferLoadAction* m_LoadAction; // 0x10
		::UnityEngine::Rendering::RenderBufferStoreAction* m_StoreAction; // 0x14
		::UnityEngine::Experimental::Rendering::GraphicsFormat* m_Format; // 0x18
		::UnityEngine::Rendering::RenderTargetIdentifier* m_LoadStoreTarget; // 0x20
		::UnityEngine::Rendering::RenderTargetIdentifier* m_ResolveTarget; // 0x48
		::UnityEngine::Color* m_ClearColor; // 0x70
		::System::Single m_ClearDepth; // 0x80
		::System::UInt32 m_ClearStencil; // 0x84

		::System::Void set_loadAction(::UnityEngine::Rendering::RenderBufferLoadAction* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderBufferLoadAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_SET_LOADACTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_storeAction(::UnityEngine::Rendering::RenderBufferStoreAction* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderBufferStoreAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_SET_STOREACTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* get_graphicsFormat()
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_GET_GRAPHICSFORMAT_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* get_loadStoreTarget()
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_GET_LOADSTORETARGET_OFFSET))(nullptr);
		}

		::System::Void set_loadStoreTarget(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_SET_LOADSTORETARGET_OFFSET))(arg, nullptr);
		}

		::System::Void ConfigureTarget(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_CONFIGURETARGET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ConfigureResolveTarget(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_CONFIGURERESOLVETARGET_OFFSET))(arg, nullptr);
		}

		::System::Void ConfigureClear(::UnityEngine::Color* arg, ::System::Single arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::System::Single, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_CONFIGURECLEAR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::AttachmentDescriptor* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::AttachmentDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Rendering::AttachmentDescriptor* arg, ::UnityEngine::Rendering::AttachmentDescriptor* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::AttachmentDescriptor*, ::UnityEngine::Rendering::AttachmentDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

	};
}

