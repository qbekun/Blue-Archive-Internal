#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_NOINTERPMAXFLOATPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE3F70)
#define UNITYENGINE_RENDERING_NOINTERPMAXFLOATPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE3F80)
#define UNITYENGINE_RENDERING_NOINTERPMAXFLOATPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE3FF0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpMaxFloatParameter_TypeDefinitionIndex = 34109;

	class NoInterpMaxFloatParameter : public ::System::Net::Configuration::UnicodeEncodingConformance
	{
	public:
		::System::Single max; // 0x20

		::System::Single get_value()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMAXFLOATPARAMETER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMAXFLOATPARAMETER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_value(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPMAXFLOATPARAMETER_SET_VALUE_OFFSET))(arg, nullptr);
		}

	};
}

