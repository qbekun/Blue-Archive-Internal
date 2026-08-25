#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class RenderTargetBlendState; }
namespace UnityEngine::Rendering { class ColorWriteMask; }
namespace UnityEngine::Rendering { class BlendMode; }
namespace UnityEngine::Rendering { class BlendOp; }

#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0xA257420)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA260D30)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA257810)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA260D70)
#define UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA257DB0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderTargetBlendState_TypeDefinitionIndex = 31567;

	class RenderTargetBlendState : public Il2CppObject
	{
	public:
		::System::Byte m_WriteMask; // 0x10
		::System::Byte m_SourceColorBlendMode; // 0x11
		::System::Byte m_DestinationColorBlendMode; // 0x12
		::System::Byte m_SourceAlphaBlendMode; // 0x13
		::System::Byte m_DestinationAlphaBlendMode; // 0x14
		::System::Byte m_ColorBlendOperation; // 0x15
		::System::Byte m_AlphaBlendOperation; // 0x16
		::System::Byte m_Padding; // 0x17

		::UnityEngine::Rendering::RenderTargetBlendState* get_defaultValue()
		{
			return (return (::UnityEngine::Rendering::RenderTargetBlendState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GET_DEFAULTVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::ColorWriteMask* arg, ::UnityEngine::Rendering::BlendMode* arg, ::UnityEngine::Rendering::BlendMode* arg, ::UnityEngine::Rendering::BlendMode* arg, ::UnityEngine::Rendering::BlendMode* arg, ::UnityEngine::Rendering::BlendOp* arg, ::UnityEngine::Rendering::BlendOp* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ColorWriteMask*, ::UnityEngine::Rendering::BlendMode*, ::UnityEngine::Rendering::BlendMode*, ::UnityEngine::Rendering::BlendMode*, ::UnityEngine::Rendering::BlendMode*, ::UnityEngine::Rendering::BlendOp*, ::UnityEngine::Rendering::BlendOp*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::RenderTargetBlendState* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::RenderTargetBlendState*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBLENDSTATE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

