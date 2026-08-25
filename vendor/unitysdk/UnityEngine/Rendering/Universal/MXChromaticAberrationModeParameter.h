#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MXCHROMATICABERRATIONMODEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA064DE0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MXChromaticAberrationModeParameter_TypeDefinitionIndex = 32692;

	class MXChromaticAberrationModeParameter : public ::System::Net::Cache::HttpRequestCacheLevel
	{
	public:
		::System::Void .ctor(eMode* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(eMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXCHROMATICABERRATIONMODEPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

