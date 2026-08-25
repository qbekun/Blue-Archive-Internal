#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class LensFlareDataSRP; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_RENDERING_LENSFLARECOMPONENTSRP_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FBDE40)
#define UNITYENGINE_RENDERING_LENSFLARECOMPONENTSRP_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x9FBDE80)
#define UNITYENGINE_RENDERING_LENSFLARECOMPONENTSRP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FBDF50)
#define UNITYENGINE_RENDERING_LENSFLARECOMPONENTSRP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9FBE2A0)
#define UNITYENGINE_RENDERING_LENSFLARECOMPONENTSRP_SET_LENSFLAREDATA_OFFSET UNITYSDK_OFFSET(0x9FBE310)
#define UNITYENGINE_RENDERING_LENSFLARECOMPONENTSRP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9FBE340)
#define UNITYENGINE_RENDERING_LENSFLARECOMPONENTSRP_GET_LENSFLAREDATA_OFFSET UNITYSDK_OFFSET(0x9FBE3F0)
#define UNITYENGINE_RENDERING_LENSFLARECOMPONENTSRP_CELESTIALPROJECTEDOCCLUSIONRADIUS_OFFSET UNITYSDK_OFFSET(0x9FB8AD0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LensFlareComponentSRP_TypeDefinitionIndex = 33995;

	class LensFlareComponentSRP : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::LensFlareDataSRP* m_LensFlareData; // 0x18
		::System::Single intensity; // 0x20
		::System::Single maxAttenuationDistance; // 0x24
		::System::Single maxAttenuationScale; // 0x28
		::UnityEngine::AnimationCurve* distanceAttenuationCurve; // 0x30
		::UnityEngine::AnimationCurve* scaleByDistanceCurve; // 0x38
		::System::Boolean attenuationByLightShape; // 0x40
		::UnityEngine::AnimationCurve* radialScreenAttenuationCurve; // 0x48
		::System::Boolean useOcclusion; // 0x50
		::System::Single occlusionRadius; // 0x54
		::System::UInt32 sampleCount; // 0x58
		::System::Single occlusionOffset; // 0x5C
		::System::Single scale; // 0x60
		::System::Boolean allowOffScreen; // 0x64
		::System::Single sCelestialAngularRadius; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMPONENTSRP_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMPONENTSRP_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMPONENTSRP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMPONENTSRP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void set_lensFlareData(::UnityEngine::Rendering::LensFlareDataSRP* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::LensFlareDataSRP*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMPONENTSRP_SET_LENSFLAREDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMPONENTSRP_ONENABLE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::LensFlareDataSRP* get_lensFlareData()
		{
			return (return (::UnityEngine::Rendering::LensFlareDataSRP*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMPONENTSRP_GET_LENSFLAREDATA_OFFSET))(nullptr);
		}

		::System::Single celestialProjectedOcclusionRadius(::UnityEngine::Camera* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMPONENTSRP_CELESTIALPROJECTEDOCCLUSIONRADIUS_OFFSET))(arg, nullptr);
		}

	};
}

