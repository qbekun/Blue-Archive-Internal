#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Shader; }
namespace UnityEngine::Rendering::Universal { class ScreenSpaceAmbientOcclusionSettings; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class ScriptableRenderer; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACEAMBIENTOCCLUSION_CREATE_OFFSET UNITYSDK_OFFSET(0xA069F50)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACEAMBIENTOCCLUSION_ADDRENDERPASSES_OFFSET UNITYSDK_OFFSET(0xA06A500)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACEAMBIENTOCCLUSION_GET_AFTEROPAQUE_OFFSET UNITYSDK_OFFSET(0xA06A8A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACEAMBIENTOCCLUSION_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0xA06A3A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACEAMBIENTOCCLUSION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA06A8C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACEAMBIENTOCCLUSION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA06A910)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScreenSpaceAmbientOcclusion_TypeDefinitionIndex = 32736;

	class ScreenSpaceAmbientOcclusion : public Il2CppObject
	{
	public:
		::UnityEngine::Shader* m_Shader; // 0x20
		::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* m_Settings; // 0x28
		::UnityEngine::Material* m_Material; // 0x30
		ScreenSpaceAmbientOcclusionPass* m_SSAOPass; // 0x38
		::System::String* k_ShaderName; // 0x0
		::System::String* k_OrthographicCameraKeyword; // 0x0
		::System::String* k_NormalReconstructionLowKeyword; // 0x0
		::System::String* k_NormalReconstructionMediumKeyword; // 0x0
		::System::String* k_NormalReconstructionHighKeyword; // 0x0
		::System::String* k_SourceDepthKeyword; // 0x0
		::System::String* k_SourceDepthNormalsKeyword; // 0x0

		::System::Void Create()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACEAMBIENTOCCLUSION_CREATE_OFFSET))(nullptr);
		}

		::System::Void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACEAMBIENTOCCLUSION_ADDRENDERPASSES_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_afterOpaque()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACEAMBIENTOCCLUSION_GET_AFTEROPAQUE_OFFSET))(nullptr);
		}

		::System::Boolean GetMaterial()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACEAMBIENTOCCLUSION_GETMATERIAL_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACEAMBIENTOCCLUSION_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCREENSPACEAMBIENTOCCLUSION_.CTOR_OFFSET))(nullptr);
		}

	};
}

