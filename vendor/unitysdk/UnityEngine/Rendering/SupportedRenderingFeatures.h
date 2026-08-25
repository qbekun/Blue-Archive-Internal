#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class SupportedRenderingFeatures; }
namespace UnityEngine { class LightmapBakeType; }
namespace UnityEngine { class LightmapsMode; }
namespace UnityEngine { class MixedLightingMode; }

#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xA265980)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xA265B90)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_DEFAULTMIXEDLIGHTINGMODES_OFFSET UNITYSDK_OFFSET(0xA265C00)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_MIXEDLIGHTINGMODES_OFFSET UNITYSDK_OFFSET(0xA265C10)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_LIGHTMAPBAKETYPES_OFFSET UNITYSDK_OFFSET(0xA265C20)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_LIGHTMAPSMODES_OFFSET UNITYSDK_OFFSET(0xA265C30)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_ENLIGHTENLIGHTMAPPER_OFFSET UNITYSDK_OFFSET(0xA265C40)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_ENLIGHTEN_OFFSET UNITYSDK_OFFSET(0xA265C50)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_SET_MOTIONVECTORS_OFFSET UNITYSDK_OFFSET(0xA265C60)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_RENDERSUIOVERLAY_OFFSET UNITYSDK_OFFSET(0xA265C70)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_AUTOAMBIENTPROBEBAKING_OFFSET UNITYSDK_OFFSET(0xA265C80)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_AUTODEFAULTREFLECTIONPROBEBAKING_OFFSET UNITYSDK_OFFSET(0xA265C90)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_FALLBACKMIXEDLIGHTINGMODEBYREF_OFFSET UNITYSDK_OFFSET(0xA265CA0)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISMIXEDLIGHTINGMODESUPPORTED_OFFSET UNITYSDK_OFFSET(0xA265EE0)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISMIXEDLIGHTINGMODESUPPORTEDBYREF_OFFSET UNITYSDK_OFFSET(0xA265F40)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISLIGHTMAPBAKETYPESUPPORTED_OFFSET UNITYSDK_OFFSET(0xA266100)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISLIGHTMAPBAKETYPESUPPORTEDBYREF_OFFSET UNITYSDK_OFFSET(0xA266160)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISLIGHTMAPSMODESUPPORTEDBYREF_OFFSET UNITYSDK_OFFSET(0xA266330)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISLIGHTMAPPERSUPPORTEDBYREF_OFFSET UNITYSDK_OFFSET(0xA2663A0)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISUIOVERLAYRENDEREDBYSRP_OFFSET UNITYSDK_OFFSET(0xA266420)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISAUTOAMBIENTPROBEBAKINGSUPPORTED_OFFSET UNITYSDK_OFFSET(0xA266490)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISAUTODEFAULTREFLECTIONPROBEBAKINGSUPPORTED_OFFSET UNITYSDK_OFFSET(0xA266500)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_FALLBACKLIGHTMAPPERBYREF_OFFSET UNITYSDK_OFFSET(0xA266570)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_.CTOR_OFFSET UNITYSDK_OFFSET(0xA265B00)
#define UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA266590)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SupportedRenderingFeatures_TypeDefinitionIndex = 31580;

	class SupportedRenderingFeatures : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::SupportedRenderingFeatures* s_Active; // 0x0
		ReflectionProbeModes* _reflectionProbeModes_k__BackingField; // 0x10
		LightmapMixedBakeModes* _defaultMixedLightingModes_k__BackingField; // 0x14
		LightmapMixedBakeModes* _mixedLightingModes_k__BackingField; // 0x18
		::UnityEngine::LightmapBakeType* _lightmapBakeTypes_k__BackingField; // 0x1C
		::UnityEngine::LightmapsMode* _lightmapsModes_k__BackingField; // 0x20
		::System::Boolean _enlightenLightmapper_k__BackingField; // 0x24
		::System::Boolean _enlighten_k__BackingField; // 0x25
		::System::Boolean _lightProbeProxyVolumes_k__BackingField; // 0x26
		::System::Boolean _motionVectors_k__BackingField; // 0x27
		::System::Boolean _receiveShadows_k__BackingField; // 0x28
		::System::Boolean _reflectionProbes_k__BackingField; // 0x29
		::System::Boolean _reflectionProbesBlendDistance_k__BackingField; // 0x2A
		::System::Boolean _rendererPriority_k__BackingField; // 0x2B
		::System::Boolean _rendersUIOverlay_k__BackingField; // 0x2C
		::System::Boolean _overridesEnvironmentLighting_k__BackingField; // 0x2D
		::System::Boolean _overridesFog_k__BackingField; // 0x2E
		::System::Boolean _overridesRealtimeReflectionProbes_k__BackingField; // 0x2F
		::System::Boolean _overridesOtherLightingSettings_k__BackingField; // 0x30
		::System::Boolean _editableMaterialRenderQueue_k__BackingField; // 0x31
		::System::Boolean _overridesLODBias_k__BackingField; // 0x32
		::System::Boolean _overridesMaximumLODLevel_k__BackingField; // 0x33
		::System::Boolean _rendererProbes_k__BackingField; // 0x34
		::System::Boolean _particleSystemInstancing_k__BackingField; // 0x35
		::System::Boolean _autoAmbientProbeBaking_k__BackingField; // 0x36
		::System::Boolean _autoDefaultReflectionProbeBaking_k__BackingField; // 0x37
		::System::Boolean _overridesShadowmask_k__BackingField; // 0x38
		::System::String* _overrideShadowmaskMessage_k__BackingField; // 0x40

		::UnityEngine::Rendering::SupportedRenderingFeatures* get_active()
		{
			return (return (::UnityEngine::Rendering::SupportedRenderingFeatures*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_ACTIVE_OFFSET))(nullptr);
		}

		::System::Void set_active(::UnityEngine::Rendering::SupportedRenderingFeatures* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::SupportedRenderingFeatures*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_SET_ACTIVE_OFFSET))(arg, nullptr);
		}

		LightmapMixedBakeModes* get_defaultMixedLightingModes()
		{
			return (return (LightmapMixedBakeModes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_DEFAULTMIXEDLIGHTINGMODES_OFFSET))(nullptr);
		}

		LightmapMixedBakeModes* get_mixedLightingModes()
		{
			return (return (LightmapMixedBakeModes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_MIXEDLIGHTINGMODES_OFFSET))(nullptr);
		}

		::UnityEngine::LightmapBakeType* get_lightmapBakeTypes()
		{
			return (return (::UnityEngine::LightmapBakeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_LIGHTMAPBAKETYPES_OFFSET))(nullptr);
		}

		::UnityEngine::LightmapsMode* get_lightmapsModes()
		{
			return (return (::UnityEngine::LightmapsMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_LIGHTMAPSMODES_OFFSET))(nullptr);
		}

		::System::Boolean get_enlightenLightmapper()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_ENLIGHTENLIGHTMAPPER_OFFSET))(nullptr);
		}

		::System::Boolean get_enlighten()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_ENLIGHTEN_OFFSET))(nullptr);
		}

		::System::Void set_motionVectors(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_SET_MOTIONVECTORS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_rendersUIOverlay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_RENDERSUIOVERLAY_OFFSET))(nullptr);
		}

		::System::Boolean get_autoAmbientProbeBaking()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_AUTOAMBIENTPROBEBAKING_OFFSET))(nullptr);
		}

		::System::Boolean get_autoDefaultReflectionProbeBaking()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_GET_AUTODEFAULTREFLECTIONPROBEBAKING_OFFSET))(nullptr);
		}

		::System::Void FallbackMixedLightingModeByRef(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_FALLBACKMIXEDLIGHTINGMODEBYREF_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMixedLightingModeSupported(::UnityEngine::MixedLightingMode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::MixedLightingMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISMIXEDLIGHTINGMODESUPPORTED_OFFSET))(arg, nullptr);
		}

		::System::Void IsMixedLightingModeSupportedByRef(::UnityEngine::MixedLightingMode* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::MixedLightingMode*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISMIXEDLIGHTINGMODESUPPORTEDBYREF_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsLightmapBakeTypeSupported(::UnityEngine::LightmapBakeType* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::LightmapBakeType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISLIGHTMAPBAKETYPESUPPORTED_OFFSET))(arg, nullptr);
		}

		::System::Void IsLightmapBakeTypeSupportedByRef(::UnityEngine::LightmapBakeType* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::LightmapBakeType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISLIGHTMAPBAKETYPESUPPORTEDBYREF_OFFSET))(arg, arg, nullptr);
		}

		::System::Void IsLightmapsModeSupportedByRef(::UnityEngine::LightmapsMode* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::LightmapsMode*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISLIGHTMAPSMODESUPPORTEDBYREF_OFFSET))(arg, arg, nullptr);
		}

		::System::Void IsLightmapperSupportedByRef(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISLIGHTMAPPERSUPPORTEDBYREF_OFFSET))(arg, arg, nullptr);
		}

		::System::Void IsUIOverlayRenderedBySRP(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISUIOVERLAYRENDEREDBYSRP_OFFSET))(arg, nullptr);
		}

		::System::Void IsAutoAmbientProbeBakingSupported(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISAUTOAMBIENTPROBEBAKINGSUPPORTED_OFFSET))(arg, nullptr);
		}

		::System::Void IsAutoDefaultReflectionProbeBakingSupported(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_ISAUTODEFAULTREFLECTIONPROBEBAKINGSUPPORTED_OFFSET))(arg, nullptr);
		}

		::System::Void FallbackLightmapperByRef(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_FALLBACKLIGHTMAPPERBYREF_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUPPORTEDRENDERINGFEATURES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

