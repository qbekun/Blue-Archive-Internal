#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_NOINTERPFLOATPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE3D60)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpFloatParameter_TypeDefinitionIndex = 34105;

	class NoInterpFloatParameter : public ::System::Net::Configuration::UnicodeEncodingConformance
	{
	public:
		::System::Void .ctor(::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPFLOATPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

