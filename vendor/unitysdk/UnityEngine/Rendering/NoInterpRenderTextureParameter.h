#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class RenderTexture; }

#define UNITYENGINE_RENDERING_NOINTERPRENDERTEXTUREPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE4EF0)
#define UNITYENGINE_RENDERING_NOINTERPRENDERTEXTUREPARAMETER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FE4F40)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpRenderTextureParameter_TypeDefinitionIndex = 34127;

	class NoInterpRenderTextureParameter : public ::System::Net::Configuration::UnicodeDecodingConformance
	{
	public:
		::System::Void .ctor(::UnityEngine::RenderTexture* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPRENDERTEXTUREPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPRENDERTEXTUREPARAMETER_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

