#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class IDebugDisplaySettingsPanelDisposable; }
namespace UnityEngine { class Color&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSCOMMON_GET_AREANYSETTINGSACTIVE_OFFSET UNITYSDK_OFFSET(0xA02E660)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSCOMMON_.CTOR_OFFSET UNITYSDK_OFFSET(0xA02D970)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSCOMMON_GET_ISLIGHTINGACTIVE_OFFSET UNITYSDK_OFFSET(0xA02E750)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSCOMMON_CREATEPANEL_OFFSET UNITYSDK_OFFSET(0xA02E880)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSCOMMON_GET_ISPOSTPROCESSINGALLOWED_OFFSET UNITYSDK_OFFSET(0xA02F3A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSCOMMON_TRYGETSCREENCLEARCOLOR_OFFSET UNITYSDK_OFFSET(0xA02F490)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DebugDisplaySettingsCommon_TypeDefinitionIndex = 32535;

	class DebugDisplaySettingsCommon : public Il2CppObject
	{
	public:
		::System::Boolean get_AreAnySettingsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSCOMMON_GET_AREANYSETTINGSACTIVE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSCOMMON_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLightingActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSCOMMON_GET_ISLIGHTINGACTIVE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable* CreatePanel()
		{
			return (return (::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSCOMMON_CREATEPANEL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPostProcessingAllowed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSCOMMON_GET_ISPOSTPROCESSINGALLOWED_OFFSET))(nullptr);
		}

		::System::Boolean TryGetScreenClearColor(::UnityEngine::Color&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSCOMMON_TRYGETSCREENCLEARCOLOR_OFFSET))(arg, nullptr);
		}

	};
}

