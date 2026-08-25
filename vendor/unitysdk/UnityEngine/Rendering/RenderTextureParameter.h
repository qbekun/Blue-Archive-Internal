#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class RenderTexture; }

#define UNITYENGINE_RENDERING_RENDERTEXTUREPARAMETER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FE4DC0)
#define UNITYENGINE_RENDERING_RENDERTEXTUREPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE4EA0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderTextureParameter_TypeDefinitionIndex = 34126;

	class RenderTextureParameter : public ::System::Net::Configuration::UnicodeDecodingConformance
	{
	public:
		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTEXTUREPARAMETER_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::RenderTexture* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTEXTUREPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

