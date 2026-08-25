#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class BlurTypeParameter; }
namespace UnityEngine::Rendering { class Vector2Parameter; }
namespace UnityEngine::Rendering { class ClampedFloatParameter; }
namespace UnityEngine::Rendering { class FloatParameter; }
namespace UnityEngine::Rendering { class BoolParameter; }
namespace UnityEngine::Rendering::Universal { class BlurQualityParameter; }
namespace UnityEngine::Rendering { class TextureParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MXBLUREFFECT_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA0647E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MXBLUREFFECT_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA0647F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MXBLUREFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA064830)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MXBlurEffect_TypeDefinitionIndex = 32687;

	class MXBlurEffect : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::BlurTypeParameter* mode; // 0x30
		::UnityEngine::Rendering::Vector2Parameter* center; // 0x38
		::UnityEngine::Rendering::ClampedFloatParameter* startline; // 0x40
		::UnityEngine::Rendering::FloatParameter* blurPower; // 0x48
		::UnityEngine::Rendering::BoolParameter* useShakeAnimation; // 0x50
		::UnityEngine::Rendering::FloatParameter* shakePower; // 0x58
		::UnityEngine::Rendering::BoolParameter* useJitter; // 0x60
		::UnityEngine::Rendering::FloatParameter* jitterScale; // 0x68
		::UnityEngine::Rendering::FloatParameter* jitterSharpness; // 0x70
		::UnityEngine::Rendering::FloatParameter* jitterIntensity; // 0x78
		::UnityEngine::Rendering::FloatParameter* jitterPower; // 0x80
		::UnityEngine::Rendering::Universal::BlurQualityParameter* quality; // 0x88
		::UnityEngine::Rendering::TextureParameter* maskTexture; // 0x90

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXBLUREFFECT_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXBLUREFFECT_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXBLUREFFECT_.CTOR_OFFSET))(nullptr);
		}

	};
}

