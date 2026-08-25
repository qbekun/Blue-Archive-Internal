#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_NOINTERPCLAMPEDFLOATPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE40C0)
#define UNITYENGINE_RENDERING_NOINTERPCLAMPEDFLOATPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE4140)
#define UNITYENGINE_RENDERING_NOINTERPCLAMPEDFLOATPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE4170)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpClampedFloatParameter_TypeDefinitionIndex = 34111;

	class NoInterpClampedFloatParameter : public ::System::Net::Configuration::UnicodeEncodingConformance
	{
	public:
		::System::Single min; // 0x20
		::System::Single max; // 0x24

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPCLAMPEDFLOATPARAMETER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void set_value(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPCLAMPEDFLOATPARAMETER_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Single get_value()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPCLAMPEDFLOATPARAMETER_GET_VALUE_OFFSET))(nullptr);
		}

	};
}

