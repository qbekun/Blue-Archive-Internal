#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }
namespace UnityEngine { class Light; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTEXTENSIONS_GETUNIVERSALADDITIONALLIGHTDATA_OFFSET UNITYSDK_OFFSET(0xA0785E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightExtensions_TypeDefinitionIndex = 32778;

	class LightExtensions : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* GetUniversalAdditionalLightData(::UnityEngine::Light* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*(*)(::UnityEngine::Light*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTEXTENSIONS_GETUNIVERSALADDITIONALLIGHTDATA_OFFSET))(arg, nullptr);
		}

	};
}

