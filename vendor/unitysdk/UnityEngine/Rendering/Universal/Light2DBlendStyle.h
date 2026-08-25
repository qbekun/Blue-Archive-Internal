#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DBLENDSTYLE_SET_HASRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA014550)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DBLENDSTYLE_GET_HASRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA014560)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DBLENDSTYLE_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0xA014570)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DBLENDSTYLE_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0xA014580)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DBLENDSTYLE_GET_MASKTEXTURECHANNELFILTER_OFFSET UNITYSDK_OFFSET(0xA014590)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DBLENDSTYLE_GET_BLENDFACTORS_OFFSET UNITYSDK_OFFSET(0xA014730)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Light2DBlendStyle_TypeDefinitionIndex = 32467;

	class Light2DBlendStyle : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		TextureChannel* maskTextureChannel; // 0x18
		BlendMode* blendMode; // 0x1C
		::System::Boolean _isDirty_k__BackingField; // 0x20
		::System::Boolean _hasRenderTarget_k__BackingField; // 0x21
		::UnityEngine::Rendering::Universal::RenderTargetHandle* renderTargetHandle; // 0x28

		::System::Void set_hasRenderTarget(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DBLENDSTYLE_SET_HASRENDERTARGET_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_hasRenderTarget()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DBLENDSTYLE_GET_HASRENDERTARGET_OFFSET))(nullptr);
		}

		::System::Boolean get_isDirty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DBLENDSTYLE_GET_ISDIRTY_OFFSET))(nullptr);
		}

		::System::Void set_isDirty(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DBLENDSTYLE_SET_ISDIRTY_OFFSET))(arg, nullptr);
		}

		MaskChannelFilter* get_maskTextureChannelFilter()
		{
			return (return (MaskChannelFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DBLENDSTYLE_GET_MASKTEXTURECHANNELFILTER_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_blendFactors()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHT2DBLENDSTYLE_GET_BLENDFACTORS_OFFSET))(nullptr);
		}

	};
}

