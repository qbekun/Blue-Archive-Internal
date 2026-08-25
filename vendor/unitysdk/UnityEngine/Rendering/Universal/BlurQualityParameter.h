#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_BLURQUALITYPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA064C60)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int BlurQualityParameter_TypeDefinitionIndex = 32689;

	class BlurQualityParameter : public ::System::Net::Cache::RequestCacheLevel
	{
	public:
		::System::Void .ctor(MXBlurQuality* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(MXBlurQuality*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BLURQUALITYPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

