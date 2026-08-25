#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_FLOATPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE3CE0)
#define UNITYENGINE_RENDERING_FLOATPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x9FE3D40)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FloatParameter_TypeDefinitionIndex = 34104;

	class FloatParameter : public ::System::Net::Configuration::UnicodeEncodingConformance
	{
	public:
		::System::Void .ctor(::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FLOATPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Interp(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FLOATPARAMETER_INTERP_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

