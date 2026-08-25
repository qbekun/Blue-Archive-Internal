#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class FilmGrainLookupParameter; }
namespace UnityEngine::Rendering { class ClampedFloatParameter; }
namespace UnityEngine::Rendering { class NoInterpTextureParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FILMGRAIN_.CTOR_OFFSET UNITYSDK_OFFSET(0xA063E60)
#define UNITYENGINE_RENDERING_UNIVERSAL_FILMGRAIN_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA064030)
#define UNITYENGINE_RENDERING_UNIVERSAL_FILMGRAIN_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA0640F0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FilmGrain_TypeDefinitionIndex = 32676;

	class FilmGrain : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::FilmGrainLookupParameter* type; // 0x30
		::UnityEngine::Rendering::ClampedFloatParameter* intensity; // 0x38
		::UnityEngine::Rendering::ClampedFloatParameter* response; // 0x40
		::UnityEngine::Rendering::NoInterpTextureParameter* texture; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FILMGRAIN_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FILMGRAIN_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FILMGRAIN_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

	};
}

