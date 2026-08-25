#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Color; }
namespace UnityEngine::Rendering { class SRPLensFlareBlendMode; }
namespace UnityEngine::Rendering { class SRPLensFlareType; }
namespace UnityEngine::Rendering { class SRPLensFlareDistribution; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Gradient; }

#define UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_GET_SIDECOUNT_OFFSET UNITYSDK_OFFSET(0x9FBE400)
#define UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_GET_EDGEOFFSET_OFFSET UNITYSDK_OFFSET(0x9FBE410)
#define UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9FBE420)
#define UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_GET_FALLOFF_OFFSET UNITYSDK_OFFSET(0x9FBE430)
#define UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_GET_LOCALINTENSITY_OFFSET UNITYSDK_OFFSET(0x9FBE440)
#define UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x9FBE450)
#define UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_GET_SDFROUNDNESS_OFFSET UNITYSDK_OFFSET(0x9FBE460)
#define UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FBE470)
#define UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_SET_INTENSITYVARIATION_OFFSET UNITYSDK_OFFSET(0x9FBEC40)
#define UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_SET_EDGEOFFSET_OFFSET UNITYSDK_OFFSET(0x9FBEC90)
#define UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_SET_SIDECOUNT_OFFSET UNITYSDK_OFFSET(0x9FBED10)
#define UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_GET_INTENSITYVARIATION_OFFSET UNITYSDK_OFFSET(0x9FBED30)
#define UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_SET_SDFROUNDNESS_OFFSET UNITYSDK_OFFSET(0x9FBECD0)
#define UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_SET_LOCALINTENSITY_OFFSET UNITYSDK_OFFSET(0x9FBEC30)
#define UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_SET_FALLOFF_OFFSET UNITYSDK_OFFSET(0x9FBEC50)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LensFlareDataElementSRP_TypeDefinitionIndex = 33999;

	class LensFlareDataElementSRP : public Il2CppObject
	{
	public:
		::System::Boolean visible; // 0x10
		::System::Single position; // 0x14
		::UnityEngine::Vector2* positionOffset; // 0x18
		::System::Single angularOffset; // 0x20
		::UnityEngine::Vector2* translationScale; // 0x24
		::System::Single m_LocalIntensity; // 0x2C
		::UnityEngine::Texture* lensFlareTexture; // 0x30
		::System::Single uniformScale; // 0x38
		::UnityEngine::Vector2* sizeXY; // 0x3C
		::System::Boolean allowMultipleElement; // 0x44
		::System::Int32 m_Count; // 0x48
		::System::Boolean preserveAspectRatio; // 0x4C
		::System::Single rotation; // 0x50
		::UnityEngine::Color* tint; // 0x54
		::UnityEngine::Rendering::SRPLensFlareBlendMode* blendMode; // 0x64
		::System::Boolean autoRotate; // 0x68
		::UnityEngine::Rendering::SRPLensFlareType* flareType; // 0x6C
		::System::Boolean modulateByLightColor; // 0x70
		::System::Boolean isFoldOpened; // 0x71
		::UnityEngine::Rendering::SRPLensFlareDistribution* distribution; // 0x74
		::System::Single lengthSpread; // 0x78
		::UnityEngine::AnimationCurve* positionCurve; // 0x80
		::UnityEngine::AnimationCurve* scaleCurve; // 0x88
		::System::Int32 seed; // 0x90
		::UnityEngine::Gradient* colorGradient; // 0x98
		::System::Single m_IntensityVariation; // 0xA0
		::UnityEngine::Vector2* positionVariation; // 0xA4
		::System::Single scaleVariation; // 0xAC
		::System::Single rotationVariation; // 0xB0
		::System::Boolean enableRadialDistortion; // 0xB4
		::UnityEngine::Vector2* targetSizeDistortion; // 0xB8
		::UnityEngine::AnimationCurve* distortionCurve; // 0xC0
		::System::Boolean distortionRelativeToCenter; // 0xC8
		::System::Single m_FallOff; // 0xCC
		::System::Single m_EdgeOffset; // 0xD0
		::System::Int32 m_SideCount; // 0xD4
		::System::Single m_SdfRoundness; // 0xD8
		::System::Boolean inverseSDF; // 0xDC
		::System::Single uniformAngle; // 0xE0
		::UnityEngine::AnimationCurve* uniformAngleCurve; // 0xE8

		::System::Int32 get_sideCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_GET_SIDECOUNT_OFFSET))(nullptr);
		}

		::System::Single get_edgeOffset()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_GET_EDGEOFFSET_OFFSET))(nullptr);
		}

		::System::Int32 get_count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Single get_fallOff()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_GET_FALLOFF_OFFSET))(nullptr);
		}

		::System::Single get_localIntensity()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_GET_LOCALINTENSITY_OFFSET))(nullptr);
		}

		::System::Void set_count(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Single get_sdfRoundness()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_GET_SDFROUNDNESS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_intensityVariation(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_SET_INTENSITYVARIATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_edgeOffset(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_SET_EDGEOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Void set_sideCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_SET_SIDECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Single get_intensityVariation()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_GET_INTENSITYVARIATION_OFFSET))(nullptr);
		}

		::System::Void set_sdfRoundness(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_SET_SDFROUNDNESS_OFFSET))(arg, nullptr);
		}

		::System::Void set_localIntensity(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_SET_LOCALINTENSITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_fallOff(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLAREDATAELEMENTSRP_SET_FALLOFF_OFFSET))(arg, nullptr);
		}

	};
}

