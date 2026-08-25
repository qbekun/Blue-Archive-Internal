#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class TextureHandle; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class ResourceHandle; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class RTHandle; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREHANDLE_GET_NULLHANDLE_OFFSET UNITYSDK_OFFSET(0x9FA34A0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FA13F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREHANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9FA3500)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREHANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9FA35E0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREHANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9FA36A0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREHANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9FA3760)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0x9F9F960)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREHANDLE_SETFALLBACKRESOURCE_OFFSET UNITYSDK_OFFSET(0x9FA3810)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREHANDLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FA3820)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int TextureHandle_TypeDefinitionIndex = 33875;

	class TextureHandle : public Il2CppObject
	{
	public:
		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* s_NullHandle; // 0x0
		::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle* handle; // 0x10
		::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle* fallBackResource; // 0x18

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* get_nullHandle()
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREHANDLE_GET_NULLHANDLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREHANDLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* op_Implicit(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* arg)
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREHANDLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture* op_Implicit(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* arg)
		{
			return (return (::UnityEngine::Texture*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREHANDLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RenderTexture* op_Implicit(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* arg)
		{
			return (return (::UnityEngine::RenderTexture*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREHANDLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RTHandle* op_Implicit(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* arg)
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREHANDLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREHANDLE_ISVALID_OFFSET))(nullptr);
		}

		::System::Void SetFallBackResource(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREHANDLE_SETFALLBACKRESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREHANDLE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

