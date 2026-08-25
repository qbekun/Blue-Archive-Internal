#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class Vector2Parameter; }
namespace UnityEngine::Rendering { class FloatParameter; }
namespace UnityEngine::Rendering { class ColorParameter; }
namespace UnityEngine::Rendering { class BoolParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MXSPEEDLINE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA065250)
#define UNITYENGINE_RENDERING_UNIVERSAL_MXSPEEDLINE_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA0655D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MXSPEEDLINE_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA0655E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MXSpeedline_TypeDefinitionIndex = 32697;

	class MXSpeedline : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Vector2Parameter* center; // 0x30
		::UnityEngine::Rendering::FloatParameter* radialScale; // 0x38
		::UnityEngine::Rendering::FloatParameter* lengthScale; // 0x40
		::UnityEngine::Rendering::FloatParameter* noiseScale; // 0x48
		::UnityEngine::Rendering::FloatParameter* sharpness; // 0x50
		::UnityEngine::Rendering::FloatParameter* intensity; // 0x58
		::UnityEngine::Rendering::FloatParameter* fadeline; // 0x60
		::UnityEngine::Rendering::ColorParameter* color; // 0x68
		::UnityEngine::Rendering::BoolParameter* useNoiseAnimation; // 0x70
		::UnityEngine::Rendering::FloatParameter* noiseAnimateSpeed; // 0x78
		::UnityEngine::Rendering::FloatParameter* noiseAnimatePower; // 0x80
		::UnityEngine::Rendering::BoolParameter* useDepthCut; // 0x88
		::UnityEngine::Rendering::FloatParameter* DepthCutDistance; // 0x90

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXSPEEDLINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXSPEEDLINE_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXSPEEDLINE_ISACTIVE_OFFSET))(nullptr);
		}

	};
}

