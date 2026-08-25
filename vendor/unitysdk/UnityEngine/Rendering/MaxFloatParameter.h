#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_MAXFLOATPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE3EE0)
#define UNITYENGINE_RENDERING_MAXFLOATPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE3EF0)
#define UNITYENGINE_RENDERING_MAXFLOATPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE3F00)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MaxFloatParameter_TypeDefinitionIndex = 34108;

	class MaxFloatParameter : public Il2CppObject
	{
	public:
		::System::Single max; // 0x20

		::System::Void set_value(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MAXFLOATPARAMETER_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Single get_value()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MAXFLOATPARAMETER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MAXFLOATPARAMETER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

