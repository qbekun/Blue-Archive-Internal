#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering { class ShaderTagId; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine::Rendering { class GlobalKeyword; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class ShadowData&; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }

#define SCREENSPACESHADOWMASKPASS_CHECKRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FF3E40)
#define SCREENSPACESHADOWMASKPASS_CONFIGURE_OFFSET UNITYSDK_OFFSET(0x9FF3FA0)
#define SCREENSPACESHADOWMASKPASS_ISSUPPORT_OFFSET UNITYSDK_OFFSET(0x9FF40E0)
#define SCREENSPACESHADOWMASKPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9FF40F0)
#define SCREENSPACESHADOWMASKPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x9FF46B0)
#define SCREENSPACESHADOWMASKPASS_UPDATEDESRIPTOR_OFFSET UNITYSDK_OFFSET(0x9FF3FC0)
#define SCREENSPACESHADOWMASKPASS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FF46E0)
#define SCREENSPACESHADOWMASKPASS_CLEAN_OFFSET UNITYSDK_OFFSET(0x9FF3B10)
#define SCREENSPACESHADOWMASKPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF3CD0)

	inline static constexpr unsigned int ScreenSpaceShadowMaskPass_TypeDefinitionIndex = 32409;

	class ScreenSpaceShadowMaskPass : public Il2CppObject
	{
	public:
		::System::Int32 MASK_SCALE; // 0x0
		::System::Int32 MIN_BUFFER_SIZE; // 0x0
		::UnityEngine::Rendering::ShaderTagId* k_ShaderTagId; // 0x0
		::UnityEngine::RenderTexture* MaskTexture; // 0xD8
		::UnityEngine::RenderTextureDescriptor* ShadowMaskDescriptor; // 0xE0
		::UnityEngine::ComputeShader* BlitCS; // 0x118
		::UnityEngine::Rendering::GlobalKeyword* SystemGlobalKeyword; // 0x120

		::System::Void CheckRenderTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESHADOWMASKPASS_CHECKRENDERTEXTURE_OFFSET))(nullptr);
		}

		::System::Void Configure(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::RenderTextureDescriptor* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESHADOWMASKPASS_CONFIGURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsSupport(::UnityEngine::Rendering::Universal::ShadowData&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::ShadowData&*, ::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESHADOWMASKPASS_ISSUPPORT_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESHADOWMASKPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESHADOWMASKPASS_FRAMECLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateDesriptor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESHADOWMASKPASS_UPDATEDESRIPTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESHADOWMASKPASS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Clean()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESHADOWMASKPASS_CLEAN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::RenderPassEvent* arg, ::UnityEngine::ComputeShader* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderPassEvent*, ::UnityEngine::ComputeShader*, ::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACESHADOWMASKPASS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

