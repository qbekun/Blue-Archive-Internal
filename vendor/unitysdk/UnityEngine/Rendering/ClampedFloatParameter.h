#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_CLAMPEDFLOATPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE4000)
#define UNITYENGINE_RENDERING_CLAMPEDFLOATPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE4010)
#define UNITYENGINE_RENDERING_CLAMPEDFLOATPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE4040)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ClampedFloatParameter_TypeDefinitionIndex = 34110;

	class ClampedFloatParameter : public Il2CppObject
	{
	public:
		::System::Single min; // 0x20
		::System::Single max; // 0x24

		::System::Single get_value()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CLAMPEDFLOATPARAMETER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CLAMPEDFLOATPARAMETER_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CLAMPEDFLOATPARAMETER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

