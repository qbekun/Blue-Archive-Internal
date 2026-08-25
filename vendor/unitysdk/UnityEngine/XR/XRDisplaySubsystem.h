#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class ScriptableCullingParameters&; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_INVOKEDISPLAYFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0xA4ABCD0)
#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_SET_SCALEOFALLRENDERTARGETS_OFFSET UNITYSDK_OFFSET(0xA4ABCF0)
#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_SET_ZNEAR_OFFSET UNITYSDK_OFFSET(0xA4ABD40)
#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_SET_ZFAR_OFFSET UNITYSDK_OFFSET(0xA4ABD90)
#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_SET_SRGB_OFFSET UNITYSDK_OFFSET(0xA4ABDE0)
#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_SET_TEXTURELAYOUT_OFFSET UNITYSDK_OFFSET(0xA4ABE20)
#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_SETMSAALEVEL_OFFSET UNITYSDK_OFFSET(0xA4ABE60)
#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_SET_DISABLELEGACYRENDERER_OFFSET UNITYSDK_OFFSET(0xA4ABEA0)
#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_GETRENDERPASSCOUNT_OFFSET UNITYSDK_OFFSET(0xA4ABEE0)
#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_GETRENDERPASS_OFFSET UNITYSDK_OFFSET(0xA4ABF20)
#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_INTERNAL_TRYGETRENDERPASS_OFFSET UNITYSDK_OFFSET(0xA4ABFC0)
#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_ENDRECORDINGIFLATELATCHED_OFFSET UNITYSDK_OFFSET(0xA4AC010)
#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_INTERNAL_TRYENDRECORDINGIFLATELATCHED_OFFSET UNITYSDK_OFFSET(0xA4AC0F0)
#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_BEGINRECORDINGIFLATELATCHED_OFFSET UNITYSDK_OFFSET(0xA4AC130)
#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_INTERNAL_TRYBEGINRECORDINGIFLATELATCHED_OFFSET UNITYSDK_OFFSET(0xA4AC210)
#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_GETCULLINGPARAMETERS_OFFSET UNITYSDK_OFFSET(0xA4AC250)
#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_INTERNAL_TRYGETCULLINGPARAMS_OFFSET UNITYSDK_OFFSET(0xA4AC360)
#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_GETPREFERREDMIRRORBLITMODE_OFFSET UNITYSDK_OFFSET(0xA4AC3B0)
#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_GETMIRRORVIEWBLITDESC_OFFSET UNITYSDK_OFFSET(0xA4AC3F0)
#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_ADDGRAPHICSTHREADMIRRORVIEWBLIT_OFFSET UNITYSDK_OFFSET(0xA4AC440)
#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4AC490)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRDisplaySubsystem_TypeDefinitionIndex = 37605;

	class XRDisplaySubsystem : public <OnState>d__4
	{
	public:
		Il2CppObject* displayFocusChanged; // 0x20

		::System::Void InvokeDisplayFocusChanged(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_INVOKEDISPLAYFOCUSCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void set_scaleOfAllRenderTargets(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_SET_SCALEOFALLRENDERTARGETS_OFFSET))(arg, nullptr);
		}

		::System::Void set_zNear(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_SET_ZNEAR_OFFSET))(arg, nullptr);
		}

		::System::Void set_zFar(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_SET_ZFAR_OFFSET))(arg, nullptr);
		}

		::System::Void set_sRGB(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_SET_SRGB_OFFSET))(arg, nullptr);
		}

		::System::Void set_textureLayout(TextureLayout* arg)
		{
			((::System::Void(*)(TextureLayout*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_SET_TEXTURELAYOUT_OFFSET))(arg, nullptr);
		}

		::System::Void SetMSAALevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_SETMSAALEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_disableLegacyRenderer(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_SET_DISABLELEGACYRENDERER_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetRenderPassCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_GETRENDERPASSCOUNT_OFFSET))(nullptr);
		}

		::System::Void GetRenderPass(::System::Int32 arg, XRRenderPass&* arg)
		{
			((::System::Void(*)(::System::Int32, XRRenderPass&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_GETRENDERPASS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Internal_TryGetRenderPass(::System::Int32 arg, XRRenderPass&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, XRRenderPass&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_INTERNAL_TRYGETRENDERPASS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndRecordingIfLateLatched(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_ENDRECORDINGIFLATELATCHED_OFFSET))(arg, nullptr);
		}

		::System::Boolean Internal_TryEndRecordingIfLateLatched(::UnityEngine::Camera* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_INTERNAL_TRYENDRECORDINGIFLATELATCHED_OFFSET))(arg, nullptr);
		}

		::System::Void BeginRecordingIfLateLatched(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_BEGINRECORDINGIFLATELATCHED_OFFSET))(arg, nullptr);
		}

		::System::Boolean Internal_TryBeginRecordingIfLateLatched(::UnityEngine::Camera* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_INTERNAL_TRYBEGINRECORDINGIFLATELATCHED_OFFSET))(arg, nullptr);
		}

		::System::Void GetCullingParameters(::UnityEngine::Camera* arg, ::System::Int32 arg, ::UnityEngine::Rendering::ScriptableCullingParameters&* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::System::Int32, ::UnityEngine::Rendering::ScriptableCullingParameters&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_GETCULLINGPARAMETERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Internal_TryGetCullingParams(::UnityEngine::Camera* arg, ::System::Int32 arg, ::UnityEngine::Rendering::ScriptableCullingParameters&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Camera*, ::System::Int32, ::UnityEngine::Rendering::ScriptableCullingParameters&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_INTERNAL_TRYGETCULLINGPARAMS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetPreferredMirrorBlitMode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_GETPREFERREDMIRRORBLITMODE_OFFSET))(nullptr);
		}

		::System::Boolean GetMirrorViewBlitDesc(::UnityEngine::RenderTexture* arg, XRMirrorViewBlitDesc&* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::RenderTexture*, XRMirrorViewBlitDesc&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_GETMIRRORVIEWBLITDESC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean AddGraphicsThreadMirrorViewBlit(::UnityEngine::Rendering::CommandBuffer* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_ADDGRAPHICSTHREADMIRRORVIEWBLIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEM_.CTOR_OFFSET))(nullptr);
		}

	};
}

