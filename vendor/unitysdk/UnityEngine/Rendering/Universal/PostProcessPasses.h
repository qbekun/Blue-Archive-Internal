#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal { class ColorGradingLutPass; }
namespace UnityEngine::Rendering::Universal::Internal { class PostProcessPass; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine::Rendering::Universal { class PostProcessData; }
namespace UnityEngine { class Material; }

#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSPASSES_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0675A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSPASSES_GET_ISCREATED_OFFSET UNITYSDK_OFFSET(0xA067A10)
#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSPASSES_RECREATE_OFFSET UNITYSDK_OFFSET(0xA067780)
#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSPASSES_GET_POSTPROCESSPASS_OFFSET UNITYSDK_OFFSET(0xA067A70)
#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSPASSES_GET_FINALPOSTPROCESSPASS_OFFSET UNITYSDK_OFFSET(0xA067A80)
#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSPASSES_GET_COLORGRADINGLUT_OFFSET UNITYSDK_OFFSET(0xA067A90)
#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSPASSES_GET_AFTERPOSTPROCESSCOLOR_OFFSET UNITYSDK_OFFSET(0xA067AB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSPASSES_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA067AD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSPASSES_GET_COLORGRADINGLUTPASS_OFFSET UNITYSDK_OFFSET(0xA067B20)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PostProcessPasses_TypeDefinitionIndex = 32718;

	class PostProcessPasses : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* m_ColorGradingLutPass; // 0x10
		::UnityEngine::Rendering::Universal::Internal::PostProcessPass* m_PostProcessPass; // 0x18
		::UnityEngine::Rendering::Universal::Internal::PostProcessPass* m_FinalPostProcessPass; // 0x20
		::UnityEngine::Rendering::Universal::RenderTargetHandle* m_AfterPostProcessColor; // 0x28
		::UnityEngine::Rendering::Universal::RenderTargetHandle* m_ColorGradingLut; // 0x58
		::UnityEngine::Rendering::Universal::PostProcessData* m_RendererPostProcessData; // 0x88
		::UnityEngine::Rendering::Universal::PostProcessData* m_CurrentPostProcessData; // 0x90
		::UnityEngine::Material* m_BlitMaterial; // 0x98

		::System::Void .ctor(::UnityEngine::Rendering::Universal::PostProcessData* arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::PostProcessData*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSPASSES_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_isCreated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSPASSES_GET_ISCREATED_OFFSET))(nullptr);
		}

		::System::Void Recreate(::UnityEngine::Rendering::Universal::PostProcessData* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::PostProcessData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSPASSES_RECREATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::Internal::PostProcessPass* get_postProcessPass()
		{
			return (return (::UnityEngine::Rendering::Universal::Internal::PostProcessPass*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSPASSES_GET_POSTPROCESSPASS_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::Internal::PostProcessPass* get_finalPostProcessPass()
		{
			return (return (::UnityEngine::Rendering::Universal::Internal::PostProcessPass*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSPASSES_GET_FINALPOSTPROCESSPASS_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::RenderTargetHandle* get_colorGradingLut()
		{
			return (return (::UnityEngine::Rendering::Universal::RenderTargetHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSPASSES_GET_COLORGRADINGLUT_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::RenderTargetHandle* get_afterPostProcessColor()
		{
			return (return (::UnityEngine::Rendering::Universal::RenderTargetHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSPASSES_GET_AFTERPOSTPROCESSCOLOR_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSPASSES_DISPOSE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* get_colorGradingLutPass()
		{
			return (return (::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POSTPROCESSPASSES_GET_COLORGRADINGLUTPASS_OFFSET))(nullptr);
		}

	};
}

