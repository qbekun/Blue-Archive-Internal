#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class TonemappingMode; }

#define UNITYENGINE_RENDERING_UNIVERSAL_TONEMAPPINGMODEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA066150)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int TonemappingModeParameter_TypeDefinitionIndex = 32707;

	class TonemappingModeParameter : public ::System::Net::Cache::RequestCacheManager
	{
	public:
		::System::Void .ctor(::UnityEngine::Rendering::Universal::TonemappingMode* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::TonemappingMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TONEMAPPINGMODEPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

