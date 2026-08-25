#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class TextureCurve; }

#define UNITYENGINE_RENDERING_TEXTURECURVEPARAMETER_RELEASE_OFFSET UNITYSDK_OFFSET(0x9FDE850)
#define UNITYENGINE_RENDERING_TEXTURECURVEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FDE870)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int TextureCurveParameter_TypeDefinitionIndex = 34078;

	class TextureCurveParameter : public ::System::Net::Cache::RequestCache
	{
	public:
		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVEPARAMETER_RELEASE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::TextureCurve* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::TextureCurve*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVEPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

