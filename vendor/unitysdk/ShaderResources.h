#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Shader; }

#define SHADERRESOURCES_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0808B0)

	inline static constexpr unsigned int ShaderResources_TypeDefinitionIndex = 32786;

	class ShaderResources : public Il2CppObject
	{
	public:
		::UnityEngine::Shader* blitPS; // 0x10
		::UnityEngine::Shader* copyDepthPS; // 0x18
		::UnityEngine::Shader* screenSpaceShadowPS; // 0x20
		::UnityEngine::Shader* samplingPS; // 0x28
		::UnityEngine::Shader* stencilDeferredPS; // 0x30
		::UnityEngine::Shader* fallbackErrorPS; // 0x38
		::UnityEngine::Shader* materialErrorPS; // 0x40
		::UnityEngine::Shader* coreBlitPS; // 0x48
		::UnityEngine::Shader* coreBlitColorAndDepthPS; // 0x50
		::UnityEngine::Shader* cameraMotionVector; // 0x58
		::UnityEngine::Shader* objectMotionVector; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERRESOURCES_.CTOR_OFFSET))(nullptr);
		}

	};

