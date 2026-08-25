#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }

#define GRABSCREENPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9FF30B0)
#define GRABSCREENPASS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FF3610)
#define GRABSCREENPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF2DD0)

	inline static constexpr unsigned int GrabScreenPass_TypeDefinitionIndex = 32403;

	class GrabScreenPass : public Il2CppObject
	{
	public:
		::System::Int32 _GrabScaleParam; // 0x0
		::UnityEngine::Rendering::Universal::RenderTargetHandle* GrabTexture; // 0xD8
		::System::Int32 DownScale; // 0x108

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + GRABSCREENPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRABSCREENPASS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GRABSCREENPASS_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};

