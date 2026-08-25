#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_NOINTERPMINFLOATPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE3E50)
#define UNITYENGINE_RENDERING_NOINTERPMINFLOATPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE3EC0)
#define UNITYENGINE_RENDERING_NOINTERPMINFLOATPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE3ED0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpMinFloatParameter_TypeDefinitionIndex = 34107;

	class NoInterpMinFloatParameter : public ::System::Net::Configuration::UnicodeEncodingConformance
	{
	public:
		::System::Single min; // 0x20

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMINFLOATPARAMETER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single get_value()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMINFLOATPARAMETER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMINFLOATPARAMETER_SET_VALUE_OFFSET))(arg, nullptr);
		}

	};
}

