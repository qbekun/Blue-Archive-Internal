#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class ClampedFloatParameter; }
namespace UnityEngine::Rendering { class Vector2Parameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LENSDISTORTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA064100)
#define UNITYENGINE_RENDERING_UNIVERSAL_LENSDISTORTION_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA0642D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LENSDISTORTION_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA064360)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LensDistortion_TypeDefinitionIndex = 32678;

	class LensDistortion : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::ClampedFloatParameter* intensity; // 0x30
		::UnityEngine::Rendering::ClampedFloatParameter* xMultiplier; // 0x38
		::UnityEngine::Rendering::ClampedFloatParameter* yMultiplier; // 0x40
		::UnityEngine::Rendering::Vector2Parameter* center; // 0x48
		::UnityEngine::Rendering::ClampedFloatParameter* scale; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LENSDISTORTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LENSDISTORTION_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LENSDISTORTION_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

	};
}

