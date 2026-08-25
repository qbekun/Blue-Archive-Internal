#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DebugDisplaySettingsCommon; }
namespace UnityEngine::Rendering::Universal { class DebugDisplaySettingsMaterial; }
namespace UnityEngine::Rendering::Universal { class DebugDisplaySettingsRendering; }
namespace UnityEngine::Rendering::Universal { class DebugDisplaySettingsLighting; }
namespace UnityEngine::Rendering::Universal { class DebugDisplaySettings; }
namespace UnityEngine { class Color&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA02D180)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_GET_LIGHTINGSETTINGS_OFFSET UNITYSDK_OFFSET(0xA02D290)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_FOREACH_OFFSET UNITYSDK_OFFSET(0xA02D2A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_GET_ISLIGHTINGACTIVE_OFFSET UNITYSDK_OFFSET(0xA02D420)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_GET_AREANYSETTINGSACTIVE_OFFSET UNITYSDK_OFFSET(0xA02D4D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_SET_COMMONSETTINGS_OFFSET UNITYSDK_OFFSET(0xA02D5C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_GET_COMMONSETTINGS_OFFSET UNITYSDK_OFFSET(0xA02D5D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_SET_LIGHTINGSETTINGS_OFFSET UNITYSDK_OFFSET(0xA02D5E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_GET_ISPOSTPROCESSINGALLOWED_OFFSET UNITYSDK_OFFSET(0xA02D5F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_GET_MATERIALSETTINGS_OFFSET UNITYSDK_OFFSET(0xA02D760)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_SET_MATERIALSETTINGS_OFFSET UNITYSDK_OFFSET(0xA02D770)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_GET_RENDERINGSETTINGS_OFFSET UNITYSDK_OFFSET(0xA02D780)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_RESET_OFFSET UNITYSDK_OFFSET(0xA02D790)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA02E340)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_SET_RENDERINGSETTINGS_OFFSET UNITYSDK_OFFSET(0xA02E3D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA02E3E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_TRYGETSCREENCLEARCOLOR_OFFSET UNITYSDK_OFFSET(0xA02E470)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DebugDisplaySettings_TypeDefinitionIndex = 32530;

	class DebugDisplaySettings : public Il2CppObject
	{
	public:
		Il2CppObject* m_Settings; // 0x10
		Il2CppObject* s_Instance; // 0x0
		::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* _CommonSettings_k__BackingField; // 0x18
		::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* _MaterialSettings_k__BackingField; // 0x20
		::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* _RenderingSettings_k__BackingField; // 0x28
		::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* _LightingSettings_k__BackingField; // 0x30

		Il2CppObject* Add(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_.CCTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* get_LightingSettings()
		{
			return (return (::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_GET_LIGHTINGSETTINGS_OFFSET))(nullptr);
		}

		::System::Void ForEach(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_FOREACH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLightingActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_GET_ISLIGHTINGACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean get_AreAnySettingsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_GET_AREANYSETTINGSACTIVE_OFFSET))(nullptr);
		}

		::System::Void set_CommonSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_SET_COMMONSETTINGS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* get_CommonSettings()
		{
			return (return (::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_GET_COMMONSETTINGS_OFFSET))(nullptr);
		}

		::System::Void set_LightingSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_SET_LIGHTINGSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPostProcessingAllowed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_GET_ISPOSTPROCESSINGALLOWED_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* get_MaterialSettings()
		{
			return (return (::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_GET_MATERIALSETTINGS_OFFSET))(nullptr);
		}

		::System::Void set_MaterialSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_SET_MATERIALSETTINGS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* get_RenderingSettings()
		{
			return (return (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_GET_RENDERINGSETTINGS_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_RESET_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::DebugDisplaySettings* get_Instance()
		{
			return (return (::UnityEngine::Rendering::Universal::DebugDisplaySettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void set_RenderingSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_SET_RENDERINGSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetScreenClearColor(::UnityEngine::Color&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGS_TRYGETSCREENCLEARCOLOR_OFFSET))(arg, nullptr);
		}

	};
}

