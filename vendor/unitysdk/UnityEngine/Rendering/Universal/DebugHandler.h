#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine::Rendering::Universal { class DebugDisplaySettings; }
namespace UnityEngine::Rendering::Universal { class DebugDisplaySettingsLighting; }
namespace UnityEngine::Rendering::Universal { class DebugDisplaySettingsMaterial; }
namespace UnityEngine::Rendering::Universal { class DebugDisplaySettingsRendering; }
namespace UnityEngine { class Color&; }
namespace UnityEngine::Rendering::Universal { class ScriptableRendererData; }
namespace UnityEngine::Rendering::Universal { class CameraData&; }
namespace UnityEngine::Rendering::Universal { class DebugFullScreenMode&; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine { class Rect; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering { class DrawingSettings&; }
namespace UnityEngine::Rendering { class FilteringSettings&; }
namespace UnityEngine::Rendering { class RenderStateBlock&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_GET_LIGHTINGSETTINGS_OFFSET UNITYSDK_OFFSET(0xA036CA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_GET_MATERIALSETTINGS_OFFSET UNITYSDK_OFFSET(0xA036CC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_GET_RENDERINGSETTINGS_OFFSET UNITYSDK_OFFSET(0xA036CE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_GET_AREANYSETTINGSACTIVE_OFFSET UNITYSDK_OFFSET(0xA036D00)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_GET_ISPOSTPROCESSINGALLOWED_OFFSET UNITYSDK_OFFSET(0xA036D20)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_GET_ISLIGHTINGACTIVE_OFFSET UNITYSDK_OFFSET(0xA036D40)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_GET_ISACTIVEMODEUNSUPPORTEDFORDEFERRED_OFFSET UNITYSDK_OFFSET(0xA036DA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_TRYGETSCREENCLEARCOLOR_OFFSET UNITYSDK_OFFSET(0xA036E00)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_GET_REPLACEMENTMATERIAL_OFFSET UNITYSDK_OFFSET(0xA036E40)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_GET_DEBUGDISPLAYSETTINGS_OFFSET UNITYSDK_OFFSET(0xA036E50)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_GET_ISSCREENCLEARNEEDED_OFFSET UNITYSDK_OFFSET(0xA036E60)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_GET_ISRENDERPASSSUPPORTED_OFFSET UNITYSDK_OFFSET(0xA036EB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA036EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_ISACTIVEFORCAMERA_OFFSET UNITYSDK_OFFSET(0xA037080)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_TRYGETFULLSCREENDEBUGMODE_OFFSET UNITYSDK_OFFSET(0xA0370C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_TRYGETFULLSCREENDEBUGMODE_OFFSET UNITYSDK_OFFSET(0xA037100)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_SETUPSHADERPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA037150)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_SETDEBUGRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA037690)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_RESETDEBUGRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA037730)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_UPDATESHADERGLOBALPROPERTIESFORFINALVALIDATIONPASS_OFFSET UNITYSDK_OFFSET(0xA037740)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_SETUP_OFFSET UNITYSDK_OFFSET(0xA037A90)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_CREATEDEBUGRENDERSETUPENUMERABLE_OFFSET UNITYSDK_OFFSET(0xA037ED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_DRAWWITHDEBUGRENDERSTATE_OFFSET UNITYSDK_OFFSET(0xA037FB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA038800)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DebugHandler_TypeDefinitionIndex = 32586;

	class DebugHandler : public Il2CppObject
	{
	public:
		::System::Int32 k_DebugColorInvalidModePropertyId; // 0x0
		::System::Int32 k_DebugColorPropertyId; // 0x4
		::System::Int32 k_DebugTexturePropertyId; // 0x8
		::System::Int32 k_DebugTextureNoStereoPropertyId; // 0xC
		::System::Int32 k_DebugTextureDisplayRect; // 0x10
		::System::Int32 k_DebugRenderTargetSupportsStereo; // 0x14
		::System::Int32 k_DebugMaterialModeId; // 0x18
		::System::Int32 k_DebugVertexAttributeModeId; // 0x1C
		::System::Int32 k_DebugMaterialValidationModeId; // 0x20
		::System::Int32 k_DebugMipInfoModeId; // 0x24
		::System::Int32 k_DebugSceneOverrideModeId; // 0x28
		::System::Int32 k_DebugFullScreenModeId; // 0x2C
		::System::Int32 k_DebugValidationModeId; // 0x30
		::System::Int32 k_DebugValidateBelowMinThresholdColorPropertyId; // 0x34
		::System::Int32 k_DebugValidateAboveMaxThresholdColorPropertyId; // 0x38
		::System::Int32 k_DebugLightingModeId; // 0x3C
		::System::Int32 k_DebugLightingFeatureFlagsId; // 0x40
		::System::Int32 k_DebugValidateAlbedoMinLuminanceId; // 0x44
		::System::Int32 k_DebugValidateAlbedoMaxLuminanceId; // 0x48
		::System::Int32 k_DebugValidateAlbedoSaturationToleranceId; // 0x4C
		::System::Int32 k_DebugValidateAlbedoHueToleranceId; // 0x50
		::System::Int32 k_DebugValidateAlbedoCompareColorId; // 0x54
		::System::Int32 k_DebugValidateMetallicMinValueId; // 0x58
		::System::Int32 k_DebugValidateMetallicMaxValueId; // 0x5C
		::System::Int32 k_ValidationChannelsId; // 0x60
		::System::Int32 k_RangeMinimumId; // 0x64
		::System::Int32 k_RangeMaximumId; // 0x68
		::UnityEngine::Material* m_ReplacementMaterial; // 0x10
		::System::Boolean m_HasDebugRenderTarget; // 0x18
		::System::Boolean m_DebugRenderTargetSupportsStereo; // 0x19
		::UnityEngine::Vector4* m_DebugRenderTargetPixelRect; // 0x1C
		::UnityEngine::Rendering::RenderTargetIdentifier* m_DebugRenderTargetIdentifier; // 0x30
		::UnityEngine::Rendering::Universal::DebugDisplaySettings* m_DebugDisplaySettings; // 0x58

		::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* get_LightingSettings()
		{
			return (return (::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_GET_LIGHTINGSETTINGS_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* get_MaterialSettings()
		{
			return (return (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_GET_MATERIALSETTINGS_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* get_RenderingSettings()
		{
			return (return (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_GET_RENDERINGSETTINGS_OFFSET))(nullptr);
		}

		::System::Boolean get_AreAnySettingsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_GET_AREANYSETTINGSACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPostProcessingAllowed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_GET_ISPOSTPROCESSINGALLOWED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLightingActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_GET_ISLIGHTINGACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsActiveModeUnsupportedForDeferred()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_GET_ISACTIVEMODEUNSUPPORTEDFORDEFERRED_OFFSET))(nullptr);
		}

		::System::Boolean TryGetScreenClearColor(::UnityEngine::Color&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_TRYGETSCREENCLEARCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* get_ReplacementMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_GET_REPLACEMENTMATERIAL_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::DebugDisplaySettings* get_DebugDisplaySettings()
		{
			return (return (::UnityEngine::Rendering::Universal::DebugDisplaySettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_GET_DEBUGDISPLAYSETTINGS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsScreenClearNeeded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_GET_ISSCREENCLEARNEEDED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRenderPassSupported()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_GET_ISRENDERPASSSUPPORTED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::ScriptableRendererData* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRendererData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsActiveForCamera(::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_ISACTIVEFORCAMERA_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetFullscreenDebugMode(::UnityEngine::Rendering::Universal::DebugFullScreenMode&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::DebugFullScreenMode&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_TRYGETFULLSCREENDEBUGMODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetFullscreenDebugMode(::UnityEngine::Rendering::Universal::DebugFullScreenMode&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::DebugFullScreenMode&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_TRYGETFULLSCREENDEBUGMODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetupShaderProperties(::UnityEngine::Rendering::CommandBuffer* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_SETUPSHADERPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetDebugRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rect* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rect*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_SETDEBUGRENDERTARGET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ResetDebugRenderTarget()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_RESETDEBUGRENDERTARGET_OFFSET))(nullptr);
		}

		::System::Void UpdateShaderGlobalPropertiesForFinalValidationPass(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::CameraData&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_UPDATESHADERGLOBALPROPERTIESFORFINALVALIDATIONPASS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Setup(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_SETUP_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* CreateDebugRenderSetupEnumerable(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::CommandBuffer* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_CREATEDEBUGRENDERSETUPENUMERABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DrawWithDebugRenderState(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg, ::UnityEngine::Rendering::DrawingSettings&* arg, ::UnityEngine::Rendering::FilteringSettings&* arg, ::UnityEngine::Rendering::RenderStateBlock&* arg, DrawFunction* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::UnityEngine::Rendering::DrawingSettings&*, ::UnityEngine::Rendering::FilteringSettings&*, ::UnityEngine::Rendering::RenderStateBlock&*, DrawFunction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_DRAWWITHDEBUGRENDERSTATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGHANDLER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

