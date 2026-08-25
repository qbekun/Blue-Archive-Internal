#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DebugFullScreenMode; }
namespace UnityEngine::Rendering::Universal { class DebugSceneOverrideMode; }
namespace UnityEngine::Rendering::Universal { class DebugMipInfoMode; }
namespace UnityEngine::Rendering::Universal { class DebugPostProcessingMode; }
namespace UnityEngine::Rendering::Universal { class DebugValidationMode; }
namespace UnityEngine::Rendering::Universal { class PixelValidationChannels; }
namespace UnityEngine::Rendering::Universal { class IDebugDisplaySettingsPanelDisposable; }
namespace UnityEngine { class Color&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_AREANYSETTINGSACTIVE_OFFSET UNITYSDK_OFFSET(0xA02D590)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_WIREFRAMEMODE_OFFSET UNITYSDK_OFFSET(0xA033D20)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_DEBUGSCENEOVERRIDEMODE_OFFSET UNITYSDK_OFFSET(0xA033D30)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_VALIDATIONCHANNELS_OFFSET UNITYSDK_OFFSET(0xA033D40)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_ENABLEMSAA_OFFSET UNITYSDK_OFFSET(0xA033D50)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_DEBUGFULLSCREENMODEOUTPUTSIZESCREENPERCENT_OFFSET UNITYSDK_OFFSET(0xA033D60)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_DEBUGPOSTPROCESSINGMODE_OFFSET UNITYSDK_OFFSET(0xA033D70)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_DEBUGFULLSCREENMODE_OFFSET UNITYSDK_OFFSET(0xA033D80)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_VALIDATIONCHANNELS_OFFSET UNITYSDK_OFFSET(0xA033D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_ENABLEHDR_OFFSET UNITYSDK_OFFSET(0xA033DA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_ENABLEHDR_OFFSET UNITYSDK_OFFSET(0xA033DB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_DEBUGFULLSCREENMODEOUTPUTSIZESCREENPERCENT_OFFSET UNITYSDK_OFFSET(0xA033DC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_VALIDATIONMODE_OFFSET UNITYSDK_OFFSET(0xA033DD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_ENABLEMSAA_OFFSET UNITYSDK_OFFSET(0xA033DE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_DEBUGMIPINFOMODE_OFFSET UNITYSDK_OFFSET(0xA033DF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_VALIDATIONRANGEMAX_OFFSET UNITYSDK_OFFSET(0xA033E00)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_VALIDATIONMODE_OFFSET UNITYSDK_OFFSET(0xA033E10)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_DEBUGSCENEOVERRIDEMODE_OFFSET UNITYSDK_OFFSET(0xA033E20)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_VALIDATIONRANGEMIN_OFFSET UNITYSDK_OFFSET(0xA033E30)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_VALIDATIONRANGEMAX_OFFSET UNITYSDK_OFFSET(0xA033E40)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_DEBUGMIPINFOMODE_OFFSET UNITYSDK_OFFSET(0xA033E50)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_DEBUGFULLSCREENMODE_OFFSET UNITYSDK_OFFSET(0xA033E60)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_ISLIGHTINGACTIVE_OFFSET UNITYSDK_OFFSET(0xA02D4A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_UPDATEDEBUGSCENEOVERRIDEMODE_OFFSET UNITYSDK_OFFSET(0xA033E70)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_DEBUGPOSTPROCESSINGMODE_OFFSET UNITYSDK_OFFSET(0xA033ED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_.CTOR_OFFSET UNITYSDK_OFFSET(0xA02E310)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_OVERDRAW_OFFSET UNITYSDK_OFFSET(0xA033EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_CREATEPANEL_OFFSET UNITYSDK_OFFSET(0xA033EF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_VALIDATIONRANGEMIN_OFFSET UNITYSDK_OFFSET(0xA034340)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_TRYGETSCREENCLEARCOLOR_OFFSET UNITYSDK_OFFSET(0xA02E4C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_ISPOSTPROCESSINGALLOWED_OFFSET UNITYSDK_OFFSET(0xA02D730)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_WIREFRAMEMODE_OFFSET UNITYSDK_OFFSET(0xA034350)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_OVERDRAW_OFFSET UNITYSDK_OFFSET(0xA0343B0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DebugDisplaySettingsRendering_TypeDefinitionIndex = 32580;

	class DebugDisplaySettingsRendering : public Il2CppObject
	{
	public:
		WireframeMode* m_WireframeMode; // 0x10
		::System::Boolean m_Overdraw; // 0x14
		::UnityEngine::Rendering::Universal::DebugFullScreenMode* _debugFullScreenMode_k__BackingField; // 0x18
		::System::Int32 _debugFullScreenModeOutputSizeScreenPercent_k__BackingField; // 0x1C
		::UnityEngine::Rendering::Universal::DebugSceneOverrideMode* _debugSceneOverrideMode_k__BackingField; // 0x20
		::UnityEngine::Rendering::Universal::DebugMipInfoMode* _debugMipInfoMode_k__BackingField; // 0x24
		::UnityEngine::Rendering::Universal::DebugPostProcessingMode* _debugPostProcessingMode_k__BackingField; // 0x28
		::System::Boolean _enableMsaa_k__BackingField; // 0x2C
		::System::Boolean _enableHDR_k__BackingField; // 0x2D
		::UnityEngine::Rendering::Universal::DebugValidationMode* _validationMode_k__BackingField; // 0x30
		::UnityEngine::Rendering::Universal::PixelValidationChannels* _validationChannels_k__BackingField; // 0x34
		::System::Single _ValidationRangeMin_k__BackingField; // 0x38
		::System::Single _ValidationRangeMax_k__BackingField; // 0x3C

		::System::Boolean get_AreAnySettingsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_AREANYSETTINGSACTIVE_OFFSET))(nullptr);
		}

		WireframeMode* get_wireframeMode()
		{
			return (return (WireframeMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_WIREFRAMEMODE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::DebugSceneOverrideMode* get_debugSceneOverrideMode()
		{
			return (return (::UnityEngine::Rendering::Universal::DebugSceneOverrideMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_DEBUGSCENEOVERRIDEMODE_OFFSET))(nullptr);
		}

		::System::Void set_validationChannels(::UnityEngine::Rendering::Universal::PixelValidationChannels* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::PixelValidationChannels*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_VALIDATIONCHANNELS_OFFSET))(arg, nullptr);
		}

		::System::Void set_enableMsaa(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_ENABLEMSAA_OFFSET))(arg, nullptr);
		}

		::System::Void set_debugFullScreenModeOutputSizeScreenPercent(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_DEBUGFULLSCREENMODEOUTPUTSIZESCREENPERCENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_debugPostProcessingMode(::UnityEngine::Rendering::Universal::DebugPostProcessingMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DebugPostProcessingMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_DEBUGPOSTPROCESSINGMODE_OFFSET))(arg, nullptr);
		}

		::System::Void set_debugFullScreenMode(::UnityEngine::Rendering::Universal::DebugFullScreenMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DebugFullScreenMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_DEBUGFULLSCREENMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::PixelValidationChannels* get_validationChannels()
		{
			return (return (::UnityEngine::Rendering::Universal::PixelValidationChannels*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_VALIDATIONCHANNELS_OFFSET))(nullptr);
		}

		::System::Void set_enableHDR(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_ENABLEHDR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_enableHDR()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_ENABLEHDR_OFFSET))(nullptr);
		}

		::System::Int32 get_debugFullScreenModeOutputSizeScreenPercent()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_DEBUGFULLSCREENMODEOUTPUTSIZESCREENPERCENT_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::DebugValidationMode* get_validationMode()
		{
			return (return (::UnityEngine::Rendering::Universal::DebugValidationMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_VALIDATIONMODE_OFFSET))(nullptr);
		}

		::System::Boolean get_enableMsaa()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_ENABLEMSAA_OFFSET))(nullptr);
		}

		::System::Void set_debugMipInfoMode(::UnityEngine::Rendering::Universal::DebugMipInfoMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DebugMipInfoMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_DEBUGMIPINFOMODE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ValidationRangeMax(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_VALIDATIONRANGEMAX_OFFSET))(arg, nullptr);
		}

		::System::Void set_validationMode(::UnityEngine::Rendering::Universal::DebugValidationMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DebugValidationMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_VALIDATIONMODE_OFFSET))(arg, nullptr);
		}

		::System::Void set_debugSceneOverrideMode(::UnityEngine::Rendering::Universal::DebugSceneOverrideMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DebugSceneOverrideMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_DEBUGSCENEOVERRIDEMODE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ValidationRangeMin(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_VALIDATIONRANGEMIN_OFFSET))(arg, nullptr);
		}

		::System::Single get_ValidationRangeMax()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_VALIDATIONRANGEMAX_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::DebugMipInfoMode* get_debugMipInfoMode()
		{
			return (return (::UnityEngine::Rendering::Universal::DebugMipInfoMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_DEBUGMIPINFOMODE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::DebugFullScreenMode* get_debugFullScreenMode()
		{
			return (return (::UnityEngine::Rendering::Universal::DebugFullScreenMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_DEBUGFULLSCREENMODE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLightingActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_ISLIGHTINGACTIVE_OFFSET))(nullptr);
		}

		::System::Void UpdateDebugSceneOverrideMode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_UPDATEDEBUGSCENEOVERRIDEMODE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::DebugPostProcessingMode* get_debugPostProcessingMode()
		{
			return (return (::UnityEngine::Rendering::Universal::DebugPostProcessingMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_DEBUGPOSTPROCESSINGMODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_overdraw()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_OVERDRAW_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable* CreatePanel()
		{
			return (return (::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_CREATEPANEL_OFFSET))(nullptr);
		}

		::System::Single get_ValidationRangeMin()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_VALIDATIONRANGEMIN_OFFSET))(nullptr);
		}

		::System::Boolean TryGetScreenClearColor(::UnityEngine::Color&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_TRYGETSCREENCLEARCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPostProcessingAllowed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_GET_ISPOSTPROCESSINGALLOWED_OFFSET))(nullptr);
		}

		::System::Void set_wireframeMode(WireframeMode* arg)
		{
			((::System::Void(*)(WireframeMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_WIREFRAMEMODE_OFFSET))(arg, nullptr);
		}

		::System::Void set_overdraw(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSRENDERING_SET_OVERDRAW_OFFSET))(arg, nullptr);
		}

	};
}

