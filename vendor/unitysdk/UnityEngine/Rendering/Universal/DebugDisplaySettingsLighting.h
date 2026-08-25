#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DebugLightingMode; }
namespace UnityEngine::Rendering::Universal { class DebugLightingFeatureFlags; }
namespace UnityEngine::Rendering::Universal { class IDebugDisplaySettingsPanelDisposable; }
namespace UnityEngine { class Color&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSLIGHTING_GET_ISPOSTPROCESSINGALLOWED_OFFSET UNITYSDK_OFFSET(0xA02D750)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSLIGHTING_GET_ISLIGHTINGACTIVE_OFFSET UNITYSDK_OFFSET(0xA02D4C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSLIGHTING_SET_DEBUGLIGHTINGMODE_OFFSET UNITYSDK_OFFSET(0xA0310A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSLIGHTING_GET_DEBUGLIGHTINGMODE_OFFSET UNITYSDK_OFFSET(0xA0310B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSLIGHTING_GET_AREANYSETTINGSACTIVE_OFFSET UNITYSDK_OFFSET(0xA02D570)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSLIGHTING_SET_DEBUGLIGHTINGFEATUREFLAGSMASK_OFFSET UNITYSDK_OFFSET(0xA0310C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSLIGHTING_CREATEPANEL_OFFSET UNITYSDK_OFFSET(0xA0310D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSLIGHTING_TRYGETSCREENCLEARCOLOR_OFFSET UNITYSDK_OFFSET(0xA02E570)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSLIGHTING_.CTOR_OFFSET UNITYSDK_OFFSET(0xA02E300)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSLIGHTING_GET_DEBUGLIGHTINGFEATUREFLAGSMASK_OFFSET UNITYSDK_OFFSET(0xA031230)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DebugDisplaySettingsLighting_TypeDefinitionIndex = 32542;

	class DebugDisplaySettingsLighting : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::DebugLightingMode* _DebugLightingMode_k__BackingField; // 0x10
		::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags* _DebugLightingFeatureFlagsMask_k__BackingField; // 0x14

		::System::Boolean get_IsPostProcessingAllowed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSLIGHTING_GET_ISPOSTPROCESSINGALLOWED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLightingActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSLIGHTING_GET_ISLIGHTINGACTIVE_OFFSET))(nullptr);
		}

		::System::Void set_DebugLightingMode(::UnityEngine::Rendering::Universal::DebugLightingMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DebugLightingMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSLIGHTING_SET_DEBUGLIGHTINGMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::DebugLightingMode* get_DebugLightingMode()
		{
			return (return (::UnityEngine::Rendering::Universal::DebugLightingMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSLIGHTING_GET_DEBUGLIGHTINGMODE_OFFSET))(nullptr);
		}

		::System::Boolean get_AreAnySettingsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSLIGHTING_GET_AREANYSETTINGSACTIVE_OFFSET))(nullptr);
		}

		::System::Void set_DebugLightingFeatureFlagsMask(::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSLIGHTING_SET_DEBUGLIGHTINGFEATUREFLAGSMASK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable* CreatePanel()
		{
			return (return (::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSLIGHTING_CREATEPANEL_OFFSET))(nullptr);
		}

		::System::Boolean TryGetScreenClearColor(::UnityEngine::Color&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSLIGHTING_TRYGETSCREENCLEARCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSLIGHTING_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags* get_DebugLightingFeatureFlagsMask()
		{
			return (return (::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSLIGHTING_GET_DEBUGLIGHTINGFEATUREFLAGSMASK_OFFSET))(nullptr);
		}

	};
}

