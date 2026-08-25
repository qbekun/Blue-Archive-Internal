#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class MinFloatParameter; }
namespace UnityEngine::Rendering { class ClampedFloatParameter; }
namespace UnityEngine::Rendering { class ColorParameter; }
namespace UnityEngine::Rendering { class BoolParameter; }
namespace UnityEngine::Rendering { class ClampedIntParameter; }
namespace UnityEngine::Rendering { class TextureParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_BLOOM_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA062210)
#define UNITYENGINE_RENDERING_UNIVERSAL_BLOOM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA062220)
#define UNITYENGINE_RENDERING_UNIVERSAL_BLOOM_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA062510)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Bloom_TypeDefinitionIndex = 32666;

	class Bloom : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::MinFloatParameter* threshold; // 0x30
		::UnityEngine::Rendering::MinFloatParameter* intensity; // 0x38
		::UnityEngine::Rendering::ClampedFloatParameter* scatter; // 0x40
		::UnityEngine::Rendering::MinFloatParameter* clamp; // 0x48
		::UnityEngine::Rendering::ColorParameter* tint; // 0x50
		::UnityEngine::Rendering::BoolParameter* highQualityFiltering; // 0x58
		::UnityEngine::Rendering::ClampedIntParameter* skipIterations; // 0x60
		::UnityEngine::Rendering::TextureParameter* dirtTexture; // 0x68
		::UnityEngine::Rendering::MinFloatParameter* dirtIntensity; // 0x70

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BLOOM_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BLOOM_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BLOOM_ISACTIVE_OFFSET))(nullptr);
		}

	};
}

