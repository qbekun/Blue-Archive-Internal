#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class TextureSizeMode; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::Rendering { class ScaleFunc; }
namespace UnityEngine::Rendering { class DepthBits; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine { class FilterMode; }
namespace UnityEngine { class TextureWrapMode; }
namespace UnityEngine::Rendering { class TextureDimension; }
namespace UnityEngine::Rendering { class MSAASamples; }
namespace UnityEngine { class RenderTextureMemoryless; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class FastMemoryDesc; }
namespace UnityEngine { class Color; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class TextureDesc; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREDESC_INITDEFAULTVALUES_OFFSET UNITYSDK_OFFSET(0x9FA3830)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREDESC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FA3900)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREDESC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FA3A00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREDESC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FA3B10)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREDESC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FA3C20)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREDESC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FA3C80)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int TextureDesc_TypeDefinitionIndex = 33878;

	class TextureDesc : public Il2CppObject
	{
	public:
		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureSizeMode* sizeMode; // 0x10
		::System::Int32 width; // 0x14
		::System::Int32 height; // 0x18
		::System::Int32 slices; // 0x1C
		::UnityEngine::Vector2* scale; // 0x20
		::UnityEngine::Rendering::ScaleFunc* func; // 0x28
		::UnityEngine::Rendering::DepthBits* depthBufferBits; // 0x30
		::UnityEngine::Experimental::Rendering::GraphicsFormat* colorFormat; // 0x34
		::UnityEngine::FilterMode* filterMode; // 0x38
		::UnityEngine::TextureWrapMode* wrapMode; // 0x3C
		::UnityEngine::Rendering::TextureDimension* dimension; // 0x40
		::System::Boolean enableRandomWrite; // 0x44
		::System::Boolean useMipMap; // 0x45
		::System::Boolean autoGenerateMips; // 0x46
		::System::Boolean isShadowMap; // 0x47
		::System::Int32 anisoLevel; // 0x48
		::System::Single mipMapBias; // 0x4C
		::UnityEngine::Rendering::MSAASamples* msaaSamples; // 0x50
		::System::Boolean bindTextureMS; // 0x54
		::System::Boolean useDynamicScale; // 0x55
		::UnityEngine::RenderTextureMemoryless* memoryless; // 0x58
		::System::String* name; // 0x60
		::UnityEngine::Experimental::Rendering::RenderGraphModule::FastMemoryDesc* fastMemoryDesc; // 0x68
		::System::Boolean fallBackToBlackTexture; // 0x74
		::System::Boolean clearBuffer; // 0x75
		::UnityEngine::Color* clearColor; // 0x78

		::System::Void InitDefaultValues(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREDESC_INITDEFAULTVALUES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREDESC_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector2* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREDESC_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::ScaleFunc* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScaleFunc*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREDESC_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREDESC_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREDESC_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

