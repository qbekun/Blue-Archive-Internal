#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class LightLayerEnum; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SET_USEPIPELINESETTINGS_OFFSET UNITYSDK_OFFSET(0xA078680)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SET_LIGHTCOOKIEOFFSET_OFFSET UNITYSDK_OFFSET(0xA078690)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_SHADOWLAYERMASK_OFFSET UNITYSDK_OFFSET(0xA0786A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_LIGHTCOOKIESIZE_OFFSET UNITYSDK_OFFSET(0xA0786B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_USEPIPELINESETTINGS_OFFSET UNITYSDK_OFFSET(0xA0786C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SET_CUSTOMSHADOWLAYERS_OFFSET UNITYSDK_OFFSET(0xA0786D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA0786E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_ADDITIONALLIGHTSSHADOWRESOLUTIONTIER_OFFSET UNITYSDK_OFFSET(0xA078780)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA078790)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SET_SHADOWLAYERMASK_OFFSET UNITYSDK_OFFSET(0xA078870)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SET_LIGHTLAYERMASK_OFFSET UNITYSDK_OFFSET(0xA078880)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_CUSTOMSHADOWLAYERS_OFFSET UNITYSDK_OFFSET(0xA078890)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xA0788A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_LIGHTLAYERMASK_OFFSET UNITYSDK_OFFSET(0xA0788B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SET_LIGHTCOOKIESIZE_OFFSET UNITYSDK_OFFSET(0xA0788C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_LIGHTCOOKIEOFFSET_OFFSET UNITYSDK_OFFSET(0xA0788D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UniversalAdditionalLightData_TypeDefinitionIndex = 32779;

	class UniversalAdditionalLightData : public Il2CppObject
	{
	public:
		::System::Int32 m_Version; // 0x18
		::System::Boolean m_UsePipelineSettings; // 0x1C
		::System::Int32 AdditionalLightsShadowResolutionTierCustom; // 0x0
		::System::Int32 AdditionalLightsShadowResolutionTierLow; // 0x4
		::System::Int32 AdditionalLightsShadowResolutionTierMedium; // 0x8
		::System::Int32 AdditionalLightsShadowResolutionTierHigh; // 0xC
		::System::Int32 AdditionalLightsShadowDefaultResolutionTier; // 0x10
		::System::Int32 AdditionalLightsShadowDefaultCustomResolution; // 0x14
		::System::Int32 AdditionalLightsShadowMinimumResolution; // 0x18
		::System::Int32 m_AdditionalLightsShadowResolutionTier; // 0x20
		::UnityEngine::Rendering::Universal::LightLayerEnum* m_LightLayerMask; // 0x24
		::System::Boolean m_CustomShadowLayers; // 0x28
		::UnityEngine::Rendering::Universal::LightLayerEnum* m_ShadowLayerMask; // 0x2C
		::UnityEngine::Vector2* m_LightCookieSize; // 0x30
		::UnityEngine::Vector2* m_LightCookieOffset; // 0x38

		::System::Void set_usePipelineSettings(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SET_USEPIPELINESETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void set_lightCookieOffset(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SET_LIGHTCOOKIEOFFSET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::LightLayerEnum* get_shadowLayerMask()
		{
			return (return (::UnityEngine::Rendering::Universal::LightLayerEnum*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_SHADOWLAYERMASK_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_lightCookieSize()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_LIGHTCOOKIESIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_usePipelineSettings()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_USEPIPELINESETTINGS_OFFSET))(nullptr);
		}

		::System::Void set_customShadowLayers(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SET_CUSTOMSHADOWLAYERS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_additionalLightsShadowResolutionTier()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_ADDITIONALLIGHTSSHADOWRESOLUTIONTIER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_shadowLayerMask(::UnityEngine::Rendering::Universal::LightLayerEnum* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::LightLayerEnum*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SET_SHADOWLAYERMASK_OFFSET))(arg, nullptr);
		}

		::System::Void set_lightLayerMask(::UnityEngine::Rendering::Universal::LightLayerEnum* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::LightLayerEnum*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SET_LIGHTLAYERMASK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_customShadowLayers()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_CUSTOMSHADOWLAYERS_OFFSET))(nullptr);
		}

		::System::Int32 get_version()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_VERSION_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::LightLayerEnum* get_lightLayerMask()
		{
			return (return (::UnityEngine::Rendering::Universal::LightLayerEnum*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_LIGHTLAYERMASK_OFFSET))(nullptr);
		}

		::System::Void set_lightCookieSize(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_SET_LIGHTCOOKIESIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_lightCookieOffset()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALADDITIONALLIGHTDATA_GET_LIGHTCOOKIEOFFSET_OFFSET))(nullptr);
		}

	};
}

