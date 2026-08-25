#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine::Rendering::Universal { class DebugMaterialValidationMode; }
namespace UnityEngine::Rendering::Universal { class DebugMaterialMode; }
namespace UnityEngine::Rendering::Universal { class DebugVertexAttributeMode; }
namespace UnityEngine::Rendering::Universal { class IDebugDisplaySettingsPanelDisposable; }
namespace UnityEngine { class Color&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_GET_ALBEDOSATURATIONTOLERANCE_OFFSET UNITYSDK_OFFSET(0xA031580)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_GET_ISPOSTPROCESSINGALLOWED_OFFSET UNITYSDK_OFFSET(0xA02D710)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_SET_DEBUGMATERIALMODEDATA_OFFSET UNITYSDK_OFFSET(0xA0315A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_GET_ISLIGHTINGACTIVE_OFFSET UNITYSDK_OFFSET(0xA02D480)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_GET_ALBEDOHUETOLERANCE_OFFSET UNITYSDK_OFFSET(0xA0315B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_GET_DEBUGMATERIALMODEDATA_OFFSET UNITYSDK_OFFSET(0xA0315D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_SET_DEBUGVERTEXATTRIBUTEINDEXDATA_OFFSET UNITYSDK_OFFSET(0xA0315E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_GET_AREANYSETTINGSACTIVE_OFFSET UNITYSDK_OFFSET(0xA02D550)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_CREATEPANEL_OFFSET UNITYSDK_OFFSET(0xA0315F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_SET_ALBEDOSATURATIONTOLERANCE_OFFSET UNITYSDK_OFFSET(0xA031AB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA02D980)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_TRYGETSCREENCLEARCOLOR_OFFSET UNITYSDK_OFFSET(0xA02E4B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_GET_DEBUGVERTEXATTRIBUTEINDEXDATA_OFFSET UNITYSDK_OFFSET(0xA031AC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_SET_ALBEDODEBUGVALIDATIONPRESET_OFFSET UNITYSDK_OFFSET(0xA031AD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_GET_ALBEDODEBUGVALIDATIONPRESET_OFFSET UNITYSDK_OFFSET(0xA031B30)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_SET_ALBEDOHUETOLERANCE_OFFSET UNITYSDK_OFFSET(0xA031B40)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DebugDisplaySettingsMaterial_TypeDefinitionIndex = 32560;

	class DebugDisplaySettingsMaterial : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_AlbedoDebugValidationPresetData; // 0x10
		AlbedoDebugValidationPreset* m_AlbedoDebugValidationPreset; // 0x18
		::System::Single AlbedoMinLuminance; // 0x1C
		::System::Single AlbedoMaxLuminance; // 0x20
		::System::Single m_AlbedoHueTolerance; // 0x24
		::System::Single m_AlbedoSaturationTolerance; // 0x28
		::UnityEngine::Color* AlbedoCompareColor; // 0x2C
		::System::Single MetallicMinValue; // 0x3C
		::System::Single MetallicMaxValue; // 0x40
		::UnityEngine::Rendering::Universal::DebugMaterialValidationMode* MaterialValidationMode; // 0x44
		::UnityEngine::Rendering::Universal::DebugMaterialMode* _DebugMaterialModeData_k__BackingField; // 0x48
		::UnityEngine::Rendering::Universal::DebugVertexAttributeMode* _DebugVertexAttributeIndexData_k__BackingField; // 0x4C

		::System::Single get_AlbedoSaturationTolerance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_GET_ALBEDOSATURATIONTOLERANCE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPostProcessingAllowed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_GET_ISPOSTPROCESSINGALLOWED_OFFSET))(nullptr);
		}

		::System::Void set_DebugMaterialModeData(::UnityEngine::Rendering::Universal::DebugMaterialMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DebugMaterialMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_SET_DEBUGMATERIALMODEDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLightingActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_GET_ISLIGHTINGACTIVE_OFFSET))(nullptr);
		}

		::System::Single get_AlbedoHueTolerance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_GET_ALBEDOHUETOLERANCE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::DebugMaterialMode* get_DebugMaterialModeData()
		{
			return (return (::UnityEngine::Rendering::Universal::DebugMaterialMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_GET_DEBUGMATERIALMODEDATA_OFFSET))(nullptr);
		}

		::System::Void set_DebugVertexAttributeIndexData(::UnityEngine::Rendering::Universal::DebugVertexAttributeMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DebugVertexAttributeMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_SET_DEBUGVERTEXATTRIBUTEINDEXDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AreAnySettingsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_GET_AREANYSETTINGSACTIVE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable* CreatePanel()
		{
			return (return (::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_CREATEPANEL_OFFSET))(nullptr);
		}

		::System::Void set_AlbedoSaturationTolerance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_SET_ALBEDOSATURATIONTOLERANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetScreenClearColor(::UnityEngine::Color&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_TRYGETSCREENCLEARCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::DebugVertexAttributeMode* get_DebugVertexAttributeIndexData()
		{
			return (return (::UnityEngine::Rendering::Universal::DebugVertexAttributeMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_GET_DEBUGVERTEXATTRIBUTEINDEXDATA_OFFSET))(nullptr);
		}

		::System::Void set_albedoDebugValidationPreset(AlbedoDebugValidationPreset* arg)
		{
			((::System::Void(*)(AlbedoDebugValidationPreset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_SET_ALBEDODEBUGVALIDATIONPRESET_OFFSET))(arg, nullptr);
		}

		AlbedoDebugValidationPreset* get_albedoDebugValidationPreset()
		{
			return (return (AlbedoDebugValidationPreset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_GET_ALBEDODEBUGVALIDATIONPRESET_OFFSET))(nullptr);
		}

		::System::Void set_AlbedoHueTolerance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEBUGDISPLAYSETTINGSMATERIAL_SET_ALBEDOHUETOLERANCE_OFFSET))(arg, nullptr);
		}

	};
}

