#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DepthOfFieldModeParameter; }
namespace UnityEngine::Rendering { class MinFloatParameter; }
namespace UnityEngine::Rendering { class ClampedFloatParameter; }
namespace UnityEngine::Rendering { class BoolParameter; }
namespace UnityEngine::Rendering { class ClampedIntParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DEPTHOFFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0639B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEPTHOFFIELD_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA063DD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEPTHOFFIELD_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA063DE0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DepthOfField_TypeDefinitionIndex = 32673;

	class DepthOfField : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter* mode; // 0x30
		::UnityEngine::Rendering::MinFloatParameter* gaussianStart; // 0x38
		::UnityEngine::Rendering::MinFloatParameter* gaussianEnd; // 0x40
		::UnityEngine::Rendering::ClampedFloatParameter* gaussianMaxRadius; // 0x48
		::UnityEngine::Rendering::BoolParameter* highQualitySampling; // 0x50
		::UnityEngine::Rendering::MinFloatParameter* focusDistance; // 0x58
		::UnityEngine::Rendering::ClampedFloatParameter* aperture; // 0x60
		::UnityEngine::Rendering::ClampedFloatParameter* focalLength; // 0x68
		::UnityEngine::Rendering::ClampedIntParameter* bladeCount; // 0x70
		::UnityEngine::Rendering::ClampedFloatParameter* bladeCurvature; // 0x78
		::UnityEngine::Rendering::ClampedFloatParameter* bladeRotation; // 0x80

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEPTHOFFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEPTHOFFIELD_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEPTHOFFIELD_ISACTIVE_OFFSET))(nullptr);
		}

	};
}

