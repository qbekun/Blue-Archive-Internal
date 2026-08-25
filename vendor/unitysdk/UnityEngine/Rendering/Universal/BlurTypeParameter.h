#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_BLURTYPEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA064C10)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int BlurTypeParameter_TypeDefinitionIndex = 32688;

	class BlurTypeParameter : public ::System::Net::Cache::RequestCachePolicy
	{
	public:
		::System::Void .ctor(MXBlurType* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(MXBlurType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BLURTYPEPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

