#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering::Universal { class ScriptableRenderer; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine::Rendering::Universal { class ScreenSpaceAmbientOcclusionSettings; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }

#define SCREENSPACEAMBIENTOCCLUSIONPASS_RENDERANDSETBASEMAP_OFFSET UNITYSDK_OFFSET(0xA06A9B0)
#define SCREENSPACEAMBIENTOCCLUSIONPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA069FC0)
#define SCREENSPACEAMBIENTOCCLUSIONPASS_GET_ISRENDERERDEFERRED_OFFSET UNITYSDK_OFFSET(0xA06AC40)
#define SCREENSPACEAMBIENTOCCLUSIONPASS_SETUP_OFFSET UNITYSDK_OFFSET(0xA06A6B0)
#define SCREENSPACEAMBIENTOCCLUSIONPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA06ACA0)
#define SCREENSPACEAMBIENTOCCLUSIONPASS_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0xA06C040)
#define SCREENSPACEAMBIENTOCCLUSIONPASS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA06C1D0)
#define SCREENSPACEAMBIENTOCCLUSIONPASS_RENDER_OFFSET UNITYSDK_OFFSET(0xA06AAB0)
#define SCREENSPACEAMBIENTOCCLUSIONPASS_ONCAMERASETUP_OFFSET UNITYSDK_OFFSET(0xA06C400)

	inline static constexpr unsigned int ScreenSpaceAmbientOcclusionPass_TypeDefinitionIndex = 32735;

	class ScreenSpaceAmbientOcclusionPass : public Il2CppObject
	{
	public:
		::System::Boolean m_SupportsR8RenderTextureFormat; // 0xD8
		::UnityEngine::Material* m_Material; // 0xE0
		::Il2CppArray<::System::Object*>* m_CameraTopLeftCorner; // 0xE8
		::Il2CppArray<::System::Object*>* m_CameraXExtent; // 0xF0
		::Il2CppArray<::System::Object*>* m_CameraYExtent; // 0xF8
		::Il2CppArray<::System::Object*>* m_CameraZExtent; // 0x100
		::Il2CppArray<::System::Object*>* m_CameraViewProjections; // 0x108
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler; // 0x110
		::UnityEngine::Rendering::Universal::ScriptableRenderer* m_Renderer; // 0x118
		::UnityEngine::Rendering::RenderTargetIdentifier* m_SSAOTexture1Target; // 0x120
		::UnityEngine::Rendering::RenderTargetIdentifier* m_SSAOTexture2Target; // 0x148
		::UnityEngine::Rendering::RenderTargetIdentifier* m_SSAOTexture3Target; // 0x170
		::UnityEngine::Rendering::RenderTargetIdentifier* m_SSAOTextureFinalTarget; // 0x198
		::UnityEngine::RenderTextureDescriptor* m_AOPassDescriptor; // 0x1C0
		::UnityEngine::RenderTextureDescriptor* m_BlurPassesDescriptor; // 0x1F4
		::UnityEngine::RenderTextureDescriptor* m_FinalDescriptor; // 0x228
		::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* m_CurrentSettings; // 0x260
		::System::String* k_SSAOTextureName; // 0x0
		::System::String* k_SSAOAmbientOcclusionParamName; // 0x0
		::System::Int32 s_BaseMapID; // 0x0
		::System::Int32 s_SSAOParamsID; // 0x4
		::System::Int32 s_SSAOTexture1ID; // 0x8
		::System::Int32 s_SSAOTexture2ID; // 0xC
		::System::Int32 s_SSAOTexture3ID; // 0x10
		::System::Int32 s_SSAOTextureFinalID; // 0x14
		::System::Int32 s_CameraViewXExtentID; // 0x18
		::System::Int32 s_CameraViewYExtentID; // 0x1C
		::System::Int32 s_CameraViewZExtentID; // 0x20
		::System::Int32 s_ProjectionParams2ID; // 0x24
		::System::Int32 s_CameraViewProjectionsID; // 0x28
		::System::Int32 s_CameraViewTopLeftCornerID; // 0x2C

		::System::Void RenderAndSetBaseMap(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ShaderPasses* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ShaderPasses*, ::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACEAMBIENTOCCLUSIONPASS_RENDERANDSETBASEMAP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACEAMBIENTOCCLUSIONPASS_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_isRendererDeferred()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACEAMBIENTOCCLUSIONPASS_GET_ISRENDERERDEFERRED_OFFSET))(nullptr);
		}

		::System::Boolean Setup(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* arg, ::UnityEngine::Rendering::Universal::ScriptableRenderer* arg, ::UnityEngine::Material* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*, ::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACEAMBIENTOCCLUSIONPASS_SETUP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACEAMBIENTOCCLUSIONPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACEAMBIENTOCCLUSIONPASS_ONCAMERACLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACEAMBIENTOCCLUSIONPASS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Render(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ShaderPasses* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ShaderPasses*, ::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACEAMBIENTOCCLUSIONPASS_RENDER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + SCREENSPACEAMBIENTOCCLUSIONPASS_ONCAMERASETUP_OFFSET))(arg, arg, nullptr);
		}

	};

