#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine::Rendering { class ScriptableCullingParameters; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int XRPassCreateInfo_TypeDefinitionIndex = 32811;

	class XRPassCreateInfo : public Il2CppObject
	{
	public:
		::System::Int32 multipassId; // 0x10
		::System::Int32 cullingPassId; // 0x14
		::UnityEngine::RenderTexture* renderTarget; // 0x18
		::UnityEngine::RenderTextureDescriptor* renderTargetDesc; // 0x20
		::System::Boolean renderTargetIsRenderTexture; // 0x54
		::UnityEngine::Rendering::ScriptableCullingParameters* cullingParameters; // 0x58
		CustomMirrorView* customMirrorView; // 0x680

	};
}

