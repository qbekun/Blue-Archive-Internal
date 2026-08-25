#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class BlendState; }
namespace UnityEngine::Rendering { class RasterState; }
namespace UnityEngine::Rendering { class DepthState; }
namespace UnityEngine::Rendering { class StencilState; }
namespace UnityEngine::Rendering { class RenderStateMask; }
namespace UnityEngine::Rendering { class RenderStateBlock; }

#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2607B0)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_SET_BLENDSTATE_OFFSET UNITYSDK_OFFSET(0xA260940)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_SET_RASTERSTATE_OFFSET UNITYSDK_OFFSET(0xA260970)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_GET_DEPTHSTATE_OFFSET UNITYSDK_OFFSET(0xA260980)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_SET_DEPTHSTATE_OFFSET UNITYSDK_OFFSET(0xA260990)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_GET_STENCILSTATE_OFFSET UNITYSDK_OFFSET(0xA2609A0)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_SET_STENCILSTATE_OFFSET UNITYSDK_OFFSET(0xA2609C0)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_GET_STENCILREFERENCE_OFFSET UNITYSDK_OFFSET(0xA2609D0)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_SET_STENCILREFERENCE_OFFSET UNITYSDK_OFFSET(0xA2609E0)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_GET_MASK_OFFSET UNITYSDK_OFFSET(0xA2609F0)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_SET_MASK_OFFSET UNITYSDK_OFFSET(0xA260A00)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xA260A10)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xA260B80)
#define UNITYENGINE_RENDERING_RENDERSTATEBLOCK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA260C40)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderStateBlock_TypeDefinitionIndex = 31565;

	class RenderStateBlock : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::BlendState* m_BlendState; // 0x10
		::UnityEngine::Rendering::RasterState* m_RasterState; // 0x54
		::UnityEngine::Rendering::DepthState* m_DepthState; // 0x64
		::UnityEngine::Rendering::StencilState* m_StencilState; // 0x66
		::System::Int32 m_StencilReference; // 0x74
		::UnityEngine::Rendering::RenderStateMask* m_Mask; // 0x78

		::System::Void .ctor(::UnityEngine::Rendering::RenderStateMask* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderStateMask*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_blendState(::UnityEngine::Rendering::BlendState* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::BlendState*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_SET_BLENDSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_rasterState(::UnityEngine::Rendering::RasterState* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RasterState*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_SET_RASTERSTATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::DepthState* get_depthState()
		{
			return (return (::UnityEngine::Rendering::DepthState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_GET_DEPTHSTATE_OFFSET))(nullptr);
		}

		::System::Void set_depthState(::UnityEngine::Rendering::DepthState* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::DepthState*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_SET_DEPTHSTATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::StencilState* get_stencilState()
		{
			return (return (::UnityEngine::Rendering::StencilState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_GET_STENCILSTATE_OFFSET))(nullptr);
		}

		::System::Void set_stencilState(::UnityEngine::Rendering::StencilState* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::StencilState*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_SET_STENCILSTATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_stencilReference()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_GET_STENCILREFERENCE_OFFSET))(nullptr);
		}

		::System::Void set_stencilReference(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_SET_STENCILREFERENCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RenderStateMask* get_mask()
		{
			return (return (::UnityEngine::Rendering::RenderStateMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_GET_MASK_OFFSET))(nullptr);
		}

		::System::Void set_mask(::UnityEngine::Rendering::RenderStateMask* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderStateMask*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_SET_MASK_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::RenderStateBlock* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::RenderStateBlock*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERSTATEBLOCK_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

